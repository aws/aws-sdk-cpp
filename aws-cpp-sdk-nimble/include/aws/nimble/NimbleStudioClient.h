/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/nimble/NimbleStudioServiceClientModel.h>
#include <aws/nimble/NimbleStudioLegacyAsyncMacros.h>

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
  class AWS_NIMBLESTUDIO_API NimbleStudioClient : public Aws::Client::AWSJsonClient
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p>Accept EULAs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/AcceptEulas">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptEulasOutcome AcceptEulas(const Model::AcceptEulasRequest& request) const;


        /**
         * <p>Create a launch profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateLaunchProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLaunchProfileOutcome CreateLaunchProfile(const Model::CreateLaunchProfileRequest& request) const;


        /**
         * <p>Creates a streaming image resource in a studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateStreamingImage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamingImageOutcome CreateStreamingImage(const Model::CreateStreamingImageRequest& request) const;


        /**
         * <p>Creates a streaming session in a studio.</p> <p>After invoking this
         * operation, you must poll GetStreamingSession until the streaming session is in
         * state READY.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateStreamingSession">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamingSessionOutcome CreateStreamingSession(const Model::CreateStreamingSessionRequest& request) const;


        /**
         * <p>Creates a streaming session stream for a streaming session.</p> <p>After
         * invoking this API, invoke GetStreamingSessionStream with the returned streamId
         * to poll the resource until it is in state READY.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateStreamingSessionStream">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamingSessionStreamOutcome CreateStreamingSessionStream(const Model::CreateStreamingSessionStreamRequest& request) const;


        /**
         * <p>Create a new Studio.</p> <p>When creating a Studio, two IAM roles must be
         * provided: the admin role and the user Role. These roles are assumed by your
         * users when they log in to the Nimble Studio portal.</p> <p>The user role must
         * have the AmazonNimbleStudio-StudioUser managed policy attached for the portal to
         * function properly.</p> <p>The Admin Role must have the
         * AmazonNimbleStudio-StudioAdmin managed policy attached for the portal to
         * function properly.</p> <p>You may optionally specify a KMS key in the
         * StudioEncryptionConfiguration.</p> <p>In Nimble Studio, resource names,
         * descriptions, initialization scripts, and other data you provide are always
         * encrypted at rest using an KMS key. By default, this key is owned by Amazon Web
         * Services and managed on your behalf. You may provide your own KMS key when
         * calling CreateStudio to encrypt this data using a key you own and manage.</p>
         * <p>When providing an KMS key during studio creation, Nimble Studio creates KMS
         * grants in your account to provide your studio user and admin roles access to
         * these KMS keys.</p> <p>If you delete this grant, the studio will no longer be
         * accessible to your portal users.</p> <p>If you delete the studio KMS key, your
         * studio will no longer be accessible.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateStudio">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStudioOutcome CreateStudio(const Model::CreateStudioRequest& request) const;


        /**
         * <p>Creates a studio component resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateStudioComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStudioComponentOutcome CreateStudioComponent(const Model::CreateStudioComponentRequest& request) const;


        /**
         * <p>Permanently delete a launch profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteLaunchProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLaunchProfileOutcome DeleteLaunchProfile(const Model::DeleteLaunchProfileRequest& request) const;


        /**
         * <p>Delete a user from launch profile membership.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteLaunchProfileMember">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLaunchProfileMemberOutcome DeleteLaunchProfileMember(const Model::DeleteLaunchProfileMemberRequest& request) const;


        /**
         * <p>Delete streaming image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteStreamingImage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStreamingImageOutcome DeleteStreamingImage(const Model::DeleteStreamingImageRequest& request) const;


        /**
         * <p>Deletes streaming session resource.</p> <p>After invoking this operation, use
         * GetStreamingSession to poll the resource until it transitions to a DELETED
         * state.</p> <p>A streaming session will count against your streaming session
         * quota until it is marked DELETED.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteStreamingSession">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStreamingSessionOutcome DeleteStreamingSession(const Model::DeleteStreamingSessionRequest& request) const;


        /**
         * <p>Delete a studio resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteStudio">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStudioOutcome DeleteStudio(const Model::DeleteStudioRequest& request) const;


        /**
         * <p>Deletes a studio component resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteStudioComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStudioComponentOutcome DeleteStudioComponent(const Model::DeleteStudioComponentRequest& request) const;


        /**
         * <p>Delete a user from studio membership.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/DeleteStudioMember">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStudioMemberOutcome DeleteStudioMember(const Model::DeleteStudioMemberRequest& request) const;


        /**
         * <p>Get Eula.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetEula">AWS API
         * Reference</a></p>
         */
        virtual Model::GetEulaOutcome GetEula(const Model::GetEulaRequest& request) const;


        /**
         * <p>Get a launch profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetLaunchProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLaunchProfileOutcome GetLaunchProfile(const Model::GetLaunchProfileRequest& request) const;


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
         * <p>Get a launch profile initialization.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetLaunchProfileInitialization">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLaunchProfileInitializationOutcome GetLaunchProfileInitialization(const Model::GetLaunchProfileInitializationRequest& request) const;


        /**
         * <p>Get a user persona in launch profile membership.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetLaunchProfileMember">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLaunchProfileMemberOutcome GetLaunchProfileMember(const Model::GetLaunchProfileMemberRequest& request) const;


        /**
         * <p>Get streaming image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStreamingImage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStreamingImageOutcome GetStreamingImage(const Model::GetStreamingImageRequest& request) const;


        /**
         * <p>Gets StreamingSession resource.</p> <p>Invoke this operation to poll for a
         * streaming session state while creating or deleting a session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStreamingSession">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStreamingSessionOutcome GetStreamingSession(const Model::GetStreamingSessionRequest& request) const;


        /**
         * <p>Gets a StreamingSessionStream for a streaming session.</p> <p>Invoke this
         * operation to poll the resource after invoking CreateStreamingSessionStream.</p>
         * <p>After the StreamingSessionStream changes to the state READY, the url property
         * will contain a stream to be used with the DCV streaming client.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStreamingSessionStream">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStreamingSessionStreamOutcome GetStreamingSessionStream(const Model::GetStreamingSessionStreamRequest& request) const;


        /**
         * <p>Get a Studio resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStudio">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStudioOutcome GetStudio(const Model::GetStudioRequest& request) const;


        /**
         * <p>Gets a studio component resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStudioComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStudioComponentOutcome GetStudioComponent(const Model::GetStudioComponentRequest& request) const;


        /**
         * <p>Get a user's membership in a studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/GetStudioMember">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStudioMemberOutcome GetStudioMember(const Model::GetStudioMemberRequest& request) const;


        /**
         * <p>List Eula Acceptances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListEulaAcceptances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEulaAcceptancesOutcome ListEulaAcceptances(const Model::ListEulaAcceptancesRequest& request) const;


        /**
         * <p>List Eulas.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListEulas">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEulasOutcome ListEulas(const Model::ListEulasRequest& request) const;


        /**
         * <p>Get all users in a given launch profile membership.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListLaunchProfileMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLaunchProfileMembersOutcome ListLaunchProfileMembers(const Model::ListLaunchProfileMembersRequest& request) const;


        /**
         * <p>List all the launch profiles a studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListLaunchProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLaunchProfilesOutcome ListLaunchProfiles(const Model::ListLaunchProfilesRequest& request) const;


        /**
         * <p>List the streaming image resources available to this studio.</p> <p>This list
         * will contain both images provided by Amazon Web Services, as well as streaming
         * images that you have created in your studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListStreamingImages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStreamingImagesOutcome ListStreamingImages(const Model::ListStreamingImagesRequest& request) const;


        /**
         * <p>Lists the streaming sessions in a studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListStreamingSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStreamingSessionsOutcome ListStreamingSessions(const Model::ListStreamingSessionsRequest& request) const;


        /**
         * <p>Lists the StudioComponents in a studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListStudioComponents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStudioComponentsOutcome ListStudioComponents(const Model::ListStudioComponentsRequest& request) const;


        /**
         * <p>Get all users in a given studio membership.</p>  <p>
         * <code>ListStudioMembers</code> only returns admin members.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListStudioMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStudioMembersOutcome ListStudioMembers(const Model::ListStudioMembersRequest& request) const;


        /**
         * <p>List studios in your Amazon Web Services account in the requested Amazon Web
         * Services Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ListStudios">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStudiosOutcome ListStudios(const Model::ListStudiosRequest& request) const;


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
         * <p>Add/update users with given persona to launch profile
         * membership.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/PutLaunchProfileMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::PutLaunchProfileMembersOutcome PutLaunchProfileMembers(const Model::PutLaunchProfileMembersRequest& request) const;


        /**
         * <p>Add/update users with given persona to studio membership.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/PutStudioMembers">AWS
         * API Reference</a></p>
         */
        virtual Model::PutStudioMembersOutcome PutStudioMembers(const Model::PutStudioMembersRequest& request) const;


        /**
         * <p> Transitions sessions from the STOPPED state into the READY state. The
         * START_IN_PROGRESS state is the intermediate state between the STOPPED and READY
         * states.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/StartStreamingSession">AWS
         * API Reference</a></p>
         */
        virtual Model::StartStreamingSessionOutcome StartStreamingSession(const Model::StartStreamingSessionRequest& request) const;


        /**
         * <p>Repairs the IAM Identity Center configuration for a given studio.</p> <p>If
         * the studio has a valid IAM Identity Center configuration currently associated
         * with it, this operation will fail with a validation error.</p> <p>If the studio
         * does not have a valid IAM Identity Center configuration currently associated
         * with it, then a new IAM Identity Center application is created for the studio
         * and the studio is changed to the READY state.</p> <p>After the IAM Identity
         * Center application is repaired, you must use the Amazon Nimble Studio console to
         * add administrators and users to your studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/StartStudioSSOConfigurationRepair">AWS
         * API Reference</a></p>
         */
        virtual Model::StartStudioSSOConfigurationRepairOutcome StartStudioSSOConfigurationRepair(const Model::StartStudioSSOConfigurationRepairRequest& request) const;


        /**
         * <p>Transitions sessions from the READY state into the STOPPED state. The
         * STOP_IN_PROGRESS state is the intermediate state between the READY and STOPPED
         * states.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/StopStreamingSession">AWS
         * API Reference</a></p>
         */
        virtual Model::StopStreamingSessionOutcome StopStreamingSession(const Model::StopStreamingSessionRequest& request) const;


        /**
         * <p>Creates tags for a resource, given its ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Deletes the tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Update a launch profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UpdateLaunchProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLaunchProfileOutcome UpdateLaunchProfile(const Model::UpdateLaunchProfileRequest& request) const;


        /**
         * <p>Update a user persona in launch profile membership.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UpdateLaunchProfileMember">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLaunchProfileMemberOutcome UpdateLaunchProfileMember(const Model::UpdateLaunchProfileMemberRequest& request) const;


        /**
         * <p>Update streaming image.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UpdateStreamingImage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStreamingImageOutcome UpdateStreamingImage(const Model::UpdateStreamingImageRequest& request) const;


        /**
         * <p>Update a Studio resource.</p> <p>Currently, this operation only supports
         * updating the displayName of your studio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UpdateStudio">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStudioOutcome UpdateStudio(const Model::UpdateStudioRequest& request) const;


        /**
         * <p>Updates a studio component resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/UpdateStudioComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStudioComponentOutcome UpdateStudioComponent(const Model::UpdateStudioComponentRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<NimbleStudioEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const NimbleStudioClientConfiguration& clientConfiguration);

      NimbleStudioClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<NimbleStudioEndpointProviderBase> m_endpointProvider;
  };

} // namespace NimbleStudio
} // namespace Aws
