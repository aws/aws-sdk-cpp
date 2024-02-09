/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devicefarm/DeviceFarmServiceClientModel.h>

namespace Aws
{
namespace DeviceFarm
{
  /**
   * <p>Welcome to the AWS Device Farm API documentation, which contains APIs
   * for:</p> <ul> <li> <p>Testing on desktop browsers</p> <p> Device Farm makes it
   * possible for you to test your web applications on desktop browsers using
   * Selenium. The APIs for desktop browser testing contain <code>TestGrid</code> in
   * their names. For more information, see <a
   * href="https://docs.aws.amazon.com/devicefarm/latest/testgrid/">Testing Web
   * Applications on Selenium with Device Farm</a>.</p> </li> <li> <p>Testing on real
   * mobile devices</p> <p>Device Farm makes it possible for you to test apps on
   * physical phones, tablets, and other devices in the cloud. For more information,
   * see the <a
   * href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/">Device Farm
   * Developer Guide</a>.</p> </li> </ul>
   */
  class AWS_DEVICEFARM_API DeviceFarmClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<DeviceFarmClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef DeviceFarmClientConfiguration ClientConfigurationType;
      typedef DeviceFarmEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DeviceFarmClient(const Aws::DeviceFarm::DeviceFarmClientConfiguration& clientConfiguration = Aws::DeviceFarm::DeviceFarmClientConfiguration(),
                         std::shared_ptr<DeviceFarmEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DeviceFarmClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<DeviceFarmEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::DeviceFarm::DeviceFarmClientConfiguration& clientConfiguration = Aws::DeviceFarm::DeviceFarmClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DeviceFarmClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<DeviceFarmEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::DeviceFarm::DeviceFarmClientConfiguration& clientConfiguration = Aws::DeviceFarm::DeviceFarmClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DeviceFarmClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DeviceFarmClient(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DeviceFarmClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~DeviceFarmClient();

        /**
         * <p>Creates a device pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateDevicePool">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDevicePoolOutcome CreateDevicePool(const Model::CreateDevicePoolRequest& request) const;

        /**
         * A Callable wrapper for CreateDevicePool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDevicePoolRequestT = Model::CreateDevicePoolRequest>
        Model::CreateDevicePoolOutcomeCallable CreateDevicePoolCallable(const CreateDevicePoolRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::CreateDevicePool, request);
        }

        /**
         * An Async wrapper for CreateDevicePool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDevicePoolRequestT = Model::CreateDevicePoolRequest>
        void CreateDevicePoolAsync(const CreateDevicePoolRequestT& request, const CreateDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::CreateDevicePool, request, handler, context);
        }

        /**
         * <p>Creates a profile that can be applied to one or more private fleet device
         * instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateInstanceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInstanceProfileOutcome CreateInstanceProfile(const Model::CreateInstanceProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateInstanceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateInstanceProfileRequestT = Model::CreateInstanceProfileRequest>
        Model::CreateInstanceProfileOutcomeCallable CreateInstanceProfileCallable(const CreateInstanceProfileRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::CreateInstanceProfile, request);
        }

        /**
         * An Async wrapper for CreateInstanceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateInstanceProfileRequestT = Model::CreateInstanceProfileRequest>
        void CreateInstanceProfileAsync(const CreateInstanceProfileRequestT& request, const CreateInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::CreateInstanceProfile, request, handler, context);
        }

        /**
         * <p>Creates a network profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateNetworkProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkProfileOutcome CreateNetworkProfile(const Model::CreateNetworkProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateNetworkProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateNetworkProfileRequestT = Model::CreateNetworkProfileRequest>
        Model::CreateNetworkProfileOutcomeCallable CreateNetworkProfileCallable(const CreateNetworkProfileRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::CreateNetworkProfile, request);
        }

        /**
         * An Async wrapper for CreateNetworkProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateNetworkProfileRequestT = Model::CreateNetworkProfileRequest>
        void CreateNetworkProfileAsync(const CreateNetworkProfileRequestT& request, const CreateNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::CreateNetworkProfile, request, handler, context);
        }

        /**
         * <p>Creates a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProjectOutcome CreateProject(const Model::CreateProjectRequest& request) const;

        /**
         * A Callable wrapper for CreateProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateProjectRequestT = Model::CreateProjectRequest>
        Model::CreateProjectOutcomeCallable CreateProjectCallable(const CreateProjectRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::CreateProject, request);
        }

        /**
         * An Async wrapper for CreateProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProjectRequestT = Model::CreateProjectRequest>
        void CreateProjectAsync(const CreateProjectRequestT& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::CreateProject, request, handler, context);
        }

        /**
         * <p>Specifies and starts a remote access session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateRemoteAccessSession">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRemoteAccessSessionOutcome CreateRemoteAccessSession(const Model::CreateRemoteAccessSessionRequest& request) const;

        /**
         * A Callable wrapper for CreateRemoteAccessSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRemoteAccessSessionRequestT = Model::CreateRemoteAccessSessionRequest>
        Model::CreateRemoteAccessSessionOutcomeCallable CreateRemoteAccessSessionCallable(const CreateRemoteAccessSessionRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::CreateRemoteAccessSession, request);
        }

        /**
         * An Async wrapper for CreateRemoteAccessSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRemoteAccessSessionRequestT = Model::CreateRemoteAccessSessionRequest>
        void CreateRemoteAccessSessionAsync(const CreateRemoteAccessSessionRequestT& request, const CreateRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::CreateRemoteAccessSession, request, handler, context);
        }

        /**
         * <p>Creates a Selenium testing project. Projects are used to track
         * <a>TestGridSession</a> instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateTestGridProject">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTestGridProjectOutcome CreateTestGridProject(const Model::CreateTestGridProjectRequest& request) const;

        /**
         * A Callable wrapper for CreateTestGridProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTestGridProjectRequestT = Model::CreateTestGridProjectRequest>
        Model::CreateTestGridProjectOutcomeCallable CreateTestGridProjectCallable(const CreateTestGridProjectRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::CreateTestGridProject, request);
        }

        /**
         * An Async wrapper for CreateTestGridProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTestGridProjectRequestT = Model::CreateTestGridProjectRequest>
        void CreateTestGridProjectAsync(const CreateTestGridProjectRequestT& request, const CreateTestGridProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::CreateTestGridProject, request, handler, context);
        }

        /**
         * <p>Creates a signed, short-term URL that can be passed to a Selenium
         * <code>RemoteWebDriver</code> constructor.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateTestGridUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTestGridUrlOutcome CreateTestGridUrl(const Model::CreateTestGridUrlRequest& request) const;

        /**
         * A Callable wrapper for CreateTestGridUrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTestGridUrlRequestT = Model::CreateTestGridUrlRequest>
        Model::CreateTestGridUrlOutcomeCallable CreateTestGridUrlCallable(const CreateTestGridUrlRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::CreateTestGridUrl, request);
        }

        /**
         * An Async wrapper for CreateTestGridUrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTestGridUrlRequestT = Model::CreateTestGridUrlRequest>
        void CreateTestGridUrlAsync(const CreateTestGridUrlRequestT& request, const CreateTestGridUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::CreateTestGridUrl, request, handler, context);
        }

        /**
         * <p>Uploads an app or test scripts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUploadOutcome CreateUpload(const Model::CreateUploadRequest& request) const;

        /**
         * A Callable wrapper for CreateUpload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateUploadRequestT = Model::CreateUploadRequest>
        Model::CreateUploadOutcomeCallable CreateUploadCallable(const CreateUploadRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::CreateUpload, request);
        }

        /**
         * An Async wrapper for CreateUpload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateUploadRequestT = Model::CreateUploadRequest>
        void CreateUploadAsync(const CreateUploadRequestT& request, const CreateUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::CreateUpload, request, handler, context);
        }

        /**
         * <p>Creates a configuration record in Device Farm for your Amazon Virtual Private
         * Cloud (VPC) endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateVPCEConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVPCEConfigurationOutcome CreateVPCEConfiguration(const Model::CreateVPCEConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateVPCEConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVPCEConfigurationRequestT = Model::CreateVPCEConfigurationRequest>
        Model::CreateVPCEConfigurationOutcomeCallable CreateVPCEConfigurationCallable(const CreateVPCEConfigurationRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::CreateVPCEConfiguration, request);
        }

        /**
         * An Async wrapper for CreateVPCEConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVPCEConfigurationRequestT = Model::CreateVPCEConfigurationRequest>
        void CreateVPCEConfigurationAsync(const CreateVPCEConfigurationRequestT& request, const CreateVPCEConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::CreateVPCEConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes a device pool given the pool ARN. Does not allow deletion of curated
         * pools owned by the system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteDevicePool">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDevicePoolOutcome DeleteDevicePool(const Model::DeleteDevicePoolRequest& request) const;

        /**
         * A Callable wrapper for DeleteDevicePool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDevicePoolRequestT = Model::DeleteDevicePoolRequest>
        Model::DeleteDevicePoolOutcomeCallable DeleteDevicePoolCallable(const DeleteDevicePoolRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::DeleteDevicePool, request);
        }

        /**
         * An Async wrapper for DeleteDevicePool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDevicePoolRequestT = Model::DeleteDevicePoolRequest>
        void DeleteDevicePoolAsync(const DeleteDevicePoolRequestT& request, const DeleteDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::DeleteDevicePool, request, handler, context);
        }

        /**
         * <p>Deletes a profile that can be applied to one or more private device
         * instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteInstanceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInstanceProfileOutcome DeleteInstanceProfile(const Model::DeleteInstanceProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteInstanceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteInstanceProfileRequestT = Model::DeleteInstanceProfileRequest>
        Model::DeleteInstanceProfileOutcomeCallable DeleteInstanceProfileCallable(const DeleteInstanceProfileRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::DeleteInstanceProfile, request);
        }

        /**
         * An Async wrapper for DeleteInstanceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteInstanceProfileRequestT = Model::DeleteInstanceProfileRequest>
        void DeleteInstanceProfileAsync(const DeleteInstanceProfileRequestT& request, const DeleteInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::DeleteInstanceProfile, request, handler, context);
        }

        /**
         * <p>Deletes a network profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteNetworkProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkProfileOutcome DeleteNetworkProfile(const Model::DeleteNetworkProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteNetworkProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteNetworkProfileRequestT = Model::DeleteNetworkProfileRequest>
        Model::DeleteNetworkProfileOutcomeCallable DeleteNetworkProfileCallable(const DeleteNetworkProfileRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::DeleteNetworkProfile, request);
        }

        /**
         * An Async wrapper for DeleteNetworkProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteNetworkProfileRequestT = Model::DeleteNetworkProfileRequest>
        void DeleteNetworkProfileAsync(const DeleteNetworkProfileRequestT& request, const DeleteNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::DeleteNetworkProfile, request, handler, context);
        }

        /**
         * <p>Deletes an AWS Device Farm project, given the project ARN.</p> <p> Deleting
         * this resource does not stop an in-progress run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest& request) const;

        /**
         * A Callable wrapper for DeleteProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteProjectRequestT = Model::DeleteProjectRequest>
        Model::DeleteProjectOutcomeCallable DeleteProjectCallable(const DeleteProjectRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::DeleteProject, request);
        }

        /**
         * An Async wrapper for DeleteProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProjectRequestT = Model::DeleteProjectRequest>
        void DeleteProjectAsync(const DeleteProjectRequestT& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::DeleteProject, request, handler, context);
        }

        /**
         * <p>Deletes a completed remote access session and its results.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteRemoteAccessSession">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRemoteAccessSessionOutcome DeleteRemoteAccessSession(const Model::DeleteRemoteAccessSessionRequest& request) const;

        /**
         * A Callable wrapper for DeleteRemoteAccessSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRemoteAccessSessionRequestT = Model::DeleteRemoteAccessSessionRequest>
        Model::DeleteRemoteAccessSessionOutcomeCallable DeleteRemoteAccessSessionCallable(const DeleteRemoteAccessSessionRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::DeleteRemoteAccessSession, request);
        }

        /**
         * An Async wrapper for DeleteRemoteAccessSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRemoteAccessSessionRequestT = Model::DeleteRemoteAccessSessionRequest>
        void DeleteRemoteAccessSessionAsync(const DeleteRemoteAccessSessionRequestT& request, const DeleteRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::DeleteRemoteAccessSession, request, handler, context);
        }

        /**
         * <p>Deletes the run, given the run ARN.</p> <p> Deleting this resource does not
         * stop an in-progress run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteRun">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRunOutcome DeleteRun(const Model::DeleteRunRequest& request) const;

        /**
         * A Callable wrapper for DeleteRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRunRequestT = Model::DeleteRunRequest>
        Model::DeleteRunOutcomeCallable DeleteRunCallable(const DeleteRunRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::DeleteRun, request);
        }

        /**
         * An Async wrapper for DeleteRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRunRequestT = Model::DeleteRunRequest>
        void DeleteRunAsync(const DeleteRunRequestT& request, const DeleteRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::DeleteRun, request, handler, context);
        }

        /**
         * <p> Deletes a Selenium testing project and all content generated under it. </p>
         *  <p>You cannot undo this operation.</p>   <p>You
         * cannot delete a project if it has active sessions.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteTestGridProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTestGridProjectOutcome DeleteTestGridProject(const Model::DeleteTestGridProjectRequest& request) const;

        /**
         * A Callable wrapper for DeleteTestGridProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTestGridProjectRequestT = Model::DeleteTestGridProjectRequest>
        Model::DeleteTestGridProjectOutcomeCallable DeleteTestGridProjectCallable(const DeleteTestGridProjectRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::DeleteTestGridProject, request);
        }

        /**
         * An Async wrapper for DeleteTestGridProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTestGridProjectRequestT = Model::DeleteTestGridProjectRequest>
        void DeleteTestGridProjectAsync(const DeleteTestGridProjectRequestT& request, const DeleteTestGridProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::DeleteTestGridProject, request, handler, context);
        }

        /**
         * <p>Deletes an upload given the upload ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUploadOutcome DeleteUpload(const Model::DeleteUploadRequest& request) const;

        /**
         * A Callable wrapper for DeleteUpload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteUploadRequestT = Model::DeleteUploadRequest>
        Model::DeleteUploadOutcomeCallable DeleteUploadCallable(const DeleteUploadRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::DeleteUpload, request);
        }

        /**
         * An Async wrapper for DeleteUpload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteUploadRequestT = Model::DeleteUploadRequest>
        void DeleteUploadAsync(const DeleteUploadRequestT& request, const DeleteUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::DeleteUpload, request, handler, context);
        }

        /**
         * <p>Deletes a configuration for your Amazon Virtual Private Cloud (VPC)
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteVPCEConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVPCEConfigurationOutcome DeleteVPCEConfiguration(const Model::DeleteVPCEConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteVPCEConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVPCEConfigurationRequestT = Model::DeleteVPCEConfigurationRequest>
        Model::DeleteVPCEConfigurationOutcomeCallable DeleteVPCEConfigurationCallable(const DeleteVPCEConfigurationRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::DeleteVPCEConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteVPCEConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVPCEConfigurationRequestT = Model::DeleteVPCEConfigurationRequest>
        void DeleteVPCEConfigurationAsync(const DeleteVPCEConfigurationRequestT& request, const DeleteVPCEConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::DeleteVPCEConfiguration, request, handler, context);
        }

        /**
         * <p>Returns the number of unmetered iOS or unmetered Android devices that have
         * been purchased by the account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetAccountSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountSettingsOutcome GetAccountSettings(const Model::GetAccountSettingsRequest& request) const;

        /**
         * A Callable wrapper for GetAccountSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAccountSettingsRequestT = Model::GetAccountSettingsRequest>
        Model::GetAccountSettingsOutcomeCallable GetAccountSettingsCallable(const GetAccountSettingsRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::GetAccountSettings, request);
        }

        /**
         * An Async wrapper for GetAccountSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAccountSettingsRequestT = Model::GetAccountSettingsRequest>
        void GetAccountSettingsAsync(const GetAccountSettingsRequestT& request, const GetAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::GetAccountSettings, request, handler, context);
        }

        /**
         * <p>Gets information about a unique device type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceOutcome GetDevice(const Model::GetDeviceRequest& request) const;

        /**
         * A Callable wrapper for GetDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDeviceRequestT = Model::GetDeviceRequest>
        Model::GetDeviceOutcomeCallable GetDeviceCallable(const GetDeviceRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::GetDevice, request);
        }

        /**
         * An Async wrapper for GetDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDeviceRequestT = Model::GetDeviceRequest>
        void GetDeviceAsync(const GetDeviceRequestT& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::GetDevice, request, handler, context);
        }

        /**
         * <p>Returns information about a device instance that belongs to a private device
         * fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetDeviceInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceInstanceOutcome GetDeviceInstance(const Model::GetDeviceInstanceRequest& request) const;

        /**
         * A Callable wrapper for GetDeviceInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDeviceInstanceRequestT = Model::GetDeviceInstanceRequest>
        Model::GetDeviceInstanceOutcomeCallable GetDeviceInstanceCallable(const GetDeviceInstanceRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::GetDeviceInstance, request);
        }

        /**
         * An Async wrapper for GetDeviceInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDeviceInstanceRequestT = Model::GetDeviceInstanceRequest>
        void GetDeviceInstanceAsync(const GetDeviceInstanceRequestT& request, const GetDeviceInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::GetDeviceInstance, request, handler, context);
        }

        /**
         * <p>Gets information about a device pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetDevicePool">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDevicePoolOutcome GetDevicePool(const Model::GetDevicePoolRequest& request) const;

        /**
         * A Callable wrapper for GetDevicePool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDevicePoolRequestT = Model::GetDevicePoolRequest>
        Model::GetDevicePoolOutcomeCallable GetDevicePoolCallable(const GetDevicePoolRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::GetDevicePool, request);
        }

        /**
         * An Async wrapper for GetDevicePool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDevicePoolRequestT = Model::GetDevicePoolRequest>
        void GetDevicePoolAsync(const GetDevicePoolRequestT& request, const GetDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::GetDevicePool, request, handler, context);
        }

        /**
         * <p>Gets information about compatibility with a device pool.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetDevicePoolCompatibility">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDevicePoolCompatibilityOutcome GetDevicePoolCompatibility(const Model::GetDevicePoolCompatibilityRequest& request) const;

        /**
         * A Callable wrapper for GetDevicePoolCompatibility that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDevicePoolCompatibilityRequestT = Model::GetDevicePoolCompatibilityRequest>
        Model::GetDevicePoolCompatibilityOutcomeCallable GetDevicePoolCompatibilityCallable(const GetDevicePoolCompatibilityRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::GetDevicePoolCompatibility, request);
        }

        /**
         * An Async wrapper for GetDevicePoolCompatibility that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDevicePoolCompatibilityRequestT = Model::GetDevicePoolCompatibilityRequest>
        void GetDevicePoolCompatibilityAsync(const GetDevicePoolCompatibilityRequestT& request, const GetDevicePoolCompatibilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::GetDevicePoolCompatibility, request, handler, context);
        }

        /**
         * <p>Returns information about the specified instance profile.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetInstanceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstanceProfileOutcome GetInstanceProfile(const Model::GetInstanceProfileRequest& request) const;

        /**
         * A Callable wrapper for GetInstanceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInstanceProfileRequestT = Model::GetInstanceProfileRequest>
        Model::GetInstanceProfileOutcomeCallable GetInstanceProfileCallable(const GetInstanceProfileRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::GetInstanceProfile, request);
        }

        /**
         * An Async wrapper for GetInstanceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInstanceProfileRequestT = Model::GetInstanceProfileRequest>
        void GetInstanceProfileAsync(const GetInstanceProfileRequestT& request, const GetInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::GetInstanceProfile, request, handler, context);
        }

        /**
         * <p>Gets information about a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobOutcome GetJob(const Model::GetJobRequest& request) const;

        /**
         * A Callable wrapper for GetJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetJobRequestT = Model::GetJobRequest>
        Model::GetJobOutcomeCallable GetJobCallable(const GetJobRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::GetJob, request);
        }

        /**
         * An Async wrapper for GetJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetJobRequestT = Model::GetJobRequest>
        void GetJobAsync(const GetJobRequestT& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::GetJob, request, handler, context);
        }

        /**
         * <p>Returns information about a network profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetNetworkProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkProfileOutcome GetNetworkProfile(const Model::GetNetworkProfileRequest& request) const;

        /**
         * A Callable wrapper for GetNetworkProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetNetworkProfileRequestT = Model::GetNetworkProfileRequest>
        Model::GetNetworkProfileOutcomeCallable GetNetworkProfileCallable(const GetNetworkProfileRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::GetNetworkProfile, request);
        }

        /**
         * An Async wrapper for GetNetworkProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetNetworkProfileRequestT = Model::GetNetworkProfileRequest>
        void GetNetworkProfileAsync(const GetNetworkProfileRequestT& request, const GetNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::GetNetworkProfile, request, handler, context);
        }

        /**
         * <p>Gets the current status and future status of all offerings purchased by an
         * AWS account. The response indicates how many offerings are currently available
         * and the offerings that will be available in the next period. The API returns a
         * <code>NotEligible</code> error if the user is not permitted to invoke the
         * operation. If you must be able to invoke this operation, contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetOfferingStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOfferingStatusOutcome GetOfferingStatus(const Model::GetOfferingStatusRequest& request) const;

        /**
         * A Callable wrapper for GetOfferingStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetOfferingStatusRequestT = Model::GetOfferingStatusRequest>
        Model::GetOfferingStatusOutcomeCallable GetOfferingStatusCallable(const GetOfferingStatusRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::GetOfferingStatus, request);
        }

        /**
         * An Async wrapper for GetOfferingStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOfferingStatusRequestT = Model::GetOfferingStatusRequest>
        void GetOfferingStatusAsync(const GetOfferingStatusRequestT& request, const GetOfferingStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::GetOfferingStatus, request, handler, context);
        }

        /**
         * <p>Gets information about a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetProject">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProjectOutcome GetProject(const Model::GetProjectRequest& request) const;

        /**
         * A Callable wrapper for GetProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetProjectRequestT = Model::GetProjectRequest>
        Model::GetProjectOutcomeCallable GetProjectCallable(const GetProjectRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::GetProject, request);
        }

        /**
         * An Async wrapper for GetProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetProjectRequestT = Model::GetProjectRequest>
        void GetProjectAsync(const GetProjectRequestT& request, const GetProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::GetProject, request, handler, context);
        }

        /**
         * <p>Returns a link to a currently running remote access session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetRemoteAccessSession">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRemoteAccessSessionOutcome GetRemoteAccessSession(const Model::GetRemoteAccessSessionRequest& request) const;

        /**
         * A Callable wrapper for GetRemoteAccessSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRemoteAccessSessionRequestT = Model::GetRemoteAccessSessionRequest>
        Model::GetRemoteAccessSessionOutcomeCallable GetRemoteAccessSessionCallable(const GetRemoteAccessSessionRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::GetRemoteAccessSession, request);
        }

        /**
         * An Async wrapper for GetRemoteAccessSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRemoteAccessSessionRequestT = Model::GetRemoteAccessSessionRequest>
        void GetRemoteAccessSessionAsync(const GetRemoteAccessSessionRequestT& request, const GetRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::GetRemoteAccessSession, request, handler, context);
        }

        /**
         * <p>Gets information about a run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetRun">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRunOutcome GetRun(const Model::GetRunRequest& request) const;

        /**
         * A Callable wrapper for GetRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRunRequestT = Model::GetRunRequest>
        Model::GetRunOutcomeCallable GetRunCallable(const GetRunRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::GetRun, request);
        }

        /**
         * An Async wrapper for GetRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRunRequestT = Model::GetRunRequest>
        void GetRunAsync(const GetRunRequestT& request, const GetRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::GetRun, request, handler, context);
        }

        /**
         * <p>Gets information about a suite.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetSuite">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSuiteOutcome GetSuite(const Model::GetSuiteRequest& request) const;

        /**
         * A Callable wrapper for GetSuite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSuiteRequestT = Model::GetSuiteRequest>
        Model::GetSuiteOutcomeCallable GetSuiteCallable(const GetSuiteRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::GetSuite, request);
        }

        /**
         * An Async wrapper for GetSuite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSuiteRequestT = Model::GetSuiteRequest>
        void GetSuiteAsync(const GetSuiteRequestT& request, const GetSuiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::GetSuite, request, handler, context);
        }

        /**
         * <p>Gets information about a test.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetTest">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTestOutcome GetTest(const Model::GetTestRequest& request) const;

        /**
         * A Callable wrapper for GetTest that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTestRequestT = Model::GetTestRequest>
        Model::GetTestOutcomeCallable GetTestCallable(const GetTestRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::GetTest, request);
        }

        /**
         * An Async wrapper for GetTest that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTestRequestT = Model::GetTestRequest>
        void GetTestAsync(const GetTestRequestT& request, const GetTestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::GetTest, request, handler, context);
        }

        /**
         * <p>Retrieves information about a Selenium testing project.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetTestGridProject">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTestGridProjectOutcome GetTestGridProject(const Model::GetTestGridProjectRequest& request) const;

        /**
         * A Callable wrapper for GetTestGridProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTestGridProjectRequestT = Model::GetTestGridProjectRequest>
        Model::GetTestGridProjectOutcomeCallable GetTestGridProjectCallable(const GetTestGridProjectRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::GetTestGridProject, request);
        }

        /**
         * An Async wrapper for GetTestGridProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTestGridProjectRequestT = Model::GetTestGridProjectRequest>
        void GetTestGridProjectAsync(const GetTestGridProjectRequestT& request, const GetTestGridProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::GetTestGridProject, request, handler, context);
        }

        /**
         * <p>A session is an instance of a browser created through a
         * <code>RemoteWebDriver</code> with the URL from
         * <a>CreateTestGridUrlResult$url</a>. You can use the following to look up
         * sessions:</p> <ul> <li> <p>The session ARN
         * (<a>GetTestGridSessionRequest$sessionArn</a>).</p> </li> <li> <p>The project ARN
         * and a session ID (<a>GetTestGridSessionRequest$projectArn</a> and
         * <a>GetTestGridSessionRequest$sessionId</a>).</p> </li> </ul> <p/><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetTestGridSession">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTestGridSessionOutcome GetTestGridSession(const Model::GetTestGridSessionRequest& request) const;

        /**
         * A Callable wrapper for GetTestGridSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTestGridSessionRequestT = Model::GetTestGridSessionRequest>
        Model::GetTestGridSessionOutcomeCallable GetTestGridSessionCallable(const GetTestGridSessionRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::GetTestGridSession, request);
        }

        /**
         * An Async wrapper for GetTestGridSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTestGridSessionRequestT = Model::GetTestGridSessionRequest>
        void GetTestGridSessionAsync(const GetTestGridSessionRequestT& request, const GetTestGridSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::GetTestGridSession, request, handler, context);
        }

        /**
         * <p>Gets information about an upload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUploadOutcome GetUpload(const Model::GetUploadRequest& request) const;

        /**
         * A Callable wrapper for GetUpload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetUploadRequestT = Model::GetUploadRequest>
        Model::GetUploadOutcomeCallable GetUploadCallable(const GetUploadRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::GetUpload, request);
        }

        /**
         * An Async wrapper for GetUpload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetUploadRequestT = Model::GetUploadRequest>
        void GetUploadAsync(const GetUploadRequestT& request, const GetUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::GetUpload, request, handler, context);
        }

        /**
         * <p>Returns information about the configuration settings for your Amazon Virtual
         * Private Cloud (VPC) endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetVPCEConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVPCEConfigurationOutcome GetVPCEConfiguration(const Model::GetVPCEConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetVPCEConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetVPCEConfigurationRequestT = Model::GetVPCEConfigurationRequest>
        Model::GetVPCEConfigurationOutcomeCallable GetVPCEConfigurationCallable(const GetVPCEConfigurationRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::GetVPCEConfiguration, request);
        }

        /**
         * An Async wrapper for GetVPCEConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVPCEConfigurationRequestT = Model::GetVPCEConfigurationRequest>
        void GetVPCEConfigurationAsync(const GetVPCEConfigurationRequestT& request, const GetVPCEConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::GetVPCEConfiguration, request, handler, context);
        }

        /**
         * <p>Installs an application to the device in a remote access session. For Android
         * applications, the file must be in .apk format. For iOS applications, the file
         * must be in .ipa format.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/InstallToRemoteAccessSession">AWS
         * API Reference</a></p>
         */
        virtual Model::InstallToRemoteAccessSessionOutcome InstallToRemoteAccessSession(const Model::InstallToRemoteAccessSessionRequest& request) const;

        /**
         * A Callable wrapper for InstallToRemoteAccessSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename InstallToRemoteAccessSessionRequestT = Model::InstallToRemoteAccessSessionRequest>
        Model::InstallToRemoteAccessSessionOutcomeCallable InstallToRemoteAccessSessionCallable(const InstallToRemoteAccessSessionRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::InstallToRemoteAccessSession, request);
        }

        /**
         * An Async wrapper for InstallToRemoteAccessSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename InstallToRemoteAccessSessionRequestT = Model::InstallToRemoteAccessSessionRequest>
        void InstallToRemoteAccessSessionAsync(const InstallToRemoteAccessSessionRequestT& request, const InstallToRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::InstallToRemoteAccessSession, request, handler, context);
        }

        /**
         * <p>Gets information about artifacts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListArtifacts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListArtifactsOutcome ListArtifacts(const Model::ListArtifactsRequest& request) const;

        /**
         * A Callable wrapper for ListArtifacts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListArtifactsRequestT = Model::ListArtifactsRequest>
        Model::ListArtifactsOutcomeCallable ListArtifactsCallable(const ListArtifactsRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::ListArtifacts, request);
        }

        /**
         * An Async wrapper for ListArtifacts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListArtifactsRequestT = Model::ListArtifactsRequest>
        void ListArtifactsAsync(const ListArtifactsRequestT& request, const ListArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::ListArtifacts, request, handler, context);
        }

        /**
         * <p>Returns information about the private device instances associated with one or
         * more AWS accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListDeviceInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeviceInstancesOutcome ListDeviceInstances(const Model::ListDeviceInstancesRequest& request) const;

        /**
         * A Callable wrapper for ListDeviceInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDeviceInstancesRequestT = Model::ListDeviceInstancesRequest>
        Model::ListDeviceInstancesOutcomeCallable ListDeviceInstancesCallable(const ListDeviceInstancesRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::ListDeviceInstances, request);
        }

        /**
         * An Async wrapper for ListDeviceInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDeviceInstancesRequestT = Model::ListDeviceInstancesRequest>
        void ListDeviceInstancesAsync(const ListDeviceInstancesRequestT& request, const ListDeviceInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::ListDeviceInstances, request, handler, context);
        }

        /**
         * <p>Gets information about device pools.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListDevicePools">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDevicePoolsOutcome ListDevicePools(const Model::ListDevicePoolsRequest& request) const;

        /**
         * A Callable wrapper for ListDevicePools that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDevicePoolsRequestT = Model::ListDevicePoolsRequest>
        Model::ListDevicePoolsOutcomeCallable ListDevicePoolsCallable(const ListDevicePoolsRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::ListDevicePools, request);
        }

        /**
         * An Async wrapper for ListDevicePools that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDevicePoolsRequestT = Model::ListDevicePoolsRequest>
        void ListDevicePoolsAsync(const ListDevicePoolsRequestT& request, const ListDevicePoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::ListDevicePools, request, handler, context);
        }

        /**
         * <p>Gets information about unique device types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDevicesOutcome ListDevices(const Model::ListDevicesRequest& request) const;

        /**
         * A Callable wrapper for ListDevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDevicesRequestT = Model::ListDevicesRequest>
        Model::ListDevicesOutcomeCallable ListDevicesCallable(const ListDevicesRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::ListDevices, request);
        }

        /**
         * An Async wrapper for ListDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDevicesRequestT = Model::ListDevicesRequest>
        void ListDevicesAsync(const ListDevicesRequestT& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::ListDevices, request, handler, context);
        }

        /**
         * <p>Returns information about all the instance profiles in an AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListInstanceProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstanceProfilesOutcome ListInstanceProfiles(const Model::ListInstanceProfilesRequest& request) const;

        /**
         * A Callable wrapper for ListInstanceProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInstanceProfilesRequestT = Model::ListInstanceProfilesRequest>
        Model::ListInstanceProfilesOutcomeCallable ListInstanceProfilesCallable(const ListInstanceProfilesRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::ListInstanceProfiles, request);
        }

        /**
         * An Async wrapper for ListInstanceProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInstanceProfilesRequestT = Model::ListInstanceProfilesRequest>
        void ListInstanceProfilesAsync(const ListInstanceProfilesRequestT& request, const ListInstanceProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::ListInstanceProfiles, request, handler, context);
        }

        /**
         * <p>Gets information about jobs for a given test run.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobsOutcome ListJobs(const Model::ListJobsRequest& request) const;

        /**
         * A Callable wrapper for ListJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListJobsRequestT = Model::ListJobsRequest>
        Model::ListJobsOutcomeCallable ListJobsCallable(const ListJobsRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::ListJobs, request);
        }

        /**
         * An Async wrapper for ListJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListJobsRequestT = Model::ListJobsRequest>
        void ListJobsAsync(const ListJobsRequestT& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::ListJobs, request, handler, context);
        }

        /**
         * <p>Returns the list of available network profiles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListNetworkProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNetworkProfilesOutcome ListNetworkProfiles(const Model::ListNetworkProfilesRequest& request) const;

        /**
         * A Callable wrapper for ListNetworkProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListNetworkProfilesRequestT = Model::ListNetworkProfilesRequest>
        Model::ListNetworkProfilesOutcomeCallable ListNetworkProfilesCallable(const ListNetworkProfilesRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::ListNetworkProfiles, request);
        }

        /**
         * An Async wrapper for ListNetworkProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListNetworkProfilesRequestT = Model::ListNetworkProfilesRequest>
        void ListNetworkProfilesAsync(const ListNetworkProfilesRequestT& request, const ListNetworkProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::ListNetworkProfiles, request, handler, context);
        }

        /**
         * <p>Returns a list of offering promotions. Each offering promotion record
         * contains the ID and description of the promotion. The API returns a
         * <code>NotEligible</code> error if the caller is not permitted to invoke the
         * operation. Contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>
         * if you must be able to invoke this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListOfferingPromotions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOfferingPromotionsOutcome ListOfferingPromotions(const Model::ListOfferingPromotionsRequest& request) const;

        /**
         * A Callable wrapper for ListOfferingPromotions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOfferingPromotionsRequestT = Model::ListOfferingPromotionsRequest>
        Model::ListOfferingPromotionsOutcomeCallable ListOfferingPromotionsCallable(const ListOfferingPromotionsRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::ListOfferingPromotions, request);
        }

        /**
         * An Async wrapper for ListOfferingPromotions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOfferingPromotionsRequestT = Model::ListOfferingPromotionsRequest>
        void ListOfferingPromotionsAsync(const ListOfferingPromotionsRequestT& request, const ListOfferingPromotionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::ListOfferingPromotions, request, handler, context);
        }

        /**
         * <p>Returns a list of all historical purchases, renewals, and system renewal
         * transactions for an AWS account. The list is paginated and ordered by a
         * descending timestamp (most recent transactions are first). The API returns a
         * <code>NotEligible</code> error if the user is not permitted to invoke the
         * operation. If you must be able to invoke this operation, contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListOfferingTransactions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOfferingTransactionsOutcome ListOfferingTransactions(const Model::ListOfferingTransactionsRequest& request) const;

        /**
         * A Callable wrapper for ListOfferingTransactions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOfferingTransactionsRequestT = Model::ListOfferingTransactionsRequest>
        Model::ListOfferingTransactionsOutcomeCallable ListOfferingTransactionsCallable(const ListOfferingTransactionsRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::ListOfferingTransactions, request);
        }

        /**
         * An Async wrapper for ListOfferingTransactions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOfferingTransactionsRequestT = Model::ListOfferingTransactionsRequest>
        void ListOfferingTransactionsAsync(const ListOfferingTransactionsRequestT& request, const ListOfferingTransactionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::ListOfferingTransactions, request, handler, context);
        }

        /**
         * <p>Returns a list of products or offerings that the user can manage through the
         * API. Each offering record indicates the recurring price per unit and the
         * frequency for that offering. The API returns a <code>NotEligible</code> error if
         * the user is not permitted to invoke the operation. If you must be able to invoke
         * this operation, contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListOfferings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOfferingsOutcome ListOfferings(const Model::ListOfferingsRequest& request) const;

        /**
         * A Callable wrapper for ListOfferings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOfferingsRequestT = Model::ListOfferingsRequest>
        Model::ListOfferingsOutcomeCallable ListOfferingsCallable(const ListOfferingsRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::ListOfferings, request);
        }

        /**
         * An Async wrapper for ListOfferings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOfferingsRequestT = Model::ListOfferingsRequest>
        void ListOfferingsAsync(const ListOfferingsRequestT& request, const ListOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::ListOfferings, request, handler, context);
        }

        /**
         * <p>Gets information about projects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProjectsOutcome ListProjects(const Model::ListProjectsRequest& request) const;

        /**
         * A Callable wrapper for ListProjects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProjectsRequestT = Model::ListProjectsRequest>
        Model::ListProjectsOutcomeCallable ListProjectsCallable(const ListProjectsRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::ListProjects, request);
        }

        /**
         * An Async wrapper for ListProjects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProjectsRequestT = Model::ListProjectsRequest>
        void ListProjectsAsync(const ListProjectsRequestT& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::ListProjects, request, handler, context);
        }

        /**
         * <p>Returns a list of all currently running remote access sessions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListRemoteAccessSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRemoteAccessSessionsOutcome ListRemoteAccessSessions(const Model::ListRemoteAccessSessionsRequest& request) const;

        /**
         * A Callable wrapper for ListRemoteAccessSessions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRemoteAccessSessionsRequestT = Model::ListRemoteAccessSessionsRequest>
        Model::ListRemoteAccessSessionsOutcomeCallable ListRemoteAccessSessionsCallable(const ListRemoteAccessSessionsRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::ListRemoteAccessSessions, request);
        }

        /**
         * An Async wrapper for ListRemoteAccessSessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRemoteAccessSessionsRequestT = Model::ListRemoteAccessSessionsRequest>
        void ListRemoteAccessSessionsAsync(const ListRemoteAccessSessionsRequestT& request, const ListRemoteAccessSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::ListRemoteAccessSessions, request, handler, context);
        }

        /**
         * <p>Gets information about runs, given an AWS Device Farm project
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRunsOutcome ListRuns(const Model::ListRunsRequest& request) const;

        /**
         * A Callable wrapper for ListRuns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRunsRequestT = Model::ListRunsRequest>
        Model::ListRunsOutcomeCallable ListRunsCallable(const ListRunsRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::ListRuns, request);
        }

        /**
         * An Async wrapper for ListRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRunsRequestT = Model::ListRunsRequest>
        void ListRunsAsync(const ListRunsRequestT& request, const ListRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::ListRuns, request, handler, context);
        }

        /**
         * <p>Gets information about samples, given an AWS Device Farm job
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListSamples">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSamplesOutcome ListSamples(const Model::ListSamplesRequest& request) const;

        /**
         * A Callable wrapper for ListSamples that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSamplesRequestT = Model::ListSamplesRequest>
        Model::ListSamplesOutcomeCallable ListSamplesCallable(const ListSamplesRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::ListSamples, request);
        }

        /**
         * An Async wrapper for ListSamples that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSamplesRequestT = Model::ListSamplesRequest>
        void ListSamplesAsync(const ListSamplesRequestT& request, const ListSamplesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::ListSamples, request, handler, context);
        }

        /**
         * <p>Gets information about test suites for a given job.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListSuites">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSuitesOutcome ListSuites(const Model::ListSuitesRequest& request) const;

        /**
         * A Callable wrapper for ListSuites that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSuitesRequestT = Model::ListSuitesRequest>
        Model::ListSuitesOutcomeCallable ListSuitesCallable(const ListSuitesRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::ListSuites, request);
        }

        /**
         * An Async wrapper for ListSuites that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSuitesRequestT = Model::ListSuitesRequest>
        void ListSuitesAsync(const ListSuitesRequestT& request, const ListSuitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::ListSuites, request, handler, context);
        }

        /**
         * <p>List the tags for an AWS Device Farm resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Gets a list of all Selenium testing projects in your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListTestGridProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTestGridProjectsOutcome ListTestGridProjects(const Model::ListTestGridProjectsRequest& request) const;

        /**
         * A Callable wrapper for ListTestGridProjects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTestGridProjectsRequestT = Model::ListTestGridProjectsRequest>
        Model::ListTestGridProjectsOutcomeCallable ListTestGridProjectsCallable(const ListTestGridProjectsRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::ListTestGridProjects, request);
        }

        /**
         * An Async wrapper for ListTestGridProjects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTestGridProjectsRequestT = Model::ListTestGridProjectsRequest>
        void ListTestGridProjectsAsync(const ListTestGridProjectsRequestT& request, const ListTestGridProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::ListTestGridProjects, request, handler, context);
        }

        /**
         * <p>Returns a list of the actions taken in a
         * <a>TestGridSession</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListTestGridSessionActions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTestGridSessionActionsOutcome ListTestGridSessionActions(const Model::ListTestGridSessionActionsRequest& request) const;

        /**
         * A Callable wrapper for ListTestGridSessionActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTestGridSessionActionsRequestT = Model::ListTestGridSessionActionsRequest>
        Model::ListTestGridSessionActionsOutcomeCallable ListTestGridSessionActionsCallable(const ListTestGridSessionActionsRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::ListTestGridSessionActions, request);
        }

        /**
         * An Async wrapper for ListTestGridSessionActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTestGridSessionActionsRequestT = Model::ListTestGridSessionActionsRequest>
        void ListTestGridSessionActionsAsync(const ListTestGridSessionActionsRequestT& request, const ListTestGridSessionActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::ListTestGridSessionActions, request, handler, context);
        }

        /**
         * <p>Retrieves a list of artifacts created during the session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListTestGridSessionArtifacts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTestGridSessionArtifactsOutcome ListTestGridSessionArtifacts(const Model::ListTestGridSessionArtifactsRequest& request) const;

        /**
         * A Callable wrapper for ListTestGridSessionArtifacts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTestGridSessionArtifactsRequestT = Model::ListTestGridSessionArtifactsRequest>
        Model::ListTestGridSessionArtifactsOutcomeCallable ListTestGridSessionArtifactsCallable(const ListTestGridSessionArtifactsRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::ListTestGridSessionArtifacts, request);
        }

        /**
         * An Async wrapper for ListTestGridSessionArtifacts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTestGridSessionArtifactsRequestT = Model::ListTestGridSessionArtifactsRequest>
        void ListTestGridSessionArtifactsAsync(const ListTestGridSessionArtifactsRequestT& request, const ListTestGridSessionArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::ListTestGridSessionArtifacts, request, handler, context);
        }

        /**
         * <p>Retrieves a list of sessions for a <a>TestGridProject</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListTestGridSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTestGridSessionsOutcome ListTestGridSessions(const Model::ListTestGridSessionsRequest& request) const;

        /**
         * A Callable wrapper for ListTestGridSessions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTestGridSessionsRequestT = Model::ListTestGridSessionsRequest>
        Model::ListTestGridSessionsOutcomeCallable ListTestGridSessionsCallable(const ListTestGridSessionsRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::ListTestGridSessions, request);
        }

        /**
         * An Async wrapper for ListTestGridSessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTestGridSessionsRequestT = Model::ListTestGridSessionsRequest>
        void ListTestGridSessionsAsync(const ListTestGridSessionsRequestT& request, const ListTestGridSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::ListTestGridSessions, request, handler, context);
        }

        /**
         * <p>Gets information about tests in a given test suite.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListTests">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTestsOutcome ListTests(const Model::ListTestsRequest& request) const;

        /**
         * A Callable wrapper for ListTests that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTestsRequestT = Model::ListTestsRequest>
        Model::ListTestsOutcomeCallable ListTestsCallable(const ListTestsRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::ListTests, request);
        }

        /**
         * An Async wrapper for ListTests that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTestsRequestT = Model::ListTestsRequest>
        void ListTestsAsync(const ListTestsRequestT& request, const ListTestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::ListTests, request, handler, context);
        }

        /**
         * <p>Gets information about unique problems, such as exceptions or crashes.</p>
         * <p>Unique problems are defined as a single instance of an error across a run,
         * job, or suite. For example, if a call in your application consistently raises an
         * exception (<code>OutOfBoundsException in MyActivity.java:386</code>),
         * <code>ListUniqueProblems</code> returns a single entry instead of many
         * individual entries for that exception.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListUniqueProblems">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUniqueProblemsOutcome ListUniqueProblems(const Model::ListUniqueProblemsRequest& request) const;

        /**
         * A Callable wrapper for ListUniqueProblems that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListUniqueProblemsRequestT = Model::ListUniqueProblemsRequest>
        Model::ListUniqueProblemsOutcomeCallable ListUniqueProblemsCallable(const ListUniqueProblemsRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::ListUniqueProblems, request);
        }

        /**
         * An Async wrapper for ListUniqueProblems that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListUniqueProblemsRequestT = Model::ListUniqueProblemsRequest>
        void ListUniqueProblemsAsync(const ListUniqueProblemsRequestT& request, const ListUniqueProblemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::ListUniqueProblems, request, handler, context);
        }

        /**
         * <p>Gets information about uploads, given an AWS Device Farm project
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListUploads">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUploadsOutcome ListUploads(const Model::ListUploadsRequest& request) const;

        /**
         * A Callable wrapper for ListUploads that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListUploadsRequestT = Model::ListUploadsRequest>
        Model::ListUploadsOutcomeCallable ListUploadsCallable(const ListUploadsRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::ListUploads, request);
        }

        /**
         * An Async wrapper for ListUploads that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListUploadsRequestT = Model::ListUploadsRequest>
        void ListUploadsAsync(const ListUploadsRequestT& request, const ListUploadsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::ListUploads, request, handler, context);
        }

        /**
         * <p>Returns information about all Amazon Virtual Private Cloud (VPC) endpoint
         * configurations in the AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListVPCEConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVPCEConfigurationsOutcome ListVPCEConfigurations(const Model::ListVPCEConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListVPCEConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVPCEConfigurationsRequestT = Model::ListVPCEConfigurationsRequest>
        Model::ListVPCEConfigurationsOutcomeCallable ListVPCEConfigurationsCallable(const ListVPCEConfigurationsRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::ListVPCEConfigurations, request);
        }

        /**
         * An Async wrapper for ListVPCEConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVPCEConfigurationsRequestT = Model::ListVPCEConfigurationsRequest>
        void ListVPCEConfigurationsAsync(const ListVPCEConfigurationsRequestT& request, const ListVPCEConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::ListVPCEConfigurations, request, handler, context);
        }

        /**
         * <p>Immediately purchases offerings for an AWS account. Offerings renew with the
         * latest total purchased quantity for an offering, unless the renewal was
         * overridden. The API returns a <code>NotEligible</code> error if the user is not
         * permitted to invoke the operation. If you must be able to invoke this operation,
         * contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/PurchaseOffering">AWS
         * API Reference</a></p>
         */
        virtual Model::PurchaseOfferingOutcome PurchaseOffering(const Model::PurchaseOfferingRequest& request) const;

        /**
         * A Callable wrapper for PurchaseOffering that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PurchaseOfferingRequestT = Model::PurchaseOfferingRequest>
        Model::PurchaseOfferingOutcomeCallable PurchaseOfferingCallable(const PurchaseOfferingRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::PurchaseOffering, request);
        }

        /**
         * An Async wrapper for PurchaseOffering that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PurchaseOfferingRequestT = Model::PurchaseOfferingRequest>
        void PurchaseOfferingAsync(const PurchaseOfferingRequestT& request, const PurchaseOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::PurchaseOffering, request, handler, context);
        }

        /**
         * <p>Explicitly sets the quantity of devices to renew for an offering, starting
         * from the <code>effectiveDate</code> of the next period. The API returns a
         * <code>NotEligible</code> error if the user is not permitted to invoke the
         * operation. If you must be able to invoke this operation, contact <a
         * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/RenewOffering">AWS
         * API Reference</a></p>
         */
        virtual Model::RenewOfferingOutcome RenewOffering(const Model::RenewOfferingRequest& request) const;

        /**
         * A Callable wrapper for RenewOffering that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RenewOfferingRequestT = Model::RenewOfferingRequest>
        Model::RenewOfferingOutcomeCallable RenewOfferingCallable(const RenewOfferingRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::RenewOffering, request);
        }

        /**
         * An Async wrapper for RenewOffering that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RenewOfferingRequestT = Model::RenewOfferingRequest>
        void RenewOfferingAsync(const RenewOfferingRequestT& request, const RenewOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::RenewOffering, request, handler, context);
        }

        /**
         * <p>Schedules a run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ScheduleRun">AWS
         * API Reference</a></p>
         */
        virtual Model::ScheduleRunOutcome ScheduleRun(const Model::ScheduleRunRequest& request) const;

        /**
         * A Callable wrapper for ScheduleRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ScheduleRunRequestT = Model::ScheduleRunRequest>
        Model::ScheduleRunOutcomeCallable ScheduleRunCallable(const ScheduleRunRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::ScheduleRun, request);
        }

        /**
         * An Async wrapper for ScheduleRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ScheduleRunRequestT = Model::ScheduleRunRequest>
        void ScheduleRunAsync(const ScheduleRunRequestT& request, const ScheduleRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::ScheduleRun, request, handler, context);
        }

        /**
         * <p>Initiates a stop request for the current job. AWS Device Farm immediately
         * stops the job on the device where tests have not started. You are not billed for
         * this device. On the device where tests have started, setup suite and teardown
         * suite tests run to completion on the device. You are billed for setup, teardown,
         * and any tests that were in progress or already completed.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/StopJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopJobOutcome StopJob(const Model::StopJobRequest& request) const;

        /**
         * A Callable wrapper for StopJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopJobRequestT = Model::StopJobRequest>
        Model::StopJobOutcomeCallable StopJobCallable(const StopJobRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::StopJob, request);
        }

        /**
         * An Async wrapper for StopJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopJobRequestT = Model::StopJobRequest>
        void StopJobAsync(const StopJobRequestT& request, const StopJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::StopJob, request, handler, context);
        }

        /**
         * <p>Ends a specified remote access session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/StopRemoteAccessSession">AWS
         * API Reference</a></p>
         */
        virtual Model::StopRemoteAccessSessionOutcome StopRemoteAccessSession(const Model::StopRemoteAccessSessionRequest& request) const;

        /**
         * A Callable wrapper for StopRemoteAccessSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopRemoteAccessSessionRequestT = Model::StopRemoteAccessSessionRequest>
        Model::StopRemoteAccessSessionOutcomeCallable StopRemoteAccessSessionCallable(const StopRemoteAccessSessionRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::StopRemoteAccessSession, request);
        }

        /**
         * An Async wrapper for StopRemoteAccessSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopRemoteAccessSessionRequestT = Model::StopRemoteAccessSessionRequest>
        void StopRemoteAccessSessionAsync(const StopRemoteAccessSessionRequestT& request, const StopRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::StopRemoteAccessSession, request, handler, context);
        }

        /**
         * <p>Initiates a stop request for the current test run. AWS Device Farm
         * immediately stops the run on devices where tests have not started. You are not
         * billed for these devices. On devices where tests have started executing, setup
         * suite and teardown suite tests run to completion on those devices. You are
         * billed for setup, teardown, and any tests that were in progress or already
         * completed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/StopRun">AWS
         * API Reference</a></p>
         */
        virtual Model::StopRunOutcome StopRun(const Model::StopRunRequest& request) const;

        /**
         * A Callable wrapper for StopRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopRunRequestT = Model::StopRunRequest>
        Model::StopRunOutcomeCallable StopRunCallable(const StopRunRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::StopRun, request);
        }

        /**
         * An Async wrapper for StopRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopRunRequestT = Model::StopRunRequest>
        void StopRunAsync(const StopRunRequestT& request, const StopRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::StopRun, request, handler, context);
        }

        /**
         * <p>Associates the specified tags to a resource with the specified
         * <code>resourceArn</code>. If existing tags on a resource are not specified in
         * the request parameters, they are not changed. When a resource is deleted, the
         * tags associated with that resource are also deleted.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::TagResource, request, handler, context);
        }

        /**
         * <p>Deletes the specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates information about a private device instance.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateDeviceInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeviceInstanceOutcome UpdateDeviceInstance(const Model::UpdateDeviceInstanceRequest& request) const;

        /**
         * A Callable wrapper for UpdateDeviceInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDeviceInstanceRequestT = Model::UpdateDeviceInstanceRequest>
        Model::UpdateDeviceInstanceOutcomeCallable UpdateDeviceInstanceCallable(const UpdateDeviceInstanceRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::UpdateDeviceInstance, request);
        }

        /**
         * An Async wrapper for UpdateDeviceInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDeviceInstanceRequestT = Model::UpdateDeviceInstanceRequest>
        void UpdateDeviceInstanceAsync(const UpdateDeviceInstanceRequestT& request, const UpdateDeviceInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::UpdateDeviceInstance, request, handler, context);
        }

        /**
         * <p>Modifies the name, description, and rules in a device pool given the
         * attributes and the pool ARN. Rule updates are all-or-nothing, meaning they can
         * only be updated as a whole (or not at all).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateDevicePool">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDevicePoolOutcome UpdateDevicePool(const Model::UpdateDevicePoolRequest& request) const;

        /**
         * A Callable wrapper for UpdateDevicePool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDevicePoolRequestT = Model::UpdateDevicePoolRequest>
        Model::UpdateDevicePoolOutcomeCallable UpdateDevicePoolCallable(const UpdateDevicePoolRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::UpdateDevicePool, request);
        }

        /**
         * An Async wrapper for UpdateDevicePool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDevicePoolRequestT = Model::UpdateDevicePoolRequest>
        void UpdateDevicePoolAsync(const UpdateDevicePoolRequestT& request, const UpdateDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::UpdateDevicePool, request, handler, context);
        }

        /**
         * <p>Updates information about an existing private device instance
         * profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateInstanceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInstanceProfileOutcome UpdateInstanceProfile(const Model::UpdateInstanceProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateInstanceProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateInstanceProfileRequestT = Model::UpdateInstanceProfileRequest>
        Model::UpdateInstanceProfileOutcomeCallable UpdateInstanceProfileCallable(const UpdateInstanceProfileRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::UpdateInstanceProfile, request);
        }

        /**
         * An Async wrapper for UpdateInstanceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateInstanceProfileRequestT = Model::UpdateInstanceProfileRequest>
        void UpdateInstanceProfileAsync(const UpdateInstanceProfileRequestT& request, const UpdateInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::UpdateInstanceProfile, request, handler, context);
        }

        /**
         * <p>Updates the network profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateNetworkProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNetworkProfileOutcome UpdateNetworkProfile(const Model::UpdateNetworkProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateNetworkProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateNetworkProfileRequestT = Model::UpdateNetworkProfileRequest>
        Model::UpdateNetworkProfileOutcomeCallable UpdateNetworkProfileCallable(const UpdateNetworkProfileRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::UpdateNetworkProfile, request);
        }

        /**
         * An Async wrapper for UpdateNetworkProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateNetworkProfileRequestT = Model::UpdateNetworkProfileRequest>
        void UpdateNetworkProfileAsync(const UpdateNetworkProfileRequestT& request, const UpdateNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::UpdateNetworkProfile, request, handler, context);
        }

        /**
         * <p>Modifies the specified project name, given the project ARN and a new
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProjectOutcome UpdateProject(const Model::UpdateProjectRequest& request) const;

        /**
         * A Callable wrapper for UpdateProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateProjectRequestT = Model::UpdateProjectRequest>
        Model::UpdateProjectOutcomeCallable UpdateProjectCallable(const UpdateProjectRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::UpdateProject, request);
        }

        /**
         * An Async wrapper for UpdateProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateProjectRequestT = Model::UpdateProjectRequest>
        void UpdateProjectAsync(const UpdateProjectRequestT& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::UpdateProject, request, handler, context);
        }

        /**
         * <p>Change details of a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateTestGridProject">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTestGridProjectOutcome UpdateTestGridProject(const Model::UpdateTestGridProjectRequest& request) const;

        /**
         * A Callable wrapper for UpdateTestGridProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTestGridProjectRequestT = Model::UpdateTestGridProjectRequest>
        Model::UpdateTestGridProjectOutcomeCallable UpdateTestGridProjectCallable(const UpdateTestGridProjectRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::UpdateTestGridProject, request);
        }

        /**
         * An Async wrapper for UpdateTestGridProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTestGridProjectRequestT = Model::UpdateTestGridProjectRequest>
        void UpdateTestGridProjectAsync(const UpdateTestGridProjectRequestT& request, const UpdateTestGridProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::UpdateTestGridProject, request, handler, context);
        }

        /**
         * <p>Updates an uploaded test spec.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUploadOutcome UpdateUpload(const Model::UpdateUploadRequest& request) const;

        /**
         * A Callable wrapper for UpdateUpload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateUploadRequestT = Model::UpdateUploadRequest>
        Model::UpdateUploadOutcomeCallable UpdateUploadCallable(const UpdateUploadRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::UpdateUpload, request);
        }

        /**
         * An Async wrapper for UpdateUpload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateUploadRequestT = Model::UpdateUploadRequest>
        void UpdateUploadAsync(const UpdateUploadRequestT& request, const UpdateUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::UpdateUpload, request, handler, context);
        }

        /**
         * <p>Updates information about an Amazon Virtual Private Cloud (VPC) endpoint
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateVPCEConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVPCEConfigurationOutcome UpdateVPCEConfiguration(const Model::UpdateVPCEConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateVPCEConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateVPCEConfigurationRequestT = Model::UpdateVPCEConfigurationRequest>
        Model::UpdateVPCEConfigurationOutcomeCallable UpdateVPCEConfigurationCallable(const UpdateVPCEConfigurationRequestT& request) const
        {
            return SubmitCallable(&DeviceFarmClient::UpdateVPCEConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateVPCEConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateVPCEConfigurationRequestT = Model::UpdateVPCEConfigurationRequest>
        void UpdateVPCEConfigurationAsync(const UpdateVPCEConfigurationRequestT& request, const UpdateVPCEConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DeviceFarmClient::UpdateVPCEConfiguration, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<DeviceFarmEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<DeviceFarmClient>;
      void init(const DeviceFarmClientConfiguration& clientConfiguration);

      DeviceFarmClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<DeviceFarmEndpointProviderBase> m_endpointProvider;
  };

} // namespace DeviceFarm
} // namespace Aws
