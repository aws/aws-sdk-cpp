/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/gameliftstreams/GameLiftStreamsServiceClientModel.h>

namespace Aws
{
namespace GameLiftStreams
{
  /**
   * <p><fullname>Amazon GameLift Streams</fullname> <p>Amazon GameLift Streams
   * provides a global cloud solution for content streaming experiences. Use Amazon
   * GameLift Streams tools to upload and configure content for streaming, deploy and
   * scale computing resources to host streams, and manage stream session placement
   * to meet customer demand.</p> <p>This Reference Guide describes the Amazon
   * GameLift Streams service API. You can use the API through the Amazon Web
   * Services SDK, the Command Line Interface (AWS CLI), or by making direct REST
   * calls through HTTPS.</p> <p>See the <i>Amazon GameLift Streams Developer
   * Guide</i> for more information on how Amazon GameLift Streams works and how to
   * work with it.</p></p>
   */
  class AWS_GAMELIFTSTREAMS_API GameLiftStreamsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<GameLiftStreamsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef GameLiftStreamsClientConfiguration ClientConfigurationType;
      typedef GameLiftStreamsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GameLiftStreamsClient(const Aws::GameLiftStreams::GameLiftStreamsClientConfiguration& clientConfiguration = Aws::GameLiftStreams::GameLiftStreamsClientConfiguration(),
                              std::shared_ptr<GameLiftStreamsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GameLiftStreamsClient(const Aws::Auth::AWSCredentials& credentials,
                              std::shared_ptr<GameLiftStreamsEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::GameLiftStreams::GameLiftStreamsClientConfiguration& clientConfiguration = Aws::GameLiftStreams::GameLiftStreamsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GameLiftStreamsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              std::shared_ptr<GameLiftStreamsEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::GameLiftStreams::GameLiftStreamsClientConfiguration& clientConfiguration = Aws::GameLiftStreams::GameLiftStreamsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GameLiftStreamsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GameLiftStreamsClient(const Aws::Auth::AWSCredentials& credentials,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GameLiftStreamsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~GameLiftStreamsClient();

        /**
         * <p> Add locations that can host stream sessions. You configure locations and
         * their corresponding capacity for each stream group. Creating a stream group in a
         * location that's nearest to your end users can help minimize latency and improve
         * quality. </p> <p> This operation provisions stream capacity at the specified
         * locations. By default, all locations have 1 or 2 capacity, depending on the
         * stream class option: 2 for 'High' and 1 for 'Ultra' and 'Win2022'. This
         * operation also copies the content files of all associated applications to an
         * internal S3 bucket at each location. This allows Amazon GameLift Streams to host
         * performant stream sessions. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/AddStreamGroupLocations">AWS
         * API Reference</a></p>
         */
        virtual Model::AddStreamGroupLocationsOutcome AddStreamGroupLocations(const Model::AddStreamGroupLocationsRequest& request) const;

        /**
         * A Callable wrapper for AddStreamGroupLocations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddStreamGroupLocationsRequestT = Model::AddStreamGroupLocationsRequest>
        Model::AddStreamGroupLocationsOutcomeCallable AddStreamGroupLocationsCallable(const AddStreamGroupLocationsRequestT& request) const
        {
            return SubmitCallable(&GameLiftStreamsClient::AddStreamGroupLocations, request);
        }

        /**
         * An Async wrapper for AddStreamGroupLocations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddStreamGroupLocationsRequestT = Model::AddStreamGroupLocationsRequest>
        void AddStreamGroupLocationsAsync(const AddStreamGroupLocationsRequestT& request, const AddStreamGroupLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameLiftStreamsClient::AddStreamGroupLocations, request, handler, context);
        }

        /**
         * <p>When you associate, or link, an application with a stream group, then Amazon
         * GameLift Streams can launch the application using the stream group's allocated
         * compute resources. The stream group must be in <code>ACTIVE</code> status. You
         * can reverse this action by using <a>DisassociateApplications</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/AssociateApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateApplicationsOutcome AssociateApplications(const Model::AssociateApplicationsRequest& request) const;

        /**
         * A Callable wrapper for AssociateApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateApplicationsRequestT = Model::AssociateApplicationsRequest>
        Model::AssociateApplicationsOutcomeCallable AssociateApplicationsCallable(const AssociateApplicationsRequestT& request) const
        {
            return SubmitCallable(&GameLiftStreamsClient::AssociateApplications, request);
        }

        /**
         * An Async wrapper for AssociateApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateApplicationsRequestT = Model::AssociateApplicationsRequest>
        void AssociateApplicationsAsync(const AssociateApplicationsRequestT& request, const AssociateApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameLiftStreamsClient::AssociateApplications, request, handler, context);
        }

        /**
         * <p>Creates an application resource in Amazon GameLift Streams, which specifies
         * the application content you want to stream, such as a game build or other
         * software, and configures the settings to run it.</p> <p> Before you create an
         * application, upload your application content files to an Amazon Simple Storage
         * Service (Amazon S3) bucket. For more information, see <b>Getting Started</b> in
         * the Amazon GameLift Streams Developer Guide. </p>  <p> Make sure that
         * your files in the Amazon S3 bucket are the correct version you want to use. As
         * soon as you create a Amazon GameLift Streams application, you cannot change the
         * files at a later time. </p>  <p> If the request is successful,
         * Amazon GameLift Streams begins to create an application and sets the status to
         * <code>INITIALIZED</code>. When an application reaches <code>READY</code> status,
         * you can use the application to set up stream groups and start streams. To track
         * application status, call <a>GetApplication</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/CreateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

        /**
         * A Callable wrapper for CreateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateApplicationRequestT = Model::CreateApplicationRequest>
        Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const CreateApplicationRequestT& request) const
        {
            return SubmitCallable(&GameLiftStreamsClient::CreateApplication, request);
        }

        /**
         * An Async wrapper for CreateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateApplicationRequestT = Model::CreateApplicationRequest>
        void CreateApplicationAsync(const CreateApplicationRequestT& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameLiftStreamsClient::CreateApplication, request, handler, context);
        }

        /**
         * <p> Manage how Amazon GameLift Streams streams your applications by using a
         * stream group. A stream group is a collection of resources that Amazon GameLift
         * Streams uses to stream your application to end-users. When you create a stream
         * group, you specify an application to stream by default and the type of hardware
         * to use, such as the graphical processing unit (GPU). You can also link
         * additional applications, which allows you to stream those applications using
         * this stream group. Depending on your expected users, you also scale the number
         * of concurrent streams you want to support at one time, and in what locations.
         * </p> <p> Stream capacity represents the number of concurrent streams that can be
         * active at a time. You set stream capacity per location, per stream group. There
         * are two types of capacity: always-on and on-demand: </p> <ul> <li> <p>
         * <b>Always-on</b>: The streaming capacity that is allocated and ready to handle
         * stream requests without delay. You pay for this capacity whether it's in use or
         * not. Best for quickest time from streaming request to streaming session.
         * <pre><code> &lt;/p&gt; &lt;/li&gt; &lt;li&gt; &lt;p&gt;
         * &lt;b&gt;On-demand&lt;/b&gt;: The streaming capacity that Amazon GameLift
         * Streams can allocate in response to stream requests, and then de-allocate when
         * the session has terminated. This offers a cost control measure at the expense of
         * a greater startup time (typically under 5 minutes). &lt;/p&gt; &lt;/li&gt;
         * &lt;/ul&gt; &lt;p&gt; To adjust the capacity of any
         * &lt;code&gt;ACTIVE&lt;/code&gt; stream group, call
         * &lt;a&gt;UpdateStreamGroup&lt;/a&gt;. &lt;/p&gt; &lt;p&gt; If the request is
         * successful, Amazon GameLift Streams begins creating the stream group. Amazon
         * GameLift Streams assigns a unique ID to the stream group resource and sets the
         * status to &lt;code&gt;ACTIVATING&lt;/code&gt;. When the stream group reaches
         * &lt;code&gt;ACTIVE&lt;/code&gt; status, you can start stream sessions by using
         * &lt;a&gt;StartStreamSession&lt;/a&gt;. To check the stream group's status, call
         * &lt;a&gt;GetStreamGroup&lt;/a&gt;. &lt;/p&gt; </code></pre><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/CreateStreamGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamGroupOutcome CreateStreamGroup(const Model::CreateStreamGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateStreamGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateStreamGroupRequestT = Model::CreateStreamGroupRequest>
        Model::CreateStreamGroupOutcomeCallable CreateStreamGroupCallable(const CreateStreamGroupRequestT& request) const
        {
            return SubmitCallable(&GameLiftStreamsClient::CreateStreamGroup, request);
        }

        /**
         * An Async wrapper for CreateStreamGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateStreamGroupRequestT = Model::CreateStreamGroupRequest>
        void CreateStreamGroupAsync(const CreateStreamGroupRequestT& request, const CreateStreamGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameLiftStreamsClient::CreateStreamGroup, request, handler, context);
        }

        /**
         * <p>Allows clients to reconnect to a recently disconnected stream session without
         * losing any data from the last session.</p> <p>A client can reconnect to a stream
         * session that's in <code>PENDING_CLIENT_RECONNECTION</code> or
         * <code>ACTIVE</code> status. In the stream session life cycle, when the client
         * disconnects from the stream session, the stream session transitions from
         * <code>CONNECTED</code> to <code>PENDING_CLIENT_RECONNECTION</code> status. When
         * a client requests to reconnect by calling
         * <code>CreateStreamSessionConnection</code>, the stream session transitions to
         * <code>RECONNECTING</code> status. When the reconnection is successful, the
         * stream session transitions to <code>ACTIVE</code> status. After a stream session
         * is disconnected for longer than <code>ConnectionTimeoutSeconds</code>, the
         * stream session transitions to the <code>TERMINATED</code> status.</p> <p>To
         * connect to an existing stream session, specify the stream group ID and stream
         * session ID that you want to reconnect to, as well as the signal request settings
         * to use with the stream.</p> <p> <code>ConnectionTimeoutSeconds</code> defines
         * the amount of time after the stream session disconnects that a reconnection is
         * allowed. If a client is disconnected from the stream for longer than
         * <code>ConnectionTimeoutSeconds</code>, the stream session ends.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/CreateStreamSessionConnection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamSessionConnectionOutcome CreateStreamSessionConnection(const Model::CreateStreamSessionConnectionRequest& request) const;

        /**
         * A Callable wrapper for CreateStreamSessionConnection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateStreamSessionConnectionRequestT = Model::CreateStreamSessionConnectionRequest>
        Model::CreateStreamSessionConnectionOutcomeCallable CreateStreamSessionConnectionCallable(const CreateStreamSessionConnectionRequestT& request) const
        {
            return SubmitCallable(&GameLiftStreamsClient::CreateStreamSessionConnection, request);
        }

        /**
         * An Async wrapper for CreateStreamSessionConnection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateStreamSessionConnectionRequestT = Model::CreateStreamSessionConnectionRequest>
        void CreateStreamSessionConnectionAsync(const CreateStreamSessionConnectionRequestT& request, const CreateStreamSessionConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameLiftStreamsClient::CreateStreamSessionConnection, request, handler, context);
        }

        /**
         * <p>Permanently deletes an Amazon GameLift Streams application resource. This
         * also deletes the application content files stored with Amazon GameLift Streams.
         * However, this does not delete the original files that you uploaded to your
         * Amazon S3 bucket; you can delete these any time after Amazon GameLift Streams
         * creates an application, which is the only time Amazon GameLift Streams accesses
         * your Amazon S3 bucket.</p> <p> You can only delete an application that meets the
         * following conditions: </p> <ul> <li> <p>The application is in <code>READY</code>
         * or <code>ERROR</code> status. You cannot delete an application that's in
         * <code>PROCESSING</code> or <code>INITIALIZED</code> status.</p> </li> <li>
         * <p>The application is not the default application of any stream groups. You must
         * first delete the stream group by using <a>DeleteStreamGroup</a>.</p> </li> <li>
         * <p>The application is not linked to any stream groups. You must first unlink the
         * stream group by using <a>DisassociateApplications</a>.</p> </li> <li> <p> An
         * application is not streaming in any ongoing stream session. You must wait until
         * the client ends the stream session or call <a>TerminateStreamSession</a> to end
         * the stream. </p> </li> </ul> <p>If any active stream groups exist for this
         * application, this request returns a <code>ValidationException</code>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

        /**
         * A Callable wrapper for DeleteApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
        Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const DeleteApplicationRequestT& request) const
        {
            return SubmitCallable(&GameLiftStreamsClient::DeleteApplication, request);
        }

        /**
         * An Async wrapper for DeleteApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
        void DeleteApplicationAsync(const DeleteApplicationRequestT& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameLiftStreamsClient::DeleteApplication, request, handler, context);
        }

        /**
         * <p>Permanently deletes all compute resources and information related to a stream
         * group. To delete a stream group, specify the unique stream group identifier.
         * During the deletion process, the stream group's status is <code>DELETING</code>.
         * This operation stops streams in progress and prevents new streams from starting.
         * As a best practice, before deleting the stream group, call
         * <a>ListStreamSessions</a> to check for streams in progress and take action to
         * stop them. When you delete a stream group, any application associations
         * referring to that stream group are automatically removed.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/DeleteStreamGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStreamGroupOutcome DeleteStreamGroup(const Model::DeleteStreamGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteStreamGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteStreamGroupRequestT = Model::DeleteStreamGroupRequest>
        Model::DeleteStreamGroupOutcomeCallable DeleteStreamGroupCallable(const DeleteStreamGroupRequestT& request) const
        {
            return SubmitCallable(&GameLiftStreamsClient::DeleteStreamGroup, request);
        }

        /**
         * An Async wrapper for DeleteStreamGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteStreamGroupRequestT = Model::DeleteStreamGroupRequest>
        void DeleteStreamGroupAsync(const DeleteStreamGroupRequestT& request, const DeleteStreamGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameLiftStreamsClient::DeleteStreamGroup, request, handler, context);
        }

        /**
         * <p> When you disassociate, or unlink, an application from a stream group, you
         * can no longer stream this application by using that stream group's allocated
         * compute resources. Any streams in process will continue until they terminate,
         * which helps avoid interrupting an end-user's stream. Amazon GameLift Streams
         * will not initiate new streams using this stream group. The disassociate action
         * does not affect the stream capacity of a stream group. </p> <p> You can only
         * disassociate an application if it's not a default application of the stream
         * group. Check <code>DefaultApplicationIdentifier</code> by calling
         * <a>GetStreamGroup</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/DisassociateApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateApplicationsOutcome DisassociateApplications(const Model::DisassociateApplicationsRequest& request) const;

        /**
         * A Callable wrapper for DisassociateApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateApplicationsRequestT = Model::DisassociateApplicationsRequest>
        Model::DisassociateApplicationsOutcomeCallable DisassociateApplicationsCallable(const DisassociateApplicationsRequestT& request) const
        {
            return SubmitCallable(&GameLiftStreamsClient::DisassociateApplications, request);
        }

        /**
         * An Async wrapper for DisassociateApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateApplicationsRequestT = Model::DisassociateApplicationsRequest>
        void DisassociateApplicationsAsync(const DisassociateApplicationsRequestT& request, const DisassociateApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameLiftStreamsClient::DisassociateApplications, request, handler, context);
        }

        /**
         * <p> Export the files that your application modifies or generates in a stream
         * session, which can help you debug or verify your application. When your
         * application runs, it generates output files such as logs, diagnostic
         * information, crash dumps, save files, user data, screenshots, and so on. The
         * files can be defined by the engine or frameworks that your application uses, or
         * information that you've programmed your application to output. </p> <p> You can
         * only call this action on a stream session that is in progress, specifically in
         * one of the following statuses <code>ACTIVE</code>, <code>CONNECTED</code>,
         * <code>PENDING_CLIENT_RECONNECTION</code>, and <code>RECONNECTING</code>. You
         * must provide an Amazon Simple Storage Service (Amazon S3) bucket to store the
         * files in. When the session ends, Amazon GameLift Streams produces a compressed
         * folder that contains all of the files and directories that were modified or
         * created by the application during the stream session. AWS uses your security
         * credentials to authenticate and authorize access to your Amazon S3 bucket. </p>
         * <p>Amazon GameLift Streams collects the following generated and modified files.
         * Find them in the corresponding folders in the <code>.zip</code> archive.</p>
         * <ul> <li> <p> <code>application/</code>: The folder where your application or
         * game is stored. </p> </li> </ul> <ul> <li> <p> <code>profile/</code>: The user
         * profile folder.</p> </li> <li> <p> <code>temp/</code>: The system temp
         * folder.</p> </li> </ul> <p/> <p>To verify the status of the exported files, use
         * GetStreamSession. </p> <p>To delete the files, delete the object in the S3
         * bucket. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/ExportStreamSessionFiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportStreamSessionFilesOutcome ExportStreamSessionFiles(const Model::ExportStreamSessionFilesRequest& request) const;

        /**
         * A Callable wrapper for ExportStreamSessionFiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExportStreamSessionFilesRequestT = Model::ExportStreamSessionFilesRequest>
        Model::ExportStreamSessionFilesOutcomeCallable ExportStreamSessionFilesCallable(const ExportStreamSessionFilesRequestT& request) const
        {
            return SubmitCallable(&GameLiftStreamsClient::ExportStreamSessionFiles, request);
        }

        /**
         * An Async wrapper for ExportStreamSessionFiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExportStreamSessionFilesRequestT = Model::ExportStreamSessionFilesRequest>
        void ExportStreamSessionFilesAsync(const ExportStreamSessionFilesRequestT& request, const ExportStreamSessionFilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameLiftStreamsClient::ExportStreamSessionFiles, request, handler, context);
        }

        /**
         * <p>Retrieves properties for an Amazon GameLift Streams application resource.
         * Specify the ID of the application that you want to retrieve. If the operation is
         * successful, it returns properties for the requested application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/GetApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationOutcome GetApplication(const Model::GetApplicationRequest& request) const;

        /**
         * A Callable wrapper for GetApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApplicationRequestT = Model::GetApplicationRequest>
        Model::GetApplicationOutcomeCallable GetApplicationCallable(const GetApplicationRequestT& request) const
        {
            return SubmitCallable(&GameLiftStreamsClient::GetApplication, request);
        }

        /**
         * An Async wrapper for GetApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApplicationRequestT = Model::GetApplicationRequest>
        void GetApplicationAsync(const GetApplicationRequestT& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameLiftStreamsClient::GetApplication, request, handler, context);
        }

        /**
         * <p>Retrieves properties for a Amazon GameLift Streams stream group resource.
         * Specify the ID of the stream group that you want to retrieve. If the operation
         * is successful, it returns properties for the requested stream
         * group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/GetStreamGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStreamGroupOutcome GetStreamGroup(const Model::GetStreamGroupRequest& request) const;

        /**
         * A Callable wrapper for GetStreamGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStreamGroupRequestT = Model::GetStreamGroupRequest>
        Model::GetStreamGroupOutcomeCallable GetStreamGroupCallable(const GetStreamGroupRequestT& request) const
        {
            return SubmitCallable(&GameLiftStreamsClient::GetStreamGroup, request);
        }

        /**
         * An Async wrapper for GetStreamGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStreamGroupRequestT = Model::GetStreamGroupRequest>
        void GetStreamGroupAsync(const GetStreamGroupRequestT& request, const GetStreamGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameLiftStreamsClient::GetStreamGroup, request, handler, context);
        }

        /**
         * <p>Retrieves properties for a Amazon GameLift Streams stream session resource.
         * Specify the Amazon Resource Name (ARN) of the stream session that you want to
         * retrieve and its stream group ARN. If the operation is successful, it returns
         * properties for the requested resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/GetStreamSession">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStreamSessionOutcome GetStreamSession(const Model::GetStreamSessionRequest& request) const;

        /**
         * A Callable wrapper for GetStreamSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStreamSessionRequestT = Model::GetStreamSessionRequest>
        Model::GetStreamSessionOutcomeCallable GetStreamSessionCallable(const GetStreamSessionRequestT& request) const
        {
            return SubmitCallable(&GameLiftStreamsClient::GetStreamSession, request);
        }

        /**
         * An Async wrapper for GetStreamSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStreamSessionRequestT = Model::GetStreamSessionRequest>
        void GetStreamSessionAsync(const GetStreamSessionRequestT& request, const GetStreamSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameLiftStreamsClient::GetStreamSession, request, handler, context);
        }

        /**
         * <p>Retrieves a list of all Amazon GameLift Streams applications that are
         * associated with the Amazon Web Services account in use. This operation returns
         * applications in all statuses, in no particular order. You can paginate the
         * results as needed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/ListApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApplicationsRequestT = Model::ListApplicationsRequest>
        Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const ListApplicationsRequestT& request = {}) const
        {
            return SubmitCallable(&GameLiftStreamsClient::ListApplications, request);
        }

        /**
         * An Async wrapper for ListApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationsRequestT = Model::ListApplicationsRequest>
        void ListApplicationsAsync(const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListApplicationsRequestT& request = {}) const
        {
            return SubmitAsync(&GameLiftStreamsClient::ListApplications, request, handler, context);
        }

        /**
         * <p>Retrieves a list of all Amazon GameLift Streams stream groups that are
         * associated with the Amazon Web Services account in use. This operation returns
         * stream groups in all statuses, in no particular order. You can paginate the
         * results as needed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/ListStreamGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStreamGroupsOutcome ListStreamGroups(const Model::ListStreamGroupsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListStreamGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStreamGroupsRequestT = Model::ListStreamGroupsRequest>
        Model::ListStreamGroupsOutcomeCallable ListStreamGroupsCallable(const ListStreamGroupsRequestT& request = {}) const
        {
            return SubmitCallable(&GameLiftStreamsClient::ListStreamGroups, request);
        }

        /**
         * An Async wrapper for ListStreamGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStreamGroupsRequestT = Model::ListStreamGroupsRequest>
        void ListStreamGroupsAsync(const ListStreamGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListStreamGroupsRequestT& request = {}) const
        {
            return SubmitAsync(&GameLiftStreamsClient::ListStreamGroups, request, handler, context);
        }

        /**
         * <p>Retrieves a list of Amazon GameLift Streams stream sessions that a stream
         * group is hosting.</p> <p>To retrieve stream sessions, specify the stream group,
         * and optionally filter by stream session status. You can paginate the results as
         * needed.</p> <p>This operation returns the requested stream sessions in no
         * particular order.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/ListStreamSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStreamSessionsOutcome ListStreamSessions(const Model::ListStreamSessionsRequest& request) const;

        /**
         * A Callable wrapper for ListStreamSessions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStreamSessionsRequestT = Model::ListStreamSessionsRequest>
        Model::ListStreamSessionsOutcomeCallable ListStreamSessionsCallable(const ListStreamSessionsRequestT& request) const
        {
            return SubmitCallable(&GameLiftStreamsClient::ListStreamSessions, request);
        }

        /**
         * An Async wrapper for ListStreamSessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStreamSessionsRequestT = Model::ListStreamSessionsRequest>
        void ListStreamSessionsAsync(const ListStreamSessionsRequestT& request, const ListStreamSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameLiftStreamsClient::ListStreamSessions, request, handler, context);
        }

        /**
         * <p>Retrieves a list of Amazon GameLift Streams stream sessions that this user
         * account has access to.</p> <p>In the returned list of stream sessions, the
         * <code>ExportFilesMetadata</code> property only shows the <code>Status</code>
         * value. To get the <code>OutpurUri</code> and <code>StatusReason</code> values,
         * use <a>GetStreamSession</a>.</p> <p>We don't recommend using this operation to
         * regularly check stream session statuses because it's costly. Instead, to check
         * status updates for a specific stream session, use
         * <a>GetStreamSession</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/ListStreamSessionsByAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStreamSessionsByAccountOutcome ListStreamSessionsByAccount(const Model::ListStreamSessionsByAccountRequest& request = {}) const;

        /**
         * A Callable wrapper for ListStreamSessionsByAccount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStreamSessionsByAccountRequestT = Model::ListStreamSessionsByAccountRequest>
        Model::ListStreamSessionsByAccountOutcomeCallable ListStreamSessionsByAccountCallable(const ListStreamSessionsByAccountRequestT& request = {}) const
        {
            return SubmitCallable(&GameLiftStreamsClient::ListStreamSessionsByAccount, request);
        }

        /**
         * An Async wrapper for ListStreamSessionsByAccount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStreamSessionsByAccountRequestT = Model::ListStreamSessionsByAccountRequest>
        void ListStreamSessionsByAccountAsync(const ListStreamSessionsByAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListStreamSessionsByAccountRequestT& request = {}) const
        {
            return SubmitAsync(&GameLiftStreamsClient::ListStreamSessionsByAccount, request, handler, context);
        }

        /**
         * <p>Retrieves all tags assigned to a Amazon GameLift Streams resource. To list
         * tags for a resource, specify the ARN value for the resource.</p> <p> <b>Learn
         * more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
         * Amazon Web Services Resources</a> in the <i>Amazon Web Services General
         * Reference</i> </p> <p> <a
         * href="http://aws.amazon.com/answers/account-management/aws-tagging-strategies/">
         * Amazon Web Services Tagging Strategies</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&GameLiftStreamsClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameLiftStreamsClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p> Removes a set of remote locations from this stream group. Amazon GameLift
         * Streams works to release allocated compute resources in these location. Thus,
         * stream sessions can no longer start from these locations by using this stream
         * group. Amazon GameLift Streams also deletes the content files of all associated
         * applications that were in Amazon GameLift Streams's internal S3 bucket at this
         * location. </p> <p> You cannot remove the region where you initially created this
         * stream group, known as the primary location. However, you can set the stream
         * capacity to zero. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/RemoveStreamGroupLocations">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveStreamGroupLocationsOutcome RemoveStreamGroupLocations(const Model::RemoveStreamGroupLocationsRequest& request) const;

        /**
         * A Callable wrapper for RemoveStreamGroupLocations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveStreamGroupLocationsRequestT = Model::RemoveStreamGroupLocationsRequest>
        Model::RemoveStreamGroupLocationsOutcomeCallable RemoveStreamGroupLocationsCallable(const RemoveStreamGroupLocationsRequestT& request) const
        {
            return SubmitCallable(&GameLiftStreamsClient::RemoveStreamGroupLocations, request);
        }

        /**
         * An Async wrapper for RemoveStreamGroupLocations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveStreamGroupLocationsRequestT = Model::RemoveStreamGroupLocationsRequest>
        void RemoveStreamGroupLocationsAsync(const RemoveStreamGroupLocationsRequestT& request, const RemoveStreamGroupLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameLiftStreamsClient::RemoveStreamGroupLocations, request, handler, context);
        }

        /**
         * <p> This action initiates a new stream session and outputs connection
         * information that clients can use to access the stream. A stream session refers
         * to an instance of a stream that Amazon GameLift Streams transmits from the
         * server to the end-user. A stream session runs on a compute resource, or stream
         * capacity, that a stream group has allocated. </p> <p>To start a new stream
         * session, specify a stream group and application ID, along with the transport
         * protocol and signal request settings to use with the stream. You must have
         * associated at least one application to the stream group before starting a stream
         * session, either when creating the stream group, or by using
         * <a>AssociateApplications</a>.</p> <p> For stream groups that have multiple
         * locations, provide a set of locations ordered by priority by setting
         * <code>Locations</code>. Amazon GameLift Streams will start a single stream
         * session in the next available location. An application must be finished
         * replicating in a remote location before the remote location can host a stream.
         * </p> <p> If the request is successful, Amazon GameLift Streams begins to prepare
         * the stream. Amazon GameLift Streams assigns an Amazon Resource Name (ARN) value
         * to the stream session resource and sets the status to <code>ACTIVATING</code>.
         * During the stream preparation process, Amazon GameLift Streams queues the
         * request and searches for available stream capacity to run the stream. This can
         * result to one of the following: </p> <ul> <li> <p> Amazon GameLift Streams
         * identifies an available compute resource to run the application content and
         * start the stream. When the stream is ready, the stream session's status changes
         * to <code>ACTIVE</code> and includes stream connection information. Provide the
         * connection information to the requesting client to join the stream session.</p>
         * </li> <li> <p> Amazon GameLift Streams doesn't identify an available resource
         * within a certain time, set by <code>ClientToken</code>. In this case, Amazon
         * GameLift Streams stops processing the request, and the stream session object
         * status changes to <code>ERROR</code> with status reason
         * <code>placementTimeout</code>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/StartStreamSession">AWS
         * API Reference</a></p>
         */
        virtual Model::StartStreamSessionOutcome StartStreamSession(const Model::StartStreamSessionRequest& request) const;

        /**
         * A Callable wrapper for StartStreamSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartStreamSessionRequestT = Model::StartStreamSessionRequest>
        Model::StartStreamSessionOutcomeCallable StartStreamSessionCallable(const StartStreamSessionRequestT& request) const
        {
            return SubmitCallable(&GameLiftStreamsClient::StartStreamSession, request);
        }

        /**
         * An Async wrapper for StartStreamSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartStreamSessionRequestT = Model::StartStreamSessionRequest>
        void StartStreamSessionAsync(const StartStreamSessionRequestT& request, const StartStreamSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameLiftStreamsClient::StartStreamSession, request, handler, context);
        }

        /**
         * <p>Assigns one or more tags to a Amazon GameLift Streams resource. Use tags to
         * organize Amazon Web Services resources for a range of purposes. You can assign
         * tags to the following Amazon GameLift Streams resource types:</p> <ul> <li>
         * <p>Application</p> </li> <li> <p>StreamGroup</p> </li> </ul> <p> <b>Learn
         * more</b> </p> <p> <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
         * Amazon Web Services Resources</a> in the <i>Amazon Web Services General
         * Reference</i> </p> <p> <a
         * href="http://aws.amazon.com/answers/account-management/aws-tagging-strategies/">
         * Amazon Web Services Tagging Strategies</a> </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&GameLiftStreamsClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameLiftStreamsClient::TagResource, request, handler, context);
        }

        /**
         * <p>Permanently terminates an active stream session. When called, the stream
         * session status changes to <code>TERMINATING</code>. You can terminate a stream
         * session in any status except <code>ACTIVATING</code>. If the stream session is
         * in <code>ACTIVATING</code> status, an exception is thrown.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/TerminateStreamSession">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateStreamSessionOutcome TerminateStreamSession(const Model::TerminateStreamSessionRequest& request) const;

        /**
         * A Callable wrapper for TerminateStreamSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TerminateStreamSessionRequestT = Model::TerminateStreamSessionRequest>
        Model::TerminateStreamSessionOutcomeCallable TerminateStreamSessionCallable(const TerminateStreamSessionRequestT& request) const
        {
            return SubmitCallable(&GameLiftStreamsClient::TerminateStreamSession, request);
        }

        /**
         * An Async wrapper for TerminateStreamSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TerminateStreamSessionRequestT = Model::TerminateStreamSessionRequest>
        void TerminateStreamSessionAsync(const TerminateStreamSessionRequestT& request, const TerminateStreamSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameLiftStreamsClient::TerminateStreamSession, request, handler, context);
        }

        /**
         * <p>Removes one or more tags from a Amazon GameLift Streams resource. To remove
         * tags, specify the Amazon GameLift Streams resource and a list of one or more
         * tags to remove.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&GameLiftStreamsClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameLiftStreamsClient::UntagResource, request, handler, context);
        }

        /**
         * <p> Updates the mutable configuration settings for a Amazon GameLift Streams
         * application resource. You can change the <code>Description</code>,
         * <code>ApplicationLogOutputUri</code>, and <code>ApplicationLogPaths</code>. </p>
         * <p>To update application settings, specify the application ID and provide the
         * new values. If the operation is successful, it returns the complete updated set
         * of settings for the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

        /**
         * A Callable wrapper for UpdateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
        Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const UpdateApplicationRequestT& request) const
        {
            return SubmitCallable(&GameLiftStreamsClient::UpdateApplication, request);
        }

        /**
         * An Async wrapper for UpdateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
        void UpdateApplicationAsync(const UpdateApplicationRequestT& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameLiftStreamsClient::UpdateApplication, request, handler, context);
        }

        /**
         * <p> Updates the configuration settings for an Amazon GameLift Streams stream
         * group resource. You can change the description, the set of locations, and the
         * requested capacity of a stream group per location. If you want to change the
         * stream class, create a new stream group. </p> <p> Stream capacity represents the
         * number of concurrent streams that can be active at a time. You set stream
         * capacity per location, per stream group. There are two types of capacity:
         * always-on and on-demand: </p> <ul> <li> <p> <b>Always-on</b>: The streaming
         * capacity that is allocated and ready to handle stream requests without delay.
         * You pay for this capacity whether it's in use or not. Best for quickest time
         * from streaming request to streaming session. <pre><code> &lt;/p&gt; &lt;/li&gt;
         * &lt;li&gt; &lt;p&gt; &lt;b&gt;On-demand&lt;/b&gt;: The streaming capacity that
         * Amazon GameLift Streams can allocate in response to stream requests, and then
         * de-allocate when the session has terminated. This offers a cost control measure
         * at the expense of a greater startup time (typically under 5 minutes). &lt;/p&gt;
         * &lt;/li&gt; &lt;/ul&gt; &lt;p&gt;To update a stream group, specify the stream
         * group's Amazon Resource Name (ARN) and provide the new values. If the request is
         * successful, Amazon GameLift Streams returns the complete updated metadata for
         * the stream group.&lt;/p&gt; </code></pre><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/UpdateStreamGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStreamGroupOutcome UpdateStreamGroup(const Model::UpdateStreamGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateStreamGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateStreamGroupRequestT = Model::UpdateStreamGroupRequest>
        Model::UpdateStreamGroupOutcomeCallable UpdateStreamGroupCallable(const UpdateStreamGroupRequestT& request) const
        {
            return SubmitCallable(&GameLiftStreamsClient::UpdateStreamGroup, request);
        }

        /**
         * An Async wrapper for UpdateStreamGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateStreamGroupRequestT = Model::UpdateStreamGroupRequest>
        void UpdateStreamGroupAsync(const UpdateStreamGroupRequestT& request, const UpdateStreamGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&GameLiftStreamsClient::UpdateStreamGroup, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<GameLiftStreamsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<GameLiftStreamsClient>;
      void init(const GameLiftStreamsClientConfiguration& clientConfiguration);

      GameLiftStreamsClientConfiguration m_clientConfiguration;
      std::shared_ptr<GameLiftStreamsEndpointProviderBase> m_endpointProvider;
  };

} // namespace GameLiftStreams
} // namespace Aws
