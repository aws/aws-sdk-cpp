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
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DeviceFarmClient(const Aws::DeviceFarm::DeviceFarmClientConfiguration& clientConfiguration = Aws::DeviceFarm::DeviceFarmClientConfiguration(),
                         std::shared_ptr<DeviceFarmEndpointProviderBase> endpointProvider = Aws::MakeShared<DeviceFarmEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DeviceFarmClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<DeviceFarmEndpointProviderBase> endpointProvider = Aws::MakeShared<DeviceFarmEndpointProvider>(ALLOCATION_TAG),
                         const Aws::DeviceFarm::DeviceFarmClientConfiguration& clientConfiguration = Aws::DeviceFarm::DeviceFarmClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DeviceFarmClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<DeviceFarmEndpointProviderBase> endpointProvider = Aws::MakeShared<DeviceFarmEndpointProvider>(ALLOCATION_TAG),
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
        virtual Model::CreateDevicePoolOutcomeCallable CreateDevicePoolCallable(const Model::CreateDevicePoolRequest& request) const;

        /**
         * An Async wrapper for CreateDevicePool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDevicePoolAsync(const Model::CreateDevicePoolRequest& request, const CreateDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateInstanceProfileOutcomeCallable CreateInstanceProfileCallable(const Model::CreateInstanceProfileRequest& request) const;

        /**
         * An Async wrapper for CreateInstanceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInstanceProfileAsync(const Model::CreateInstanceProfileRequest& request, const CreateInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a network profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateNetworkProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkProfileOutcome CreateNetworkProfile(const Model::CreateNetworkProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateNetworkProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNetworkProfileOutcomeCallable CreateNetworkProfileCallable(const Model::CreateNetworkProfileRequest& request) const;

        /**
         * An Async wrapper for CreateNetworkProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNetworkProfileAsync(const Model::CreateNetworkProfileRequest& request, const CreateNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProjectOutcome CreateProject(const Model::CreateProjectRequest& request) const;

        /**
         * A Callable wrapper for CreateProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProjectOutcomeCallable CreateProjectCallable(const Model::CreateProjectRequest& request) const;

        /**
         * An Async wrapper for CreateProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Specifies and starts a remote access session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateRemoteAccessSession">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRemoteAccessSessionOutcome CreateRemoteAccessSession(const Model::CreateRemoteAccessSessionRequest& request) const;

        /**
         * A Callable wrapper for CreateRemoteAccessSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRemoteAccessSessionOutcomeCallable CreateRemoteAccessSessionCallable(const Model::CreateRemoteAccessSessionRequest& request) const;

        /**
         * An Async wrapper for CreateRemoteAccessSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRemoteAccessSessionAsync(const Model::CreateRemoteAccessSessionRequest& request, const CreateRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateTestGridProjectOutcomeCallable CreateTestGridProjectCallable(const Model::CreateTestGridProjectRequest& request) const;

        /**
         * An Async wrapper for CreateTestGridProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTestGridProjectAsync(const Model::CreateTestGridProjectRequest& request, const CreateTestGridProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateTestGridUrlOutcomeCallable CreateTestGridUrlCallable(const Model::CreateTestGridUrlRequest& request) const;

        /**
         * An Async wrapper for CreateTestGridUrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTestGridUrlAsync(const Model::CreateTestGridUrlRequest& request, const CreateTestGridUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uploads an app or test scripts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUploadOutcome CreateUpload(const Model::CreateUploadRequest& request) const;

        /**
         * A Callable wrapper for CreateUpload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUploadOutcomeCallable CreateUploadCallable(const Model::CreateUploadRequest& request) const;

        /**
         * An Async wrapper for CreateUpload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUploadAsync(const Model::CreateUploadRequest& request, const CreateUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::CreateVPCEConfigurationOutcomeCallable CreateVPCEConfigurationCallable(const Model::CreateVPCEConfigurationRequest& request) const;

        /**
         * An Async wrapper for CreateVPCEConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVPCEConfigurationAsync(const Model::CreateVPCEConfigurationRequest& request, const CreateVPCEConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteDevicePoolOutcomeCallable DeleteDevicePoolCallable(const Model::DeleteDevicePoolRequest& request) const;

        /**
         * An Async wrapper for DeleteDevicePool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDevicePoolAsync(const Model::DeleteDevicePoolRequest& request, const DeleteDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteInstanceProfileOutcomeCallable DeleteInstanceProfileCallable(const Model::DeleteInstanceProfileRequest& request) const;

        /**
         * An Async wrapper for DeleteInstanceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInstanceProfileAsync(const Model::DeleteInstanceProfileRequest& request, const DeleteInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a network profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteNetworkProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkProfileOutcome DeleteNetworkProfile(const Model::DeleteNetworkProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteNetworkProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNetworkProfileOutcomeCallable DeleteNetworkProfileCallable(const Model::DeleteNetworkProfileRequest& request) const;

        /**
         * An Async wrapper for DeleteNetworkProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNetworkProfileAsync(const Model::DeleteNetworkProfileRequest& request, const DeleteNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteProjectOutcomeCallable DeleteProjectCallable(const Model::DeleteProjectRequest& request) const;

        /**
         * An Async wrapper for DeleteProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteRemoteAccessSessionOutcomeCallable DeleteRemoteAccessSessionCallable(const Model::DeleteRemoteAccessSessionRequest& request) const;

        /**
         * An Async wrapper for DeleteRemoteAccessSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRemoteAccessSessionAsync(const Model::DeleteRemoteAccessSessionRequest& request, const DeleteRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteRunOutcomeCallable DeleteRunCallable(const Model::DeleteRunRequest& request) const;

        /**
         * An Async wrapper for DeleteRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRunAsync(const Model::DeleteRunRequest& request, const DeleteRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteTestGridProjectOutcomeCallable DeleteTestGridProjectCallable(const Model::DeleteTestGridProjectRequest& request) const;

        /**
         * An Async wrapper for DeleteTestGridProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTestGridProjectAsync(const Model::DeleteTestGridProjectRequest& request, const DeleteTestGridProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an upload given the upload ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUploadOutcome DeleteUpload(const Model::DeleteUploadRequest& request) const;

        /**
         * A Callable wrapper for DeleteUpload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUploadOutcomeCallable DeleteUploadCallable(const Model::DeleteUploadRequest& request) const;

        /**
         * An Async wrapper for DeleteUpload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUploadAsync(const Model::DeleteUploadRequest& request, const DeleteUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DeleteVPCEConfigurationOutcomeCallable DeleteVPCEConfigurationCallable(const Model::DeleteVPCEConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteVPCEConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVPCEConfigurationAsync(const Model::DeleteVPCEConfigurationRequest& request, const DeleteVPCEConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetAccountSettingsOutcomeCallable GetAccountSettingsCallable(const Model::GetAccountSettingsRequest& request) const;

        /**
         * An Async wrapper for GetAccountSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccountSettingsAsync(const Model::GetAccountSettingsRequest& request, const GetAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a unique device type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceOutcome GetDevice(const Model::GetDeviceRequest& request) const;

        /**
         * A Callable wrapper for GetDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeviceOutcomeCallable GetDeviceCallable(const Model::GetDeviceRequest& request) const;

        /**
         * An Async wrapper for GetDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeviceAsync(const Model::GetDeviceRequest& request, const GetDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetDeviceInstanceOutcomeCallable GetDeviceInstanceCallable(const Model::GetDeviceInstanceRequest& request) const;

        /**
         * An Async wrapper for GetDeviceInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeviceInstanceAsync(const Model::GetDeviceInstanceRequest& request, const GetDeviceInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a device pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetDevicePool">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDevicePoolOutcome GetDevicePool(const Model::GetDevicePoolRequest& request) const;

        /**
         * A Callable wrapper for GetDevicePool that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDevicePoolOutcomeCallable GetDevicePoolCallable(const Model::GetDevicePoolRequest& request) const;

        /**
         * An Async wrapper for GetDevicePool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDevicePoolAsync(const Model::GetDevicePoolRequest& request, const GetDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetDevicePoolCompatibilityOutcomeCallable GetDevicePoolCompatibilityCallable(const Model::GetDevicePoolCompatibilityRequest& request) const;

        /**
         * An Async wrapper for GetDevicePoolCompatibility that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDevicePoolCompatibilityAsync(const Model::GetDevicePoolCompatibilityRequest& request, const GetDevicePoolCompatibilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetInstanceProfileOutcomeCallable GetInstanceProfileCallable(const Model::GetInstanceProfileRequest& request) const;

        /**
         * An Async wrapper for GetInstanceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInstanceProfileAsync(const Model::GetInstanceProfileRequest& request, const GetInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobOutcome GetJob(const Model::GetJobRequest& request) const;

        /**
         * A Callable wrapper for GetJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJobOutcomeCallable GetJobCallable(const Model::GetJobRequest& request) const;

        /**
         * An Async wrapper for GetJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJobAsync(const Model::GetJobRequest& request, const GetJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a network profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetNetworkProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkProfileOutcome GetNetworkProfile(const Model::GetNetworkProfileRequest& request) const;

        /**
         * A Callable wrapper for GetNetworkProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetNetworkProfileOutcomeCallable GetNetworkProfileCallable(const Model::GetNetworkProfileRequest& request) const;

        /**
         * An Async wrapper for GetNetworkProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetNetworkProfileAsync(const Model::GetNetworkProfileRequest& request, const GetNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetOfferingStatusOutcomeCallable GetOfferingStatusCallable(const Model::GetOfferingStatusRequest& request) const;

        /**
         * An Async wrapper for GetOfferingStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOfferingStatusAsync(const Model::GetOfferingStatusRequest& request, const GetOfferingStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetProject">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProjectOutcome GetProject(const Model::GetProjectRequest& request) const;

        /**
         * A Callable wrapper for GetProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetProjectOutcomeCallable GetProjectCallable(const Model::GetProjectRequest& request) const;

        /**
         * An Async wrapper for GetProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetProjectAsync(const Model::GetProjectRequest& request, const GetProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetRemoteAccessSessionOutcomeCallable GetRemoteAccessSessionCallable(const Model::GetRemoteAccessSessionRequest& request) const;

        /**
         * An Async wrapper for GetRemoteAccessSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRemoteAccessSessionAsync(const Model::GetRemoteAccessSessionRequest& request, const GetRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetRun">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRunOutcome GetRun(const Model::GetRunRequest& request) const;

        /**
         * A Callable wrapper for GetRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRunOutcomeCallable GetRunCallable(const Model::GetRunRequest& request) const;

        /**
         * An Async wrapper for GetRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRunAsync(const Model::GetRunRequest& request, const GetRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a suite.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetSuite">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSuiteOutcome GetSuite(const Model::GetSuiteRequest& request) const;

        /**
         * A Callable wrapper for GetSuite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSuiteOutcomeCallable GetSuiteCallable(const Model::GetSuiteRequest& request) const;

        /**
         * An Async wrapper for GetSuite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSuiteAsync(const Model::GetSuiteRequest& request, const GetSuiteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a test.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetTest">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTestOutcome GetTest(const Model::GetTestRequest& request) const;

        /**
         * A Callable wrapper for GetTest that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTestOutcomeCallable GetTestCallable(const Model::GetTestRequest& request) const;

        /**
         * An Async wrapper for GetTest that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTestAsync(const Model::GetTestRequest& request, const GetTestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetTestGridProjectOutcomeCallable GetTestGridProjectCallable(const Model::GetTestGridProjectRequest& request) const;

        /**
         * An Async wrapper for GetTestGridProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTestGridProjectAsync(const Model::GetTestGridProjectRequest& request, const GetTestGridProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetTestGridSessionOutcomeCallable GetTestGridSessionCallable(const Model::GetTestGridSessionRequest& request) const;

        /**
         * An Async wrapper for GetTestGridSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTestGridSessionAsync(const Model::GetTestGridSessionRequest& request, const GetTestGridSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about an upload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUploadOutcome GetUpload(const Model::GetUploadRequest& request) const;

        /**
         * A Callable wrapper for GetUpload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUploadOutcomeCallable GetUploadCallable(const Model::GetUploadRequest& request) const;

        /**
         * An Async wrapper for GetUpload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUploadAsync(const Model::GetUploadRequest& request, const GetUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::GetVPCEConfigurationOutcomeCallable GetVPCEConfigurationCallable(const Model::GetVPCEConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetVPCEConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVPCEConfigurationAsync(const Model::GetVPCEConfigurationRequest& request, const GetVPCEConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::InstallToRemoteAccessSessionOutcomeCallable InstallToRemoteAccessSessionCallable(const Model::InstallToRemoteAccessSessionRequest& request) const;

        /**
         * An Async wrapper for InstallToRemoteAccessSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InstallToRemoteAccessSessionAsync(const Model::InstallToRemoteAccessSessionRequest& request, const InstallToRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about artifacts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListArtifacts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListArtifactsOutcome ListArtifacts(const Model::ListArtifactsRequest& request) const;

        /**
         * A Callable wrapper for ListArtifacts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListArtifactsOutcomeCallable ListArtifactsCallable(const Model::ListArtifactsRequest& request) const;

        /**
         * An Async wrapper for ListArtifacts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListArtifactsAsync(const Model::ListArtifactsRequest& request, const ListArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListDeviceInstancesOutcomeCallable ListDeviceInstancesCallable(const Model::ListDeviceInstancesRequest& request) const;

        /**
         * An Async wrapper for ListDeviceInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeviceInstancesAsync(const Model::ListDeviceInstancesRequest& request, const ListDeviceInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about device pools.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListDevicePools">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDevicePoolsOutcome ListDevicePools(const Model::ListDevicePoolsRequest& request) const;

        /**
         * A Callable wrapper for ListDevicePools that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDevicePoolsOutcomeCallable ListDevicePoolsCallable(const Model::ListDevicePoolsRequest& request) const;

        /**
         * An Async wrapper for ListDevicePools that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDevicePoolsAsync(const Model::ListDevicePoolsRequest& request, const ListDevicePoolsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about unique device types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDevicesOutcome ListDevices(const Model::ListDevicesRequest& request) const;

        /**
         * A Callable wrapper for ListDevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDevicesOutcomeCallable ListDevicesCallable(const Model::ListDevicesRequest& request) const;

        /**
         * An Async wrapper for ListDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDevicesAsync(const Model::ListDevicesRequest& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListInstanceProfilesOutcomeCallable ListInstanceProfilesCallable(const Model::ListInstanceProfilesRequest& request) const;

        /**
         * An Async wrapper for ListInstanceProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInstanceProfilesAsync(const Model::ListInstanceProfilesRequest& request, const ListInstanceProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListJobsOutcomeCallable ListJobsCallable(const Model::ListJobsRequest& request) const;

        /**
         * An Async wrapper for ListJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJobsAsync(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the list of available network profiles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListNetworkProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNetworkProfilesOutcome ListNetworkProfiles(const Model::ListNetworkProfilesRequest& request) const;

        /**
         * A Callable wrapper for ListNetworkProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNetworkProfilesOutcomeCallable ListNetworkProfilesCallable(const Model::ListNetworkProfilesRequest& request) const;

        /**
         * An Async wrapper for ListNetworkProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNetworkProfilesAsync(const Model::ListNetworkProfilesRequest& request, const ListNetworkProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListOfferingPromotionsOutcomeCallable ListOfferingPromotionsCallable(const Model::ListOfferingPromotionsRequest& request) const;

        /**
         * An Async wrapper for ListOfferingPromotions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOfferingPromotionsAsync(const Model::ListOfferingPromotionsRequest& request, const ListOfferingPromotionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListOfferingTransactionsOutcomeCallable ListOfferingTransactionsCallable(const Model::ListOfferingTransactionsRequest& request) const;

        /**
         * An Async wrapper for ListOfferingTransactions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOfferingTransactionsAsync(const Model::ListOfferingTransactionsRequest& request, const ListOfferingTransactionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListOfferingsOutcomeCallable ListOfferingsCallable(const Model::ListOfferingsRequest& request) const;

        /**
         * An Async wrapper for ListOfferings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOfferingsAsync(const Model::ListOfferingsRequest& request, const ListOfferingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about projects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProjectsOutcome ListProjects(const Model::ListProjectsRequest& request) const;

        /**
         * A Callable wrapper for ListProjects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProjectsOutcomeCallable ListProjectsCallable(const Model::ListProjectsRequest& request) const;

        /**
         * An Async wrapper for ListProjects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProjectsAsync(const Model::ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListRemoteAccessSessionsOutcomeCallable ListRemoteAccessSessionsCallable(const Model::ListRemoteAccessSessionsRequest& request) const;

        /**
         * An Async wrapper for ListRemoteAccessSessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRemoteAccessSessionsAsync(const Model::ListRemoteAccessSessionsRequest& request, const ListRemoteAccessSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListRunsOutcomeCallable ListRunsCallable(const Model::ListRunsRequest& request) const;

        /**
         * An Async wrapper for ListRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRunsAsync(const Model::ListRunsRequest& request, const ListRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListSamplesOutcomeCallable ListSamplesCallable(const Model::ListSamplesRequest& request) const;

        /**
         * An Async wrapper for ListSamples that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSamplesAsync(const Model::ListSamplesRequest& request, const ListSamplesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListSuitesOutcomeCallable ListSuitesCallable(const Model::ListSuitesRequest& request) const;

        /**
         * An Async wrapper for ListSuites that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSuitesAsync(const Model::ListSuitesRequest& request, const ListSuitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the tags for an AWS Device Farm resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListTagsForResource">AWS
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
         * <p>Gets a list of all Selenium testing projects in your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListTestGridProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTestGridProjectsOutcome ListTestGridProjects(const Model::ListTestGridProjectsRequest& request) const;

        /**
         * A Callable wrapper for ListTestGridProjects that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTestGridProjectsOutcomeCallable ListTestGridProjectsCallable(const Model::ListTestGridProjectsRequest& request) const;

        /**
         * An Async wrapper for ListTestGridProjects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTestGridProjectsAsync(const Model::ListTestGridProjectsRequest& request, const ListTestGridProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListTestGridSessionActionsOutcomeCallable ListTestGridSessionActionsCallable(const Model::ListTestGridSessionActionsRequest& request) const;

        /**
         * An Async wrapper for ListTestGridSessionActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTestGridSessionActionsAsync(const Model::ListTestGridSessionActionsRequest& request, const ListTestGridSessionActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListTestGridSessionArtifactsOutcomeCallable ListTestGridSessionArtifactsCallable(const Model::ListTestGridSessionArtifactsRequest& request) const;

        /**
         * An Async wrapper for ListTestGridSessionArtifacts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTestGridSessionArtifactsAsync(const Model::ListTestGridSessionArtifactsRequest& request, const ListTestGridSessionArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListTestGridSessionsOutcomeCallable ListTestGridSessionsCallable(const Model::ListTestGridSessionsRequest& request) const;

        /**
         * An Async wrapper for ListTestGridSessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTestGridSessionsAsync(const Model::ListTestGridSessionsRequest& request, const ListTestGridSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListTestsOutcomeCallable ListTestsCallable(const Model::ListTestsRequest& request) const;

        /**
         * An Async wrapper for ListTests that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTestsAsync(const Model::ListTestsRequest& request, const ListTestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListUniqueProblemsOutcomeCallable ListUniqueProblemsCallable(const Model::ListUniqueProblemsRequest& request) const;

        /**
         * An Async wrapper for ListUniqueProblems that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUniqueProblemsAsync(const Model::ListUniqueProblemsRequest& request, const ListUniqueProblemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListUploadsOutcomeCallable ListUploadsCallable(const Model::ListUploadsRequest& request) const;

        /**
         * An Async wrapper for ListUploads that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListUploadsAsync(const Model::ListUploadsRequest& request, const ListUploadsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListVPCEConfigurationsOutcomeCallable ListVPCEConfigurationsCallable(const Model::ListVPCEConfigurationsRequest& request) const;

        /**
         * An Async wrapper for ListVPCEConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVPCEConfigurationsAsync(const Model::ListVPCEConfigurationsRequest& request, const ListVPCEConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::PurchaseOfferingOutcomeCallable PurchaseOfferingCallable(const Model::PurchaseOfferingRequest& request) const;

        /**
         * An Async wrapper for PurchaseOffering that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PurchaseOfferingAsync(const Model::PurchaseOfferingRequest& request, const PurchaseOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::RenewOfferingOutcomeCallable RenewOfferingCallable(const Model::RenewOfferingRequest& request) const;

        /**
         * An Async wrapper for RenewOffering that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RenewOfferingAsync(const Model::RenewOfferingRequest& request, const RenewOfferingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Schedules a run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ScheduleRun">AWS
         * API Reference</a></p>
         */
        virtual Model::ScheduleRunOutcome ScheduleRun(const Model::ScheduleRunRequest& request) const;

        /**
         * A Callable wrapper for ScheduleRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ScheduleRunOutcomeCallable ScheduleRunCallable(const Model::ScheduleRunRequest& request) const;

        /**
         * An Async wrapper for ScheduleRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ScheduleRunAsync(const Model::ScheduleRunRequest& request, const ScheduleRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StopJobOutcomeCallable StopJobCallable(const Model::StopJobRequest& request) const;

        /**
         * An Async wrapper for StopJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopJobAsync(const Model::StopJobRequest& request, const StopJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Ends a specified remote access session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/StopRemoteAccessSession">AWS
         * API Reference</a></p>
         */
        virtual Model::StopRemoteAccessSessionOutcome StopRemoteAccessSession(const Model::StopRemoteAccessSessionRequest& request) const;

        /**
         * A Callable wrapper for StopRemoteAccessSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopRemoteAccessSessionOutcomeCallable StopRemoteAccessSessionCallable(const Model::StopRemoteAccessSessionRequest& request) const;

        /**
         * An Async wrapper for StopRemoteAccessSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopRemoteAccessSessionAsync(const Model::StopRemoteAccessSessionRequest& request, const StopRemoteAccessSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StopRunOutcomeCallable StopRunCallable(const Model::StopRunRequest& request) const;

        /**
         * An Async wrapper for StopRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopRunAsync(const Model::StopRunRequest& request, const StopRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UntagResource">AWS
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
         * <p>Updates information about a private device instance.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateDeviceInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeviceInstanceOutcome UpdateDeviceInstance(const Model::UpdateDeviceInstanceRequest& request) const;

        /**
         * A Callable wrapper for UpdateDeviceInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDeviceInstanceOutcomeCallable UpdateDeviceInstanceCallable(const Model::UpdateDeviceInstanceRequest& request) const;

        /**
         * An Async wrapper for UpdateDeviceInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDeviceInstanceAsync(const Model::UpdateDeviceInstanceRequest& request, const UpdateDeviceInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateDevicePoolOutcomeCallable UpdateDevicePoolCallable(const Model::UpdateDevicePoolRequest& request) const;

        /**
         * An Async wrapper for UpdateDevicePool that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDevicePoolAsync(const Model::UpdateDevicePoolRequest& request, const UpdateDevicePoolResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateInstanceProfileOutcomeCallable UpdateInstanceProfileCallable(const Model::UpdateInstanceProfileRequest& request) const;

        /**
         * An Async wrapper for UpdateInstanceProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateInstanceProfileAsync(const Model::UpdateInstanceProfileRequest& request, const UpdateInstanceProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the network profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateNetworkProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNetworkProfileOutcome UpdateNetworkProfile(const Model::UpdateNetworkProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateNetworkProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateNetworkProfileOutcomeCallable UpdateNetworkProfileCallable(const Model::UpdateNetworkProfileRequest& request) const;

        /**
         * An Async wrapper for UpdateNetworkProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateNetworkProfileAsync(const Model::UpdateNetworkProfileRequest& request, const UpdateNetworkProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateProjectOutcomeCallable UpdateProjectCallable(const Model::UpdateProjectRequest& request) const;

        /**
         * An Async wrapper for UpdateProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProjectAsync(const Model::UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Change details of a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateTestGridProject">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTestGridProjectOutcome UpdateTestGridProject(const Model::UpdateTestGridProjectRequest& request) const;

        /**
         * A Callable wrapper for UpdateTestGridProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTestGridProjectOutcomeCallable UpdateTestGridProjectCallable(const Model::UpdateTestGridProjectRequest& request) const;

        /**
         * An Async wrapper for UpdateTestGridProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTestGridProjectAsync(const Model::UpdateTestGridProjectRequest& request, const UpdateTestGridProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an uploaded test spec.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUploadOutcome UpdateUpload(const Model::UpdateUploadRequest& request) const;

        /**
         * A Callable wrapper for UpdateUpload that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUploadOutcomeCallable UpdateUploadCallable(const Model::UpdateUploadRequest& request) const;

        /**
         * An Async wrapper for UpdateUpload that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUploadAsync(const Model::UpdateUploadRequest& request, const UpdateUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::UpdateVPCEConfigurationOutcomeCallable UpdateVPCEConfigurationCallable(const Model::UpdateVPCEConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateVPCEConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVPCEConfigurationAsync(const Model::UpdateVPCEConfigurationRequest& request, const UpdateVPCEConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


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
