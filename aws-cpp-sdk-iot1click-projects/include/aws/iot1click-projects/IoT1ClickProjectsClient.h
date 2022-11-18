/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-projects/IoT1ClickProjects_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iot1click-projects/IoT1ClickProjectsServiceClientModel.h>
#include <aws/iot1click-projects/IoT1ClickProjectsLegacyAsyncMacros.h>

namespace Aws
{
namespace IoT1ClickProjects
{
  /**
   * <p>The AWS IoT 1-Click Projects API Reference</p>
   */
  class AWS_IOT1CLICKPROJECTS_API IoT1ClickProjectsClient : public Aws::Client::AWSJsonClient
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
         * <p>Associates a physical device with a placement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/AssociateDeviceWithPlacement">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateDeviceWithPlacementOutcome AssociateDeviceWithPlacement(const Model::AssociateDeviceWithPlacementRequest& request) const;


        /**
         * <p>Creates an empty placement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/CreatePlacement">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePlacementOutcome CreatePlacement(const Model::CreatePlacementRequest& request) const;


        /**
         * <p>Creates an empty project with a placement template. A project contains zero
         * or more placements that adhere to the placement template defined in the
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/CreateProject">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProjectOutcome CreateProject(const Model::CreateProjectRequest& request) const;


        /**
         * <p>Deletes a placement. To delete a placement, it must not have any devices
         * associated with it.</p>  <p>When you delete a placement, all associated
         * data becomes irretrievable.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/DeletePlacement">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePlacementOutcome DeletePlacement(const Model::DeletePlacementRequest& request) const;


        /**
         * <p>Deletes a project. To delete a project, it must not have any placements
         * associated with it.</p>  <p>When you delete a project, all associated data
         * becomes irretrievable.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/DeleteProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest& request) const;


        /**
         * <p>Describes a placement in a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/DescribePlacement">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePlacementOutcome DescribePlacement(const Model::DescribePlacementRequest& request) const;


        /**
         * <p>Returns an object describing a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/DescribeProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProjectOutcome DescribeProject(const Model::DescribeProjectRequest& request) const;


        /**
         * <p>Removes a physical device from a placement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/DisassociateDeviceFromPlacement">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateDeviceFromPlacementOutcome DisassociateDeviceFromPlacement(const Model::DisassociateDeviceFromPlacementRequest& request) const;


        /**
         * <p>Returns an object enumerating the devices in a placement.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/GetDevicesInPlacement">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDevicesInPlacementOutcome GetDevicesInPlacement(const Model::GetDevicesInPlacementRequest& request) const;


        /**
         * <p>Lists the placement(s) of a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/ListPlacements">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPlacementsOutcome ListPlacements(const Model::ListPlacementsRequest& request) const;


        /**
         * <p>Lists the AWS IoT 1-Click project(s) associated with your AWS account and
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/ListProjects">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProjectsOutcome ListProjects(const Model::ListProjectsRequest& request) const;


        /**
         * <p>Lists the tags (metadata key/value pairs) which you have assigned to the
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


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
         * <p>Removes one or more tags (metadata key/value pairs) from a
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates a placement with the given attributes. To clear an attribute, pass an
         * empty value (i.e., "").</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/UpdatePlacement">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePlacementOutcome UpdatePlacement(const Model::UpdatePlacementRequest& request) const;


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



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<IoT1ClickProjectsEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const IoT1ClickProjectsClientConfiguration& clientConfiguration);

      IoT1ClickProjectsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<IoT1ClickProjectsEndpointProviderBase> m_endpointProvider;
  };

} // namespace IoT1ClickProjects
} // namespace Aws
