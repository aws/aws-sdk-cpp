﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/gamelift/GameLiftServiceClientModel.h>

namespace Aws
{
namespace GameLift
{
  /**
   * <p>Amazon GameLift provides solutions for hosting session-based multiplayer game
   * servers in the cloud, including tools for deploying, operating, and scaling game
   * servers. Built on Amazon Web Services global computing infrastructure, GameLift
   * helps you deliver high-performance, high-reliability, low-cost game servers
   * while dynamically scaling your resource usage to meet player demand. </p> <p>
   * <b>About GameLift solutions</b> </p> <p>Get more information on these GameLift
   * solutions in the <a
   * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/">GameLift
   * Developer Guide</a>.</p> <ul> <li> <p>GameLift managed hosting -- GameLift
   * offers a fully managed service to set up and maintain computing machines for
   * hosting, manage game session and player session life cycle, and handle security,
   * storage, and performance tracking. You can use automatic scaling tools to
   * balance player demand and hosting costs, configure your game session management
   * to minimize player latency, and add FlexMatch for matchmaking.</p> </li> <li>
   * <p>Managed hosting with Realtime Servers -- With GameLift Realtime Servers, you
   * can quickly configure and set up ready-to-go game servers for your game.
   * Realtime Servers provides a game server framework with core GameLift
   * infrastructure already built in. Then use the full range of GameLift managed
   * hosting features, including FlexMatch, for your game.</p> </li> <li> <p>GameLift
   * FleetIQ -- Use GameLift FleetIQ as a standalone service while hosting your games
   * using EC2 instances and Auto Scaling groups. GameLift FleetIQ provides
   * optimizations for game hosting, including boosting the viability of low-cost
   * Spot Instances gaming. For a complete solution, pair the GameLift FleetIQ and
   * FlexMatch standalone services.</p> </li> <li> <p>GameLift FlexMatch -- Add
   * matchmaking to your game hosting solution. FlexMatch is a customizable
   * matchmaking service for multiplayer games. Use FlexMatch as integrated with
   * GameLift managed hosting or incorporate FlexMatch as a standalone service into
   * your own hosting solution.</p> </li> </ul> <p> <b>About this API Reference</b>
   * </p> <p>This reference guide describes the low-level service API for Amazon
   * GameLift. With each topic in this guide, you can find links to language-specific
   * SDK guides and the Amazon Web Services CLI reference. Useful links:</p> <ul>
   * <li> <p> <a
   * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html">GameLift
   * API operations listed by tasks</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-components.html">
   * GameLift tools and resources</a> </p> </li> </ul>
   */
  class AWS_GAMELIFT_API GameLiftClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<GameLiftClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GameLiftClient(const Aws::GameLift::GameLiftClientConfiguration& clientConfiguration = Aws::GameLift::GameLiftClientConfiguration(),
                       std::shared_ptr<GameLiftEndpointProviderBase> endpointProvider = Aws::MakeShared<GameLiftEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GameLiftClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<GameLiftEndpointProviderBase> endpointProvider = Aws::MakeShared<GameLiftEndpointProvider>(ALLOCATION_TAG),
                       const Aws::GameLift::GameLiftClientConfiguration& clientConfiguration = Aws::GameLift::GameLiftClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GameLiftClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<GameLiftEndpointProviderBase> endpointProvider = Aws::MakeShared<GameLiftEndpointProvider>(ALLOCATION_TAG),
                       const Aws::GameLift::GameLiftClientConfiguration& clientConfiguration = Aws::GameLift::GameLiftClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GameLiftClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GameLiftClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GameLiftClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~GameLiftClient();

        /**
         * <p>Registers a player's acceptance or rejection of a proposed FlexMatch match. A
         * matchmaking configuration may require player acceptance; if so, then matches
         * built with that configuration cannot be completed unless all players accept the
         * proposed match within a specified time limit. </p> <p>When FlexMatch builds a
         * match, all the matchmaking tickets involved in the proposed match are placed
         * into status <code>REQUIRES_ACCEPTANCE</code>. This is a trigger for your game to
         * get acceptance from all players in the ticket. Acceptances are only valid for
         * tickets when they are in this status; all other acceptances result in an
         * error.</p> <p>To register acceptance, specify the ticket ID, a response, and one
         * or more players. Once all players have registered acceptance, the matchmaking
         * tickets advance to status <code>PLACING</code>, where a new game session is
         * created for the match. </p> <p>If any player rejects the match, or if
         * acceptances are not received before a specified timeout, the proposed match is
         * dropped. The matchmaking tickets are then handled in one of two ways: For
         * tickets where one or more players rejected the match or failed to respond, the
         * ticket status is set to <code>CANCELLED</code>, and processing is terminated.
         * For tickets where players have accepted or not yet responded, the ticket status
         * is returned to <code>SEARCHING</code> to find a new match. A new matchmaking
         * request for these players can be submitted as needed. </p> <p> <b>Learn more</b>
         * </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-client.html">
         * Add FlexMatch to a game client</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-events.html">
         * FlexMatch events</a> (reference)</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/AcceptMatch">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptMatchOutcome AcceptMatch(const Model::AcceptMatchRequest& request) const;

        /**
         * A Callable wrapper for AcceptMatch that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptMatchOutcomeCallable AcceptMatchCallable(const Model::AcceptMatchRequest& request) const;

        /**
         * An Async wrapper for AcceptMatch that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptMatchAsync(const Model::AcceptMatchRequest& request, const AcceptMatchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <b>This operation is used with the GameLift FleetIQ solution and game server
         * groups.</b> </p> <p>Locates an available game server and temporarily reserves it
         * to host gameplay and players. This operation is called from a game client or
         * client service (such as a matchmaker) to request hosting resources for a new
         * game session. In response, GameLift FleetIQ locates an available game server,
         * places it in <code>CLAIMED</code> status for 60 seconds, and returns connection
         * information that players can use to connect to the game server. </p> <p>To claim
         * a game server, identify a game server group. You can also specify a game server
         * ID, although this approach bypasses GameLift FleetIQ placement optimization.
         * Optionally, include game data to pass to the game server at the start of a game
         * session, such as a game map or player information. </p> <p>When a game server is
         * successfully claimed, connection information is returned. A claimed game
         * server's utilization status remains <code>AVAILABLE</code> while the claim
         * status is set to <code>CLAIMED</code> for up to 60 seconds. This time period
         * gives the game server time to update its status to <code>UTILIZED</code> after
         * players join. If the game server's status is not updated within 60 seconds, the
         * game server reverts to unclaimed status and is available to be claimed by
         * another request. The claim time period is a fixed value and is not
         * configurable.</p> <p>If you try to claim a specific game server, this request
         * will fail in the following cases:</p> <ul> <li> <p>If the game server
         * utilization status is <code>UTILIZED</code>.</p> </li> <li> <p>If the game
         * server claim status is <code>CLAIMED</code>.</p> </li> </ul>  <p>When
         * claiming a specific game server, this request will succeed even if the game
         * server is running on an instance in <code>DRAINING</code> status. To avoid this,
         * first check the instance status by calling <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeGameServerInstances.html">DescribeGameServerInstances</a>
         * .</p>  <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ClaimGameServer">AWS
         * API Reference</a></p>
         */
        virtual Model::ClaimGameServerOutcome ClaimGameServer(const Model::ClaimGameServerRequest& request) const;

        /**
         * A Callable wrapper for ClaimGameServer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ClaimGameServerOutcomeCallable ClaimGameServerCallable(const Model::ClaimGameServerRequest& request) const;

        /**
         * An Async wrapper for ClaimGameServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ClaimGameServerAsync(const Model::ClaimGameServerRequest& request, const ClaimGameServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an alias for a fleet. In most situations, you can use an alias ID in
         * place of a fleet ID. An alias provides a level of abstraction for a fleet that
         * is useful when redirecting player traffic from one fleet to another, such as
         * when updating your game build. </p> <p>Amazon GameLift supports two types of
         * routing strategies for aliases: simple and terminal. A simple alias points to an
         * active fleet. A terminal alias is used to display messaging or link to a URL
         * instead of routing players to an active fleet. For example, you might use a
         * terminal alias when a game version is no longer supported and you want to direct
         * players to an upgrade site. </p> <p>To create a fleet alias, specify an alias
         * name, routing strategy, and optional description. Each simple alias can point to
         * only one fleet, but a fleet can have multiple aliases. If successful, a new
         * alias record is returned, including an alias ID and an ARN. You can reassign an
         * alias to another fleet by calling <code>UpdateAlias</code>.</p> <p> <b>Related
         * actions</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAliasOutcome CreateAlias(const Model::CreateAliasRequest& request) const;

        /**
         * A Callable wrapper for CreateAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAliasOutcomeCallable CreateAliasCallable(const Model::CreateAliasRequest& request) const;

        /**
         * An Async wrapper for CreateAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAliasAsync(const Model::CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Amazon GameLift build resource for your game server binary
         * files. Combine game server binaries into a zip file for use with Amazon
         * GameLift. </p>  <p>When setting up a new game build for GameLift, we
         * recommend using the CLI command <b> <a
         * href="https://docs.aws.amazon.com/cli/latest/reference/gamelift/upload-build.html">upload-build</a>
         * </b>. This helper command combines two tasks: (1) it uploads your build files
         * from a file directory to a GameLift Amazon S3 location, and (2) it creates a new
         * build resource.</p>  <p>You can use the operation in the following
         * scenarios:</p> <ul> <li> <p>To create a new game build with build files that are
         * in an Amazon S3 location under an Amazon Web Services account that you control.
         * To use this option, you give Amazon GameLift access to the Amazon S3 bucket.
         * With permissions in place, specify a build name, operating system, and the
         * Amazon S3 storage location of your game build.</p> </li> <li> <p>To directly
         * upload your build files to a GameLift Amazon S3 location. To use this option,
         * specify a build name and operating system. This operation creates a new build
         * resource and also returns an Amazon S3 location with temporary access
         * credentials. Use the credentials to manually upload your build files to the
         * specified Amazon S3 location. For more information, see <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UploadingObjects.html">Uploading
         * Objects</a> in the <i>Amazon S3 Developer Guide</i>. After you upload build
         * files to the GameLift Amazon S3 location, you can't update them. </p> </li>
         * </ul> <p>If successful, this operation creates a new build resource with a
         * unique build ID and places it in <code>INITIALIZED</code> status. A build must
         * be in <code>READY</code> status before you can create fleets with it.</p> <p>
         * <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html">Uploading
         * Your Game</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-cli-uploading.html#gamelift-build-cli-uploading-create-build">
         * Create a Build with Files in Amazon S3</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateBuild">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBuildOutcome CreateBuild(const Model::CreateBuildRequest& request) const;

        /**
         * A Callable wrapper for CreateBuild that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBuildOutcomeCallable CreateBuildCallable(const Model::CreateBuildRequest& request) const;

        /**
         * An Async wrapper for CreateBuild that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBuildAsync(const Model::CreateBuildRequest& request, const CreateBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a fleet of Amazon Elastic Compute Cloud (Amazon Elastic Compute
         * Cloud) instances to host your custom game server or Realtime Servers. Use this
         * operation to configure the computing resources for your fleet and provide
         * instructions for running game servers on each instance.</p> <p>Most GameLift
         * fleets can deploy instances to multiple locations, including the home Region
         * (where the fleet is created) and an optional set of remote locations. Fleets
         * that are created in the following Amazon Web Services Regions support multiple
         * locations: us-east-1 (N. Virginia), us-west-2 (Oregon), eu-central-1
         * (Frankfurt), eu-west-1 (Ireland), ap-southeast-2 (Sydney), ap-northeast-1
         * (Tokyo), and ap-northeast-2 (Seoul). Fleets that are created in other GameLift
         * Regions can deploy instances in the fleet's home Region only. All fleet
         * instances use the same configuration regardless of location; however, you can
         * adjust capacity settings and turn auto-scaling on/off for each location.</p>
         * <p>To create a fleet, choose the hardware for your instances, specify a game
         * server build or Realtime script to deploy, and provide a runtime configuration
         * to direct GameLift how to start and run game servers on each instance in the
         * fleet. Set permissions for inbound traffic to your game servers, and enable
         * optional features as needed. When creating a multi-location fleet, provide a
         * list of additional remote locations.</p> <p>If you need to debug your fleet,
         * fetch logs, view performance metrics or other actions on the fleet, create the
         * development fleet with port 22/3389 open. As a best practice, we recommend
         * opening ports for remote access only when you need them and closing them when
         * you're finished. </p> <p>If successful, this operation creates a new Fleet
         * resource and places it in <code>NEW</code> status, which prompts GameLift to
         * initiate the <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-creation-workflow.html">fleet
         * creation workflow</a>.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up fleets</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-creating-debug.html#fleets-creating-debug-creation">Debug
         * fleet creation issues</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Multi-location
         * fleets</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFleetOutcome CreateFleet(const Model::CreateFleetRequest& request) const;

        /**
         * A Callable wrapper for CreateFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFleetOutcomeCallable CreateFleetCallable(const Model::CreateFleetRequest& request) const;

        /**
         * An Async wrapper for CreateFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFleetAsync(const Model::CreateFleetRequest& request, const CreateFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds remote locations to a fleet and begins populating the new locations with
         * EC2 instances. The new instances conform to the fleet's instance type,
         * auto-scaling, and other configuration settings. </p>  <p>This operation
         * cannot be used with fleets that don't support remote locations. Fleets can have
         * multiple locations only if they reside in Amazon Web Services Regions that
         * support this feature and were created after the feature was released in March
         * 2021.</p>  <p>To add fleet locations, specify the fleet to be updated and
         * provide a list of one or more locations. </p> <p>If successful, this operation
         * returns the list of added locations with their status set to <code>NEW</code>.
         * GameLift initiates the process of starting an instance in each added location.
         * You can track the status of each new location by monitoring location creation
         * events using <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeFleetEvents.html">DescribeFleetEvents</a>.</p>
         * <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up fleets</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Multi-location
         * fleets</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateFleetLocations">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFleetLocationsOutcome CreateFleetLocations(const Model::CreateFleetLocationsRequest& request) const;

        /**
         * A Callable wrapper for CreateFleetLocations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFleetLocationsOutcomeCallable CreateFleetLocationsCallable(const Model::CreateFleetLocationsRequest& request) const;

        /**
         * An Async wrapper for CreateFleetLocations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFleetLocationsAsync(const Model::CreateFleetLocationsRequest& request, const CreateFleetLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <b>This operation is used with the GameLift FleetIQ solution and game server
         * groups.</b> </p> <p>Creates a GameLift FleetIQ game server group for managing
         * game hosting on a collection of Amazon Elastic Compute Cloud instances for game
         * hosting. This operation creates the game server group, creates an Auto Scaling
         * group in your Amazon Web Services account, and establishes a link between the
         * two groups. You can view the status of your game server groups in the GameLift
         * console. Game server group metrics and events are emitted to Amazon
         * CloudWatch.</p> <p>Before creating a new game server group, you must have the
         * following: </p> <ul> <li> <p>An Amazon Elastic Compute Cloud launch template
         * that specifies how to launch Amazon Elastic Compute Cloud instances with your
         * game server build. For more information, see <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html">
         * Launching an Instance from a Launch Template</a> in the <i>Amazon Elastic
         * Compute Cloud User Guide</i>. </p> </li> <li> <p>An IAM role that extends
         * limited access to your Amazon Web Services account to allow GameLift FleetIQ to
         * create and interact with the Auto Scaling group. For more information, see <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-iam-permissions-roles.html">Create
         * IAM roles for cross-service interaction</a> in the <i>GameLift FleetIQ Developer
         * Guide</i>.</p> </li> </ul> <p>To create a new game server group, specify a
         * unique group name, IAM role and Amazon Elastic Compute Cloud launch template,
         * and provide a list of instance types that can be used in the group. You must
         * also set initial maximum and minimum limits on the group's instance count. You
         * can optionally set an Auto Scaling policy with target tracking based on a
         * GameLift FleetIQ metric.</p> <p>Once the game server group and corresponding
         * Auto Scaling group are created, you have full access to change the Auto Scaling
         * group's configuration as needed. Several properties that are set when creating a
         * game server group, including maximum/minimum size and auto-scaling policy
         * settings, must be updated directly in the Auto Scaling group. Keep in mind that
         * some Auto Scaling group properties are periodically updated by GameLift FleetIQ
         * as part of its balancing activities to optimize for availability and cost.</p>
         * <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateGameServerGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGameServerGroupOutcome CreateGameServerGroup(const Model::CreateGameServerGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateGameServerGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGameServerGroupOutcomeCallable CreateGameServerGroupCallable(const Model::CreateGameServerGroupRequest& request) const;

        /**
         * An Async wrapper for CreateGameServerGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGameServerGroupAsync(const Model::CreateGameServerGroupRequest& request, const CreateGameServerGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a multiplayer game session for players in a specific fleet location.
         * This operation prompts an available server process to start a game session and
         * retrieves connection information for the new game session. As an alternative,
         * consider using the GameLift game session placement feature with <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_StartGameSessionPlacement.html">StartGameSessionPlacement</a>
         * , which uses FleetIQ algorithms and queues to optimize the placement
         * process.</p> <p>When creating a game session, you specify exactly where you want
         * to place it and provide a set of game session configuration settings. The fleet
         * must be in <code>ACTIVE</code> status before a game session can be created in
         * it. </p> <p>This operation can be used in the following ways: </p> <ul> <li>
         * <p>To create a game session on an instance in a fleet's home Region, provide a
         * fleet or alias ID along with your game session configuration. </p> </li> <li>
         * <p>To create a game session on an instance in a fleet's remote location, provide
         * a fleet or alias ID and a location name, along with your game session
         * configuration. </p> </li> </ul> <p>If successful, a workflow is initiated to
         * start a new game session. A <code>GameSession</code> object is returned
         * containing the game session configuration and status. When the status is
         * <code>ACTIVE</code>, game session connection information is provided and player
         * sessions can be created for the game session. By default, newly created game
         * sessions are open to new players. You can restrict new player access by using <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_UpdateGameSession.html">UpdateGameSession</a>
         * to change the game session's player session creation policy.</p> <p>Game session
         * logs are retained for all active game sessions for 14 days. To access the logs,
         * call <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_GetGameSessionLogUrl.html">GetGameSessionLogUrl</a>
         * to download the log files.</p> <p> <i>Available in Amazon GameLift Local.</i>
         * </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-server-api.html#gamelift-sdk-server-startsession">Start
         * a game session</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateGameSession">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGameSessionOutcome CreateGameSession(const Model::CreateGameSessionRequest& request) const;

        /**
         * A Callable wrapper for CreateGameSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGameSessionOutcomeCallable CreateGameSessionCallable(const Model::CreateGameSessionRequest& request) const;

        /**
         * An Async wrapper for CreateGameSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGameSessionAsync(const Model::CreateGameSessionRequest& request, const CreateGameSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a placement queue that processes requests for new game sessions. A
         * queue uses FleetIQ algorithms to determine the best placement locations and find
         * an available game server there, then prompts the game server process to start a
         * new game session. </p> <p>A game session queue is configured with a set of
         * destinations (GameLift fleets or aliases), which determine the locations where
         * the queue can place new game sessions. These destinations can span multiple
         * fleet types (Spot and On-Demand), instance types, and Amazon Web Services
         * Regions. If the queue includes multi-location fleets, the queue is able to place
         * game sessions in all of a fleet's remote locations. You can opt to filter out
         * individual locations if needed.</p> <p>The queue configuration also determines
         * how FleetIQ selects the best available placement for a new game session. Before
         * searching for an available game server, FleetIQ first prioritizes the queue's
         * destinations and locations, with the best placement locations on top. You can
         * set up the queue to use the FleetIQ default prioritization or provide an
         * alternate set of priorities.</p> <p>To create a new queue, provide a name,
         * timeout value, and a list of destinations. Optionally, specify a sort
         * configuration and/or a filter, and define a set of latency cap policies. You can
         * also include the ARN for an Amazon Simple Notification Service (SNS) topic to
         * receive notifications of game session placement activity. Notifications using
         * SNS or CloudWatch events is the preferred way to track placement activity.</p>
         * <p>If successful, a new <code>GameSessionQueue</code> object is returned with an
         * assigned queue ARN. New game session requests, which are submitted to queue with
         * <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_StartGameSessionPlacement.html">StartGameSessionPlacement</a>
         * or <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_StartMatchmaking.html">StartMatchmaking</a>,
         * reference a queue's name or ARN. </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queues-design.html">
         * Design a game session queue</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queues-creating.html">
         * Create a game session queue</a> </p> <p> <b>Related actions</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_CreateGameSessionQueue.html">CreateGameSessionQueue</a>
         * | <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeGameSessionQueues.html">DescribeGameSessionQueues</a>
         * | <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_UpdateGameSessionQueue.html">UpdateGameSessionQueue</a>
         * | <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DeleteGameSessionQueue.html">DeleteGameSessionQueue</a>
         * | <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateGameSessionQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGameSessionQueueOutcome CreateGameSessionQueue(const Model::CreateGameSessionQueueRequest& request) const;

        /**
         * A Callable wrapper for CreateGameSessionQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGameSessionQueueOutcomeCallable CreateGameSessionQueueCallable(const Model::CreateGameSessionQueueRequest& request) const;

        /**
         * An Async wrapper for CreateGameSessionQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGameSessionQueueAsync(const Model::CreateGameSessionQueueRequest& request, const CreateGameSessionQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a custom location for use in an Anywhere fleet.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateLocation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLocationOutcome CreateLocation(const Model::CreateLocationRequest& request) const;

        /**
         * A Callable wrapper for CreateLocation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLocationOutcomeCallable CreateLocationCallable(const Model::CreateLocationRequest& request) const;

        /**
         * An Async wrapper for CreateLocation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLocationAsync(const Model::CreateLocationRequest& request, const CreateLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Defines a new matchmaking configuration for use with FlexMatch. Whether your
         * are using FlexMatch with GameLift hosting or as a standalone matchmaking
         * service, the matchmaking configuration sets out rules for matching players and
         * forming teams. If you're also using GameLift hosting, it defines how to start
         * game sessions for each match. Your matchmaking system can use multiple
         * configurations to handle different game scenarios. All matchmaking requests
         * identify the matchmaking configuration to use and provide player attributes
         * consistent with that configuration. </p> <p>To create a matchmaking
         * configuration, you must provide the following: configuration name and FlexMatch
         * mode (with or without GameLift hosting); a rule set that specifies how to
         * evaluate players and find acceptable matches; whether player acceptance is
         * required; and the maximum time allowed for a matchmaking attempt. When using
         * FlexMatch with GameLift hosting, you also need to identify the game session
         * queue to use when starting a game session for the match.</p> <p>In addition, you
         * must set up an Amazon Simple Notification Service topic to receive matchmaking
         * notifications. Provide the topic ARN in the matchmaking configuration.</p> <p>
         * <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-configuration.html">
         * Design a FlexMatch matchmaker</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-notification.html">
         * Set up FlexMatch event notification</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateMatchmakingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMatchmakingConfigurationOutcome CreateMatchmakingConfiguration(const Model::CreateMatchmakingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateMatchmakingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMatchmakingConfigurationOutcomeCallable CreateMatchmakingConfigurationCallable(const Model::CreateMatchmakingConfigurationRequest& request) const;

        /**
         * An Async wrapper for CreateMatchmakingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMatchmakingConfigurationAsync(const Model::CreateMatchmakingConfigurationRequest& request, const CreateMatchmakingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new rule set for FlexMatch matchmaking. A rule set describes the
         * type of match to create, such as the number and size of teams. It also sets the
         * parameters for acceptable player matches, such as minimum skill level or
         * character type.</p> <p>To create a matchmaking rule set, provide unique rule set
         * name and the rule set body in JSON format. Rule sets must be defined in the same
         * Region as the matchmaking configuration they are used with.</p> <p>Since
         * matchmaking rule sets cannot be edited, it is a good idea to check the rule set
         * syntax using <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_ValidateMatchmakingRuleSet.html">ValidateMatchmakingRuleSet</a>
         * before creating a new rule set.</p> <p> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-rulesets.html">Build
         * a rule set</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-configuration.html">Design
         * a matchmaker</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-intro.html">Matchmaking
         * with FlexMatch</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateMatchmakingRuleSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMatchmakingRuleSetOutcome CreateMatchmakingRuleSet(const Model::CreateMatchmakingRuleSetRequest& request) const;

        /**
         * A Callable wrapper for CreateMatchmakingRuleSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMatchmakingRuleSetOutcomeCallable CreateMatchmakingRuleSetCallable(const Model::CreateMatchmakingRuleSetRequest& request) const;

        /**
         * An Async wrapper for CreateMatchmakingRuleSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMatchmakingRuleSetAsync(const Model::CreateMatchmakingRuleSetRequest& request, const CreateMatchmakingRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Reserves an open player slot in a game session for a player. New player
         * sessions can be created in any game session with an open slot that is in
         * <code>ACTIVE</code> status and has a player creation policy of
         * <code>ACCEPT_ALL</code>. You can add a group of players to a game session with
         * <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_CreatePlayerSessions.html">CreatePlayerSessions</a>
         * . </p> <p>To create a player session, specify a game session ID, player ID, and
         * optionally a set of player data. </p> <p>If successful, a slot is reserved in
         * the game session for the player and a new <code>PlayerSessions</code> object is
         * returned with a player session ID. The player references the player session ID
         * when sending a connection request to the game session, and the game server can
         * use it to validate the player reservation with the GameLift service. Player
         * sessions cannot be updated. </p> <p>The maximum number of players per game
         * session is 200. It is not adjustable. </p> <p> <b>Related actions</b> </p> <p>
         * <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreatePlayerSession">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePlayerSessionOutcome CreatePlayerSession(const Model::CreatePlayerSessionRequest& request) const;

        /**
         * A Callable wrapper for CreatePlayerSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePlayerSessionOutcomeCallable CreatePlayerSessionCallable(const Model::CreatePlayerSessionRequest& request) const;

        /**
         * An Async wrapper for CreatePlayerSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePlayerSessionAsync(const Model::CreatePlayerSessionRequest& request, const CreatePlayerSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Reserves open slots in a game session for a group of players. New player
         * sessions can be created in any game session with an open slot that is in
         * <code>ACTIVE</code> status and has a player creation policy of
         * <code>ACCEPT_ALL</code>. To add a single player to a game session, use <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_CreatePlayerSession.html">CreatePlayerSession</a>
         * </p> <p>To create player sessions, specify a game session ID and a list of
         * player IDs. Optionally, provide a set of player data for each player ID. </p>
         * <p>If successful, a slot is reserved in the game session for each player, and
         * new <code>PlayerSession</code> objects are returned with player session IDs.
         * Each player references their player session ID when sending a connection request
         * to the game session, and the game server can use it to validate the player
         * reservation with the GameLift service. Player sessions cannot be updated.</p>
         * <p>The maximum number of players per game session is 200. It is not adjustable.
         * </p> <p> <b>Related actions</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreatePlayerSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePlayerSessionsOutcome CreatePlayerSessions(const Model::CreatePlayerSessionsRequest& request) const;

        /**
         * A Callable wrapper for CreatePlayerSessions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePlayerSessionsOutcomeCallable CreatePlayerSessionsCallable(const Model::CreatePlayerSessionsRequest& request) const;

        /**
         * An Async wrapper for CreatePlayerSessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePlayerSessionsAsync(const Model::CreatePlayerSessionsRequest& request, const CreatePlayerSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new script record for your Realtime Servers script. Realtime
         * scripts are JavaScript that provide configuration settings and optional custom
         * game logic for your game. The script is deployed when you create a Realtime
         * Servers fleet to host your game sessions. Script logic is executed during an
         * active game session. </p> <p>To create a new script record, specify a script
         * name and provide the script file(s). The script files and all dependencies must
         * be zipped into a single file. You can pull the zip file from either of these
         * locations: </p> <ul> <li> <p>A locally available directory. Use the
         * <i>ZipFile</i> parameter for this option.</p> </li> <li> <p>An Amazon Simple
         * Storage Service (Amazon S3) bucket under your Amazon Web Services account. Use
         * the <i>StorageLocation</i> parameter for this option. You'll need to have an
         * Identity Access Management (IAM) role that allows the Amazon GameLift service to
         * access your S3 bucket. </p> </li> </ul> <p>If the call is successful, a new
         * script record is created with a unique script ID. If the script file is provided
         * as a local file, the file is uploaded to an Amazon GameLift-owned S3 bucket and
         * the script record's storage location reflects this location. If the script file
         * is provided as an S3 bucket, Amazon GameLift accesses the file at this storage
         * location as needed for deployment.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/realtime-intro.html">Amazon
         * GameLift Realtime Servers</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/setting-up-role.html">Set
         * Up a Role for Amazon GameLift Access</a> </p> <p> <b>Related actions</b> </p>
         * <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateScript">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateScriptOutcome CreateScript(const Model::CreateScriptRequest& request) const;

        /**
         * A Callable wrapper for CreateScript that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateScriptOutcomeCallable CreateScriptCallable(const Model::CreateScriptRequest& request) const;

        /**
         * An Async wrapper for CreateScript that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateScriptAsync(const Model::CreateScriptRequest& request, const CreateScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests authorization to create or delete a peer connection between the VPC
         * for your Amazon GameLift fleet and a virtual private cloud (VPC) in your Amazon
         * Web Services account. VPC peering enables the game servers on your fleet to
         * communicate directly with other Amazon Web Services resources. After you've
         * received authorization, use <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_CreateVpcPeeringConnection.html">CreateVpcPeeringConnection</a>
         * to establish the peering connection. For more information, see <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
         * Peering with Amazon GameLift Fleets</a>.</p> <p>You can peer with VPCs that are
         * owned by any Amazon Web Services account you have access to, including the
         * account that you use to manage your Amazon GameLift fleets. You cannot peer with
         * VPCs that are in different Regions.</p> <p>To request authorization to create a
         * connection, call this operation from the Amazon Web Services account with the
         * VPC that you want to peer to your Amazon GameLift fleet. For example, to enable
         * your game servers to retrieve data from a DynamoDB table, use the account that
         * manages that DynamoDB resource. Identify the following values: (1) The ID of the
         * VPC that you want to peer with, and (2) the ID of the Amazon Web Services
         * account that you use to manage Amazon GameLift. If successful, VPC peering is
         * authorized for the specified VPC. </p> <p>To request authorization to delete a
         * connection, call this operation from the Amazon Web Services account with the
         * VPC that is peered with your Amazon GameLift fleet. Identify the following
         * values: (1) VPC ID that you want to delete the peering connection for, and (2)
         * ID of the Amazon Web Services account that you use to manage Amazon GameLift.
         * </p> <p>The authorization remains valid for 24 hours unless it is canceled. You
         * must create or delete the peering connection while the authorization is valid.
         * </p> <p> <b>Related actions</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateVpcPeeringAuthorization">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpcPeeringAuthorizationOutcome CreateVpcPeeringAuthorization(const Model::CreateVpcPeeringAuthorizationRequest& request) const;

        /**
         * A Callable wrapper for CreateVpcPeeringAuthorization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVpcPeeringAuthorizationOutcomeCallable CreateVpcPeeringAuthorizationCallable(const Model::CreateVpcPeeringAuthorizationRequest& request) const;

        /**
         * An Async wrapper for CreateVpcPeeringAuthorization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVpcPeeringAuthorizationAsync(const Model::CreateVpcPeeringAuthorizationRequest& request, const CreateVpcPeeringAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Establishes a VPC peering connection between a virtual private cloud (VPC) in
         * an Amazon Web Services account with the VPC for your Amazon GameLift fleet. VPC
         * peering enables the game servers on your fleet to communicate directly with
         * other Amazon Web Services resources. You can peer with VPCs in any Amazon Web
         * Services account that you have access to, including the account that you use to
         * manage your Amazon GameLift fleets. You cannot peer with VPCs that are in
         * different Regions. For more information, see <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/vpc-peering.html">VPC
         * Peering with Amazon GameLift Fleets</a>.</p> <p>Before calling this operation to
         * establish the peering connection, you first need to use <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_CreateVpcPeeringAuthorization.html">CreateVpcPeeringAuthorization</a>
         * and identify the VPC you want to peer with. Once the authorization for the
         * specified VPC is issued, you have 24 hours to establish the connection. These
         * two operations handle all tasks necessary to peer the two VPCs, including
         * acceptance, updating routing tables, etc. </p> <p>To establish the connection,
         * call this operation from the Amazon Web Services account that is used to manage
         * the Amazon GameLift fleets. Identify the following values: (1) The ID of the
         * fleet you want to be enable a VPC peering connection for; (2) The Amazon Web
         * Services account with the VPC that you want to peer with; and (3) The ID of the
         * VPC you want to peer with. This operation is asynchronous. If successful, a
         * connection request is created. You can use continuous polling to track the
         * request's status using <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeVpcPeeringConnections.html">DescribeVpcPeeringConnections</a>
         * , or by monitoring fleet events for success or failure using <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeFleetEvents.html">DescribeFleetEvents</a>
         * . </p> <p> <b>Related actions</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateVpcPeeringConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpcPeeringConnectionOutcome CreateVpcPeeringConnection(const Model::CreateVpcPeeringConnectionRequest& request) const;

        /**
         * A Callable wrapper for CreateVpcPeeringConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVpcPeeringConnectionOutcomeCallable CreateVpcPeeringConnectionCallable(const Model::CreateVpcPeeringConnectionRequest& request) const;

        /**
         * An Async wrapper for CreateVpcPeeringConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVpcPeeringConnectionAsync(const Model::CreateVpcPeeringConnectionRequest& request, const CreateVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an alias. This operation removes all record of the alias. Game
         * clients attempting to access a server process using the deleted alias receive an
         * error. To delete an alias, specify the alias ID to be deleted.</p> <p>
         * <b>Related actions</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAliasOutcome DeleteAlias(const Model::DeleteAliasRequest& request) const;

        /**
         * A Callable wrapper for DeleteAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAliasOutcomeCallable DeleteAliasCallable(const Model::DeleteAliasRequest& request) const;

        /**
         * An Async wrapper for DeleteAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAliasAsync(const Model::DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a build. This operation permanently deletes the build resource and
         * any uploaded build files. Deleting a build does not affect the status of any
         * active fleets using the build, but you can no longer create new fleets with the
         * deleted build.</p> <p>To delete a build, specify the build ID. </p> <p> <b>Learn
         * more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html">
         * Upload a Custom Server Build</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteBuild">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBuildOutcome DeleteBuild(const Model::DeleteBuildRequest& request) const;

        /**
         * A Callable wrapper for DeleteBuild that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBuildOutcomeCallable DeleteBuildCallable(const Model::DeleteBuildRequest& request) const;

        /**
         * An Async wrapper for DeleteBuild that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBuildAsync(const Model::DeleteBuildRequest& request, const DeleteBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes all resources and information related a fleet. Any current fleet
         * instances, including those in remote locations, are shut down. You don't need to
         * call <code>DeleteFleetLocations</code> separately.</p>  <p>If the fleet
         * being deleted has a VPC peering connection, you first need to get a valid
         * authorization (good for 24 hours) by calling <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_CreateVpcPeeringAuthorization.html">CreateVpcPeeringAuthorization</a>.
         * You do not need to explicitly delete the VPC peering connection.</p> 
         * <p>To delete a fleet, specify the fleet ID to be terminated. During the deletion
         * process the fleet status is changed to <code>DELETING</code>. When completed,
         * the status switches to <code>TERMINATED</code> and the fleet event
         * <code>FLEET_DELETED</code> is sent.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteFleet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFleetOutcome DeleteFleet(const Model::DeleteFleetRequest& request) const;

        /**
         * A Callable wrapper for DeleteFleet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFleetOutcomeCallable DeleteFleetCallable(const Model::DeleteFleetRequest& request) const;

        /**
         * An Async wrapper for DeleteFleet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFleetAsync(const Model::DeleteFleetRequest& request, const DeleteFleetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes locations from a multi-location fleet. When deleting a location, all
         * game server process and all instances that are still active in the location are
         * shut down. </p> <p>To delete fleet locations, identify the fleet ID and provide
         * a list of the locations to be deleted. </p> <p>If successful, GameLift sets the
         * location status to <code>DELETING</code>, and begins to shut down existing
         * server processes and terminate instances in each location being deleted. When
         * completed, the location status changes to <code>TERMINATED</code>.</p> <p>
         * <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift fleets</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteFleetLocations">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFleetLocationsOutcome DeleteFleetLocations(const Model::DeleteFleetLocationsRequest& request) const;

        /**
         * A Callable wrapper for DeleteFleetLocations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFleetLocationsOutcomeCallable DeleteFleetLocationsCallable(const Model::DeleteFleetLocationsRequest& request) const;

        /**
         * An Async wrapper for DeleteFleetLocations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFleetLocationsAsync(const Model::DeleteFleetLocationsRequest& request, const DeleteFleetLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <b>This operation is used with the GameLift FleetIQ solution and game server
         * groups.</b> </p> <p>Terminates a game server group and permanently deletes the
         * game server group record. You have several options for how these resources are
         * impacted when deleting the game server group. Depending on the type of delete
         * operation selected, this operation might affect these resources:</p> <ul> <li>
         * <p>The game server group</p> </li> <li> <p>The corresponding Auto Scaling
         * group</p> </li> <li> <p>All game servers that are currently running in the
         * group</p> </li> </ul> <p>To delete a game server group, identify the game server
         * group to delete and specify the type of delete operation to initiate. Game
         * server groups can only be deleted if they are in <code>ACTIVE</code> or
         * <code>ERROR</code> status.</p> <p>If the delete request is successful, a series
         * of operations are kicked off. The game server group status is changed to
         * <code>DELETE_SCHEDULED</code>, which prevents new game servers from being
         * registered and stops automatic scaling activity. Once all game servers in the
         * game server group are deregistered, GameLift FleetIQ can begin deleting
         * resources. If any of the delete operations fail, the game server group is placed
         * in <code>ERROR</code> status.</p> <p>GameLift FleetIQ emits delete events to
         * Amazon CloudWatch.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteGameServerGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGameServerGroupOutcome DeleteGameServerGroup(const Model::DeleteGameServerGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteGameServerGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGameServerGroupOutcomeCallable DeleteGameServerGroupCallable(const Model::DeleteGameServerGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteGameServerGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGameServerGroupAsync(const Model::DeleteGameServerGroupRequest& request, const DeleteGameServerGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a game session queue. Once a queue is successfully deleted,
         * unfulfilled <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_StartGameSessionPlacement.html">StartGameSessionPlacement</a>
         * requests that reference the queue will fail. To delete a queue, specify the
         * queue name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteGameSessionQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGameSessionQueueOutcome DeleteGameSessionQueue(const Model::DeleteGameSessionQueueRequest& request) const;

        /**
         * A Callable wrapper for DeleteGameSessionQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGameSessionQueueOutcomeCallable DeleteGameSessionQueueCallable(const Model::DeleteGameSessionQueueRequest& request) const;

        /**
         * An Async wrapper for DeleteGameSessionQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGameSessionQueueAsync(const Model::DeleteGameSessionQueueRequest& request, const DeleteGameSessionQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a custom location.</p> <p>Before deleting a custom location, review
         * any fleets currently using the custom location and deregister the location if it
         * is in use. For more information see, <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DeregisterCompute.html">DeregisterCompute</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteLocation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLocationOutcome DeleteLocation(const Model::DeleteLocationRequest& request) const;

        /**
         * A Callable wrapper for DeleteLocation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLocationOutcomeCallable DeleteLocationCallable(const Model::DeleteLocationRequest& request) const;

        /**
         * An Async wrapper for DeleteLocation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLocationAsync(const Model::DeleteLocationRequest& request, const DeleteLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently removes a FlexMatch matchmaking configuration. To delete, specify
         * the configuration name. A matchmaking configuration cannot be deleted if it is
         * being used in any active matchmaking tickets.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteMatchmakingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMatchmakingConfigurationOutcome DeleteMatchmakingConfiguration(const Model::DeleteMatchmakingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteMatchmakingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMatchmakingConfigurationOutcomeCallable DeleteMatchmakingConfigurationCallable(const Model::DeleteMatchmakingConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteMatchmakingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMatchmakingConfigurationAsync(const Model::DeleteMatchmakingConfigurationRequest& request, const DeleteMatchmakingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing matchmaking rule set. To delete the rule set, provide the
         * rule set name. Rule sets cannot be deleted if they are currently being used by a
         * matchmaking configuration. </p> <p> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-rulesets.html">Build
         * a rule set</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteMatchmakingRuleSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMatchmakingRuleSetOutcome DeleteMatchmakingRuleSet(const Model::DeleteMatchmakingRuleSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteMatchmakingRuleSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMatchmakingRuleSetOutcomeCallable DeleteMatchmakingRuleSetCallable(const Model::DeleteMatchmakingRuleSetRequest& request) const;

        /**
         * An Async wrapper for DeleteMatchmakingRuleSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMatchmakingRuleSetAsync(const Model::DeleteMatchmakingRuleSetRequest& request, const DeleteMatchmakingRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a fleet scaling policy. Once deleted, the policy is no longer in
         * force and GameLift removes all record of it. To delete a scaling policy, specify
         * both the scaling policy name and the fleet ID it is associated with.</p> <p>To
         * temporarily suspend scaling policies, use <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_StopFleetActions.html">StopFleetActions</a>.
         * This operation suspends all policies for the fleet.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteScalingPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScalingPolicyOutcome DeleteScalingPolicy(const Model::DeleteScalingPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteScalingPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteScalingPolicyOutcomeCallable DeleteScalingPolicyCallable(const Model::DeleteScalingPolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteScalingPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteScalingPolicyAsync(const Model::DeleteScalingPolicyRequest& request, const DeleteScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Realtime script. This operation permanently deletes the script
         * record. If script files were uploaded, they are also deleted (files stored in an
         * S3 bucket are not deleted). </p> <p>To delete a script, specify the script ID.
         * Before deleting a script, be sure to terminate all fleets that are deployed with
         * the script being deleted. Fleet instances periodically check for script updates,
         * and if the script record no longer exists, the instance will go into an error
         * state and be unable to host game sessions.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/realtime-intro.html">Amazon
         * GameLift Realtime Servers</a> </p> <p> <b>Related actions</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteScript">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScriptOutcome DeleteScript(const Model::DeleteScriptRequest& request) const;

        /**
         * A Callable wrapper for DeleteScript that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteScriptOutcomeCallable DeleteScriptCallable(const Model::DeleteScriptRequest& request) const;

        /**
         * An Async wrapper for DeleteScript that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteScriptAsync(const Model::DeleteScriptRequest& request, const DeleteScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels a pending VPC peering authorization for the specified VPC. If you
         * need to delete an existing VPC peering connection, use <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DeleteVpcPeeringConnection.html">DeleteVpcPeeringConnection</a>.</p>
         * <p> <b>Related actions</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteVpcPeeringAuthorization">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpcPeeringAuthorizationOutcome DeleteVpcPeeringAuthorization(const Model::DeleteVpcPeeringAuthorizationRequest& request) const;

        /**
         * A Callable wrapper for DeleteVpcPeeringAuthorization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVpcPeeringAuthorizationOutcomeCallable DeleteVpcPeeringAuthorizationCallable(const Model::DeleteVpcPeeringAuthorizationRequest& request) const;

        /**
         * An Async wrapper for DeleteVpcPeeringAuthorization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVpcPeeringAuthorizationAsync(const Model::DeleteVpcPeeringAuthorizationRequest& request, const DeleteVpcPeeringAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a VPC peering connection. To delete the connection, you must have a
         * valid authorization for the VPC peering connection that you want to delete..
         * </p> <p>Once a valid authorization exists, call this operation from the Amazon
         * Web Services account that is used to manage the Amazon GameLift fleets. Identify
         * the connection to delete by the connection ID and fleet ID. If successful, the
         * connection is removed. </p> <p> <b>Related actions</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeleteVpcPeeringConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpcPeeringConnectionOutcome DeleteVpcPeeringConnection(const Model::DeleteVpcPeeringConnectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteVpcPeeringConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVpcPeeringConnectionOutcomeCallable DeleteVpcPeeringConnectionCallable(const Model::DeleteVpcPeeringConnectionRequest& request) const;

        /**
         * An Async wrapper for DeleteVpcPeeringConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVpcPeeringConnectionAsync(const Model::DeleteVpcPeeringConnectionRequest& request, const DeleteVpcPeeringConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a compute resource from the specified fleet. Deregister your compute
         * resources before you delete the compute.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeregisterCompute">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterComputeOutcome DeregisterCompute(const Model::DeregisterComputeRequest& request) const;

        /**
         * A Callable wrapper for DeregisterCompute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterComputeOutcomeCallable DeregisterComputeCallable(const Model::DeregisterComputeRequest& request) const;

        /**
         * An Async wrapper for DeregisterCompute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterComputeAsync(const Model::DeregisterComputeRequest& request, const DeregisterComputeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <b>This operation is used with the GameLift FleetIQ solution and game server
         * groups.</b> </p> <p>Removes the game server from a game server group. As a
         * result of this operation, the deregistered game server can no longer be claimed
         * and will not be returned in a list of active game servers. </p> <p>To deregister
         * a game server, specify the game server group and game server ID. If successful,
         * this operation emits a CloudWatch event with termination timestamp and
         * reason.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DeregisterGameServer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterGameServerOutcome DeregisterGameServer(const Model::DeregisterGameServerRequest& request) const;

        /**
         * A Callable wrapper for DeregisterGameServer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterGameServerOutcomeCallable DeregisterGameServerCallable(const Model::DeregisterGameServerRequest& request) const;

        /**
         * An Async wrapper for DeregisterGameServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterGameServerAsync(const Model::DeregisterGameServerRequest& request, const DeregisterGameServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves properties for an alias. This operation returns all alias metadata
         * and settings. To get an alias's target fleet ID only, use
         * <code>ResolveAlias</code>. </p> <p>To get alias properties, specify the alias
         * ID. If successful, the requested alias record is returned.</p> <p> <b>Related
         * actions</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAliasOutcome DescribeAlias(const Model::DescribeAliasRequest& request) const;

        /**
         * A Callable wrapper for DescribeAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAliasOutcomeCallable DescribeAliasCallable(const Model::DescribeAliasRequest& request) const;

        /**
         * An Async wrapper for DescribeAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAliasAsync(const Model::DescribeAliasRequest& request, const DescribeAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves properties for a custom game build. To request a build resource,
         * specify a build ID. If successful, an object containing the build properties is
         * returned.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html">
         * Upload a Custom Server Build</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeBuild">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBuildOutcome DescribeBuild(const Model::DescribeBuildRequest& request) const;

        /**
         * A Callable wrapper for DescribeBuild that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBuildOutcomeCallable DescribeBuildCallable(const Model::DescribeBuildRequest& request) const;

        /**
         * An Async wrapper for DescribeBuild that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBuildAsync(const Model::DescribeBuildRequest& request, const DescribeBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves properties for a compute resource. To request a compute resource
         * specify the fleet ID and compute name. If successful, GameLift returns an object
         * containing the build properties.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeCompute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeComputeOutcome DescribeCompute(const Model::DescribeComputeRequest& request) const;

        /**
         * A Callable wrapper for DescribeCompute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeComputeOutcomeCallable DescribeComputeCallable(const Model::DescribeComputeRequest& request) const;

        /**
         * An Async wrapper for DescribeCompute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeComputeAsync(const Model::DescribeComputeRequest& request, const DescribeComputeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the instance limits and current utilization for an Amazon Web
         * Services Region or location. Instance limits control the number of instances,
         * per instance type, per location, that your Amazon Web Services account can use.
         * Learn more at <a href="http://aws.amazon.com/ec2/instance-types/">Amazon EC2
         * Instance Types</a>. The information returned includes the maximum number of
         * instances allowed and your account's current usage across all fleets. This
         * information can affect your ability to scale your GameLift fleets. You can
         * request a limit increase for your account by using the <b>Service limits</b>
         * page in the GameLift console.</p> <p>Instance limits differ based on whether the
         * instances are deployed in a fleet's home Region or in a remote location. For
         * remote locations, limits also differ based on the combination of home Region and
         * remote location. All requests must specify an Amazon Web Services Region (either
         * explicitly or as your default settings). To get the limit for a remote location,
         * you must also specify the location. For example, the following requests all
         * return different results: </p> <ul> <li> <p>Request specifies the Region
         * <code>ap-northeast-1</code> with no location. The result is limits and usage
         * data on all instance types that are deployed in <code>us-east-2</code>, by all
         * of the fleets that reside in <code>ap-northeast-1</code>. </p> </li> <li>
         * <p>Request specifies the Region <code>us-east-1</code> with location
         * <code>ca-central-1</code>. The result is limits and usage data on all instance
         * types that are deployed in <code>ca-central-1</code>, by all of the fleets that
         * reside in <code>us-east-2</code>. These limits do not affect fleets in any other
         * Regions that deploy instances to <code>ca-central-1</code>.</p> </li> <li>
         * <p>Request specifies the Region <code>eu-west-1</code> with location
         * <code>ca-central-1</code>. The result is limits and usage data on all instance
         * types that are deployed in <code>ca-central-1</code>, by all of the fleets that
         * reside in <code>eu-west-1</code>.</p> </li> </ul> <p>This operation can be used
         * in the following ways:</p> <ul> <li> <p>To get limit and usage data for all
         * instance types that are deployed in an Amazon Web Services Region by fleets that
         * reside in the same Region: Specify the Region only. Optionally, specify a single
         * instance type to retrieve information for.</p> </li> <li> <p>To get limit and
         * usage data for all instance types that are deployed to a remote location by
         * fleets that reside in different Amazon Web Services Region: Provide both the
         * Amazon Web Services Region and the remote location. Optionally, specify a single
         * instance type to retrieve information for.</p> </li> </ul> <p>If successful, an
         * <code>EC2InstanceLimits</code> object is returned with limits and usage data for
         * each requested instance type.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift fleets</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeEC2InstanceLimits">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEC2InstanceLimitsOutcome DescribeEC2InstanceLimits(const Model::DescribeEC2InstanceLimitsRequest& request) const;

        /**
         * A Callable wrapper for DescribeEC2InstanceLimits that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEC2InstanceLimitsOutcomeCallable DescribeEC2InstanceLimitsCallable(const Model::DescribeEC2InstanceLimitsRequest& request) const;

        /**
         * An Async wrapper for DescribeEC2InstanceLimits that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEC2InstanceLimitsAsync(const Model::DescribeEC2InstanceLimitsRequest& request, const DescribeEC2InstanceLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves core fleet-wide properties, including the computing hardware and
         * deployment configuration for all instances in the fleet.</p> <p>This operation
         * can be used in the following ways: </p> <ul> <li> <p>To get attributes for one
         * or more specific fleets, provide a list of fleet IDs or fleet ARNs. </p> </li>
         * <li> <p>To get attributes for all fleets, do not provide a fleet identifier.
         * </p> </li> </ul> <p>When requesting attributes for multiple fleets, use the
         * pagination parameters to retrieve results as a set of sequential pages. </p>
         * <p>If successful, a <code>FleetAttributes</code> object is returned for each
         * fleet requested, unless the fleet identifier is not found. </p>  <p>Some
         * API operations limit the number of fleet IDs that allowed in one request. If a
         * request exceeds this limit, the request fails and the error message contains the
         * maximum allowed number.</p>  <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift fleets</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFleetAttributesOutcome DescribeFleetAttributes(const Model::DescribeFleetAttributesRequest& request) const;

        /**
         * A Callable wrapper for DescribeFleetAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetAttributesOutcomeCallable DescribeFleetAttributesCallable(const Model::DescribeFleetAttributesRequest& request) const;

        /**
         * An Async wrapper for DescribeFleetAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetAttributesAsync(const Model::DescribeFleetAttributesRequest& request, const DescribeFleetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the resource capacity settings for one or more fleets. The data
         * returned includes the current fleet capacity (number of EC2 instances), and
         * settings that can control how capacity scaling. For fleets with remote
         * locations, this operation retrieves data for the fleet's home Region only.</p>
         * <p>This operation can be used in the following ways: </p> <ul> <li> <p>To get
         * capacity data for one or more specific fleets, provide a list of fleet IDs or
         * fleet ARNs. </p> </li> <li> <p>To get capacity data for all fleets, do not
         * provide a fleet identifier. </p> </li> </ul> <p>When requesting multiple fleets,
         * use the pagination parameters to retrieve results as a set of sequential pages.
         * </p> <p>If successful, a <code>FleetCapacity</code> object is returned for each
         * requested fleet ID. Each FleetCapacity object includes a <code>Location</code>
         * property, which is set to the fleet's home Region. When a list of fleet IDs is
         * provided, attribute objects are returned only for fleets that currently
         * exist.</p>  <p>Some API operations may limit the number of fleet IDs that
         * are allowed in one request. If a request exceeds this limit, the request fails
         * and the error message includes the maximum allowed.</p>  <p> <b>Learn
         * more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift fleets</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/monitoring-cloudwatch.html#gamelift-metrics-fleet">GameLift
         * metrics for fleets</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetCapacity">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFleetCapacityOutcome DescribeFleetCapacity(const Model::DescribeFleetCapacityRequest& request) const;

        /**
         * A Callable wrapper for DescribeFleetCapacity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetCapacityOutcomeCallable DescribeFleetCapacityCallable(const Model::DescribeFleetCapacityRequest& request) const;

        /**
         * An Async wrapper for DescribeFleetCapacity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetCapacityAsync(const Model::DescribeFleetCapacityRequest& request, const DescribeFleetCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves entries from a fleet's event log. Fleet events are initiated by
         * changes in status, such as during fleet creation and termination, changes in
         * capacity, etc. If a fleet has multiple locations, events are also initiated by
         * changes to status and capacity in remote locations. </p> <p>You can specify a
         * time range to limit the result set. Use the pagination parameters to retrieve
         * results as a set of sequential pages. </p> <p>If successful, a collection of
         * event log entries matching the request are returned.</p> <p> <b>Learn more</b>
         * </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift fleets</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFleetEventsOutcome DescribeFleetEvents(const Model::DescribeFleetEventsRequest& request) const;

        /**
         * A Callable wrapper for DescribeFleetEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetEventsOutcomeCallable DescribeFleetEventsCallable(const Model::DescribeFleetEventsRequest& request) const;

        /**
         * An Async wrapper for DescribeFleetEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetEventsAsync(const Model::DescribeFleetEventsRequest& request, const DescribeFleetEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information on a fleet's remote locations, including life-cycle
         * status and any suspended fleet activity. </p> <p>This operation can be used in
         * the following ways: </p> <ul> <li> <p>To get data for specific locations,
         * provide a fleet identifier and a list of locations. Location data is returned in
         * the order that it is requested. </p> </li> <li> <p>To get data for all
         * locations, provide a fleet identifier only. Location data is returned in no
         * particular order. </p> </li> </ul> <p>When requesting attributes for multiple
         * locations, use the pagination parameters to retrieve results as a set of
         * sequential pages. </p> <p>If successful, a <code>LocationAttributes</code>
         * object is returned for each requested location. If the fleet does not have a
         * requested location, no information is returned. This operation does not return
         * the home Region. To get information on a fleet's home Region, call
         * <code>DescribeFleetAttributes</code>.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift fleets</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetLocationAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFleetLocationAttributesOutcome DescribeFleetLocationAttributes(const Model::DescribeFleetLocationAttributesRequest& request) const;

        /**
         * A Callable wrapper for DescribeFleetLocationAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetLocationAttributesOutcomeCallable DescribeFleetLocationAttributesCallable(const Model::DescribeFleetLocationAttributesRequest& request) const;

        /**
         * An Async wrapper for DescribeFleetLocationAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetLocationAttributesAsync(const Model::DescribeFleetLocationAttributesRequest& request, const DescribeFleetLocationAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the resource capacity settings for a fleet location. The data
         * returned includes the current capacity (number of EC2 instances) and some
         * scaling settings for the requested fleet location. Use this operation to
         * retrieve capacity information for a fleet's remote location or home Region (you
         * can also retrieve home Region capacity by calling
         * <code>DescribeFleetCapacity</code>).</p> <p>To retrieve capacity data, identify
         * a fleet and location. </p> <p>If successful, a <code>FleetCapacity</code> object
         * is returned for the requested fleet location. </p> <p> <b>Learn more</b> </p>
         * <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift fleets</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/monitoring-cloudwatch.html#gamelift-metrics-fleet">GameLift
         * metrics for fleets</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetLocationCapacity">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFleetLocationCapacityOutcome DescribeFleetLocationCapacity(const Model::DescribeFleetLocationCapacityRequest& request) const;

        /**
         * A Callable wrapper for DescribeFleetLocationCapacity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetLocationCapacityOutcomeCallable DescribeFleetLocationCapacityCallable(const Model::DescribeFleetLocationCapacityRequest& request) const;

        /**
         * An Async wrapper for DescribeFleetLocationCapacity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetLocationCapacityAsync(const Model::DescribeFleetLocationCapacityRequest& request, const DescribeFleetLocationCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves current usage data for a fleet location. Utilization data provides
         * a snapshot of current game hosting activity at the requested location. Use this
         * operation to retrieve utilization information for a fleet's remote location or
         * home Region (you can also retrieve home Region utilization by calling
         * <code>DescribeFleetUtilization</code>).</p> <p>To retrieve utilization data,
         * identify a fleet and location. </p> <p>If successful, a
         * <code>FleetUtilization</code> object is returned for the requested fleet
         * location. </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift fleets</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/monitoring-cloudwatch.html#gamelift-metrics-fleet">GameLift
         * metrics for fleets</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetLocationUtilization">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFleetLocationUtilizationOutcome DescribeFleetLocationUtilization(const Model::DescribeFleetLocationUtilizationRequest& request) const;

        /**
         * A Callable wrapper for DescribeFleetLocationUtilization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetLocationUtilizationOutcomeCallable DescribeFleetLocationUtilizationCallable(const Model::DescribeFleetLocationUtilizationRequest& request) const;

        /**
         * An Async wrapper for DescribeFleetLocationUtilization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetLocationUtilizationAsync(const Model::DescribeFleetLocationUtilizationRequest& request, const DescribeFleetLocationUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a fleet's inbound connection permissions. Connection permissions
         * specify the range of IP addresses and port settings that incoming traffic can
         * use to access server processes in the fleet. Game sessions that are running on
         * instances in the fleet must use connections that fall in this range.</p> <p>This
         * operation can be used in the following ways: </p> <ul> <li> <p>To retrieve the
         * inbound connection permissions for a fleet, identify the fleet's unique
         * identifier. </p> </li> <li> <p>To check the status of recent updates to a fleet
         * remote location, specify the fleet ID and a location. Port setting updates can
         * take time to propagate across all locations. </p> </li> </ul> <p>If successful,
         * a set of <code>IpPermission</code> objects is returned for the requested fleet
         * ID. When a location is specified, a pending status is included. If the requested
         * fleet has been deleted, the result set is empty.</p> <p> <b>Learn more</b> </p>
         * <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift fleets</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetPortSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFleetPortSettingsOutcome DescribeFleetPortSettings(const Model::DescribeFleetPortSettingsRequest& request) const;

        /**
         * A Callable wrapper for DescribeFleetPortSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetPortSettingsOutcomeCallable DescribeFleetPortSettingsCallable(const Model::DescribeFleetPortSettingsRequest& request) const;

        /**
         * An Async wrapper for DescribeFleetPortSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetPortSettingsAsync(const Model::DescribeFleetPortSettingsRequest& request, const DescribeFleetPortSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves utilization statistics for one or more fleets. Utilization data
         * provides a snapshot of how the fleet's hosting resources are currently being
         * used. For fleets with remote locations, this operation retrieves data for the
         * fleet's home Region only. See <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeFleetLocationUtilization.html">DescribeFleetLocationUtilization</a>
         * to get utilization statistics for a fleet's remote locations.</p> <p>This
         * operation can be used in the following ways: </p> <ul> <li> <p>To get
         * utilization data for one or more specific fleets, provide a list of fleet IDs or
         * fleet ARNs. </p> </li> <li> <p>To get utilization data for all fleets, do not
         * provide a fleet identifier. </p> </li> </ul> <p>When requesting multiple fleets,
         * use the pagination parameters to retrieve results as a set of sequential pages.
         * </p> <p>If successful, a <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_FleetUtilization.html">FleetUtilization</a>
         * object is returned for each requested fleet ID, unless the fleet identifier is
         * not found. Each fleet utilization object includes a <code>Location</code>
         * property, which is set to the fleet's home Region. </p>  <p>Some API
         * operations may limit the number of fleet IDs allowed in one request. If a
         * request exceeds this limit, the request fails and the error message includes the
         * maximum allowed.</p>  <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/monitoring-cloudwatch.html#gamelift-metrics-fleet">GameLift
         * Metrics for Fleets</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetUtilization">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFleetUtilizationOutcome DescribeFleetUtilization(const Model::DescribeFleetUtilizationRequest& request) const;

        /**
         * A Callable wrapper for DescribeFleetUtilization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetUtilizationOutcomeCallable DescribeFleetUtilizationCallable(const Model::DescribeFleetUtilizationRequest& request) const;

        /**
         * An Async wrapper for DescribeFleetUtilization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetUtilizationAsync(const Model::DescribeFleetUtilizationRequest& request, const DescribeFleetUtilizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <b>This operation is used with the GameLift FleetIQ solution and game server
         * groups.</b> </p> <p>Retrieves information for a registered game server.
         * Information includes game server status, health check info, and the instance
         * that the game server is running on. </p> <p>To retrieve game server information,
         * specify the game server ID. If successful, the requested game server object is
         * returned. </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameServer">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGameServerOutcome DescribeGameServer(const Model::DescribeGameServerRequest& request) const;

        /**
         * A Callable wrapper for DescribeGameServer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGameServerOutcomeCallable DescribeGameServerCallable(const Model::DescribeGameServerRequest& request) const;

        /**
         * An Async wrapper for DescribeGameServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGameServerAsync(const Model::DescribeGameServerRequest& request, const DescribeGameServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <b>This operation is used with the GameLift FleetIQ solution and game server
         * groups.</b> </p> <p>Retrieves information on a game server group. This operation
         * returns only properties related to GameLift FleetIQ. To view or update
         * properties for the corresponding Auto Scaling group, such as launch template,
         * auto scaling policies, and maximum/minimum group size, access the Auto Scaling
         * group directly.</p> <p>To get attributes for a game server group, provide a
         * group name or ARN value. If successful, a <code>GameServerGroup</code> object is
         * returned.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameServerGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGameServerGroupOutcome DescribeGameServerGroup(const Model::DescribeGameServerGroupRequest& request) const;

        /**
         * A Callable wrapper for DescribeGameServerGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGameServerGroupOutcomeCallable DescribeGameServerGroupCallable(const Model::DescribeGameServerGroupRequest& request) const;

        /**
         * An Async wrapper for DescribeGameServerGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGameServerGroupAsync(const Model::DescribeGameServerGroupRequest& request, const DescribeGameServerGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <b>This operation is used with the GameLift FleetIQ solution and game server
         * groups.</b> </p> <p>Retrieves status information about the Amazon EC2 instances
         * associated with a GameLift FleetIQ game server group. Use this operation to
         * detect when instances are active or not available to host new game servers.</p>
         * <p>To request status for all instances in the game server group, provide a game
         * server group ID only. To request status for specific instances, provide the game
         * server group ID and one or more instance IDs. Use the pagination parameters to
         * retrieve results in sequential segments. If successful, a collection of
         * <code>GameServerInstance</code> objects is returned. </p> <p>This operation is
         * not designed to be called with every game server claim request; this practice
         * can cause you to exceed your API limit, which results in errors. Instead, as a
         * best practice, cache the results and refresh your cache no more than once every
         * 10 seconds.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameServerInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGameServerInstancesOutcome DescribeGameServerInstances(const Model::DescribeGameServerInstancesRequest& request) const;

        /**
         * A Callable wrapper for DescribeGameServerInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGameServerInstancesOutcomeCallable DescribeGameServerInstancesCallable(const Model::DescribeGameServerInstancesRequest& request) const;

        /**
         * An Async wrapper for DescribeGameServerInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGameServerInstancesAsync(const Model::DescribeGameServerInstancesRequest& request, const DescribeGameServerInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves additional game session properties, including the game session
         * protection policy in force, a set of one or more game sessions in a specific
         * fleet location. You can optionally filter the results by current game session
         * status.</p> <p>This operation can be used in the following ways: </p> <ul> <li>
         * <p>To retrieve details for all game sessions that are currently running on all
         * locations in a fleet, provide a fleet or alias ID, with an optional status
         * filter. This approach returns details from the fleet's home Region and all
         * remote locations.</p> </li> <li> <p>To retrieve details for all game sessions
         * that are currently running on a specific fleet location, provide a fleet or
         * alias ID and a location name, with optional status filter. The location can be
         * the fleet's home Region or any remote location.</p> </li> <li> <p>To retrieve
         * details for a specific game session, provide the game session ID. This approach
         * looks for the game session ID in all fleets that reside in the Amazon Web
         * Services Region defined in the request.</p> </li> </ul> <p>Use the pagination
         * parameters to retrieve results as a set of sequential pages. </p> <p>If
         * successful, a <code>GameSessionDetail</code> object is returned for each game
         * session that matches the request.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-client-api.html#gamelift-sdk-client-api-find">Find
         * a game session</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameSessionDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGameSessionDetailsOutcome DescribeGameSessionDetails(const Model::DescribeGameSessionDetailsRequest& request) const;

        /**
         * A Callable wrapper for DescribeGameSessionDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGameSessionDetailsOutcomeCallable DescribeGameSessionDetailsCallable(const Model::DescribeGameSessionDetailsRequest& request) const;

        /**
         * An Async wrapper for DescribeGameSessionDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGameSessionDetailsAsync(const Model::DescribeGameSessionDetailsRequest& request, const DescribeGameSessionDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information, including current status, about a game session
         * placement request. </p> <p>To get game session placement details, specify the
         * placement ID.</p> <p>This operation is not designed to be continually called to
         * track game session status. This practice can cause you to exceed your API limit,
         * which results in errors. Instead, you must configure configure an Amazon Simple
         * Notification Service (SNS) topic to receive notifications from FlexMatch or
         * queues. Continuously polling with <code>DescribeGameSessionPlacement</code>
         * should only be used for games in development with low game session usage.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameSessionPlacement">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGameSessionPlacementOutcome DescribeGameSessionPlacement(const Model::DescribeGameSessionPlacementRequest& request) const;

        /**
         * A Callable wrapper for DescribeGameSessionPlacement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGameSessionPlacementOutcomeCallable DescribeGameSessionPlacementCallable(const Model::DescribeGameSessionPlacementRequest& request) const;

        /**
         * An Async wrapper for DescribeGameSessionPlacement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGameSessionPlacementAsync(const Model::DescribeGameSessionPlacementRequest& request, const DescribeGameSessionPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the properties for one or more game session queues. When requesting
         * multiple queues, use the pagination parameters to retrieve results as a set of
         * sequential pages. When specifying a list of queues, objects are returned only
         * for queues that currently exist in the Region.</p> <p> <b>Learn more</b> </p>
         * <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queues-console.html">
         * View Your Queues</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameSessionQueues">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGameSessionQueuesOutcome DescribeGameSessionQueues(const Model::DescribeGameSessionQueuesRequest& request) const;

        /**
         * A Callable wrapper for DescribeGameSessionQueues that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGameSessionQueuesOutcomeCallable DescribeGameSessionQueuesCallable(const Model::DescribeGameSessionQueuesRequest& request) const;

        /**
         * An Async wrapper for DescribeGameSessionQueues that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGameSessionQueuesAsync(const Model::DescribeGameSessionQueuesRequest& request, const DescribeGameSessionQueuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a set of one or more game sessions in a specific fleet location.
         * You can optionally filter the results by current game session status.</p>
         * <p>This operation can be used in the following ways: </p> <ul> <li> <p>To
         * retrieve all game sessions that are currently running on all locations in a
         * fleet, provide a fleet or alias ID, with an optional status filter. This
         * approach returns all game sessions in the fleet's home Region and all remote
         * locations.</p> </li> <li> <p>To retrieve all game sessions that are currently
         * running on a specific fleet location, provide a fleet or alias ID and a location
         * name, with optional status filter. The location can be the fleet's home Region
         * or any remote location.</p> </li> <li> <p>To retrieve a specific game session,
         * provide the game session ID. This approach looks for the game session ID in all
         * fleets that reside in the Amazon Web Services Region defined in the request.</p>
         * </li> </ul> <p>Use the pagination parameters to retrieve results as a set of
         * sequential pages. </p> <p>If successful, a <code>GameSession</code> object is
         * returned for each game session that matches the request.</p> <p>This operation
         * is not designed to be continually called to track game session status. This
         * practice can cause you to exceed your API limit, which results in errors.
         * Instead, you must configure an Amazon Simple Notification Service (SNS) topic to
         * receive notifications from FlexMatch or queues. Continuously polling with
         * <code>DescribeGameSessions</code> should only be used for games in development
         * with low game session usage. </p> <p> <i>Available in Amazon GameLift Local.</i>
         * </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-sdk-client-api.html#gamelift-sdk-client-api-find">Find
         * a game session</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeGameSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeGameSessionsOutcome DescribeGameSessions(const Model::DescribeGameSessionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeGameSessions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeGameSessionsOutcomeCallable DescribeGameSessionsCallable(const Model::DescribeGameSessionsRequest& request) const;

        /**
         * An Async wrapper for DescribeGameSessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeGameSessionsAsync(const Model::DescribeGameSessionsRequest& request, const DescribeGameSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a fleet's instances, including instance IDs,
         * connection data, and status. </p> <p>This operation can be used in the following
         * ways:</p> <ul> <li> <p>To get information on all instances that are deployed to
         * a fleet's home Region, provide the fleet ID.</p> </li> <li> <p>To get
         * information on all instances that are deployed to a fleet's remote location,
         * provide the fleet ID and location name.</p> </li> <li> <p>To get information on
         * a specific instance in a fleet, provide the fleet ID and instance ID.</p> </li>
         * </ul> <p>Use the pagination parameters to retrieve results as a set of
         * sequential pages. </p> <p>If successful, an <code>Instance</code> object is
         * returned for each requested instance. Instances are not returned in any
         * particular order. </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-remote-access.html">Remotely
         * Access Fleet Instances</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-creating-debug.html">Debug
         * Fleet Issues</a> </p> <p> <b>Related actions</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest& request) const;

        /**
         * A Callable wrapper for DescribeInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request) const;

        /**
         * An Async wrapper for DescribeInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves one or more matchmaking tickets. Use this operation to retrieve
         * ticket information, including--after a successful match is made--connection
         * information for the resulting new game session. </p> <p>To request matchmaking
         * tickets, provide a list of up to 10 ticket IDs. If the request is successful, a
         * ticket object is returned for each requested ID that currently exists.</p>
         * <p>This operation is not designed to be continually called to track matchmaking
         * ticket status. This practice can cause you to exceed your API limit, which
         * results in errors. Instead, as a best practice, set up an Amazon Simple
         * Notification Service to receive notifications, and provide the topic ARN in the
         * matchmaking configuration.</p> <p/> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-client.html">
         * Add FlexMatch to a game client</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-notification.html">
         * Set Up FlexMatch event notification</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeMatchmaking">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMatchmakingOutcome DescribeMatchmaking(const Model::DescribeMatchmakingRequest& request) const;

        /**
         * A Callable wrapper for DescribeMatchmaking that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMatchmakingOutcomeCallable DescribeMatchmakingCallable(const Model::DescribeMatchmakingRequest& request) const;

        /**
         * An Async wrapper for DescribeMatchmaking that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMatchmakingAsync(const Model::DescribeMatchmakingRequest& request, const DescribeMatchmakingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the details of FlexMatch matchmaking configurations. </p> <p>This
         * operation offers the following options: (1) retrieve all matchmaking
         * configurations, (2) retrieve configurations for a specified list, or (3)
         * retrieve all configurations that use a specified rule set name. When requesting
         * multiple items, use the pagination parameters to retrieve results as a set of
         * sequential pages. </p> <p>If successful, a configuration is returned for each
         * requested name. When specifying a list of names, only configurations that
         * currently exist are returned. </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/matchmaker-build.html">
         * Setting up FlexMatch matchmakers</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeMatchmakingConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMatchmakingConfigurationsOutcome DescribeMatchmakingConfigurations(const Model::DescribeMatchmakingConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeMatchmakingConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMatchmakingConfigurationsOutcomeCallable DescribeMatchmakingConfigurationsCallable(const Model::DescribeMatchmakingConfigurationsRequest& request) const;

        /**
         * An Async wrapper for DescribeMatchmakingConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMatchmakingConfigurationsAsync(const Model::DescribeMatchmakingConfigurationsRequest& request, const DescribeMatchmakingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the details for FlexMatch matchmaking rule sets. You can request
         * all existing rule sets for the Region, or provide a list of one or more rule set
         * names. When requesting multiple items, use the pagination parameters to retrieve
         * results as a set of sequential pages. If successful, a rule set is returned for
         * each requested name. </p> <p> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-rulesets.html">Build
         * a rule set</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeMatchmakingRuleSets">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMatchmakingRuleSetsOutcome DescribeMatchmakingRuleSets(const Model::DescribeMatchmakingRuleSetsRequest& request) const;

        /**
         * A Callable wrapper for DescribeMatchmakingRuleSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMatchmakingRuleSetsOutcomeCallable DescribeMatchmakingRuleSetsCallable(const Model::DescribeMatchmakingRuleSetsRequest& request) const;

        /**
         * An Async wrapper for DescribeMatchmakingRuleSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMatchmakingRuleSetsAsync(const Model::DescribeMatchmakingRuleSetsRequest& request, const DescribeMatchmakingRuleSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves properties for one or more player sessions. </p> <p>This action can
         * be used in the following ways: </p> <ul> <li> <p>To retrieve a specific player
         * session, provide the player session ID only.</p> </li> <li> <p>To retrieve all
         * player sessions in a game session, provide the game session ID only.</p> </li>
         * <li> <p>To retrieve all player sessions for a specific player, provide a player
         * ID only.</p> </li> </ul> <p>To request player sessions, specify either a player
         * session ID, game session ID, or player ID. You can filter this request by player
         * session status. Use the pagination parameters to retrieve results as a set of
         * sequential pages. </p> <p>If successful, a <code>PlayerSession</code> object is
         * returned for each session that matches the request.</p> <p> <b>Related
         * actions</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribePlayerSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePlayerSessionsOutcome DescribePlayerSessions(const Model::DescribePlayerSessionsRequest& request) const;

        /**
         * A Callable wrapper for DescribePlayerSessions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePlayerSessionsOutcomeCallable DescribePlayerSessionsCallable(const Model::DescribePlayerSessionsRequest& request) const;

        /**
         * An Async wrapper for DescribePlayerSessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePlayerSessionsAsync(const Model::DescribePlayerSessionsRequest& request, const DescribePlayerSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a fleet's runtime configuration settings. The runtime configuration
         * tells GameLift which server processes to run (and how) on each instance in the
         * fleet.</p> <p>To get the runtime configuration that is currently in forces for a
         * fleet, provide the fleet ID. </p> <p>If successful, a
         * <code>RuntimeConfiguration</code> object is returned for the requested fleet. If
         * the requested fleet has been deleted, the result set is empty.</p> <p> <b>Learn
         * more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift fleets</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-multiprocess.html">Running
         * multiple processes on a fleet</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeRuntimeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRuntimeConfigurationOutcome DescribeRuntimeConfiguration(const Model::DescribeRuntimeConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeRuntimeConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRuntimeConfigurationOutcomeCallable DescribeRuntimeConfigurationCallable(const Model::DescribeRuntimeConfigurationRequest& request) const;

        /**
         * An Async wrapper for DescribeRuntimeConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRuntimeConfigurationAsync(const Model::DescribeRuntimeConfigurationRequest& request, const DescribeRuntimeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves all scaling policies applied to a fleet.</p> <p>To get a fleet's
         * scaling policies, specify the fleet ID. You can filter this request by policy
         * status, such as to retrieve only active scaling policies. Use the pagination
         * parameters to retrieve results as a set of sequential pages. If successful, set
         * of <code>ScalingPolicy</code> objects is returned for the fleet.</p> <p>A fleet
         * may have all of its scaling policies suspended. This operation does not affect
         * the status of the scaling policies, which remains ACTIVE.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeScalingPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScalingPoliciesOutcome DescribeScalingPolicies(const Model::DescribeScalingPoliciesRequest& request) const;

        /**
         * A Callable wrapper for DescribeScalingPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScalingPoliciesOutcomeCallable DescribeScalingPoliciesCallable(const Model::DescribeScalingPoliciesRequest& request) const;

        /**
         * An Async wrapper for DescribeScalingPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScalingPoliciesAsync(const Model::DescribeScalingPoliciesRequest& request, const DescribeScalingPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves properties for a Realtime script. </p> <p>To request a script
         * record, specify the script ID. If successful, an object containing the script
         * properties is returned.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/realtime-intro.html">Amazon
         * GameLift Realtime Servers</a> </p> <p> <b>Related actions</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeScript">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScriptOutcome DescribeScript(const Model::DescribeScriptRequest& request) const;

        /**
         * A Callable wrapper for DescribeScript that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScriptOutcomeCallable DescribeScriptCallable(const Model::DescribeScriptRequest& request) const;

        /**
         * An Async wrapper for DescribeScript that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScriptAsync(const Model::DescribeScriptRequest& request, const DescribeScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves valid VPC peering authorizations that are pending for the Amazon
         * Web Services account. This operation returns all VPC peering authorizations and
         * requests for peering. This includes those initiated and received by this
         * account. </p> <p> <b>Related actions</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeVpcPeeringAuthorizations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcPeeringAuthorizationsOutcome DescribeVpcPeeringAuthorizations(const Model::DescribeVpcPeeringAuthorizationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeVpcPeeringAuthorizations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVpcPeeringAuthorizationsOutcomeCallable DescribeVpcPeeringAuthorizationsCallable(const Model::DescribeVpcPeeringAuthorizationsRequest& request) const;

        /**
         * An Async wrapper for DescribeVpcPeeringAuthorizations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVpcPeeringAuthorizationsAsync(const Model::DescribeVpcPeeringAuthorizationsRequest& request, const DescribeVpcPeeringAuthorizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information on VPC peering connections. Use this operation to get
         * peering information for all fleets or for one specific fleet ID. </p> <p>To
         * retrieve connection information, call this operation from the Amazon Web
         * Services account that is used to manage the Amazon GameLift fleets. Specify a
         * fleet ID or leave the parameter empty to retrieve all connection records. If
         * successful, the retrieved information includes both active and pending
         * connections. Active connections identify the IpV4 CIDR block that the VPC uses
         * to connect. </p> <p> <b>Related actions</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeVpcPeeringConnections">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcPeeringConnectionsOutcome DescribeVpcPeeringConnections(const Model::DescribeVpcPeeringConnectionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeVpcPeeringConnections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVpcPeeringConnectionsOutcomeCallable DescribeVpcPeeringConnectionsCallable(const Model::DescribeVpcPeeringConnectionsRequest& request) const;

        /**
         * An Async wrapper for DescribeVpcPeeringConnections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVpcPeeringConnectionsAsync(const Model::DescribeVpcPeeringConnectionsRequest& request, const DescribeVpcPeeringConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests remote access to a fleet instance. Remote access is useful for
         * debugging, gathering benchmarking data, or observing activity in real time. </p>
         * <p>To remotely access an instance, you need credentials that match the operating
         * system of the instance. For a Windows instance, GameLift returns a user name and
         * password as strings for use with a Windows Remote Desktop client. For a Linux
         * instance, GameLift returns a user name and RSA private key, also as strings, for
         * use with an SSH client. The private key must be saved in the proper format to a
         * <code>.pem</code> file before using. If you're making this request using the
         * CLI, saving the secret can be handled as part of the
         * <code>GetInstanceAccess</code> request, as shown in one of the examples for this
         * operation. </p> <p>To request access to a specific instance, specify the IDs of
         * both the instance and the fleet it belongs to.</p> <p> <b>Learn more</b> </p>
         * <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-remote-access.html">Remotely
         * Access Fleet Instances</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-creating-debug.html">Debug
         * Fleet Issues</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GetComputeAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComputeAccessOutcome GetComputeAccess(const Model::GetComputeAccessRequest& request) const;

        /**
         * A Callable wrapper for GetComputeAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetComputeAccessOutcomeCallable GetComputeAccessCallable(const Model::GetComputeAccessRequest& request) const;

        /**
         * An Async wrapper for GetComputeAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetComputeAccessAsync(const Model::GetComputeAccessRequest& request, const GetComputeAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests an authorization token from GameLift. The authorization token is
         * used by your game server to authenticate with GameLift. Each authentication
         * token has an expiration token. To continue using the compute resource to host
         * your game server, regularly retrieve a new authorization token.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GetComputeAuthToken">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComputeAuthTokenOutcome GetComputeAuthToken(const Model::GetComputeAuthTokenRequest& request) const;

        /**
         * A Callable wrapper for GetComputeAuthToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetComputeAuthTokenOutcomeCallable GetComputeAuthTokenCallable(const Model::GetComputeAuthTokenRequest& request) const;

        /**
         * An Async wrapper for GetComputeAuthToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetComputeAuthTokenAsync(const Model::GetComputeAuthTokenRequest& request, const GetComputeAuthTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the location of stored game session logs for a specified game
         * session. When a game session is terminated, GameLift automatically stores the
         * logs in Amazon S3 and retains them for 14 days. Use this URL to download the
         * logs.</p>  <p>See the <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits_gamelift">Amazon
         * Web Services Service Limits</a> page for maximum log file sizes. Log files that
         * exceed this limit are not saved.</p>  <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GetGameSessionLogUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGameSessionLogUrlOutcome GetGameSessionLogUrl(const Model::GetGameSessionLogUrlRequest& request) const;

        /**
         * A Callable wrapper for GetGameSessionLogUrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGameSessionLogUrlOutcomeCallable GetGameSessionLogUrlCallable(const Model::GetGameSessionLogUrlRequest& request) const;

        /**
         * An Async wrapper for GetGameSessionLogUrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGameSessionLogUrlAsync(const Model::GetGameSessionLogUrlRequest& request, const GetGameSessionLogUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests remote access to a fleet instance. Remote access is useful for
         * debugging, gathering benchmarking data, or observing activity in real time. </p>
         * <p>To remotely access an instance, you need credentials that match the operating
         * system of the instance. For a Windows instance, GameLift returns a user name and
         * password as strings for use with a Windows Remote Desktop client. For a Linux
         * instance, GameLift returns a user name and RSA private key, also as strings, for
         * use with an SSH client. The private key must be saved in the proper format to a
         * <code>.pem</code> file before using. If you're making this request using the
         * CLI, saving the secret can be handled as part of the
         * <code>GetInstanceAccess</code> request, as shown in one of the examples for this
         * operation. </p> <p>To request access to a specific instance, specify the IDs of
         * both the instance and the fleet it belongs to. You can retrieve a fleet's
         * instance IDs by calling <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeInstances.html">DescribeInstances</a>.
         * </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-remote-access.html">Remotely
         * Access Fleet Instances</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-creating-debug.html">Debug
         * Fleet Issues</a> </p> <p> <b>Related actions</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/GetInstanceAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstanceAccessOutcome GetInstanceAccess(const Model::GetInstanceAccessRequest& request) const;

        /**
         * A Callable wrapper for GetInstanceAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInstanceAccessOutcomeCallable GetInstanceAccessCallable(const Model::GetInstanceAccessRequest& request) const;

        /**
         * An Async wrapper for GetInstanceAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInstanceAccessAsync(const Model::GetInstanceAccessRequest& request, const GetInstanceAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves all aliases for this Amazon Web Services account. You can filter
         * the result set by alias name and/or routing strategy type. Use the pagination
         * parameters to retrieve results in sequential pages.</p>  <p>Returned
         * aliases are not listed in any particular order.</p>  <p> <b>Related
         * actions</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAliasesOutcome ListAliases(const Model::ListAliasesRequest& request) const;

        /**
         * A Callable wrapper for ListAliases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAliasesOutcomeCallable ListAliasesCallable(const Model::ListAliasesRequest& request) const;

        /**
         * An Async wrapper for ListAliases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAliasesAsync(const Model::ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves build resources for all builds associated with the Amazon Web
         * Services account in use. You can limit results to builds that are in a specific
         * status by using the <code>Status</code> parameter. Use the pagination parameters
         * to retrieve results in a set of sequential pages. </p>  <p>Build resources
         * are not listed in any particular order.</p>  <p> <b>Learn more</b> </p>
         * <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html">
         * Upload a Custom Server Build</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListBuilds">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBuildsOutcome ListBuilds(const Model::ListBuildsRequest& request) const;

        /**
         * A Callable wrapper for ListBuilds that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBuildsOutcomeCallable ListBuildsCallable(const Model::ListBuildsRequest& request) const;

        /**
         * An Async wrapper for ListBuilds that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBuildsAsync(const Model::ListBuildsRequest& request, const ListBuildsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves all compute resources registered to a fleet in your Amazon Web
         * Services account. You can filter the result set by location.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListCompute">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComputeOutcome ListCompute(const Model::ListComputeRequest& request) const;

        /**
         * A Callable wrapper for ListCompute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListComputeOutcomeCallable ListComputeCallable(const Model::ListComputeRequest& request) const;

        /**
         * An Async wrapper for ListCompute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListComputeAsync(const Model::ListComputeRequest& request, const ListComputeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a collection of fleet resources in an Amazon Web Services Region.
         * You can call this operation to get fleets in a previously selected default
         * Region (see <a
         * href="https://docs.aws.amazon.com/credref/latest/refdocs/setting-global-region.html">https://docs.aws.amazon.com/credref/latest/refdocs/setting-global-region.html</a>or
         * specify a Region in your request. You can filter the result set to find only
         * those fleets that are deployed with a specific build or script. For fleets that
         * have multiple locations, this operation retrieves fleets based on their home
         * Region only.</p> <p>This operation can be used in the following ways: </p> <ul>
         * <li> <p>To get a list of all fleets in a Region, don't provide a build or script
         * identifier. </p> </li> <li> <p>To get a list of all fleets where a specific
         * custom game build is deployed, provide the build ID.</p> </li> <li> <p>To get a
         * list of all Realtime Servers fleets with a specific configuration script,
         * provide the script ID. </p> </li> </ul> <p>Use the pagination parameters to
         * retrieve results as a set of sequential pages. </p> <p>If successful, a list of
         * fleet IDs that match the request parameters is returned. A NextToken value is
         * also returned if there are more result pages to retrieve.</p>  <p>Fleet
         * resources are not listed in a particular order.</p>  <p> <b>Learn
         * more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift fleets</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListFleets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFleetsOutcome ListFleets(const Model::ListFleetsRequest& request) const;

        /**
         * A Callable wrapper for ListFleets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFleetsOutcomeCallable ListFleetsCallable(const Model::ListFleetsRequest& request) const;

        /**
         * An Async wrapper for ListFleets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFleetsAsync(const Model::ListFleetsRequest& request, const ListFleetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists a game server groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListGameServerGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGameServerGroupsOutcome ListGameServerGroups(const Model::ListGameServerGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListGameServerGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGameServerGroupsOutcomeCallable ListGameServerGroupsCallable(const Model::ListGameServerGroupsRequest& request) const;

        /**
         * An Async wrapper for ListGameServerGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGameServerGroupsAsync(const Model::ListGameServerGroupsRequest& request, const ListGameServerGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <b>This operation is used with the GameLift FleetIQ solution and game server
         * groups.</b> </p> <p>Retrieves information on all game servers that are currently
         * active in a specified game server group. You can opt to sort the list by game
         * server age. Use the pagination parameters to retrieve results in a set of
         * sequential segments. </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListGameServers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGameServersOutcome ListGameServers(const Model::ListGameServersRequest& request) const;

        /**
         * A Callable wrapper for ListGameServers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGameServersOutcomeCallable ListGameServersCallable(const Model::ListGameServersRequest& request) const;

        /**
         * An Async wrapper for ListGameServers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGameServersAsync(const Model::ListGameServersRequest& request, const ListGameServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all custom and Amazon Web Services locations.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListLocations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLocationsOutcome ListLocations(const Model::ListLocationsRequest& request) const;

        /**
         * A Callable wrapper for ListLocations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLocationsOutcomeCallable ListLocationsCallable(const Model::ListLocationsRequest& request) const;

        /**
         * An Async wrapper for ListLocations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLocationsAsync(const Model::ListLocationsRequest& request, const ListLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves script records for all Realtime scripts that are associated with
         * the Amazon Web Services account in use. </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/realtime-intro.html">Amazon
         * GameLift Realtime Servers</a> </p> <p> <b>Related actions</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListScripts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListScriptsOutcome ListScripts(const Model::ListScriptsRequest& request) const;

        /**
         * A Callable wrapper for ListScripts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListScriptsOutcomeCallable ListScriptsCallable(const Model::ListScriptsRequest& request) const;

        /**
         * An Async wrapper for ListScripts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListScriptsAsync(const Model::ListScriptsRequest& request, const ListScriptsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves all tags that are assigned to a GameLift resource. Resource tags
         * are used to organize Amazon Web Services resources for a range of purposes. This
         * operation handles the permissions necessary to manage tags for the following
         * GameLift resource types:</p> <ul> <li> <p>Build</p> </li> <li> <p>Script</p>
         * </li> <li> <p>Fleet</p> </li> <li> <p>Alias</p> </li> <li>
         * <p>GameSessionQueue</p> </li> <li> <p>MatchmakingConfiguration</p> </li> <li>
         * <p>MatchmakingRuleSet</p> </li> </ul> <p>To list tags for a resource, specify
         * the unique ARN value for the resource.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
         * Amazon Web Services Resources</a> in the <i>Amazon Web Services General
         * Reference</i> </p> <p> <a
         * href="http://aws.amazon.com/answers/account-management/aws-tagging-strategies/">
         * Amazon Web Services Tagging Strategies</a> </p> <p> <b>Related actions</b> </p>
         * <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates a scaling policy for a fleet. Scaling policies are used to
         * automatically scale a fleet's hosting capacity to meet player demand. An active
         * scaling policy instructs Amazon GameLift to track a fleet metric and
         * automatically change the fleet's capacity when a certain threshold is reached.
         * There are two types of scaling policies: target-based and rule-based. Use a
         * target-based policy to quickly and efficiently manage fleet scaling; this option
         * is the most commonly used. Use rule-based policies when you need to exert
         * fine-grained control over auto-scaling. </p> <p>Fleets can have multiple scaling
         * policies of each type in force at the same time; you can have one target-based
         * policy, one or multiple rule-based scaling policies, or both. We recommend
         * caution, however, because multiple auto-scaling policies can have unintended
         * consequences.</p> <p>Learn more about how to work with auto-scaling in <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-autoscaling.html">Set
         * Up Fleet Automatic Scaling</a>.</p> <p> <b>Target-based policy</b> </p> <p>A
         * target-based policy tracks a single metric: PercentAvailableGameSessions. This
         * metric tells us how much of a fleet's hosting capacity is ready to host game
         * sessions but is not currently in use. This is the fleet's buffer; it measures
         * the additional player demand that the fleet could handle at current capacity.
         * With a target-based policy, you set your ideal buffer size and leave it to
         * Amazon GameLift to take whatever action is needed to maintain that target. </p>
         * <p>For example, you might choose to maintain a 10% buffer for a fleet that has
         * the capacity to host 100 simultaneous game sessions. This policy tells Amazon
         * GameLift to take action whenever the fleet's available capacity falls below or
         * rises above 10 game sessions. Amazon GameLift will start new instances or stop
         * unused instances in order to return to the 10% buffer. </p> <p>To create or
         * update a target-based policy, specify a fleet ID and name, and set the policy
         * type to "TargetBased". Specify the metric to track
         * (PercentAvailableGameSessions) and reference a <code>TargetConfiguration</code>
         * object with your desired buffer value. Exclude all other parameters. On a
         * successful request, the policy name is returned. The scaling policy is
         * automatically in force as soon as it's successfully created. If the fleet's
         * auto-scaling actions are temporarily suspended, the new policy will be in force
         * once the fleet actions are restarted.</p> <p> <b>Rule-based policy</b> </p> <p>A
         * rule-based policy tracks specified fleet metric, sets a threshold value, and
         * specifies the type of action to initiate when triggered. With a rule-based
         * policy, you can select from several available fleet metrics. Each policy
         * specifies whether to scale up or scale down (and by how much), so you need one
         * policy for each type of action. </p> <p>For example, a policy may make the
         * following statement: "If the percentage of idle instances is greater than 20%
         * for more than 15 minutes, then reduce the fleet capacity by 10%."</p> <p>A
         * policy's rule statement has the following structure:</p> <p>If
         * <code>[MetricName]</code> is <code>[ComparisonOperator]</code>
         * <code>[Threshold]</code> for <code>[EvaluationPeriods]</code> minutes, then
         * <code>[ScalingAdjustmentType]</code> to/by <code>[ScalingAdjustment]</code>.</p>
         * <p>To implement the example, the rule statement would look like this:</p> <p>If
         * <code>[PercentIdleInstances]</code> is <code>[GreaterThanThreshold]</code>
         * <code>[20]</code> for <code>[15]</code> minutes, then
         * <code>[PercentChangeInCapacity]</code> to/by <code>[10]</code>.</p> <p>To create
         * or update a scaling policy, specify a unique combination of name and fleet ID,
         * and set the policy type to "RuleBased". Specify the parameter values for a
         * policy rule statement. On a successful request, the policy name is returned.
         * Scaling policies are automatically in force as soon as they're successfully
         * created. If the fleet's auto-scaling actions are temporarily suspended, the new
         * policy will be in force once the fleet actions are restarted.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/PutScalingPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutScalingPolicyOutcome PutScalingPolicy(const Model::PutScalingPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutScalingPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutScalingPolicyOutcomeCallable PutScalingPolicyCallable(const Model::PutScalingPolicyRequest& request) const;

        /**
         * An Async wrapper for PutScalingPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutScalingPolicyAsync(const Model::PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers your compute resources in a fleet you previously created. After you
         * register a compute to your fleet, you can monitor and manage your compute using
         * GameLift. The operation returns the compute resource containing SDK endpoint you
         * can use to connect your game server to GameLift.</p> <p> <b>Learn more</b> </p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-creating-anywhere.html">Create
         * an Anywhere fleet</a> </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/integration-testing.html">Test
         * your integration</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/RegisterCompute">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterComputeOutcome RegisterCompute(const Model::RegisterComputeRequest& request) const;

        /**
         * A Callable wrapper for RegisterCompute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterComputeOutcomeCallable RegisterComputeCallable(const Model::RegisterComputeRequest& request) const;

        /**
         * An Async wrapper for RegisterCompute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterComputeAsync(const Model::RegisterComputeRequest& request, const RegisterComputeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <b>This operation is used with the GameLift FleetIQ solution and game server
         * groups.</b> </p> <p>Creates a new game server resource and notifies GameLift
         * FleetIQ that the game server is ready to host gameplay and players. This
         * operation is called by a game server process that is running on an instance in a
         * game server group. Registering game servers enables GameLift FleetIQ to track
         * available game servers and enables game clients and services to claim a game
         * server for a new game session. </p> <p>To register a game server, identify the
         * game server group and instance where the game server is running, and provide a
         * unique identifier for the game server. You can also include connection and game
         * server data.</p> <p>Once a game server is successfully registered, it is put in
         * status <code>AVAILABLE</code>. A request to register a game server may fail if
         * the instance it is running on is in the process of shutting down as part of
         * instance balancing or scale-down activity. </p> <p> <b>Learn more</b> </p> <p>
         * <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/RegisterGameServer">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterGameServerOutcome RegisterGameServer(const Model::RegisterGameServerRequest& request) const;

        /**
         * A Callable wrapper for RegisterGameServer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterGameServerOutcomeCallable RegisterGameServerCallable(const Model::RegisterGameServerRequest& request) const;

        /**
         * An Async wrapper for RegisterGameServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterGameServerAsync(const Model::RegisterGameServerRequest& request, const RegisterGameServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a fresh set of credentials for use when uploading a new set of game
         * build files to Amazon GameLift's Amazon S3. This is done as part of the build
         * creation process; see <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_CreateBuild.html">GameSession</a>.</p>
         * <p>To request new credentials, specify the build ID as returned with an initial
         * <code>CreateBuild</code> request. If successful, a new set of credentials are
         * returned, along with the S3 storage location associated with the build ID.</p>
         * <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-cli-uploading.html#gamelift-build-cli-uploading-create-build">
         * Create a Build with Files in S3</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/RequestUploadCredentials">AWS
         * API Reference</a></p>
         */
        virtual Model::RequestUploadCredentialsOutcome RequestUploadCredentials(const Model::RequestUploadCredentialsRequest& request) const;

        /**
         * A Callable wrapper for RequestUploadCredentials that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RequestUploadCredentialsOutcomeCallable RequestUploadCredentialsCallable(const Model::RequestUploadCredentialsRequest& request) const;

        /**
         * An Async wrapper for RequestUploadCredentials that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RequestUploadCredentialsAsync(const Model::RequestUploadCredentialsRequest& request, const RequestUploadCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the fleet ID that an alias is currently pointing to.</p> <p>
         * <b>Related actions</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ResolveAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::ResolveAliasOutcome ResolveAlias(const Model::ResolveAliasRequest& request) const;

        /**
         * A Callable wrapper for ResolveAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResolveAliasOutcomeCallable ResolveAliasCallable(const Model::ResolveAliasRequest& request) const;

        /**
         * An Async wrapper for ResolveAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResolveAliasAsync(const Model::ResolveAliasRequest& request, const ResolveAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <b>This operation is used with the GameLift FleetIQ solution and game server
         * groups.</b> </p> <p>Reinstates activity on a game server group after it has been
         * suspended. A game server group might be suspended by the <a
         * href="gamelift/latest/apireference/API_SuspendGameServerGroup.html">SuspendGameServerGroup</a>
         * operation, or it might be suspended involuntarily due to a configuration
         * problem. In the second case, you can manually resume activity on the group once
         * the configuration problem has been resolved. Refer to the game server group
         * status and status reason for more information on why group activity is
         * suspended.</p> <p>To resume activity, specify a game server group ARN and the
         * type of activity to be resumed. If successful, a <code>GameServerGroup</code>
         * object is returned showing that the resumed activity is no longer listed in
         * <code>SuspendedActions</code>. </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ResumeGameServerGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ResumeGameServerGroupOutcome ResumeGameServerGroup(const Model::ResumeGameServerGroupRequest& request) const;

        /**
         * A Callable wrapper for ResumeGameServerGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResumeGameServerGroupOutcomeCallable ResumeGameServerGroupCallable(const Model::ResumeGameServerGroupRequest& request) const;

        /**
         * An Async wrapper for ResumeGameServerGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResumeGameServerGroupAsync(const Model::ResumeGameServerGroupRequest& request, const ResumeGameServerGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves all active game sessions that match a set of search criteria and
         * sorts them into a specified order. </p> <p>This operation is not designed to be
         * continually called to track game session status. This practice can cause you to
         * exceed your API limit, which results in errors. Instead, you must configure
         * configure an Amazon Simple Notification Service (SNS) topic to receive
         * notifications from FlexMatch or queues. Continuously polling game session status
         * with <code>DescribeGameSessions</code> should only be used for games in
         * development with low game session usage. </p> <p>When searching for game
         * sessions, you specify exactly where you want to search and provide a search
         * filter expression, a sort expression, or both. A search request can search only
         * one fleet, but it can search all of a fleet's locations. </p> <p>This operation
         * can be used in the following ways: </p> <ul> <li> <p>To search all game sessions
         * that are currently running on all locations in a fleet, provide a fleet or alias
         * ID. This approach returns game sessions in the fleet's home Region and all
         * remote locations that fit the search criteria.</p> </li> <li> <p>To search all
         * game sessions that are currently running on a specific fleet location, provide a
         * fleet or alias ID and a location name. For location, you can specify a fleet's
         * home Region or any remote location.</p> </li> </ul> <p>Use the pagination
         * parameters to retrieve results as a set of sequential pages. </p> <p>If
         * successful, a <code>GameSession</code> object is returned for each game session
         * that matches the request. Search finds game sessions that are in
         * <code>ACTIVE</code> status only. To retrieve information on game sessions in
         * other statuses, use <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeGameSessions.html">DescribeGameSessions</a>
         * .</p> <p>You can search or sort by the following game session attributes:</p>
         * <ul> <li> <p> <b>gameSessionId</b> -- A unique identifier for the game session.
         * You can use either a <code>GameSessionId</code> or <code>GameSessionArn</code>
         * value. </p> </li> <li> <p> <b>gameSessionName</b> -- Name assigned to a game
         * session. Game session names do not need to be unique to a game session.</p>
         * </li> <li> <p> <b>gameSessionProperties</b> -- Custom data defined in a game
         * session's <code>GameProperty</code> parameter. <code>GameProperty</code> values
         * are stored as key:value pairs; the filter expression must indicate the key and a
         * string to search the data values for. For example, to search for game sessions
         * with custom data containing the key:value pair "gameMode:brawl", specify the
         * following: <code>gameSessionProperties.gameMode = "brawl"</code>. All custom
         * data values are searched as strings.</p> </li> <li> <p> <b>maximumSessions</b>
         * -- Maximum number of player sessions allowed for a game session.</p> </li> <li>
         * <p> <b>creationTimeMillis</b> -- Value indicating when a game session was
         * created. It is expressed in Unix time as milliseconds.</p> </li> <li> <p>
         * <b>playerSessionCount</b> -- Number of players currently connected to a game
         * session. This value changes rapidly as players join the session or drop out.</p>
         * </li> <li> <p> <b>hasAvailablePlayerSessions</b> -- Boolean value indicating
         * whether a game session has reached its maximum number of players. It is highly
         * recommended that all search requests include this filter attribute to optimize
         * search performance and return only sessions that players can join. </p> </li>
         * </ul>  <p>Returned values for <code>playerSessionCount</code> and
         * <code>hasAvailablePlayerSessions</code> change quickly as players join sessions
         * and others drop out. Results should be considered a snapshot in time. Be sure to
         * refresh search results often, and handle sessions that fill up before a player
         * can join. </p>  <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/SearchGameSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchGameSessionsOutcome SearchGameSessions(const Model::SearchGameSessionsRequest& request) const;

        /**
         * A Callable wrapper for SearchGameSessions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchGameSessionsOutcomeCallable SearchGameSessionsCallable(const Model::SearchGameSessionsRequest& request) const;

        /**
         * An Async wrapper for SearchGameSessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchGameSessionsAsync(const Model::SearchGameSessionsRequest& request, const SearchGameSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resumes certain types of activity on fleet instances that were suspended with
         * <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_StopFleetActions.html">StopFleetActions</a>.
         * For multi-location fleets, fleet actions are managed separately for each
         * location. Currently, this operation is used to restart a fleet's auto-scaling
         * activity.</p> <p>This operation can be used in the following ways: </p> <ul>
         * <li> <p>To restart actions on instances in the fleet's home Region, provide a
         * fleet ID and the type of actions to resume. </p> </li> <li> <p>To restart
         * actions on instances in one of the fleet's remote locations, provide a fleet ID,
         * a location name, and the type of actions to resume. </p> </li> </ul> <p>If
         * successful, GameLift once again initiates scaling events as triggered by the
         * fleet's scaling policies. If actions on the fleet location were never stopped,
         * this operation will have no effect.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift fleets</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StartFleetActions">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFleetActionsOutcome StartFleetActions(const Model::StartFleetActionsRequest& request) const;

        /**
         * A Callable wrapper for StartFleetActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartFleetActionsOutcomeCallable StartFleetActionsCallable(const Model::StartFleetActionsRequest& request) const;

        /**
         * An Async wrapper for StartFleetActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartFleetActionsAsync(const Model::StartFleetActionsRequest& request, const StartFleetActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Places a request for a new game session in a queue. When processing a
         * placement request, Amazon GameLift searches for available resources on the
         * queue's destinations, scanning each until it finds resources or the placement
         * request times out.</p> <p>A game session placement request can also request
         * player sessions. When a new game session is successfully created, Amazon
         * GameLift creates a player session for each player included in the request.</p>
         * <p>When placing a game session, by default Amazon GameLift tries each fleet in
         * the order they are listed in the queue configuration. Ideally, a queue's
         * destinations are listed in preference order.</p> <p>Alternatively, when
         * requesting a game session with players, you can also provide latency data for
         * each player in relevant Regions. Latency data indicates the performance lag a
         * player experiences when connected to a fleet in the Region. Amazon GameLift uses
         * latency data to reorder the list of destinations to place the game session in a
         * Region with minimal lag. If latency data is provided for multiple players,
         * Amazon GameLift calculates each Region's average lag for all players and
         * reorders to get the best game play across all players. </p> <p>To place a new
         * game session request, specify the following:</p> <ul> <li> <p>The queue name and
         * a set of game session properties and settings</p> </li> <li> <p>A unique ID
         * (such as a UUID) for the placement. You use this ID to track the status of the
         * placement request</p> </li> <li> <p>(Optional) A set of player data and a unique
         * player ID for each player that you are joining to the new game session (player
         * data is optional, but if you include it, you must also provide a unique ID for
         * each player)</p> </li> <li> <p>Latency data for all players (if you want to
         * optimize game play for the players)</p> </li> </ul> <p>If successful, a new game
         * session placement is created.</p> <p>To track the status of a placement request,
         * call <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeGameSessionPlacement.html">DescribeGameSessionPlacement</a>
         * and check the request's status. If the status is <code>FULFILLED</code>, a new
         * game session has been created and a game session ARN and Region are referenced.
         * If the placement request times out, you can resubmit the request or retry it
         * with a different queue. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StartGameSessionPlacement">AWS
         * API Reference</a></p>
         */
        virtual Model::StartGameSessionPlacementOutcome StartGameSessionPlacement(const Model::StartGameSessionPlacementRequest& request) const;

        /**
         * A Callable wrapper for StartGameSessionPlacement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartGameSessionPlacementOutcomeCallable StartGameSessionPlacementCallable(const Model::StartGameSessionPlacementRequest& request) const;

        /**
         * An Async wrapper for StartGameSessionPlacement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartGameSessionPlacementAsync(const Model::StartGameSessionPlacementRequest& request, const StartGameSessionPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Finds new players to fill open slots in currently running game sessions. The
         * backfill match process is essentially identical to the process of forming new
         * matches. Backfill requests use the same matchmaker that was used to make the
         * original match, and they provide matchmaking data for all players currently in
         * the game session. FlexMatch uses this information to select new players so that
         * backfilled match continues to meet the original match requirements. </p> <p>When
         * using FlexMatch with GameLift managed hosting, you can request a backfill match
         * from a client service by calling this operation with a <code>GameSessions</code>
         * ID. You also have the option of making backfill requests directly from your game
         * server. In response to a request, FlexMatch creates player sessions for the new
         * players, updates the <code>GameSession</code> resource, and sends updated
         * matchmaking data to the game server. You can request a backfill match at any
         * point after a game session is started. Each game session can have only one
         * active backfill request at a time; a subsequent request automatically replaces
         * the earlier request.</p> <p>When using FlexMatch as a standalone component,
         * request a backfill match by calling this operation without a game session
         * identifier. As with newly formed matches, matchmaking results are returned in a
         * matchmaking event so that your game can update the game session that is being
         * backfilled.</p> <p>To request a backfill match, specify a unique ticket ID, the
         * original matchmaking configuration, and matchmaking data for all current players
         * in the game session being backfilled. Optionally, specify the
         * <code>GameSession</code> ARN. If successful, a match backfill ticket is created
         * and returned with status set to QUEUED. Track the status of backfill tickets
         * using the same method for tracking tickets for new matches.</p> <p>Only game
         * sessions created by FlexMatch are supported for match backfill.</p> <p> <b>Learn
         * more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-backfill.html">
         * Backfill existing games with FlexMatch</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-events.html">
         * Matchmaking events</a> (reference)</p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/gamelift-match.html">
         * How GameLift FlexMatch works</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StartMatchBackfill">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMatchBackfillOutcome StartMatchBackfill(const Model::StartMatchBackfillRequest& request) const;

        /**
         * A Callable wrapper for StartMatchBackfill that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartMatchBackfillOutcomeCallable StartMatchBackfillCallable(const Model::StartMatchBackfillRequest& request) const;

        /**
         * An Async wrapper for StartMatchBackfill that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartMatchBackfillAsync(const Model::StartMatchBackfillRequest& request, const StartMatchBackfillResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uses FlexMatch to create a game match for a group of players based on custom
         * matchmaking rules. With games that use GameLift managed hosting, this operation
         * also triggers GameLift to find hosting resources and start a new game session
         * for the new match. Each matchmaking request includes information on one or more
         * players and specifies the FlexMatch matchmaker to use. When a request is for
         * multiple players, FlexMatch attempts to build a match that includes all players
         * in the request, placing them in the same team and finding additional players as
         * needed to fill the match. </p> <p>To start matchmaking, provide a unique ticket
         * ID, specify a matchmaking configuration, and include the players to be matched.
         * You must also include any player attributes that are required by the matchmaking
         * configuration's rule set. If successful, a matchmaking ticket is returned with
         * status set to <code>QUEUED</code>. </p> <p>Track matchmaking events to respond
         * as needed and acquire game session connection information for successfully
         * completed matches. Ticket status updates are tracked using event notification
         * through Amazon Simple Notification Service, which is defined in the matchmaking
         * configuration.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-client.html">
         * Add FlexMatch to a game client</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-notification.html">
         * Set Up FlexMatch event notification</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/gamelift-match.html">
         * How GameLift FlexMatch works</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StartMatchmaking">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMatchmakingOutcome StartMatchmaking(const Model::StartMatchmakingRequest& request) const;

        /**
         * A Callable wrapper for StartMatchmaking that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartMatchmakingOutcomeCallable StartMatchmakingCallable(const Model::StartMatchmakingRequest& request) const;

        /**
         * An Async wrapper for StartMatchmaking that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartMatchmakingAsync(const Model::StartMatchmakingRequest& request, const StartMatchmakingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Suspends certain types of activity in a fleet location. Currently, this
         * operation is used to stop auto-scaling activity. For multi-location fleets,
         * fleet actions are managed separately for each location. </p> <p>Stopping fleet
         * actions has several potential purposes. It allows you to temporarily stop
         * auto-scaling activity but retain your scaling policies for use in the future.
         * For multi-location fleets, you can set up fleet-wide auto-scaling, and then opt
         * out of it for certain locations. </p> <p>This operation can be used in the
         * following ways: </p> <ul> <li> <p>To stop actions on instances in the fleet's
         * home Region, provide a fleet ID and the type of actions to suspend. </p> </li>
         * <li> <p>To stop actions on instances in one of the fleet's remote locations,
         * provide a fleet ID, a location name, and the type of actions to suspend. </p>
         * </li> </ul> <p>If successful, GameLift no longer initiates scaling events except
         * in response to manual changes using <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_UpdateFleetCapacity.html">UpdateFleetCapacity</a>.</p>
         * <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift Fleets</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StopFleetActions">AWS
         * API Reference</a></p>
         */
        virtual Model::StopFleetActionsOutcome StopFleetActions(const Model::StopFleetActionsRequest& request) const;

        /**
         * A Callable wrapper for StopFleetActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopFleetActionsOutcomeCallable StopFleetActionsCallable(const Model::StopFleetActionsRequest& request) const;

        /**
         * An Async wrapper for StopFleetActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopFleetActionsAsync(const Model::StopFleetActionsRequest& request, const StopFleetActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels a game session placement that is in <code>PENDING</code> status. To
         * stop a placement, provide the placement ID values. If successful, the placement
         * is moved to <code>CANCELLED</code> status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StopGameSessionPlacement">AWS
         * API Reference</a></p>
         */
        virtual Model::StopGameSessionPlacementOutcome StopGameSessionPlacement(const Model::StopGameSessionPlacementRequest& request) const;

        /**
         * A Callable wrapper for StopGameSessionPlacement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopGameSessionPlacementOutcomeCallable StopGameSessionPlacementCallable(const Model::StopGameSessionPlacementRequest& request) const;

        /**
         * An Async wrapper for StopGameSessionPlacement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopGameSessionPlacementAsync(const Model::StopGameSessionPlacementRequest& request, const StopGameSessionPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels a matchmaking ticket or match backfill ticket that is currently being
         * processed. To stop the matchmaking operation, specify the ticket ID. If
         * successful, work on the ticket is stopped, and the ticket status is changed to
         * <code>CANCELLED</code>.</p> <p>This call is also used to turn off automatic
         * backfill for an individual game session. This is for game sessions that are
         * created with a matchmaking configuration that has automatic backfill enabled.
         * The ticket ID is included in the <code>MatchmakerData</code> of an updated game
         * session object, which is provided to the game server.</p>  <p>If the
         * operation is successful, the service sends back an empty JSON struct with the
         * HTTP 200 response (not an empty HTTP body).</p>  <p> <b>Learn more</b>
         * </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-client.html">
         * Add FlexMatch to a game client</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/StopMatchmaking">AWS
         * API Reference</a></p>
         */
        virtual Model::StopMatchmakingOutcome StopMatchmaking(const Model::StopMatchmakingRequest& request) const;

        /**
         * A Callable wrapper for StopMatchmaking that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopMatchmakingOutcomeCallable StopMatchmakingCallable(const Model::StopMatchmakingRequest& request) const;

        /**
         * An Async wrapper for StopMatchmaking that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopMatchmakingAsync(const Model::StopMatchmakingRequest& request, const StopMatchmakingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <b>This operation is used with the GameLift FleetIQ solution and game server
         * groups.</b> </p> <p>Temporarily stops activity on a game server group without
         * terminating instances or the game server group. You can restart activity by
         * calling <a
         * href="gamelift/latest/apireference/API_ResumeGameServerGroup.html">ResumeGameServerGroup</a>.
         * You can suspend the following activity:</p> <ul> <li> <p> <b>Instance type
         * replacement</b> - This activity evaluates the current game hosting viability of
         * all Spot instance types that are defined for the game server group. It updates
         * the Auto Scaling group to remove nonviable Spot Instance types, which have a
         * higher chance of game server interruptions. It then balances capacity across the
         * remaining viable Spot Instance types. When this activity is suspended, the Auto
         * Scaling group continues with its current balance, regardless of viability.
         * Instance protection, utilization metrics, and capacity scaling activities
         * continue to be active. </p> </li> </ul> <p>To suspend activity, specify a game
         * server group ARN and the type of activity to be suspended. If successful, a
         * <code>GameServerGroup</code> object is returned showing that the activity is
         * listed in <code>SuspendedActions</code>.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/SuspendGameServerGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::SuspendGameServerGroupOutcome SuspendGameServerGroup(const Model::SuspendGameServerGroupRequest& request) const;

        /**
         * A Callable wrapper for SuspendGameServerGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SuspendGameServerGroupOutcomeCallable SuspendGameServerGroupCallable(const Model::SuspendGameServerGroupRequest& request) const;

        /**
         * An Async wrapper for SuspendGameServerGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SuspendGameServerGroupAsync(const Model::SuspendGameServerGroupRequest& request, const SuspendGameServerGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Assigns a tag to a GameLift resource. Amazon Web Services resource tags
         * provide an additional management tool set. You can use tags to organize
         * resources, create IAM permissions policies to manage access to groups of
         * resources, customize Amazon Web Services cost breakdowns, etc. This operation
         * handles the permissions necessary to manage tags for the following GameLift
         * resource types:</p> <ul> <li> <p>Build</p> </li> <li> <p>Script</p> </li> <li>
         * <p>Fleet</p> </li> <li> <p>Alias</p> </li> <li> <p>GameSessionQueue</p> </li>
         * <li> <p>MatchmakingConfiguration</p> </li> <li> <p>MatchmakingRuleSet</p> </li>
         * </ul> <p>To add a tag to a resource, specify the unique ARN value for the
         * resource and provide a tag list containing one or more tags. The operation
         * succeeds even if the list includes tags that are already assigned to the
         * specified resource. </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
         * Amazon Web Services Resources</a> in the <i>Amazon Web Services General
         * Reference</i> </p> <p> <a
         * href="http://aws.amazon.com/answers/account-management/aws-tagging-strategies/">
         * Amazon Web Services Tagging Strategies</a> </p> <p> <b>Related actions</b> </p>
         * <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a tag that is assigned to a GameLift resource. Resource tags are used
         * to organize Amazon Web Services resources for a range of purposes. This
         * operation handles the permissions necessary to manage tags for the following
         * GameLift resource types:</p> <ul> <li> <p>Build</p> </li> <li> <p>Script</p>
         * </li> <li> <p>Fleet</p> </li> <li> <p>Alias</p> </li> <li>
         * <p>GameSessionQueue</p> </li> <li> <p>MatchmakingConfiguration</p> </li> <li>
         * <p>MatchmakingRuleSet</p> </li> </ul> <p>To remove a tag from a resource,
         * specify the unique ARN value for the resource and provide a string list
         * containing one or more tags to be removed. This operation succeeds even if the
         * list includes tags that are not currently assigned to the specified
         * resource.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
         * Amazon Web Services Resources</a> in the <i>Amazon Web Services General
         * Reference</i> </p> <p> <a
         * href="http://aws.amazon.com/answers/account-management/aws-tagging-strategies/">
         * Amazon Web Services Tagging Strategies</a> </p> <p> <b>Related actions</b> </p>
         * <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates properties for an alias. To update properties, specify the alias ID
         * to be updated and provide the information to be changed. To reassign an alias to
         * another fleet, provide an updated routing strategy. If successful, the updated
         * alias record is returned.</p> <p> <b>Related actions</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAliasOutcome UpdateAlias(const Model::UpdateAliasRequest& request) const;

        /**
         * A Callable wrapper for UpdateAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAliasOutcomeCallable UpdateAliasCallable(const Model::UpdateAliasRequest& request) const;

        /**
         * An Async wrapper for UpdateAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAliasAsync(const Model::UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates metadata in a build resource, including the build name and version.
         * To update the metadata, specify the build ID to update and provide the new
         * values. If successful, a build object containing the updated metadata is
         * returned.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/gamelift-build-intro.html">
         * Upload a Custom Server Build</a> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateBuild">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBuildOutcome UpdateBuild(const Model::UpdateBuildRequest& request) const;

        /**
         * A Callable wrapper for UpdateBuild that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBuildOutcomeCallable UpdateBuildCallable(const Model::UpdateBuildRequest& request) const;

        /**
         * An Async wrapper for UpdateBuild that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBuildAsync(const Model::UpdateBuildRequest& request, const UpdateBuildResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a fleet's mutable attributes, including game session protection and
         * resource creation limits.</p> <p>To update fleet attributes, specify the fleet
         * ID and the property values that you want to change. </p> <p>If successful, an
         * updated <code>FleetAttributes</code> object is returned.</p> <p> <b>Learn
         * more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift fleets</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateFleetAttributes">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFleetAttributesOutcome UpdateFleetAttributes(const Model::UpdateFleetAttributesRequest& request) const;

        /**
         * A Callable wrapper for UpdateFleetAttributes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFleetAttributesOutcomeCallable UpdateFleetAttributesCallable(const Model::UpdateFleetAttributesRequest& request) const;

        /**
         * An Async wrapper for UpdateFleetAttributes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFleetAttributesAsync(const Model::UpdateFleetAttributesRequest& request, const UpdateFleetAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates capacity settings for a fleet. For fleets with multiple locations,
         * use this operation to manage capacity settings in each location individually.
         * Fleet capacity determines the number of game sessions and players that can be
         * hosted based on the fleet configuration. Use this operation to set the following
         * fleet capacity properties: </p> <ul> <li> <p>Minimum/maximum size: Set hard
         * limits on fleet capacity. GameLift cannot set the fleet's capacity to a value
         * outside of this range, whether the capacity is changed manually or through
         * automatic scaling. </p> </li> <li> <p>Desired capacity: Manually set the number
         * of Amazon EC2 instances to be maintained in a fleet location. Before changing a
         * fleet's desired capacity, you may want to call <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeEC2InstanceLimits.html">DescribeEC2InstanceLimits</a>
         * to get the maximum capacity of the fleet's Amazon EC2 instance type.
         * Alternatively, consider using automatic scaling to adjust capacity based on
         * player demand.</p> </li> </ul> <p>This operation can be used in the following
         * ways: </p> <ul> <li> <p>To update capacity for a fleet's home Region, or if the
         * fleet has no remote locations, omit the <code>Location</code> parameter. The
         * fleet must be in <code>ACTIVE</code> status. </p> </li> <li> <p>To update
         * capacity for a fleet's remote location, include the <code>Location</code>
         * parameter set to the location to be updated. The location must be in
         * <code>ACTIVE</code> status.</p> </li> </ul> <p>If successful, capacity settings
         * are updated immediately. In response a change in desired capacity, GameLift
         * initiates steps to start new instances or terminate existing instances in the
         * requested fleet location. This continues until the location's active instance
         * count matches the new desired instance count. You can track a fleet's current
         * capacity by calling <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeFleetCapacity.html">DescribeFleetCapacity</a>
         * or <a
         * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_DescribeFleetLocationCapacity.html">DescribeFleetLocationCapacity</a>.
         * If the requested desired instance count is higher than the instance type's
         * limit, the <code>LimitExceeded</code> exception occurs.</p> <p> <b>Learn
         * more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-manage-capacity.html">Scaling
         * fleet capacity</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateFleetCapacity">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFleetCapacityOutcome UpdateFleetCapacity(const Model::UpdateFleetCapacityRequest& request) const;

        /**
         * A Callable wrapper for UpdateFleetCapacity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFleetCapacityOutcomeCallable UpdateFleetCapacityCallable(const Model::UpdateFleetCapacityRequest& request) const;

        /**
         * An Async wrapper for UpdateFleetCapacity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFleetCapacityAsync(const Model::UpdateFleetCapacityRequest& request, const UpdateFleetCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates permissions that allow inbound traffic to connect to game sessions
         * that are being hosted on instances in the fleet. </p> <p>To update settings,
         * specify the fleet ID to be updated and specify the changes to be made. List the
         * permissions you want to add in <code>InboundPermissionAuthorizations</code>, and
         * permissions you want to remove in <code>InboundPermissionRevocations</code>.
         * Permissions to be removed must match existing fleet permissions. </p> <p>If
         * successful, the fleet ID for the updated fleet is returned. For fleets with
         * remote locations, port setting updates can take time to propagate across all
         * locations. You can check the status of updates in each location by calling
         * <code>DescribeFleetPortSettings</code> with a location name.</p> <p> <b>Learn
         * more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift fleets</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateFleetPortSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFleetPortSettingsOutcome UpdateFleetPortSettings(const Model::UpdateFleetPortSettingsRequest& request) const;

        /**
         * A Callable wrapper for UpdateFleetPortSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFleetPortSettingsOutcomeCallable UpdateFleetPortSettingsCallable(const Model::UpdateFleetPortSettingsRequest& request) const;

        /**
         * An Async wrapper for UpdateFleetPortSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFleetPortSettingsAsync(const Model::UpdateFleetPortSettingsRequest& request, const UpdateFleetPortSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <b>This operation is used with the GameLift FleetIQ solution and game server
         * groups.</b> </p> <p>Updates information about a registered game server to help
         * GameLift FleetIQ to track game server availability. This operation is called by
         * a game server process that is running on an instance in a game server group.
         * </p> <p>Use this operation to update the following types of game server
         * information. You can make all three types of updates in the same request:</p>
         * <ul> <li> <p>To update the game server's utilization status, identify the game
         * server and game server group and specify the current utilization status. Use
         * this status to identify when game servers are currently hosting games and when
         * they are available to be claimed.</p> </li> <li> <p>To report health status,
         * identify the game server and game server group and set health check to
         * <code>HEALTHY</code>. If a game server does not report health status for a
         * certain length of time, the game server is no longer considered healthy. As a
         * result, it will be eventually deregistered from the game server group to avoid
         * affecting utilization metrics. The best practice is to report health every 60
         * seconds.</p> </li> <li> <p>To change game server metadata, provide updated game
         * server data.</p> </li> </ul> <p>Once a game server is successfully updated, the
         * relevant statuses and timestamps are updated.</p> <p> <b>Learn more</b> </p> <p>
         * <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateGameServer">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGameServerOutcome UpdateGameServer(const Model::UpdateGameServerRequest& request) const;

        /**
         * A Callable wrapper for UpdateGameServer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGameServerOutcomeCallable UpdateGameServerCallable(const Model::UpdateGameServerRequest& request) const;

        /**
         * An Async wrapper for UpdateGameServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGameServerAsync(const Model::UpdateGameServerRequest& request, const UpdateGameServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <b>This operation is used with the GameLift FleetIQ solution and game server
         * groups.</b> </p> <p>Updates GameLift FleetIQ-specific properties for a game
         * server group. Many Auto Scaling group properties are updated on the Auto Scaling
         * group directly, including the launch template, Auto Scaling policies, and
         * maximum/minimum/desired instance counts.</p> <p>To update the game server group,
         * specify the game server group ID and provide the updated values. Before applying
         * the updates, the new values are validated to ensure that GameLift FleetIQ can
         * continue to perform instance balancing activity. If successful, a
         * <code>GameServerGroup</code> object is returned.</p> <p> <b>Learn more</b> </p>
         * <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/fleetiqguide/gsg-intro.html">GameLift
         * FleetIQ Guide</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateGameServerGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGameServerGroupOutcome UpdateGameServerGroup(const Model::UpdateGameServerGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateGameServerGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGameServerGroupOutcomeCallable UpdateGameServerGroupCallable(const Model::UpdateGameServerGroupRequest& request) const;

        /**
         * An Async wrapper for UpdateGameServerGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGameServerGroupAsync(const Model::UpdateGameServerGroupRequest& request, const UpdateGameServerGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the mutable properties of a game session. </p> <p>To update a game
         * session, specify the game session ID and the values you want to change. </p>
         * <p>If successful, the updated <code>GameSession</code> object is returned. </p>
         * <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateGameSession">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGameSessionOutcome UpdateGameSession(const Model::UpdateGameSessionRequest& request) const;

        /**
         * A Callable wrapper for UpdateGameSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGameSessionOutcomeCallable UpdateGameSessionCallable(const Model::UpdateGameSessionRequest& request) const;

        /**
         * An Async wrapper for UpdateGameSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGameSessionAsync(const Model::UpdateGameSessionRequest& request, const UpdateGameSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configuration of a game session queue, which determines how the
         * queue processes new game session requests. To update settings, specify the queue
         * name to be updated and provide the new settings. When updating destinations,
         * provide a complete list of destinations. </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/queues-intro.html">
         * Using Multi-Region Queues</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateGameSessionQueue">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGameSessionQueueOutcome UpdateGameSessionQueue(const Model::UpdateGameSessionQueueRequest& request) const;

        /**
         * A Callable wrapper for UpdateGameSessionQueue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGameSessionQueueOutcomeCallable UpdateGameSessionQueueCallable(const Model::UpdateGameSessionQueueRequest& request) const;

        /**
         * An Async wrapper for UpdateGameSessionQueue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGameSessionQueueAsync(const Model::UpdateGameSessionQueueRequest& request, const UpdateGameSessionQueueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates settings for a FlexMatch matchmaking configuration. These changes
         * affect all matches and game sessions that are created after the update. To
         * update settings, specify the configuration name to be updated and provide the
         * new settings. </p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-configuration.html">
         * Design a FlexMatch matchmaker</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateMatchmakingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMatchmakingConfigurationOutcome UpdateMatchmakingConfiguration(const Model::UpdateMatchmakingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateMatchmakingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMatchmakingConfigurationOutcomeCallable UpdateMatchmakingConfigurationCallable(const Model::UpdateMatchmakingConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateMatchmakingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMatchmakingConfigurationAsync(const Model::UpdateMatchmakingConfigurationRequest& request, const UpdateMatchmakingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the current runtime configuration for the specified fleet, which
         * tells GameLift how to launch server processes on all instances in the fleet. You
         * can update a fleet's runtime configuration at any time after the fleet is
         * created; it does not need to be in <code>ACTIVE</code> status.</p> <p>To update
         * runtime configuration, specify the fleet ID and provide a
         * <code>RuntimeConfiguration</code> with an updated set of server process
         * configurations.</p> <p>If successful, the fleet's runtime configuration settings
         * are updated. Each instance in the fleet regularly checks for and retrieves
         * updated runtime configurations. Instances immediately begin complying with the
         * new configuration by launching new server processes or not replacing existing
         * processes when they shut down. Updating a fleet's runtime configuration never
         * affects existing server processes.</p> <p> <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-intro.html">Setting
         * up GameLift fleets</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateRuntimeConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRuntimeConfigurationOutcome UpdateRuntimeConfiguration(const Model::UpdateRuntimeConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateRuntimeConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRuntimeConfigurationOutcomeCallable UpdateRuntimeConfigurationCallable(const Model::UpdateRuntimeConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateRuntimeConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRuntimeConfigurationAsync(const Model::UpdateRuntimeConfigurationRequest& request, const UpdateRuntimeConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates Realtime script metadata and content.</p> <p>To update script
         * metadata, specify the script ID and provide updated name and/or version values.
         * </p> <p>To update script content, provide an updated zip file by pointing to
         * either a local file or an Amazon S3 bucket location. You can use either method
         * regardless of how the original script was uploaded. Use the <i>Version</i>
         * parameter to track updates to the script.</p> <p>If the call is successful, the
         * updated metadata is stored in the script record and a revised script is uploaded
         * to the Amazon GameLift service. Once the script is updated and acquired by a
         * fleet instance, the new version is used for all new game sessions. </p> <p>
         * <b>Learn more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/realtime-intro.html">Amazon
         * GameLift Realtime Servers</a> </p> <p> <b>Related actions</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/reference-awssdk.html#reference-awssdk-resources-fleets">All
         * APIs by task</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/UpdateScript">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateScriptOutcome UpdateScript(const Model::UpdateScriptRequest& request) const;

        /**
         * A Callable wrapper for UpdateScript that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateScriptOutcomeCallable UpdateScriptCallable(const Model::UpdateScriptRequest& request) const;

        /**
         * An Async wrapper for UpdateScript that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateScriptAsync(const Model::UpdateScriptRequest& request, const UpdateScriptResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Validates the syntax of a matchmaking rule or rule set. This operation checks
         * that the rule set is using syntactically correct JSON and that it conforms to
         * allowed property expressions. To validate syntax, provide a rule set JSON
         * string.</p> <p> <b>Learn more</b> </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/gamelift/latest/flexmatchguide/match-rulesets.html">Build
         * a rule set</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ValidateMatchmakingRuleSet">AWS
         * API Reference</a></p>
         */
        virtual Model::ValidateMatchmakingRuleSetOutcome ValidateMatchmakingRuleSet(const Model::ValidateMatchmakingRuleSetRequest& request) const;

        /**
         * A Callable wrapper for ValidateMatchmakingRuleSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ValidateMatchmakingRuleSetOutcomeCallable ValidateMatchmakingRuleSetCallable(const Model::ValidateMatchmakingRuleSetRequest& request) const;

        /**
         * An Async wrapper for ValidateMatchmakingRuleSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ValidateMatchmakingRuleSetAsync(const Model::ValidateMatchmakingRuleSetRequest& request, const ValidateMatchmakingRuleSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<GameLiftEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<GameLiftClient>;
      void init(const GameLiftClientConfiguration& clientConfiguration);

      GameLiftClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<GameLiftEndpointProviderBase> m_endpointProvider;
  };

} // namespace GameLift
} // namespace Aws
