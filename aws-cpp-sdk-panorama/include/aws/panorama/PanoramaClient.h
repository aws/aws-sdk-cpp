/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/PanoramaErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/panorama/model/CreateApplicationInstanceResult.h>
#include <aws/panorama/model/CreateJobForDevicesResult.h>
#include <aws/panorama/model/CreateNodeFromTemplateJobResult.h>
#include <aws/panorama/model/CreatePackageResult.h>
#include <aws/panorama/model/CreatePackageImportJobResult.h>
#include <aws/panorama/model/DeleteDeviceResult.h>
#include <aws/panorama/model/DeletePackageResult.h>
#include <aws/panorama/model/DeregisterPackageVersionResult.h>
#include <aws/panorama/model/DescribeApplicationInstanceResult.h>
#include <aws/panorama/model/DescribeApplicationInstanceDetailsResult.h>
#include <aws/panorama/model/DescribeDeviceResult.h>
#include <aws/panorama/model/DescribeDeviceJobResult.h>
#include <aws/panorama/model/DescribeNodeResult.h>
#include <aws/panorama/model/DescribeNodeFromTemplateJobResult.h>
#include <aws/panorama/model/DescribePackageResult.h>
#include <aws/panorama/model/DescribePackageImportJobResult.h>
#include <aws/panorama/model/DescribePackageVersionResult.h>
#include <aws/panorama/model/ListApplicationInstanceDependenciesResult.h>
#include <aws/panorama/model/ListApplicationInstanceNodeInstancesResult.h>
#include <aws/panorama/model/ListApplicationInstancesResult.h>
#include <aws/panorama/model/ListDevicesResult.h>
#include <aws/panorama/model/ListDevicesJobsResult.h>
#include <aws/panorama/model/ListNodeFromTemplateJobsResult.h>
#include <aws/panorama/model/ListNodesResult.h>
#include <aws/panorama/model/ListPackageImportJobsResult.h>
#include <aws/panorama/model/ListPackagesResult.h>
#include <aws/panorama/model/ListTagsForResourceResult.h>
#include <aws/panorama/model/ProvisionDeviceResult.h>
#include <aws/panorama/model/RegisterPackageVersionResult.h>
#include <aws/panorama/model/RemoveApplicationInstanceResult.h>
#include <aws/panorama/model/TagResourceResult.h>
#include <aws/panorama/model/UntagResourceResult.h>
#include <aws/panorama/model/UpdateDeviceMetadataResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace Panorama
{

namespace Model
{
        class CreateApplicationInstanceRequest;
        class CreateJobForDevicesRequest;
        class CreateNodeFromTemplateJobRequest;
        class CreatePackageRequest;
        class CreatePackageImportJobRequest;
        class DeleteDeviceRequest;
        class DeletePackageRequest;
        class DeregisterPackageVersionRequest;
        class DescribeApplicationInstanceRequest;
        class DescribeApplicationInstanceDetailsRequest;
        class DescribeDeviceRequest;
        class DescribeDeviceJobRequest;
        class DescribeNodeRequest;
        class DescribeNodeFromTemplateJobRequest;
        class DescribePackageRequest;
        class DescribePackageImportJobRequest;
        class DescribePackageVersionRequest;
        class ListApplicationInstanceDependenciesRequest;
        class ListApplicationInstanceNodeInstancesRequest;
        class ListApplicationInstancesRequest;
        class ListDevicesRequest;
        class ListDevicesJobsRequest;
        class ListNodeFromTemplateJobsRequest;
        class ListNodesRequest;
        class ListPackageImportJobsRequest;
        class ListPackagesRequest;
        class ListTagsForResourceRequest;
        class ProvisionDeviceRequest;
        class RegisterPackageVersionRequest;
        class RemoveApplicationInstanceRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateDeviceMetadataRequest;

        typedef Aws::Utils::Outcome<CreateApplicationInstanceResult, PanoramaError> CreateApplicationInstanceOutcome;
        typedef Aws::Utils::Outcome<CreateJobForDevicesResult, PanoramaError> CreateJobForDevicesOutcome;
        typedef Aws::Utils::Outcome<CreateNodeFromTemplateJobResult, PanoramaError> CreateNodeFromTemplateJobOutcome;
        typedef Aws::Utils::Outcome<CreatePackageResult, PanoramaError> CreatePackageOutcome;
        typedef Aws::Utils::Outcome<CreatePackageImportJobResult, PanoramaError> CreatePackageImportJobOutcome;
        typedef Aws::Utils::Outcome<DeleteDeviceResult, PanoramaError> DeleteDeviceOutcome;
        typedef Aws::Utils::Outcome<DeletePackageResult, PanoramaError> DeletePackageOutcome;
        typedef Aws::Utils::Outcome<DeregisterPackageVersionResult, PanoramaError> DeregisterPackageVersionOutcome;
        typedef Aws::Utils::Outcome<DescribeApplicationInstanceResult, PanoramaError> DescribeApplicationInstanceOutcome;
        typedef Aws::Utils::Outcome<DescribeApplicationInstanceDetailsResult, PanoramaError> DescribeApplicationInstanceDetailsOutcome;
        typedef Aws::Utils::Outcome<DescribeDeviceResult, PanoramaError> DescribeDeviceOutcome;
        typedef Aws::Utils::Outcome<DescribeDeviceJobResult, PanoramaError> DescribeDeviceJobOutcome;
        typedef Aws::Utils::Outcome<DescribeNodeResult, PanoramaError> DescribeNodeOutcome;
        typedef Aws::Utils::Outcome<DescribeNodeFromTemplateJobResult, PanoramaError> DescribeNodeFromTemplateJobOutcome;
        typedef Aws::Utils::Outcome<DescribePackageResult, PanoramaError> DescribePackageOutcome;
        typedef Aws::Utils::Outcome<DescribePackageImportJobResult, PanoramaError> DescribePackageImportJobOutcome;
        typedef Aws::Utils::Outcome<DescribePackageVersionResult, PanoramaError> DescribePackageVersionOutcome;
        typedef Aws::Utils::Outcome<ListApplicationInstanceDependenciesResult, PanoramaError> ListApplicationInstanceDependenciesOutcome;
        typedef Aws::Utils::Outcome<ListApplicationInstanceNodeInstancesResult, PanoramaError> ListApplicationInstanceNodeInstancesOutcome;
        typedef Aws::Utils::Outcome<ListApplicationInstancesResult, PanoramaError> ListApplicationInstancesOutcome;
        typedef Aws::Utils::Outcome<ListDevicesResult, PanoramaError> ListDevicesOutcome;
        typedef Aws::Utils::Outcome<ListDevicesJobsResult, PanoramaError> ListDevicesJobsOutcome;
        typedef Aws::Utils::Outcome<ListNodeFromTemplateJobsResult, PanoramaError> ListNodeFromTemplateJobsOutcome;
        typedef Aws::Utils::Outcome<ListNodesResult, PanoramaError> ListNodesOutcome;
        typedef Aws::Utils::Outcome<ListPackageImportJobsResult, PanoramaError> ListPackageImportJobsOutcome;
        typedef Aws::Utils::Outcome<ListPackagesResult, PanoramaError> ListPackagesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, PanoramaError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ProvisionDeviceResult, PanoramaError> ProvisionDeviceOutcome;
        typedef Aws::Utils::Outcome<RegisterPackageVersionResult, PanoramaError> RegisterPackageVersionOutcome;
        typedef Aws::Utils::Outcome<RemoveApplicationInstanceResult, PanoramaError> RemoveApplicationInstanceOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, PanoramaError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, PanoramaError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateDeviceMetadataResult, PanoramaError> UpdateDeviceMetadataOutcome;

        typedef std::future<CreateApplicationInstanceOutcome> CreateApplicationInstanceOutcomeCallable;
        typedef std::future<CreateJobForDevicesOutcome> CreateJobForDevicesOutcomeCallable;
        typedef std::future<CreateNodeFromTemplateJobOutcome> CreateNodeFromTemplateJobOutcomeCallable;
        typedef std::future<CreatePackageOutcome> CreatePackageOutcomeCallable;
        typedef std::future<CreatePackageImportJobOutcome> CreatePackageImportJobOutcomeCallable;
        typedef std::future<DeleteDeviceOutcome> DeleteDeviceOutcomeCallable;
        typedef std::future<DeletePackageOutcome> DeletePackageOutcomeCallable;
        typedef std::future<DeregisterPackageVersionOutcome> DeregisterPackageVersionOutcomeCallable;
        typedef std::future<DescribeApplicationInstanceOutcome> DescribeApplicationInstanceOutcomeCallable;
        typedef std::future<DescribeApplicationInstanceDetailsOutcome> DescribeApplicationInstanceDetailsOutcomeCallable;
        typedef std::future<DescribeDeviceOutcome> DescribeDeviceOutcomeCallable;
        typedef std::future<DescribeDeviceJobOutcome> DescribeDeviceJobOutcomeCallable;
        typedef std::future<DescribeNodeOutcome> DescribeNodeOutcomeCallable;
        typedef std::future<DescribeNodeFromTemplateJobOutcome> DescribeNodeFromTemplateJobOutcomeCallable;
        typedef std::future<DescribePackageOutcome> DescribePackageOutcomeCallable;
        typedef std::future<DescribePackageImportJobOutcome> DescribePackageImportJobOutcomeCallable;
        typedef std::future<DescribePackageVersionOutcome> DescribePackageVersionOutcomeCallable;
        typedef std::future<ListApplicationInstanceDependenciesOutcome> ListApplicationInstanceDependenciesOutcomeCallable;
        typedef std::future<ListApplicationInstanceNodeInstancesOutcome> ListApplicationInstanceNodeInstancesOutcomeCallable;
        typedef std::future<ListApplicationInstancesOutcome> ListApplicationInstancesOutcomeCallable;
        typedef std::future<ListDevicesOutcome> ListDevicesOutcomeCallable;
        typedef std::future<ListDevicesJobsOutcome> ListDevicesJobsOutcomeCallable;
        typedef std::future<ListNodeFromTemplateJobsOutcome> ListNodeFromTemplateJobsOutcomeCallable;
        typedef std::future<ListNodesOutcome> ListNodesOutcomeCallable;
        typedef std::future<ListPackageImportJobsOutcome> ListPackageImportJobsOutcomeCallable;
        typedef std::future<ListPackagesOutcome> ListPackagesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<ProvisionDeviceOutcome> ProvisionDeviceOutcomeCallable;
        typedef std::future<RegisterPackageVersionOutcome> RegisterPackageVersionOutcomeCallable;
        typedef std::future<RemoveApplicationInstanceOutcome> RemoveApplicationInstanceOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateDeviceMetadataOutcome> UpdateDeviceMetadataOutcomeCallable;
} // namespace Model

  class PanoramaClient;

    typedef std::function<void(const PanoramaClient*, const Model::CreateApplicationInstanceRequest&, const Model::CreateApplicationInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationInstanceResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::CreateJobForDevicesRequest&, const Model::CreateJobForDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateJobForDevicesResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::CreateNodeFromTemplateJobRequest&, const Model::CreateNodeFromTemplateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNodeFromTemplateJobResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::CreatePackageRequest&, const Model::CreatePackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePackageResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::CreatePackageImportJobRequest&, const Model::CreatePackageImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePackageImportJobResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::DeleteDeviceRequest&, const Model::DeleteDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeviceResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::DeletePackageRequest&, const Model::DeletePackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePackageResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::DeregisterPackageVersionRequest&, const Model::DeregisterPackageVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterPackageVersionResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::DescribeApplicationInstanceRequest&, const Model::DescribeApplicationInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeApplicationInstanceResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::DescribeApplicationInstanceDetailsRequest&, const Model::DescribeApplicationInstanceDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeApplicationInstanceDetailsResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::DescribeDeviceRequest&, const Model::DescribeDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDeviceResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::DescribeDeviceJobRequest&, const Model::DescribeDeviceJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDeviceJobResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::DescribeNodeRequest&, const Model::DescribeNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNodeResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::DescribeNodeFromTemplateJobRequest&, const Model::DescribeNodeFromTemplateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNodeFromTemplateJobResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::DescribePackageRequest&, const Model::DescribePackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePackageResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::DescribePackageImportJobRequest&, const Model::DescribePackageImportJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePackageImportJobResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::DescribePackageVersionRequest&, const Model::DescribePackageVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePackageVersionResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::ListApplicationInstanceDependenciesRequest&, const Model::ListApplicationInstanceDependenciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationInstanceDependenciesResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::ListApplicationInstanceNodeInstancesRequest&, const Model::ListApplicationInstanceNodeInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationInstanceNodeInstancesResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::ListApplicationInstancesRequest&, const Model::ListApplicationInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationInstancesResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::ListDevicesRequest&, const Model::ListDevicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDevicesResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::ListDevicesJobsRequest&, const Model::ListDevicesJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDevicesJobsResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::ListNodeFromTemplateJobsRequest&, const Model::ListNodeFromTemplateJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNodeFromTemplateJobsResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::ListNodesRequest&, const Model::ListNodesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNodesResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::ListPackageImportJobsRequest&, const Model::ListPackageImportJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPackageImportJobsResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::ListPackagesRequest&, const Model::ListPackagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPackagesResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::ProvisionDeviceRequest&, const Model::ProvisionDeviceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ProvisionDeviceResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::RegisterPackageVersionRequest&, const Model::RegisterPackageVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterPackageVersionResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::RemoveApplicationInstanceRequest&, const Model::RemoveApplicationInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveApplicationInstanceResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const PanoramaClient*, const Model::UpdateDeviceMetadataRequest&, const Model::UpdateDeviceMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDeviceMetadataResponseReceivedHandler;

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

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PanoramaClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PanoramaClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PanoramaClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

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
         * <p>Creates a job to run on one or more devices.</p><p><h3>See Also:</h3>   <a
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
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Panorama
} // namespace Aws
