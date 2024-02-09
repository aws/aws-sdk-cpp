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
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef IoT1ClickProjectsClientConfiguration ClientConfigurationType;
      typedef IoT1ClickProjectsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoT1ClickProjectsClient(const Aws::IoT1ClickProjects::IoT1ClickProjectsClientConfiguration& clientConfiguration = Aws::IoT1ClickProjects::IoT1ClickProjectsClientConfiguration(),
                                std::shared_ptr<IoT1ClickProjectsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoT1ClickProjectsClient(const Aws::Auth::AWSCredentials& credentials,
                                std::shared_ptr<IoT1ClickProjectsEndpointProviderBase> endpointProvider = nullptr,
                                const Aws::IoT1ClickProjects::IoT1ClickProjectsClientConfiguration& clientConfiguration = Aws::IoT1ClickProjects::IoT1ClickProjectsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoT1ClickProjectsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                std::shared_ptr<IoT1ClickProjectsEndpointProviderBase> endpointProvider = nullptr,
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
        template<typename AssociateDeviceWithPlacementRequestT = Model::AssociateDeviceWithPlacementRequest>
        Model::AssociateDeviceWithPlacementOutcomeCallable AssociateDeviceWithPlacementCallable(const AssociateDeviceWithPlacementRequestT& request) const
        {
            return SubmitCallable(&IoT1ClickProjectsClient::AssociateDeviceWithPlacement, request);
        }

        /**
         * An Async wrapper for AssociateDeviceWithPlacement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateDeviceWithPlacementRequestT = Model::AssociateDeviceWithPlacementRequest>
        void AssociateDeviceWithPlacementAsync(const AssociateDeviceWithPlacementRequestT& request, const AssociateDeviceWithPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoT1ClickProjectsClient::AssociateDeviceWithPlacement, request, handler, context);
        }

        /**
         * <p>Creates an empty placement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/CreatePlacement">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePlacementOutcome CreatePlacement(const Model::CreatePlacementRequest& request) const;

        /**
         * A Callable wrapper for CreatePlacement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePlacementRequestT = Model::CreatePlacementRequest>
        Model::CreatePlacementOutcomeCallable CreatePlacementCallable(const CreatePlacementRequestT& request) const
        {
            return SubmitCallable(&IoT1ClickProjectsClient::CreatePlacement, request);
        }

        /**
         * An Async wrapper for CreatePlacement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePlacementRequestT = Model::CreatePlacementRequest>
        void CreatePlacementAsync(const CreatePlacementRequestT& request, const CreatePlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoT1ClickProjectsClient::CreatePlacement, request, handler, context);
        }

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
        template<typename CreateProjectRequestT = Model::CreateProjectRequest>
        Model::CreateProjectOutcomeCallable CreateProjectCallable(const CreateProjectRequestT& request) const
        {
            return SubmitCallable(&IoT1ClickProjectsClient::CreateProject, request);
        }

        /**
         * An Async wrapper for CreateProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProjectRequestT = Model::CreateProjectRequest>
        void CreateProjectAsync(const CreateProjectRequestT& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoT1ClickProjectsClient::CreateProject, request, handler, context);
        }

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
        template<typename DeletePlacementRequestT = Model::DeletePlacementRequest>
        Model::DeletePlacementOutcomeCallable DeletePlacementCallable(const DeletePlacementRequestT& request) const
        {
            return SubmitCallable(&IoT1ClickProjectsClient::DeletePlacement, request);
        }

        /**
         * An Async wrapper for DeletePlacement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePlacementRequestT = Model::DeletePlacementRequest>
        void DeletePlacementAsync(const DeletePlacementRequestT& request, const DeletePlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoT1ClickProjectsClient::DeletePlacement, request, handler, context);
        }

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
        template<typename DeleteProjectRequestT = Model::DeleteProjectRequest>
        Model::DeleteProjectOutcomeCallable DeleteProjectCallable(const DeleteProjectRequestT& request) const
        {
            return SubmitCallable(&IoT1ClickProjectsClient::DeleteProject, request);
        }

        /**
         * An Async wrapper for DeleteProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProjectRequestT = Model::DeleteProjectRequest>
        void DeleteProjectAsync(const DeleteProjectRequestT& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoT1ClickProjectsClient::DeleteProject, request, handler, context);
        }

        /**
         * <p>Describes a placement in a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/DescribePlacement">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePlacementOutcome DescribePlacement(const Model::DescribePlacementRequest& request) const;

        /**
         * A Callable wrapper for DescribePlacement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePlacementRequestT = Model::DescribePlacementRequest>
        Model::DescribePlacementOutcomeCallable DescribePlacementCallable(const DescribePlacementRequestT& request) const
        {
            return SubmitCallable(&IoT1ClickProjectsClient::DescribePlacement, request);
        }

        /**
         * An Async wrapper for DescribePlacement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePlacementRequestT = Model::DescribePlacementRequest>
        void DescribePlacementAsync(const DescribePlacementRequestT& request, const DescribePlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoT1ClickProjectsClient::DescribePlacement, request, handler, context);
        }

        /**
         * <p>Returns an object describing a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/DescribeProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProjectOutcome DescribeProject(const Model::DescribeProjectRequest& request) const;

        /**
         * A Callable wrapper for DescribeProject that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeProjectRequestT = Model::DescribeProjectRequest>
        Model::DescribeProjectOutcomeCallable DescribeProjectCallable(const DescribeProjectRequestT& request) const
        {
            return SubmitCallable(&IoT1ClickProjectsClient::DescribeProject, request);
        }

        /**
         * An Async wrapper for DescribeProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeProjectRequestT = Model::DescribeProjectRequest>
        void DescribeProjectAsync(const DescribeProjectRequestT& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoT1ClickProjectsClient::DescribeProject, request, handler, context);
        }

        /**
         * <p>Removes a physical device from a placement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/DisassociateDeviceFromPlacement">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateDeviceFromPlacementOutcome DisassociateDeviceFromPlacement(const Model::DisassociateDeviceFromPlacementRequest& request) const;

        /**
         * A Callable wrapper for DisassociateDeviceFromPlacement that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateDeviceFromPlacementRequestT = Model::DisassociateDeviceFromPlacementRequest>
        Model::DisassociateDeviceFromPlacementOutcomeCallable DisassociateDeviceFromPlacementCallable(const DisassociateDeviceFromPlacementRequestT& request) const
        {
            return SubmitCallable(&IoT1ClickProjectsClient::DisassociateDeviceFromPlacement, request);
        }

        /**
         * An Async wrapper for DisassociateDeviceFromPlacement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateDeviceFromPlacementRequestT = Model::DisassociateDeviceFromPlacementRequest>
        void DisassociateDeviceFromPlacementAsync(const DisassociateDeviceFromPlacementRequestT& request, const DisassociateDeviceFromPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoT1ClickProjectsClient::DisassociateDeviceFromPlacement, request, handler, context);
        }

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
        template<typename GetDevicesInPlacementRequestT = Model::GetDevicesInPlacementRequest>
        Model::GetDevicesInPlacementOutcomeCallable GetDevicesInPlacementCallable(const GetDevicesInPlacementRequestT& request) const
        {
            return SubmitCallable(&IoT1ClickProjectsClient::GetDevicesInPlacement, request);
        }

        /**
         * An Async wrapper for GetDevicesInPlacement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDevicesInPlacementRequestT = Model::GetDevicesInPlacementRequest>
        void GetDevicesInPlacementAsync(const GetDevicesInPlacementRequestT& request, const GetDevicesInPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoT1ClickProjectsClient::GetDevicesInPlacement, request, handler, context);
        }

        /**
         * <p>Lists the placement(s) of a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/ListPlacements">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPlacementsOutcome ListPlacements(const Model::ListPlacementsRequest& request) const;

        /**
         * A Callable wrapper for ListPlacements that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPlacementsRequestT = Model::ListPlacementsRequest>
        Model::ListPlacementsOutcomeCallable ListPlacementsCallable(const ListPlacementsRequestT& request) const
        {
            return SubmitCallable(&IoT1ClickProjectsClient::ListPlacements, request);
        }

        /**
         * An Async wrapper for ListPlacements that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPlacementsRequestT = Model::ListPlacementsRequest>
        void ListPlacementsAsync(const ListPlacementsRequestT& request, const ListPlacementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoT1ClickProjectsClient::ListPlacements, request, handler, context);
        }

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
        template<typename ListProjectsRequestT = Model::ListProjectsRequest>
        Model::ListProjectsOutcomeCallable ListProjectsCallable(const ListProjectsRequestT& request) const
        {
            return SubmitCallable(&IoT1ClickProjectsClient::ListProjects, request);
        }

        /**
         * An Async wrapper for ListProjects that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProjectsRequestT = Model::ListProjectsRequest>
        void ListProjectsAsync(const ListProjectsRequestT& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoT1ClickProjectsClient::ListProjects, request, handler, context);
        }

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
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&IoT1ClickProjectsClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoT1ClickProjectsClient::ListTagsForResource, request, handler, context);
        }

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
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&IoT1ClickProjectsClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoT1ClickProjectsClient::TagResource, request, handler, context);
        }

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
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&IoT1ClickProjectsClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoT1ClickProjectsClient::UntagResource, request, handler, context);
        }

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
        template<typename UpdatePlacementRequestT = Model::UpdatePlacementRequest>
        Model::UpdatePlacementOutcomeCallable UpdatePlacementCallable(const UpdatePlacementRequestT& request) const
        {
            return SubmitCallable(&IoT1ClickProjectsClient::UpdatePlacement, request);
        }

        /**
         * An Async wrapper for UpdatePlacement that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePlacementRequestT = Model::UpdatePlacementRequest>
        void UpdatePlacementAsync(const UpdatePlacementRequestT& request, const UpdatePlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoT1ClickProjectsClient::UpdatePlacement, request, handler, context);
        }

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
        template<typename UpdateProjectRequestT = Model::UpdateProjectRequest>
        Model::UpdateProjectOutcomeCallable UpdateProjectCallable(const UpdateProjectRequestT& request) const
        {
            return SubmitCallable(&IoT1ClickProjectsClient::UpdateProject, request);
        }

        /**
         * An Async wrapper for UpdateProject that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateProjectRequestT = Model::UpdateProjectRequest>
        void UpdateProjectAsync(const UpdateProjectRequestT& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoT1ClickProjectsClient::UpdateProject, request, handler, context);
        }


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
