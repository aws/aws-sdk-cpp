/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/nimble/NimbleStudioServiceClientModel.h>

namespace Aws
{
namespace NimbleStudio
{
  /**
   * <p>Welcome to the Amazon Nimble Studio API reference. This API reference
   * provides methods, schema, resources, parameters, and more to help you get the
   * most out of Nimble Studio.</p> <p>Nimble Studio is a virtual studio that
   * empowers visual effects, animation, and interactive content teams to create
   * content securely within a scalable, private cloud service.</p>
   */
  class AWS_NIMBLESTUDIO_API NimbleStudioClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<NimbleStudioClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NimbleStudioClient(const Aws::NimbleStudio::NimbleStudioClientConfiguration& clientConfiguration = Aws::NimbleStudio::NimbleStudioClientConfiguration(),
                           std::shared_ptr<NimbleStudioEndpointProviderBase> endpointProvider = Aws::MakeShared<NimbleStudioEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NimbleStudioClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<NimbleStudioEndpointProviderBase> endpointProvider = Aws::MakeShared<NimbleStudioEndpointProvider>(ALLOCATION_TAG),
                           const Aws::NimbleStudio::NimbleStudioClientConfiguration& clientConfiguration = Aws::NimbleStudio::NimbleStudioClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        NimbleStudioClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<NimbleStudioEndpointProviderBase> endpointProvider = Aws::MakeShared<NimbleStudioEndpointProvider>(ALLOCATION_TAG),
                           const Aws::NimbleStudio::NimbleStudioClientConfiguration& clientConfiguration = Aws::NimbleStudio::NimbleStudioClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NimbleStudioClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NimbleStudioClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        NimbleStudioClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~NimbleStudioClient();

        /**
         * <p>Accept EULAs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/AcceptEulas">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptEulasOutcome AcceptEulas(const Model::AcceptEulasRequest& request) const;

        /**
         * A Callable wrapper for AcceptEulas that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptEulasOutcomeCallable AcceptEulasCallable(const Model::AcceptEulasRequest& request) const;

        /**
         * An Async wrapper for AcceptEulas that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptEulasAsync(const Model::AcceptEulasRequest& request, const AcceptEulasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a launch profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateLaunchProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLaunchProfileOutcome CreateLaunchProfile(const Model::CreateLaunchProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateLaunchProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLaunchProfileOutcomeCallable CreateLaunchProfileCallable(const Model::CreateLaunchProfileRequest& request) const;

        /**
         * An Async wrapper for CreateLaunchProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLaunchProfileAsync(const Model::CreateLaunchProfileRequest& request, const CreateLaunchProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a streaming image resource in a studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateStreamingImage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamingImageOutcome CreateStreamingImage(const Model::CreateStreamingImageRequest& request) const;

        /**
         * A Callable wrapper for CreateStreamingImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStreamingImageOutcomeCallable CreateStreamingImageCallable(const Model::CreateStreamingImageRequest& request) const;

        /**
         * An Async wrapper for CreateStreamingImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStreamingImageAsync(const Model::CreateStreamingImageRequest& request, const CreateStreamingImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a streaming session in a studio.</p> <p>After invoking this
         * operation, you must poll GetStreamingSession until the streaming session is in
         * the <code>READY</code> state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateStreamingSession">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamingSessionOutcome CreateStreamingSession(const Model::CreateStreamingSessionRequest& request) const;

        /**
         * A Callable wrapper for CreateStreamingSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStreamingSessionOutcomeCallable CreateStreamingSessionCallable(const Model::CreateStreamingSessionRequest& request) const;

        /**
         * An Async wrapper for CreateStreamingSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStreamingSessionAsync(const Model::CreateStreamingSessionRequest& request, const CreateStreamingSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a streaming session stream for a streaming session.</p> <p>After
         * invoking this API, invoke GetStreamingSessionStream with the returned streamId
         * to poll the resource until it is in the <code>READY</code> state.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateStreamingSessionStream">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamingSessionStreamOutcome CreateStreamingSessionStream(const Model::CreateStreamingSessionStreamRequest& request) const;

        /**
         * A Callable wrapper for CreateStreamingSessionStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStreamingSessionStreamOutcomeCallable CreateStreamingSessionStreamCallable(const Model::CreateStreamingSessionStreamRequest& request) const;

        /**
         * An Async wrapper for CreateStreamingSessionStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStreamingSessionStreamAsync(const Model::CreateStreamingSessionStreamRequest& request, const CreateStreamingSessionStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a new studio.</p> <p>When creating a studio, two IAM roles must be
         * provided: the admin role and the user role. These roles are assumed by your
         * users when they log in to the Nimble Studio portal.</p> <p>The user role must
         * have the <code>AmazonNimbleStudio-StudioUser</code> managed policy attached for
         * the portal to function properly.</p> <p>The admin role must have the
         * <code>AmazonNimbleStudio-StudioAdmin</code> managed policy attached for the
         * portal to function properly.</p> <p>You may optionally specify a KMS key in the
         * <code>StudioEncryptionConfiguration</code>.</p> <p>In Nimble Studio, resource
         * names, descriptions, initialization scripts, and other data you provide are
         * always encrypted at rest using an KMS key. By default, this key is owned by
         * Amazon Web Services and managed on your behalf. You may provide your own KMS key
         * when calling <code>CreateStudio</code> to encrypt this data using a key you own
         * and manage.</p> <p>When providing an KMS key during studio creation, Nimble
         * Studio creates KMS grants in your account to provide your studio user and admin
         * roles access to these KMS keys.</p> <p>If you delete this grant, the studio will
         * no longer be accessible to your portal users.</p> <p>If you delete the studio
         * KMS key, your studio will no longer be accessible.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateStudio">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStudioOutcome CreateStudio(const Model::CreateStudioRequest& request) const;

        /**
         * A Callable wrapper for CreateStudio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStudioOutcomeCallable CreateStudioCallable(const Model::CreateStudioRequest& request) const;

        /**
         * An Async wrapper for CreateStudio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStudioAsync(const Model::CreateStudioRequest& request, const CreateStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a studio component resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateStudioComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStudioComponentOutcome CreateStudioComponent(const Model::CreateStudioComponentRequest& request) const;

        /**
         * A Callable wrapper for CreateStudioComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStudioComponentOutcomeCallable CreateStudioComponentCallable(const Model::CreateStudioComponentRequest& request) const;

        /**
         * An Async wrapper for CreateStudioComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStudioComponentAsync(const Model::CreateStudioComponentRequest& request, const CreateStudioComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Permanently delete a launch profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteLaunchProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLaunchProfileOutcome DeleteLaunchProfile(const Model::DeleteLaunchProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteLaunchProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLaunchProfileOutcomeCallable DeleteLaunchProfileCallable(const Model::DeleteLaunchProfileRequest& request) const;

        /**
         * An Async wrapper for DeleteLaunchProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLaunchProfileAsync(const Model::DeleteLaunchProfileRequest& request, const DeleteLaunchProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a user from launch profile membership.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteLaunchProfileMember">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLaunchProfileMemberOutcome DeleteLaunchProfileMember(const Model::DeleteLaunchProfileMemberRequest& request) const;

        /**
         * A Callable wrapper for DeleteLaunchProfileMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLaunchProfileMemberOutcomeCallable DeleteLaunchProfileMemberCallable(const Model::DeleteLaunchProfileMemberRequest& request) const;

        /**
         * An Async wrapper for DeleteLaunchProfileMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLaunchProfileMemberAsync(const Model::DeleteLaunchProfileMemberRequest& request, const DeleteLaunchProfileMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete streaming image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteStreamingImage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStreamingImageOutcome DeleteStreamingImage(const Model::DeleteStreamingImageRequest& request) const;

        /**
         * A Callable wrapper for DeleteStreamingImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStreamingImageOutcomeCallable DeleteStreamingImageCallable(const Model::DeleteStreamingImageRequest& request) const;

        /**
         * An Async wrapper for DeleteStreamingImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStreamingImageAsync(const Model::DeleteStreamingImageRequest& request, const DeleteStreamingImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes streaming session resource.</p> <p>After invoking this operation, use
         * GetStreamingSession to poll the resource until it transitions to a
         * <code>DELETED</code> state.</p> <p>A streaming session will count against your
         * streaming session quota until it is marked <code>DELETED</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteStreamingSession">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStreamingSessionOutcome DeleteStreamingSession(const Model::DeleteStreamingSessionRequest& request) const;

        /**
         * A Callable wrapper for DeleteStreamingSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStreamingSessionOutcomeCallable DeleteStreamingSessionCallable(const Model::DeleteStreamingSessionRequest& request) const;

        /**
         * An Async wrapper for DeleteStreamingSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStreamingSessionAsync(const Model::DeleteStreamingSessionRequest& request, const DeleteStreamingSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a studio resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteStudio">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStudioOutcome DeleteStudio(const Model::DeleteStudioRequest& request) const;

        /**
         * A Callable wrapper for DeleteStudio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStudioOutcomeCallable DeleteStudioCallable(const Model::DeleteStudioRequest& request) const;

        /**
         * An Async wrapper for DeleteStudio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStudioAsync(const Model::DeleteStudioRequest& request, const DeleteStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a studio component resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteStudioComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStudioComponentOutcome DeleteStudioComponent(const Model::DeleteStudioComponentRequest& request) const;

        /**
         * A Callable wrapper for DeleteStudioComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStudioComponentOutcomeCallable DeleteStudioComponentCallable(const Model::DeleteStudioComponentRequest& request) const;

        /**
         * An Async wrapper for DeleteStudioComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStudioComponentAsync(const Model::DeleteStudioComponentRequest& request, const DeleteStudioComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete a user from studio membership.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteStudioMember">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStudioMemberOutcome DeleteStudioMember(const Model::DeleteStudioMemberRequest& request) const;

        /**
         * A Callable wrapper for DeleteStudioMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStudioMemberOutcomeCallable DeleteStudioMemberCallable(const Model::DeleteStudioMemberRequest& request) const;

        /**
         * An Async wrapper for DeleteStudioMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStudioMemberAsync(const Model::DeleteStudioMemberRequest& request, const DeleteStudioMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get EULA.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetEula">AWS API
         * Reference</a></p>
         */
        virtual Model::GetEulaOutcome GetEula(const Model::GetEulaRequest& request) const;

        /**
         * A Callable wrapper for GetEula that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEulaOutcomeCallable GetEulaCallable(const Model::GetEulaRequest& request) const;

        /**
         * An Async wrapper for GetEula that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEulaAsync(const Model::GetEulaRequest& request, const GetEulaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get a launch profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetLaunchProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLaunchProfileOutcome GetLaunchProfile(const Model::GetLaunchProfileRequest& request) const;

        /**
         * A Callable wrapper for GetLaunchProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLaunchProfileOutcomeCallable GetLaunchProfileCallable(const Model::GetLaunchProfileRequest& request) const;

        /**
         * An Async wrapper for GetLaunchProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLaunchProfileAsync(const Model::GetLaunchProfileRequest& request, const GetLaunchProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Launch profile details include the launch profile resource and summary
         * information of resources that are used by, or available to, the launch profile.
         * This includes the name and description of all studio components used by the
         * launch profiles, and the name and description of streaming images that can be
         * used with this launch profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetLaunchProfileDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLaunchProfileDetailsOutcome GetLaunchProfileDetails(const Model::GetLaunchProfileDetailsRequest& request) const;

        /**
         * A Callable wrapper for GetLaunchProfileDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLaunchProfileDetailsOutcomeCallable GetLaunchProfileDetailsCallable(const Model::GetLaunchProfileDetailsRequest& request) const;

        /**
         * An Async wrapper for GetLaunchProfileDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLaunchProfileDetailsAsync(const Model::GetLaunchProfileDetailsRequest& request, const GetLaunchProfileDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get a launch profile initialization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetLaunchProfileInitialization">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLaunchProfileInitializationOutcome GetLaunchProfileInitialization(const Model::GetLaunchProfileInitializationRequest& request) const;

        /**
         * A Callable wrapper for GetLaunchProfileInitialization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLaunchProfileInitializationOutcomeCallable GetLaunchProfileInitializationCallable(const Model::GetLaunchProfileInitializationRequest& request) const;

        /**
         * An Async wrapper for GetLaunchProfileInitialization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLaunchProfileInitializationAsync(const Model::GetLaunchProfileInitializationRequest& request, const GetLaunchProfileInitializationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get a user persona in launch profile membership.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetLaunchProfileMember">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLaunchProfileMemberOutcome GetLaunchProfileMember(const Model::GetLaunchProfileMemberRequest& request) const;

        /**
         * A Callable wrapper for GetLaunchProfileMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLaunchProfileMemberOutcomeCallable GetLaunchProfileMemberCallable(const Model::GetLaunchProfileMemberRequest& request) const;

        /**
         * An Async wrapper for GetLaunchProfileMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLaunchProfileMemberAsync(const Model::GetLaunchProfileMemberRequest& request, const GetLaunchProfileMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get streaming image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStreamingImage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStreamingImageOutcome GetStreamingImage(const Model::GetStreamingImageRequest& request) const;

        /**
         * A Callable wrapper for GetStreamingImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStreamingImageOutcomeCallable GetStreamingImageCallable(const Model::GetStreamingImageRequest& request) const;

        /**
         * An Async wrapper for GetStreamingImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStreamingImageAsync(const Model::GetStreamingImageRequest& request, const GetStreamingImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets StreamingSession resource.</p> <p>Invoke this operation to poll for a
         * streaming session state while creating or deleting a session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStreamingSession">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStreamingSessionOutcome GetStreamingSession(const Model::GetStreamingSessionRequest& request) const;

        /**
         * A Callable wrapper for GetStreamingSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStreamingSessionOutcomeCallable GetStreamingSessionCallable(const Model::GetStreamingSessionRequest& request) const;

        /**
         * An Async wrapper for GetStreamingSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStreamingSessionAsync(const Model::GetStreamingSessionRequest& request, const GetStreamingSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets <code>StreamingSessionBackup</code> resource.</p> <p>Invoke this
         * operation to poll for a streaming session backup while stopping a streaming
         * session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStreamingSessionBackup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStreamingSessionBackupOutcome GetStreamingSessionBackup(const Model::GetStreamingSessionBackupRequest& request) const;

        /**
         * A Callable wrapper for GetStreamingSessionBackup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStreamingSessionBackupOutcomeCallable GetStreamingSessionBackupCallable(const Model::GetStreamingSessionBackupRequest& request) const;

        /**
         * An Async wrapper for GetStreamingSessionBackup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStreamingSessionBackupAsync(const Model::GetStreamingSessionBackupRequest& request, const GetStreamingSessionBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a StreamingSessionStream for a streaming session.</p> <p>Invoke this
         * operation to poll the resource after invoking
         * <code>CreateStreamingSessionStream</code>.</p> <p>After the
         * <code>StreamingSessionStream</code> changes to the <code>READY</code> state, the
         * url property will contain a stream to be used with the DCV streaming
         * client.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStreamingSessionStream">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStreamingSessionStreamOutcome GetStreamingSessionStream(const Model::GetStreamingSessionStreamRequest& request) const;

        /**
         * A Callable wrapper for GetStreamingSessionStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStreamingSessionStreamOutcomeCallable GetStreamingSessionStreamCallable(const Model::GetStreamingSessionStreamRequest& request) const;

        /**
         * An Async wrapper for GetStreamingSessionStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStreamingSessionStreamAsync(const Model::GetStreamingSessionStreamRequest& request, const GetStreamingSessionStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get a studio resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStudio">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStudioOutcome GetStudio(const Model::GetStudioRequest& request) const;

        /**
         * A Callable wrapper for GetStudio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStudioOutcomeCallable GetStudioCallable(const Model::GetStudioRequest& request) const;

        /**
         * An Async wrapper for GetStudio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStudioAsync(const Model::GetStudioRequest& request, const GetStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a studio component resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStudioComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStudioComponentOutcome GetStudioComponent(const Model::GetStudioComponentRequest& request) const;

        /**
         * A Callable wrapper for GetStudioComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStudioComponentOutcomeCallable GetStudioComponentCallable(const Model::GetStudioComponentRequest& request) const;

        /**
         * An Async wrapper for GetStudioComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStudioComponentAsync(const Model::GetStudioComponentRequest& request, const GetStudioComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get a user's membership in a studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStudioMember">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStudioMemberOutcome GetStudioMember(const Model::GetStudioMemberRequest& request) const;

        /**
         * A Callable wrapper for GetStudioMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStudioMemberOutcomeCallable GetStudioMemberCallable(const Model::GetStudioMemberRequest& request) const;

        /**
         * An Async wrapper for GetStudioMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStudioMemberAsync(const Model::GetStudioMemberRequest& request, const GetStudioMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List EULA acceptances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListEulaAcceptances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEulaAcceptancesOutcome ListEulaAcceptances(const Model::ListEulaAcceptancesRequest& request) const;

        /**
         * A Callable wrapper for ListEulaAcceptances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEulaAcceptancesOutcomeCallable ListEulaAcceptancesCallable(const Model::ListEulaAcceptancesRequest& request) const;

        /**
         * An Async wrapper for ListEulaAcceptances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEulaAcceptancesAsync(const Model::ListEulaAcceptancesRequest& request, const ListEulaAcceptancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List EULAs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListEulas">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEulasOutcome ListEulas(const Model::ListEulasRequest& request) const;

        /**
         * A Callable wrapper for ListEulas that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEulasOutcomeCallable ListEulasCallable(const Model::ListEulasRequest& request) const;

        /**
         * An Async wrapper for ListEulas that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEulasAsync(const Model::ListEulasRequest& request, const ListEulasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get all users in a given launch profile membership.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListLaunchProfileMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLaunchProfileMembersOutcome ListLaunchProfileMembers(const Model::ListLaunchProfileMembersRequest& request) const;

        /**
         * A Callable wrapper for ListLaunchProfileMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLaunchProfileMembersOutcomeCallable ListLaunchProfileMembersCallable(const Model::ListLaunchProfileMembersRequest& request) const;

        /**
         * An Async wrapper for ListLaunchProfileMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLaunchProfileMembersAsync(const Model::ListLaunchProfileMembersRequest& request, const ListLaunchProfileMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List all the launch profiles a studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListLaunchProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLaunchProfilesOutcome ListLaunchProfiles(const Model::ListLaunchProfilesRequest& request) const;

        /**
         * A Callable wrapper for ListLaunchProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLaunchProfilesOutcomeCallable ListLaunchProfilesCallable(const Model::ListLaunchProfilesRequest& request) const;

        /**
         * An Async wrapper for ListLaunchProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLaunchProfilesAsync(const Model::ListLaunchProfilesRequest& request, const ListLaunchProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the streaming image resources available to this studio.</p> <p>This list
         * will contain both images provided by Amazon Web Services, as well as streaming
         * images that you have created in your studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListStreamingImages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStreamingImagesOutcome ListStreamingImages(const Model::ListStreamingImagesRequest& request) const;

        /**
         * A Callable wrapper for ListStreamingImages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStreamingImagesOutcomeCallable ListStreamingImagesCallable(const Model::ListStreamingImagesRequest& request) const;

        /**
         * An Async wrapper for ListStreamingImages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStreamingImagesAsync(const Model::ListStreamingImagesRequest& request, const ListStreamingImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the backups of a streaming session in a studio.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListStreamingSessionBackups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStreamingSessionBackupsOutcome ListStreamingSessionBackups(const Model::ListStreamingSessionBackupsRequest& request) const;

        /**
         * A Callable wrapper for ListStreamingSessionBackups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStreamingSessionBackupsOutcomeCallable ListStreamingSessionBackupsCallable(const Model::ListStreamingSessionBackupsRequest& request) const;

        /**
         * An Async wrapper for ListStreamingSessionBackups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStreamingSessionBackupsAsync(const Model::ListStreamingSessionBackupsRequest& request, const ListStreamingSessionBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the streaming sessions in a studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListStreamingSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStreamingSessionsOutcome ListStreamingSessions(const Model::ListStreamingSessionsRequest& request) const;

        /**
         * A Callable wrapper for ListStreamingSessions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStreamingSessionsOutcomeCallable ListStreamingSessionsCallable(const Model::ListStreamingSessionsRequest& request) const;

        /**
         * An Async wrapper for ListStreamingSessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStreamingSessionsAsync(const Model::ListStreamingSessionsRequest& request, const ListStreamingSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the <code>StudioComponents</code> in a studio.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListStudioComponents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStudioComponentsOutcome ListStudioComponents(const Model::ListStudioComponentsRequest& request) const;

        /**
         * A Callable wrapper for ListStudioComponents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStudioComponentsOutcomeCallable ListStudioComponentsCallable(const Model::ListStudioComponentsRequest& request) const;

        /**
         * An Async wrapper for ListStudioComponents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStudioComponentsAsync(const Model::ListStudioComponentsRequest& request, const ListStudioComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Get all users in a given studio membership.</p>  <p>
         * <code>ListStudioMembers</code> only returns admin members.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListStudioMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStudioMembersOutcome ListStudioMembers(const Model::ListStudioMembersRequest& request) const;

        /**
         * A Callable wrapper for ListStudioMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStudioMembersOutcomeCallable ListStudioMembersCallable(const Model::ListStudioMembersRequest& request) const;

        /**
         * An Async wrapper for ListStudioMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStudioMembersAsync(const Model::ListStudioMembersRequest& request, const ListStudioMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List studios in your Amazon Web Services accounts in the requested Amazon Web
         * Services Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListStudios">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStudiosOutcome ListStudios(const Model::ListStudiosRequest& request) const;

        /**
         * A Callable wrapper for ListStudios that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStudiosOutcomeCallable ListStudiosCallable(const Model::ListStudiosRequest& request) const;

        /**
         * An Async wrapper for ListStudios that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStudiosAsync(const Model::ListStudiosRequest& request, const ListStudiosResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the tags for a resource, given its Amazon Resource Names (ARN).</p>
         * <p>This operation supports ARNs for all resource types in Nimble Studio that
         * support tags, including studio, studio component, launch profile, streaming
         * image, and streaming session. All resources that can be tagged will contain an
         * ARN property, so you do not have to create this ARN yourself.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListTagsForResource">AWS
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
         * <p>Add/update users with given persona to launch profile
         * membership.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/PutLaunchProfileMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLaunchProfileMembersOutcome PutLaunchProfileMembers(const Model::PutLaunchProfileMembersRequest& request) const;

        /**
         * A Callable wrapper for PutLaunchProfileMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutLaunchProfileMembersOutcomeCallable PutLaunchProfileMembersCallable(const Model::PutLaunchProfileMembersRequest& request) const;

        /**
         * An Async wrapper for PutLaunchProfileMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutLaunchProfileMembersAsync(const Model::PutLaunchProfileMembersRequest& request, const PutLaunchProfileMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Add/update users with given persona to studio membership.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/PutStudioMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::PutStudioMembersOutcome PutStudioMembers(const Model::PutStudioMembersRequest& request) const;

        /**
         * A Callable wrapper for PutStudioMembers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutStudioMembersOutcomeCallable PutStudioMembersCallable(const Model::PutStudioMembersRequest& request) const;

        /**
         * An Async wrapper for PutStudioMembers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutStudioMembersAsync(const Model::PutStudioMembersRequest& request, const PutStudioMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Transitions sessions from the <code>STOPPED</code> state into the
         * <code>READY</code> state. The <code>START_IN_PROGRESS</code> state is the
         * intermediate state between the <code>STOPPED</code> and <code>READY</code>
         * states.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/StartStreamingSession">AWS
         * API Reference</a></p>
         */
        virtual Model::StartStreamingSessionOutcome StartStreamingSession(const Model::StartStreamingSessionRequest& request) const;

        /**
         * A Callable wrapper for StartStreamingSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartStreamingSessionOutcomeCallable StartStreamingSessionCallable(const Model::StartStreamingSessionRequest& request) const;

        /**
         * An Async wrapper for StartStreamingSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartStreamingSessionAsync(const Model::StartStreamingSessionRequest& request, const StartStreamingSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Repairs the IAM Identity Center configuration for a given studio.</p> <p>If
         * the studio has a valid IAM Identity Center configuration currently associated
         * with it, this operation will fail with a validation error.</p> <p>If the studio
         * does not have a valid IAM Identity Center configuration currently associated
         * with it, then a new IAM Identity Center application is created for the studio
         * and the studio is changed to the <code>READY</code> state.</p> <p>After the IAM
         * Identity Center application is repaired, you must use the Amazon Nimble Studio
         * console to add administrators and users to your studio.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/StartStudioSSOConfigurationRepair">AWS
         * API Reference</a></p>
         */
        virtual Model::StartStudioSSOConfigurationRepairOutcome StartStudioSSOConfigurationRepair(const Model::StartStudioSSOConfigurationRepairRequest& request) const;

        /**
         * A Callable wrapper for StartStudioSSOConfigurationRepair that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartStudioSSOConfigurationRepairOutcomeCallable StartStudioSSOConfigurationRepairCallable(const Model::StartStudioSSOConfigurationRepairRequest& request) const;

        /**
         * An Async wrapper for StartStudioSSOConfigurationRepair that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartStudioSSOConfigurationRepairAsync(const Model::StartStudioSSOConfigurationRepairRequest& request, const StartStudioSSOConfigurationRepairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Transitions sessions from the <code>READY</code> state into the
         * <code>STOPPED</code> state. The <code>STOP_IN_PROGRESS</code> state is the
         * intermediate state between the <code>READY</code> and <code>STOPPED</code>
         * states.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/StopStreamingSession">AWS
         * API Reference</a></p>
         */
        virtual Model::StopStreamingSessionOutcome StopStreamingSession(const Model::StopStreamingSessionRequest& request) const;

        /**
         * A Callable wrapper for StopStreamingSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopStreamingSessionOutcomeCallable StopStreamingSessionCallable(const Model::StopStreamingSessionRequest& request) const;

        /**
         * An Async wrapper for StopStreamingSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopStreamingSessionAsync(const Model::StopStreamingSessionRequest& request, const StopStreamingSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates tags for a resource, given its ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/TagResource">AWS
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
         * <p>Deletes the tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UntagResource">AWS
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
         * <p>Update a launch profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UpdateLaunchProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLaunchProfileOutcome UpdateLaunchProfile(const Model::UpdateLaunchProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateLaunchProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLaunchProfileOutcomeCallable UpdateLaunchProfileCallable(const Model::UpdateLaunchProfileRequest& request) const;

        /**
         * An Async wrapper for UpdateLaunchProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLaunchProfileAsync(const Model::UpdateLaunchProfileRequest& request, const UpdateLaunchProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a user persona in launch profile membership.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UpdateLaunchProfileMember">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLaunchProfileMemberOutcome UpdateLaunchProfileMember(const Model::UpdateLaunchProfileMemberRequest& request) const;

        /**
         * A Callable wrapper for UpdateLaunchProfileMember that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLaunchProfileMemberOutcomeCallable UpdateLaunchProfileMemberCallable(const Model::UpdateLaunchProfileMemberRequest& request) const;

        /**
         * An Async wrapper for UpdateLaunchProfileMember that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLaunchProfileMemberAsync(const Model::UpdateLaunchProfileMemberRequest& request, const UpdateLaunchProfileMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update streaming image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UpdateStreamingImage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStreamingImageOutcome UpdateStreamingImage(const Model::UpdateStreamingImageRequest& request) const;

        /**
         * A Callable wrapper for UpdateStreamingImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateStreamingImageOutcomeCallable UpdateStreamingImageCallable(const Model::UpdateStreamingImageRequest& request) const;

        /**
         * An Async wrapper for UpdateStreamingImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStreamingImageAsync(const Model::UpdateStreamingImageRequest& request, const UpdateStreamingImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a Studio resource.</p> <p>Currently, this operation only supports
         * updating the displayName of your studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UpdateStudio">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStudioOutcome UpdateStudio(const Model::UpdateStudioRequest& request) const;

        /**
         * A Callable wrapper for UpdateStudio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateStudioOutcomeCallable UpdateStudioCallable(const Model::UpdateStudioRequest& request) const;

        /**
         * An Async wrapper for UpdateStudio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStudioAsync(const Model::UpdateStudioRequest& request, const UpdateStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a studio component resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UpdateStudioComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStudioComponentOutcome UpdateStudioComponent(const Model::UpdateStudioComponentRequest& request) const;

        /**
         * A Callable wrapper for UpdateStudioComponent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateStudioComponentOutcomeCallable UpdateStudioComponentCallable(const Model::UpdateStudioComponentRequest& request) const;

        /**
         * An Async wrapper for UpdateStudioComponent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStudioComponentAsync(const Model::UpdateStudioComponentRequest& request, const UpdateStudioComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<NimbleStudioEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<NimbleStudioClient>;
      void init(const NimbleStudioClientConfiguration& clientConfiguration);

      NimbleStudioClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<NimbleStudioEndpointProviderBase> m_endpointProvider;
  };

} // namespace NimbleStudio
} // namespace Aws
