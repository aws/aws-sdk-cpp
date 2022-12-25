/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-projects/IoT1ClickProjects_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iot1click-projects/IoT1ClickProjectsServiceClientModel.h>

namespace Aws
{
namespace IoT1ClickProjects
{
  /**
   * <p>The AWS IoT 1-Click Projects API Reference</p>
   */
  class AWS_IOT1CLICKPROJECTS_API IoT1ClickProjectsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<IoT1ClickProjectsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoT1ClickProjectsClient(const Aws::IoT1ClickProjects::IoT1ClickProjectsClientConfiguration& clientConfiguration = Aws::IoT1ClickProjects::IoT1ClickProjectsClientConfiguration(),
                                std::shared_ptr<IoT1ClickProjectsEndpointProviderBase> endpointProvider = Aws::MakeShared<IoT1ClickProjectsEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoT1ClickProjectsClient(const Aws::Auth::AWSCredentials& credentials,
                                std::shared_ptr<IoT1ClickProjectsEndpointProviderBase> endpointProvider = Aws::MakeShared<IoT1ClickProjectsEndpointProvider>(ALLOCATION_TAG),
                                const Aws::IoT1ClickProjects::IoT1ClickProjectsClientConfiguration& clientConfiguration = Aws::IoT1ClickProjects::IoT1ClickProjectsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoT1ClickProjectsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                std::shared_ptr<IoT1ClickProjectsEndpointProviderBase> endpointProvider = Aws::MakeShared<IoT1ClickProjectsEndpointProvider>(ALLOCATION_TAG),
                                const Aws::IoT1ClickProjects::IoT1ClickProjectsClientConfiguration& clientConfiguration = Aws::IoT1ClickProjects::IoT1ClickProjectsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoT1ClickProjectsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoT1ClickProjectsClient(const Aws::Auth::AWSCredentials& credentials,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoT1ClickProjectsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~IoT1ClickProjectsClient();

        /**
         * <p>Associates a physical device with a placement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/AssociateDeviceWithPlacement">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateDeviceWithPlacementOutcome AssociateDeviceWithPlacement(const Model::AssociateDeviceWithPlacementRequest& request) const;

        /**
         * A Callable wrapper for AssociateDeviceWithPlacement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateDeviceWithPlacementOutcomeCallable AssociateDeviceWithPlacementCallable(const Model::AssociateDeviceWithPlacementRequest& request) const;

        /**
         * An Async wrapper for AssociateDeviceWithPlacement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateDeviceWithPlacementAsync(const Model::AssociateDeviceWithPlacementRequest& request, const AssociateDeviceWithPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an empty placement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/CreatePlacement">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePlacementOutcome CreatePlacement(const Model::CreatePlacementRequest& request) const;

        /**
         * A Callable wrapper for CreatePlacement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePlacementOutcomeCallable CreatePlacementCallable(const Model::CreatePlacementRequest& request) const;

        /**
         * An Async wrapper for CreatePlacement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePlacementAsync(const Model::CreatePlacementRequest& request, const CreatePlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an empty project with a placement template. A project contains zero
         * or more placements that adhere to the placement template defined in the
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/CreateProject">AWS
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
         * <p>Deletes a placement. To delete a placement, it must not have any devices
         * associated with it.</p>  <p>When you delete a placement, all associated
         * data becomes irretrievable.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/DeletePlacement">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePlacementOutcome DeletePlacement(const Model::DeletePlacementRequest& request) const;

        /**
         * A Callable wrapper for DeletePlacement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePlacementOutcomeCallable DeletePlacementCallable(const Model::DeletePlacementRequest& request) const;

        /**
         * An Async wrapper for DeletePlacement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePlacementAsync(const Model::DeletePlacementRequest& request, const DeletePlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a project. To delete a project, it must not have any placements
         * associated with it.</p>  <p>When you delete a project, all associated data
         * becomes irretrievable.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/DeleteProject">AWS
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
         * <p>Describes a placement in a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/DescribePlacement">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePlacementOutcome DescribePlacement(const Model::DescribePlacementRequest& request) const;

        /**
         * A Callable wrapper for DescribePlacement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePlacementOutcomeCallable DescribePlacementCallable(const Model::DescribePlacementRequest& request) const;

        /**
         * An Async wrapper for DescribePlacement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePlacementAsync(const Model::DescribePlacementRequest& request, const DescribePlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an object describing a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/DescribeProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProjectOutcome DescribeProject(const Model::DescribeProjectRequest& request) const;

        /**
         * A Callable wrapper for DescribeProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProjectOutcomeCallable DescribeProjectCallable(const Model::DescribeProjectRequest& request) const;

        /**
         * An Async wrapper for DescribeProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProjectAsync(const Model::DescribeProjectRequest& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a physical device from a placement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/DisassociateDeviceFromPlacement">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateDeviceFromPlacementOutcome DisassociateDeviceFromPlacement(const Model::DisassociateDeviceFromPlacementRequest& request) const;

        /**
         * A Callable wrapper for DisassociateDeviceFromPlacement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateDeviceFromPlacementOutcomeCallable DisassociateDeviceFromPlacementCallable(const Model::DisassociateDeviceFromPlacementRequest& request) const;

        /**
         * An Async wrapper for DisassociateDeviceFromPlacement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateDeviceFromPlacementAsync(const Model::DisassociateDeviceFromPlacementRequest& request, const DisassociateDeviceFromPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an object enumerating the devices in a placement.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/GetDevicesInPlacement">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDevicesInPlacementOutcome GetDevicesInPlacement(const Model::GetDevicesInPlacementRequest& request) const;

        /**
         * A Callable wrapper for GetDevicesInPlacement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDevicesInPlacementOutcomeCallable GetDevicesInPlacementCallable(const Model::GetDevicesInPlacementRequest& request) const;

        /**
         * An Async wrapper for GetDevicesInPlacement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDevicesInPlacementAsync(const Model::GetDevicesInPlacementRequest& request, const GetDevicesInPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the placement(s) of a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/ListPlacements">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPlacementsOutcome ListPlacements(const Model::ListPlacementsRequest& request) const;

        /**
         * A Callable wrapper for ListPlacements that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPlacementsOutcomeCallable ListPlacementsCallable(const Model::ListPlacementsRequest& request) const;

        /**
         * An Async wrapper for ListPlacements that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPlacementsAsync(const Model::ListPlacementsRequest& request, const ListPlacementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the AWS IoT 1-Click project(s) associated with your AWS account and
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/ListProjects">AWS
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
         * <p>Lists the tags (metadata key/value pairs) which you have assigned to the
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/ListTagsForResource">AWS
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
         * <p>Creates or modifies tags for a resource. Tags are key/value pairs (metadata)
         * that can be used to manage a resource. For more information, see <a
         * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
         * Tagging Strategies</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/TagResource">AWS
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
         * <p>Removes one or more tags (metadata key/value pairs) from a
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/UntagResource">AWS
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
         * <p>Updates a placement with the given attributes. To clear an attribute, pass an
         * empty value (i.e., "").</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/UpdatePlacement">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePlacementOutcome UpdatePlacement(const Model::UpdatePlacementRequest& request) const;

        /**
         * A Callable wrapper for UpdatePlacement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePlacementOutcomeCallable UpdatePlacementCallable(const Model::UpdatePlacementRequest& request) const;

        /**
         * An Async wrapper for UpdatePlacement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdatePlacementAsync(const Model::UpdatePlacementRequest& request, const UpdatePlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a project associated with your AWS account and region. With the
         * exception of device template names, you can pass just the values that need to be
         * updated because the update request will change only the values that are
         * provided. To clear a value, pass the empty string (i.e.,
         * <code>""</code>).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/UpdateProject">AWS
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


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<IoT1ClickProjectsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<IoT1ClickProjectsClient>;
      void init(const IoT1ClickProjectsClientConfiguration& clientConfiguration);

      IoT1ClickProjectsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<IoT1ClickProjectsEndpointProviderBase> m_endpointProvider;
  };

} // namespace IoT1ClickProjects
} // namespace Aws
