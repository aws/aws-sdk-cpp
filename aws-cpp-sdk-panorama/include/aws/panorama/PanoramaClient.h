/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/panorama/PanoramaServiceClientModel.h>

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
  class AWS_PANORAMA_API PanoramaClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<PanoramaClient>
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

        /**
         * <p>Creates an application instance and deploys it to a device.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/CreateApplicationInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationInstanceOutcome CreateApplicationInstance(const Model::CreateApplicationInstanceRequest& request) const;

        /**
         * A Callable wrapper for CreateApplicationInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateApplicationInstanceOutcomeCallable CreateApplicationInstanceCallable(const Model::CreateApplicationInstanceRequest& request) const;

        /**
         * An Async wrapper for CreateApplicationInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApplicationInstanceAsync(const Model::CreateApplicationInstanceRequest& request, const CreateApplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a job to run on one or more devices. A job can update a device's
         * software or reboot it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/CreateJobForDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateJobForDevicesOutcome CreateJobForDevices(const Model::CreateJobForDevicesRequest& request) const;

        /**
         * A Callable wrapper for CreateJobForDevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateJobForDevicesOutcomeCallable CreateJobForDevicesCallable(const Model::CreateJobForDevicesRequest& request) const;

        /**
         * An Async wrapper for CreateJobForDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateJobForDevicesAsync(const Model::CreateJobForDevicesRequest& request, const CreateJobForDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a camera stream node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/CreateNodeFromTemplateJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNodeFromTemplateJobOutcome CreateNodeFromTemplateJob(const Model::CreateNodeFromTemplateJobRequest& request) const;

        /**
         * A Callable wrapper for CreateNodeFromTemplateJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateNodeFromTemplateJobOutcomeCallable CreateNodeFromTemplateJobCallable(const Model::CreateNodeFromTemplateJobRequest& request) const;

        /**
         * An Async wrapper for CreateNodeFromTemplateJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateNodeFromTemplateJobAsync(const Model::CreateNodeFromTemplateJobRequest& request, const CreateNodeFromTemplateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a package and storage location in an Amazon S3 access
         * point.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/CreatePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePackageOutcome CreatePackage(const Model::CreatePackageRequest& request) const;

        /**
         * A Callable wrapper for CreatePackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePackageOutcomeCallable CreatePackageCallable(const Model::CreatePackageRequest& request) const;

        /**
         * An Async wrapper for CreatePackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePackageAsync(const Model::CreatePackageRequest& request, const CreatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Imports a node package.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/CreatePackageImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePackageImportJobOutcome CreatePackageImportJob(const Model::CreatePackageImportJobRequest& request) const;

        /**
         * A Callable wrapper for CreatePackageImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePackageImportJobOutcomeCallable CreatePackageImportJobCallable(const Model::CreatePackageImportJobRequest& request) const;

        /**
         * An Async wrapper for CreatePackageImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePackageImportJobAsync(const Model::CreatePackageImportJobRequest& request, const CreatePackageImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DeleteDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeviceOutcome DeleteDevice(const Model::DeleteDeviceRequest& request) const;

        /**
         * A Callable wrapper for DeleteDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDeviceOutcomeCallable DeleteDeviceCallable(const Model::DeleteDeviceRequest& request) const;

        /**
         * An Async wrapper for DeleteDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDeviceAsync(const Model::DeleteDeviceRequest& request, const DeleteDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a package.</p>  <p>To delete a package, you need permission to
         * call <code>s3:DeleteObject</code> in addition to permissions for the AWS
         * Panorama API.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DeletePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePackageOutcome DeletePackage(const Model::DeletePackageRequest& request) const;

        /**
         * A Callable wrapper for DeletePackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePackageOutcomeCallable DeletePackageCallable(const Model::DeletePackageRequest& request) const;

        /**
         * An Async wrapper for DeletePackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePackageAsync(const Model::DeletePackageRequest& request, const DeletePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters a package version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DeregisterPackageVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterPackageVersionOutcome DeregisterPackageVersion(const Model::DeregisterPackageVersionRequest& request) const;

        /**
         * A Callable wrapper for DeregisterPackageVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterPackageVersionOutcomeCallable DeregisterPackageVersionCallable(const Model::DeregisterPackageVersionRequest& request) const;

        /**
         * An Async wrapper for DeregisterPackageVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterPackageVersionAsync(const Model::DeregisterPackageVersionRequest& request, const DeregisterPackageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about an application instance on a device.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DescribeApplicationInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationInstanceOutcome DescribeApplicationInstance(const Model::DescribeApplicationInstanceRequest& request) const;

        /**
         * A Callable wrapper for DescribeApplicationInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeApplicationInstanceOutcomeCallable DescribeApplicationInstanceCallable(const Model::DescribeApplicationInstanceRequest& request) const;

        /**
         * An Async wrapper for DescribeApplicationInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeApplicationInstanceAsync(const Model::DescribeApplicationInstanceRequest& request, const DescribeApplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about an application instance's configuration
         * manifest.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DescribeApplicationInstanceDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationInstanceDetailsOutcome DescribeApplicationInstanceDetails(const Model::DescribeApplicationInstanceDetailsRequest& request) const;

        /**
         * A Callable wrapper for DescribeApplicationInstanceDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeApplicationInstanceDetailsOutcomeCallable DescribeApplicationInstanceDetailsCallable(const Model::DescribeApplicationInstanceDetailsRequest& request) const;

        /**
         * An Async wrapper for DescribeApplicationInstanceDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeApplicationInstanceDetailsAsync(const Model::DescribeApplicationInstanceDetailsRequest& request, const DescribeApplicationInstanceDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DescribeDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDeviceOutcome DescribeDevice(const Model::DescribeDeviceRequest& request) const;

        /**
         * A Callable wrapper for DescribeDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDeviceOutcomeCallable DescribeDeviceCallable(const Model::DescribeDeviceRequest& request) const;

        /**
         * An Async wrapper for DescribeDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDeviceAsync(const Model::DescribeDeviceRequest& request, const DescribeDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a device job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DescribeDeviceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDeviceJobOutcome DescribeDeviceJob(const Model::DescribeDeviceJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeDeviceJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDeviceJobOutcomeCallable DescribeDeviceJobCallable(const Model::DescribeDeviceJobRequest& request) const;

        /**
         * An Async wrapper for DescribeDeviceJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDeviceJobAsync(const Model::DescribeDeviceJobRequest& request, const DescribeDeviceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DescribeNode">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNodeOutcome DescribeNode(const Model::DescribeNodeRequest& request) const;

        /**
         * A Callable wrapper for DescribeNode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNodeOutcomeCallable DescribeNodeCallable(const Model::DescribeNodeRequest& request) const;

        /**
         * An Async wrapper for DescribeNode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNodeAsync(const Model::DescribeNodeRequest& request, const DescribeNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a job to create a camera stream node.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DescribeNodeFromTemplateJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNodeFromTemplateJobOutcome DescribeNodeFromTemplateJob(const Model::DescribeNodeFromTemplateJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeNodeFromTemplateJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNodeFromTemplateJobOutcomeCallable DescribeNodeFromTemplateJobCallable(const Model::DescribeNodeFromTemplateJobRequest& request) const;

        /**
         * An Async wrapper for DescribeNodeFromTemplateJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNodeFromTemplateJobAsync(const Model::DescribeNodeFromTemplateJobRequest& request, const DescribeNodeFromTemplateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a package.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DescribePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePackageOutcome DescribePackage(const Model::DescribePackageRequest& request) const;

        /**
         * A Callable wrapper for DescribePackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePackageOutcomeCallable DescribePackageCallable(const Model::DescribePackageRequest& request) const;

        /**
         * An Async wrapper for DescribePackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePackageAsync(const Model::DescribePackageRequest& request, const DescribePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a package import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DescribePackageImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePackageImportJobOutcome DescribePackageImportJob(const Model::DescribePackageImportJobRequest& request) const;

        /**
         * A Callable wrapper for DescribePackageImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePackageImportJobOutcomeCallable DescribePackageImportJobCallable(const Model::DescribePackageImportJobRequest& request) const;

        /**
         * An Async wrapper for DescribePackageImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePackageImportJobAsync(const Model::DescribePackageImportJobRequest& request, const DescribePackageImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a package version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DescribePackageVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePackageVersionOutcome DescribePackageVersion(const Model::DescribePackageVersionRequest& request) const;

        /**
         * A Callable wrapper for DescribePackageVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePackageVersionOutcomeCallable DescribePackageVersionCallable(const Model::DescribePackageVersionRequest& request) const;

        /**
         * An Async wrapper for DescribePackageVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePackageVersionAsync(const Model::DescribePackageVersionRequest& request, const DescribePackageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of application instance dependencies.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ListApplicationInstanceDependencies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationInstanceDependenciesOutcome ListApplicationInstanceDependencies(const Model::ListApplicationInstanceDependenciesRequest& request) const;

        /**
         * A Callable wrapper for ListApplicationInstanceDependencies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApplicationInstanceDependenciesOutcomeCallable ListApplicationInstanceDependenciesCallable(const Model::ListApplicationInstanceDependenciesRequest& request) const;

        /**
         * An Async wrapper for ListApplicationInstanceDependencies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApplicationInstanceDependenciesAsync(const Model::ListApplicationInstanceDependenciesRequest& request, const ListApplicationInstanceDependenciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of application node instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ListApplicationInstanceNodeInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationInstanceNodeInstancesOutcome ListApplicationInstanceNodeInstances(const Model::ListApplicationInstanceNodeInstancesRequest& request) const;

        /**
         * A Callable wrapper for ListApplicationInstanceNodeInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApplicationInstanceNodeInstancesOutcomeCallable ListApplicationInstanceNodeInstancesCallable(const Model::ListApplicationInstanceNodeInstancesRequest& request) const;

        /**
         * An Async wrapper for ListApplicationInstanceNodeInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApplicationInstanceNodeInstancesAsync(const Model::ListApplicationInstanceNodeInstancesRequest& request, const ListApplicationInstanceNodeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of application instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ListApplicationInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationInstancesOutcome ListApplicationInstances(const Model::ListApplicationInstancesRequest& request) const;

        /**
         * A Callable wrapper for ListApplicationInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListApplicationInstancesOutcomeCallable ListApplicationInstancesCallable(const Model::ListApplicationInstancesRequest& request) const;

        /**
         * An Async wrapper for ListApplicationInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListApplicationInstancesAsync(const Model::ListApplicationInstancesRequest& request, const ListApplicationInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ListDevices">AWS
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
         * <p>Returns a list of jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ListDevicesJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDevicesJobsOutcome ListDevicesJobs(const Model::ListDevicesJobsRequest& request) const;

        /**
         * A Callable wrapper for ListDevicesJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDevicesJobsOutcomeCallable ListDevicesJobsCallable(const Model::ListDevicesJobsRequest& request) const;

        /**
         * An Async wrapper for ListDevicesJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDevicesJobsAsync(const Model::ListDevicesJobsRequest& request, const ListDevicesJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of camera stream node jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ListNodeFromTemplateJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNodeFromTemplateJobsOutcome ListNodeFromTemplateJobs(const Model::ListNodeFromTemplateJobsRequest& request) const;

        /**
         * A Callable wrapper for ListNodeFromTemplateJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNodeFromTemplateJobsOutcomeCallable ListNodeFromTemplateJobsCallable(const Model::ListNodeFromTemplateJobsRequest& request) const;

        /**
         * An Async wrapper for ListNodeFromTemplateJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNodeFromTemplateJobsAsync(const Model::ListNodeFromTemplateJobsRequest& request, const ListNodeFromTemplateJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ListNodes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNodesOutcome ListNodes(const Model::ListNodesRequest& request) const;

        /**
         * A Callable wrapper for ListNodes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNodesOutcomeCallable ListNodesCallable(const Model::ListNodesRequest& request) const;

        /**
         * An Async wrapper for ListNodes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNodesAsync(const Model::ListNodesRequest& request, const ListNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of package import jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ListPackageImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPackageImportJobsOutcome ListPackageImportJobs(const Model::ListPackageImportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListPackageImportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPackageImportJobsOutcomeCallable ListPackageImportJobsCallable(const Model::ListPackageImportJobsRequest& request) const;

        /**
         * An Async wrapper for ListPackageImportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPackageImportJobsAsync(const Model::ListPackageImportJobsRequest& request, const ListPackageImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of packages.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ListPackages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPackagesOutcome ListPackages(const Model::ListPackagesRequest& request) const;

        /**
         * A Callable wrapper for ListPackages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPackagesOutcomeCallable ListPackagesCallable(const Model::ListPackagesRequest& request) const;

        /**
         * An Async wrapper for ListPackages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPackagesAsync(const Model::ListPackagesRequest& request, const ListPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ListTagsForResource">AWS
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
         * A Callable wrapper for ProvisionDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ProvisionDeviceOutcomeCallable ProvisionDeviceCallable(const Model::ProvisionDeviceRequest& request) const;

        /**
         * An Async wrapper for ProvisionDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ProvisionDeviceAsync(const Model::ProvisionDeviceRequest& request, const ProvisionDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers a package version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/RegisterPackageVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterPackageVersionOutcome RegisterPackageVersion(const Model::RegisterPackageVersionRequest& request) const;

        /**
         * A Callable wrapper for RegisterPackageVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterPackageVersionOutcomeCallable RegisterPackageVersionCallable(const Model::RegisterPackageVersionRequest& request) const;

        /**
         * An Async wrapper for RegisterPackageVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterPackageVersionAsync(const Model::RegisterPackageVersionRequest& request, const RegisterPackageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes an application instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/RemoveApplicationInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveApplicationInstanceOutcome RemoveApplicationInstance(const Model::RemoveApplicationInstanceRequest& request) const;

        /**
         * A Callable wrapper for RemoveApplicationInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveApplicationInstanceOutcomeCallable RemoveApplicationInstanceCallable(const Model::RemoveApplicationInstanceRequest& request) const;

        /**
         * An Async wrapper for RemoveApplicationInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveApplicationInstanceAsync(const Model::RemoveApplicationInstanceRequest& request, const RemoveApplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Signal camera nodes to stop or resume.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/SignalApplicationInstanceNodeInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::SignalApplicationInstanceNodeInstancesOutcome SignalApplicationInstanceNodeInstances(const Model::SignalApplicationInstanceNodeInstancesRequest& request) const;

        /**
         * A Callable wrapper for SignalApplicationInstanceNodeInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SignalApplicationInstanceNodeInstancesOutcomeCallable SignalApplicationInstanceNodeInstancesCallable(const Model::SignalApplicationInstanceNodeInstancesRequest& request) const;

        /**
         * An Async wrapper for SignalApplicationInstanceNodeInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SignalApplicationInstanceNodeInstancesAsync(const Model::SignalApplicationInstanceNodeInstancesRequest& request, const SignalApplicationInstanceNodeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tags a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/TagResource">AWS
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
         * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/UntagResource">AWS
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
         * <p>Updates a device's metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/UpdateDeviceMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeviceMetadataOutcome UpdateDeviceMetadata(const Model::UpdateDeviceMetadataRequest& request) const;

        /**
         * A Callable wrapper for UpdateDeviceMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDeviceMetadataOutcomeCallable UpdateDeviceMetadataCallable(const Model::UpdateDeviceMetadataRequest& request) const;

        /**
         * An Async wrapper for UpdateDeviceMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDeviceMetadataAsync(const Model::UpdateDeviceMetadataRequest& request, const UpdateDeviceMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<PanoramaEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<PanoramaClient>;
      void init(const PanoramaClientConfiguration& clientConfiguration);

      PanoramaClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<PanoramaEndpointProviderBase> m_endpointProvider;
  };

} // namespace Panorama
} // namespace Aws
