/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/panorama/PanoramaServiceClientModel.h>
#include <aws/panorama/PanoramaLegacyAsyncMacros.h>

namespace Aws
{
namespace Panorama
{
  /**
   * <p><fullname>AWS Panorama</fullname> <p> <b>Overview</b> </p> <p>This is the
   * <i>AWS Panorama API Reference</i>. For an introduction to the service, see <a
   * href="https://docs.aws.amazon.com/panorama/latest/dev/panorama-welcome.html">What
   * is AWS Panorama?</a> in the <i>AWS Panorama Developer Guide</i>.</p></p>
   */
  class AWS_PANORAMA_API PanoramaClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PanoramaClient(const Aws::Panorama::PanoramaClientConfiguration& clientConfiguration = Aws::Panorama::PanoramaClientConfiguration(),
                       std::shared_ptr<PanoramaEndpointProviderBase> endpointProvider = Aws::MakeShared<PanoramaEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PanoramaClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<PanoramaEndpointProviderBase> endpointProvider = Aws::MakeShared<PanoramaEndpointProvider>(ALLOCATION_TAG),
                       const Aws::Panorama::PanoramaClientConfiguration& clientConfiguration = Aws::Panorama::PanoramaClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PanoramaClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<PanoramaEndpointProviderBase> endpointProvider = Aws::MakeShared<PanoramaEndpointProvider>(ALLOCATION_TAG),
                       const Aws::Panorama::PanoramaClientConfiguration& clientConfiguration = Aws::Panorama::PanoramaClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PanoramaClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PanoramaClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PanoramaClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~PanoramaClient();


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
         * <p>Creates an application instance and deploys it to a device.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/CreateApplicationInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationInstanceOutcome CreateApplicationInstance(const Model::CreateApplicationInstanceRequest& request) const;


        /**
         * <p>Creates a job to run on one or more devices. A job can update a device's
         * software or reboot it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/CreateJobForDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateJobForDevicesOutcome CreateJobForDevices(const Model::CreateJobForDevicesRequest& request) const;


        /**
         * <p>Creates a camera stream node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/CreateNodeFromTemplateJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNodeFromTemplateJobOutcome CreateNodeFromTemplateJob(const Model::CreateNodeFromTemplateJobRequest& request) const;


        /**
         * <p>Creates a package and storage location in an Amazon S3 access
         * point.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/CreatePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePackageOutcome CreatePackage(const Model::CreatePackageRequest& request) const;


        /**
         * <p>Imports a node package.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/CreatePackageImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePackageImportJobOutcome CreatePackageImportJob(const Model::CreatePackageImportJobRequest& request) const;


        /**
         * <p>Deletes a device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DeleteDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeviceOutcome DeleteDevice(const Model::DeleteDeviceRequest& request) const;


        /**
         * <p>Deletes a package.</p>  <p>To delete a package, you need permission to
         * call <code>s3:DeleteObject</code> in addition to permissions for the AWS
         * Panorama API.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DeletePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePackageOutcome DeletePackage(const Model::DeletePackageRequest& request) const;


        /**
         * <p>Deregisters a package version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DeregisterPackageVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterPackageVersionOutcome DeregisterPackageVersion(const Model::DeregisterPackageVersionRequest& request) const;


        /**
         * <p>Returns information about an application instance on a device.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DescribeApplicationInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationInstanceOutcome DescribeApplicationInstance(const Model::DescribeApplicationInstanceRequest& request) const;


        /**
         * <p>Returns information about an application instance's configuration
         * manifest.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DescribeApplicationInstanceDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationInstanceDetailsOutcome DescribeApplicationInstanceDetails(const Model::DescribeApplicationInstanceDetailsRequest& request) const;


        /**
         * <p>Returns information about a device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DescribeDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDeviceOutcome DescribeDevice(const Model::DescribeDeviceRequest& request) const;


        /**
         * <p>Returns information about a device job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DescribeDeviceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDeviceJobOutcome DescribeDeviceJob(const Model::DescribeDeviceJobRequest& request) const;


        /**
         * <p>Returns information about a node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DescribeNode">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNodeOutcome DescribeNode(const Model::DescribeNodeRequest& request) const;


        /**
         * <p>Returns information about a job to create a camera stream node.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DescribeNodeFromTemplateJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNodeFromTemplateJobOutcome DescribeNodeFromTemplateJob(const Model::DescribeNodeFromTemplateJobRequest& request) const;


        /**
         * <p>Returns information about a package.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DescribePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePackageOutcome DescribePackage(const Model::DescribePackageRequest& request) const;


        /**
         * <p>Returns information about a package import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DescribePackageImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePackageImportJobOutcome DescribePackageImportJob(const Model::DescribePackageImportJobRequest& request) const;


        /**
         * <p>Returns information about a package version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DescribePackageVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePackageVersionOutcome DescribePackageVersion(const Model::DescribePackageVersionRequest& request) const;


        /**
         * <p>Returns a list of application instance dependencies.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ListApplicationInstanceDependencies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationInstanceDependenciesOutcome ListApplicationInstanceDependencies(const Model::ListApplicationInstanceDependenciesRequest& request) const;


        /**
         * <p>Returns a list of application node instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ListApplicationInstanceNodeInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationInstanceNodeInstancesOutcome ListApplicationInstanceNodeInstances(const Model::ListApplicationInstanceNodeInstancesRequest& request) const;


        /**
         * <p>Returns a list of application instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ListApplicationInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationInstancesOutcome ListApplicationInstances(const Model::ListApplicationInstancesRequest& request) const;


        /**
         * <p>Returns a list of devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ListDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDevicesOutcome ListDevices(const Model::ListDevicesRequest& request) const;


        /**
         * <p>Returns a list of jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ListDevicesJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDevicesJobsOutcome ListDevicesJobs(const Model::ListDevicesJobsRequest& request) const;


        /**
         * <p>Returns a list of camera stream node jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ListNodeFromTemplateJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNodeFromTemplateJobsOutcome ListNodeFromTemplateJobs(const Model::ListNodeFromTemplateJobsRequest& request) const;


        /**
         * <p>Returns a list of nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ListNodes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNodesOutcome ListNodes(const Model::ListNodesRequest& request) const;


        /**
         * <p>Returns a list of package import jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ListPackageImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPackageImportJobsOutcome ListPackageImportJobs(const Model::ListPackageImportJobsRequest& request) const;


        /**
         * <p>Returns a list of packages.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ListPackages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPackagesOutcome ListPackages(const Model::ListPackagesRequest& request) const;


        /**
         * <p>Returns a list of tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Creates a device and returns a configuration archive. The configuration
         * archive is a ZIP file that contains a provisioning certificate that is valid for
         * 5 minutes. Name the configuration archive
         * <code>certificates-omni_<i>device-name</i>.zip</code> and transfer it to the
         * device within 5 minutes. Use the included USB storage device and connect it to
         * the USB 3.0 port next to the HDMI output.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ProvisionDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::ProvisionDeviceOutcome ProvisionDevice(const Model::ProvisionDeviceRequest& request) const;


        /**
         * <p>Registers a package version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/RegisterPackageVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterPackageVersionOutcome RegisterPackageVersion(const Model::RegisterPackageVersionRequest& request) const;


        /**
         * <p>Removes an application instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/RemoveApplicationInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveApplicationInstanceOutcome RemoveApplicationInstance(const Model::RemoveApplicationInstanceRequest& request) const;


        /**
         * <p>Signal camera nodes to stop or resume.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/SignalApplicationInstanceNodeInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::SignalApplicationInstanceNodeInstancesOutcome SignalApplicationInstanceNodeInstances(const Model::SignalApplicationInstanceNodeInstancesRequest& request) const;


        /**
         * <p>Tags a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates a device's metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/UpdateDeviceMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeviceMetadataOutcome UpdateDeviceMetadata(const Model::UpdateDeviceMetadataRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<PanoramaEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const PanoramaClientConfiguration& clientConfiguration);

      PanoramaClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<PanoramaEndpointProviderBase> m_endpointProvider;
  };

} // namespace Panorama
} // namespace Aws
