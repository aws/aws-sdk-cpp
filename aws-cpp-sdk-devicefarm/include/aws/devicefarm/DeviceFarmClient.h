/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devicefarm/DeviceFarmServiceClientModel.h>
#include <aws/devicefarm/DeviceFarmLegacyAsyncMacros.h>

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
  class AWS_DEVICEFARM_API DeviceFarmClient : public Aws::Client::AWSJsonClient
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
         * <p>Creates a device pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateDevicePool">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDevicePoolOutcome CreateDevicePool(const Model::CreateDevicePoolRequest& request) const;


        /**
         * <p>Creates a profile that can be applied to one or more private fleet device
         * instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateInstanceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInstanceProfileOutcome CreateInstanceProfile(const Model::CreateInstanceProfileRequest& request) const;


        /**
         * <p>Creates a network profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateNetworkProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNetworkProfileOutcome CreateNetworkProfile(const Model::CreateNetworkProfileRequest& request) const;


        /**
         * <p>Creates a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProjectOutcome CreateProject(const Model::CreateProjectRequest& request) const;


        /**
         * <p>Specifies and starts a remote access session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateRemoteAccessSession">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRemoteAccessSessionOutcome CreateRemoteAccessSession(const Model::CreateRemoteAccessSessionRequest& request) const;


        /**
         * <p>Creates a Selenium testing project. Projects are used to track
         * <a>TestGridSession</a> instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateTestGridProject">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTestGridProjectOutcome CreateTestGridProject(const Model::CreateTestGridProjectRequest& request) const;


        /**
         * <p>Creates a signed, short-term URL that can be passed to a Selenium
         * <code>RemoteWebDriver</code> constructor.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateTestGridUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTestGridUrlOutcome CreateTestGridUrl(const Model::CreateTestGridUrlRequest& request) const;


        /**
         * <p>Uploads an app or test scripts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUploadOutcome CreateUpload(const Model::CreateUploadRequest& request) const;


        /**
         * <p>Creates a configuration record in Device Farm for your Amazon Virtual Private
         * Cloud (VPC) endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateVPCEConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVPCEConfigurationOutcome CreateVPCEConfiguration(const Model::CreateVPCEConfigurationRequest& request) const;


        /**
         * <p>Deletes a device pool given the pool ARN. Does not allow deletion of curated
         * pools owned by the system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteDevicePool">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDevicePoolOutcome DeleteDevicePool(const Model::DeleteDevicePoolRequest& request) const;


        /**
         * <p>Deletes a profile that can be applied to one or more private device
         * instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteInstanceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInstanceProfileOutcome DeleteInstanceProfile(const Model::DeleteInstanceProfileRequest& request) const;


        /**
         * <p>Deletes a network profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteNetworkProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkProfileOutcome DeleteNetworkProfile(const Model::DeleteNetworkProfileRequest& request) const;


        /**
         * <p>Deletes an AWS Device Farm project, given the project ARN.</p> <p> Deleting
         * this resource does not stop an in-progress run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest& request) const;


        /**
         * <p>Deletes a completed remote access session and its results.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteRemoteAccessSession">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRemoteAccessSessionOutcome DeleteRemoteAccessSession(const Model::DeleteRemoteAccessSessionRequest& request) const;


        /**
         * <p>Deletes the run, given the run ARN.</p> <p> Deleting this resource does not
         * stop an in-progress run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteRun">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRunOutcome DeleteRun(const Model::DeleteRunRequest& request) const;


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
         * <p>Deletes an upload given the upload ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUploadOutcome DeleteUpload(const Model::DeleteUploadRequest& request) const;


        /**
         * <p>Deletes a configuration for your Amazon Virtual Private Cloud (VPC)
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/DeleteVPCEConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVPCEConfigurationOutcome DeleteVPCEConfiguration(const Model::DeleteVPCEConfigurationRequest& request) const;


        /**
         * <p>Returns the number of unmetered iOS or unmetered Android devices that have
         * been purchased by the account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetAccountSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountSettingsOutcome GetAccountSettings(const Model::GetAccountSettingsRequest& request) const;


        /**
         * <p>Gets information about a unique device type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceOutcome GetDevice(const Model::GetDeviceRequest& request) const;


        /**
         * <p>Returns information about a device instance that belongs to a private device
         * fleet.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetDeviceInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceInstanceOutcome GetDeviceInstance(const Model::GetDeviceInstanceRequest& request) const;


        /**
         * <p>Gets information about a device pool.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetDevicePool">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDevicePoolOutcome GetDevicePool(const Model::GetDevicePoolRequest& request) const;


        /**
         * <p>Gets information about compatibility with a device pool.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetDevicePoolCompatibility">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDevicePoolCompatibilityOutcome GetDevicePoolCompatibility(const Model::GetDevicePoolCompatibilityRequest& request) const;


        /**
         * <p>Returns information about the specified instance profile.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetInstanceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstanceProfileOutcome GetInstanceProfile(const Model::GetInstanceProfileRequest& request) const;


        /**
         * <p>Gets information about a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobOutcome GetJob(const Model::GetJobRequest& request) const;


        /**
         * <p>Returns information about a network profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetNetworkProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNetworkProfileOutcome GetNetworkProfile(const Model::GetNetworkProfileRequest& request) const;


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
         * <p>Gets information about a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetProject">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProjectOutcome GetProject(const Model::GetProjectRequest& request) const;


        /**
         * <p>Returns a link to a currently running remote access session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetRemoteAccessSession">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRemoteAccessSessionOutcome GetRemoteAccessSession(const Model::GetRemoteAccessSessionRequest& request) const;


        /**
         * <p>Gets information about a run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetRun">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRunOutcome GetRun(const Model::GetRunRequest& request) const;


        /**
         * <p>Gets information about a suite.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetSuite">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSuiteOutcome GetSuite(const Model::GetSuiteRequest& request) const;


        /**
         * <p>Gets information about a test.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetTest">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTestOutcome GetTest(const Model::GetTestRequest& request) const;


        /**
         * <p>Retrieves information about a Selenium testing project.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetTestGridProject">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTestGridProjectOutcome GetTestGridProject(const Model::GetTestGridProjectRequest& request) const;


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
         * <p>Gets information about an upload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUploadOutcome GetUpload(const Model::GetUploadRequest& request) const;


        /**
         * <p>Returns information about the configuration settings for your Amazon Virtual
         * Private Cloud (VPC) endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetVPCEConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVPCEConfigurationOutcome GetVPCEConfiguration(const Model::GetVPCEConfigurationRequest& request) const;


        /**
         * <p>Installs an application to the device in a remote access session. For Android
         * applications, the file must be in .apk format. For iOS applications, the file
         * must be in .ipa format.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/InstallToRemoteAccessSession">AWS
         * API Reference</a></p>
         */
        virtual Model::InstallToRemoteAccessSessionOutcome InstallToRemoteAccessSession(const Model::InstallToRemoteAccessSessionRequest& request) const;


        /**
         * <p>Gets information about artifacts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListArtifacts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListArtifactsOutcome ListArtifacts(const Model::ListArtifactsRequest& request) const;


        /**
         * <p>Returns information about the private device instances associated with one or
         * more AWS accounts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListDeviceInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeviceInstancesOutcome ListDeviceInstances(const Model::ListDeviceInstancesRequest& request) const;


        /**
         * <p>Gets information about device pools.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListDevicePools">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDevicePoolsOutcome ListDevicePools(const Model::ListDevicePoolsRequest& request) const;


        /**
         * <p>Gets information about unique device types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDevicesOutcome ListDevices(const Model::ListDevicesRequest& request) const;


        /**
         * <p>Returns information about all the instance profiles in an AWS
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListInstanceProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInstanceProfilesOutcome ListInstanceProfiles(const Model::ListInstanceProfilesRequest& request) const;


        /**
         * <p>Gets information about jobs for a given test run.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobsOutcome ListJobs(const Model::ListJobsRequest& request) const;


        /**
         * <p>Returns the list of available network profiles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListNetworkProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNetworkProfilesOutcome ListNetworkProfiles(const Model::ListNetworkProfilesRequest& request) const;


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
         * <p>Gets information about projects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProjectsOutcome ListProjects(const Model::ListProjectsRequest& request) const;


        /**
         * <p>Returns a list of all currently running remote access sessions.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListRemoteAccessSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRemoteAccessSessionsOutcome ListRemoteAccessSessions(const Model::ListRemoteAccessSessionsRequest& request) const;


        /**
         * <p>Gets information about runs, given an AWS Device Farm project
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRunsOutcome ListRuns(const Model::ListRunsRequest& request) const;


        /**
         * <p>Gets information about samples, given an AWS Device Farm job
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListSamples">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSamplesOutcome ListSamples(const Model::ListSamplesRequest& request) const;


        /**
         * <p>Gets information about test suites for a given job.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListSuites">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSuitesOutcome ListSuites(const Model::ListSuitesRequest& request) const;


        /**
         * <p>List the tags for an AWS Device Farm resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Gets a list of all Selenium testing projects in your account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListTestGridProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTestGridProjectsOutcome ListTestGridProjects(const Model::ListTestGridProjectsRequest& request) const;


        /**
         * <p>Returns a list of the actions taken in a
         * <a>TestGridSession</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListTestGridSessionActions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTestGridSessionActionsOutcome ListTestGridSessionActions(const Model::ListTestGridSessionActionsRequest& request) const;


        /**
         * <p>Retrieves a list of artifacts created during the session.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListTestGridSessionArtifacts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTestGridSessionArtifactsOutcome ListTestGridSessionArtifacts(const Model::ListTestGridSessionArtifactsRequest& request) const;


        /**
         * <p>Retrieves a list of sessions for a <a>TestGridProject</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListTestGridSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTestGridSessionsOutcome ListTestGridSessions(const Model::ListTestGridSessionsRequest& request) const;


        /**
         * <p>Gets information about tests in a given test suite.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListTests">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTestsOutcome ListTests(const Model::ListTestsRequest& request) const;


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
         * <p>Gets information about uploads, given an AWS Device Farm project
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListUploads">AWS
         * API Reference</a></p>
         */
        virtual Model::ListUploadsOutcome ListUploads(const Model::ListUploadsRequest& request) const;


        /**
         * <p>Returns information about all Amazon Virtual Private Cloud (VPC) endpoint
         * configurations in the AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ListVPCEConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVPCEConfigurationsOutcome ListVPCEConfigurations(const Model::ListVPCEConfigurationsRequest& request) const;


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
         * <p>Schedules a run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/ScheduleRun">AWS
         * API Reference</a></p>
         */
        virtual Model::ScheduleRunOutcome ScheduleRun(const Model::ScheduleRunRequest& request) const;


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
         * <p>Ends a specified remote access session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/StopRemoteAccessSession">AWS
         * API Reference</a></p>
         */
        virtual Model::StopRemoteAccessSessionOutcome StopRemoteAccessSession(const Model::StopRemoteAccessSessionRequest& request) const;


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
         * <p>Deletes the specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates information about a private device instance.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateDeviceInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeviceInstanceOutcome UpdateDeviceInstance(const Model::UpdateDeviceInstanceRequest& request) const;


        /**
         * <p>Modifies the name, description, and rules in a device pool given the
         * attributes and the pool ARN. Rule updates are all-or-nothing, meaning they can
         * only be updated as a whole (or not at all).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateDevicePool">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDevicePoolOutcome UpdateDevicePool(const Model::UpdateDevicePoolRequest& request) const;


        /**
         * <p>Updates information about an existing private device instance
         * profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateInstanceProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInstanceProfileOutcome UpdateInstanceProfile(const Model::UpdateInstanceProfileRequest& request) const;


        /**
         * <p>Updates the network profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateNetworkProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNetworkProfileOutcome UpdateNetworkProfile(const Model::UpdateNetworkProfileRequest& request) const;


        /**
         * <p>Modifies the specified project name, given the project ARN and a new
         * name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProjectOutcome UpdateProject(const Model::UpdateProjectRequest& request) const;


        /**
         * <p>Change details of a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateTestGridProject">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTestGridProjectOutcome UpdateTestGridProject(const Model::UpdateTestGridProjectRequest& request) const;


        /**
         * <p>Updates an uploaded test spec.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateUpload">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUploadOutcome UpdateUpload(const Model::UpdateUploadRequest& request) const;


        /**
         * <p>Updates information about an Amazon Virtual Private Cloud (VPC) endpoint
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/UpdateVPCEConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVPCEConfigurationOutcome UpdateVPCEConfiguration(const Model::UpdateVPCEConfigurationRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<DeviceFarmEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const DeviceFarmClientConfiguration& clientConfiguration);

      DeviceFarmClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<DeviceFarmEndpointProviderBase> m_endpointProvider;
  };

} // namespace DeviceFarm
} // namespace Aws
