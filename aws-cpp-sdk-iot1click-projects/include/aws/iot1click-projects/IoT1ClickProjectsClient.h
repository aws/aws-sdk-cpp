/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/iot1click-projects/IoT1ClickProjects_EXPORTS.h>
#include <aws/iot1click-projects/IoT1ClickProjectsErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iot1click-projects/model/AssociateDeviceWithPlacementResult.h>
#include <aws/iot1click-projects/model/CreatePlacementResult.h>
#include <aws/iot1click-projects/model/CreateProjectResult.h>
#include <aws/iot1click-projects/model/DeletePlacementResult.h>
#include <aws/iot1click-projects/model/DeleteProjectResult.h>
#include <aws/iot1click-projects/model/DescribePlacementResult.h>
#include <aws/iot1click-projects/model/DescribeProjectResult.h>
#include <aws/iot1click-projects/model/DisassociateDeviceFromPlacementResult.h>
#include <aws/iot1click-projects/model/GetDevicesInPlacementResult.h>
#include <aws/iot1click-projects/model/ListPlacementsResult.h>
#include <aws/iot1click-projects/model/ListProjectsResult.h>
#include <aws/iot1click-projects/model/ListTagsForResourceResult.h>
#include <aws/iot1click-projects/model/TagResourceResult.h>
#include <aws/iot1click-projects/model/UntagResourceResult.h>
#include <aws/iot1click-projects/model/UpdatePlacementResult.h>
#include <aws/iot1click-projects/model/UpdateProjectResult.h>
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

namespace IoT1ClickProjects
{

namespace Model
{
        class AssociateDeviceWithPlacementRequest;
        class CreatePlacementRequest;
        class CreateProjectRequest;
        class DeletePlacementRequest;
        class DeleteProjectRequest;
        class DescribePlacementRequest;
        class DescribeProjectRequest;
        class DisassociateDeviceFromPlacementRequest;
        class GetDevicesInPlacementRequest;
        class ListPlacementsRequest;
        class ListProjectsRequest;
        class ListTagsForResourceRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdatePlacementRequest;
        class UpdateProjectRequest;

        typedef Aws::Utils::Outcome<AssociateDeviceWithPlacementResult, Aws::Client::AWSError<IoT1ClickProjectsErrors>> AssociateDeviceWithPlacementOutcome;
        typedef Aws::Utils::Outcome<CreatePlacementResult, Aws::Client::AWSError<IoT1ClickProjectsErrors>> CreatePlacementOutcome;
        typedef Aws::Utils::Outcome<CreateProjectResult, Aws::Client::AWSError<IoT1ClickProjectsErrors>> CreateProjectOutcome;
        typedef Aws::Utils::Outcome<DeletePlacementResult, Aws::Client::AWSError<IoT1ClickProjectsErrors>> DeletePlacementOutcome;
        typedef Aws::Utils::Outcome<DeleteProjectResult, Aws::Client::AWSError<IoT1ClickProjectsErrors>> DeleteProjectOutcome;
        typedef Aws::Utils::Outcome<DescribePlacementResult, Aws::Client::AWSError<IoT1ClickProjectsErrors>> DescribePlacementOutcome;
        typedef Aws::Utils::Outcome<DescribeProjectResult, Aws::Client::AWSError<IoT1ClickProjectsErrors>> DescribeProjectOutcome;
        typedef Aws::Utils::Outcome<DisassociateDeviceFromPlacementResult, Aws::Client::AWSError<IoT1ClickProjectsErrors>> DisassociateDeviceFromPlacementOutcome;
        typedef Aws::Utils::Outcome<GetDevicesInPlacementResult, Aws::Client::AWSError<IoT1ClickProjectsErrors>> GetDevicesInPlacementOutcome;
        typedef Aws::Utils::Outcome<ListPlacementsResult, Aws::Client::AWSError<IoT1ClickProjectsErrors>> ListPlacementsOutcome;
        typedef Aws::Utils::Outcome<ListProjectsResult, Aws::Client::AWSError<IoT1ClickProjectsErrors>> ListProjectsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<IoT1ClickProjectsErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<IoT1ClickProjectsErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<IoT1ClickProjectsErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdatePlacementResult, Aws::Client::AWSError<IoT1ClickProjectsErrors>> UpdatePlacementOutcome;
        typedef Aws::Utils::Outcome<UpdateProjectResult, Aws::Client::AWSError<IoT1ClickProjectsErrors>> UpdateProjectOutcome;

        typedef std::future<AssociateDeviceWithPlacementOutcome> AssociateDeviceWithPlacementOutcomeCallable;
        typedef std::future<CreatePlacementOutcome> CreatePlacementOutcomeCallable;
        typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
        typedef std::future<DeletePlacementOutcome> DeletePlacementOutcomeCallable;
        typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
        typedef std::future<DescribePlacementOutcome> DescribePlacementOutcomeCallable;
        typedef std::future<DescribeProjectOutcome> DescribeProjectOutcomeCallable;
        typedef std::future<DisassociateDeviceFromPlacementOutcome> DisassociateDeviceFromPlacementOutcomeCallable;
        typedef std::future<GetDevicesInPlacementOutcome> GetDevicesInPlacementOutcomeCallable;
        typedef std::future<ListPlacementsOutcome> ListPlacementsOutcomeCallable;
        typedef std::future<ListProjectsOutcome> ListProjectsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdatePlacementOutcome> UpdatePlacementOutcomeCallable;
        typedef std::future<UpdateProjectOutcome> UpdateProjectOutcomeCallable;
} // namespace Model

  class IoT1ClickProjectsClient;

    typedef std::function<void(const IoT1ClickProjectsClient*, const Model::AssociateDeviceWithPlacementRequest&, const Model::AssociateDeviceWithPlacementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateDeviceWithPlacementResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickProjectsClient*, const Model::CreatePlacementRequest&, const Model::CreatePlacementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePlacementResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickProjectsClient*, const Model::CreateProjectRequest&, const Model::CreateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProjectResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickProjectsClient*, const Model::DeletePlacementRequest&, const Model::DeletePlacementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePlacementResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickProjectsClient*, const Model::DeleteProjectRequest&, const Model::DeleteProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProjectResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickProjectsClient*, const Model::DescribePlacementRequest&, const Model::DescribePlacementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePlacementResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickProjectsClient*, const Model::DescribeProjectRequest&, const Model::DescribeProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProjectResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickProjectsClient*, const Model::DisassociateDeviceFromPlacementRequest&, const Model::DisassociateDeviceFromPlacementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateDeviceFromPlacementResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickProjectsClient*, const Model::GetDevicesInPlacementRequest&, const Model::GetDevicesInPlacementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDevicesInPlacementResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickProjectsClient*, const Model::ListPlacementsRequest&, const Model::ListPlacementsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPlacementsResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickProjectsClient*, const Model::ListProjectsRequest&, const Model::ListProjectsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProjectsResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickProjectsClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickProjectsClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickProjectsClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickProjectsClient*, const Model::UpdatePlacementRequest&, const Model::UpdatePlacementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePlacementResponseReceivedHandler;
    typedef std::function<void(const IoT1ClickProjectsClient*, const Model::UpdateProjectRequest&, const Model::UpdateProjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProjectResponseReceivedHandler;

  /**
   * <p>The AWS IoT 1-Click Projects API Reference</p>
   */
  class AWS_IOT1CLICKPROJECTS_API IoT1ClickProjectsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoT1ClickProjectsClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoT1ClickProjectsClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoT1ClickProjectsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~IoT1ClickProjectsClient();

        inline virtual const char* GetServiceClientName() const override { return "IoT 1Click Projects"; }


        /**
         * <p>Associates a physical device with a placement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/AssociateDeviceWithPlacement">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateDeviceWithPlacementOutcome AssociateDeviceWithPlacement(const Model::AssociateDeviceWithPlacementRequest& request) const;

        /**
         * <p>Associates a physical device with a placement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/AssociateDeviceWithPlacement">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateDeviceWithPlacementOutcomeCallable AssociateDeviceWithPlacementCallable(const Model::AssociateDeviceWithPlacementRequest& request) const;

        /**
         * <p>Associates a physical device with a placement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/AssociateDeviceWithPlacement">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateDeviceWithPlacementAsync(const Model::AssociateDeviceWithPlacementRequest& request, const AssociateDeviceWithPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an empty placement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/CreatePlacement">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePlacementOutcome CreatePlacement(const Model::CreatePlacementRequest& request) const;

        /**
         * <p>Creates an empty placement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/CreatePlacement">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePlacementOutcomeCallable CreatePlacementCallable(const Model::CreatePlacementRequest& request) const;

        /**
         * <p>Creates an empty placement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/CreatePlacement">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates an empty project with a placement template. A project contains zero
         * or more placements that adhere to the placement template defined in the
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/CreateProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProjectOutcomeCallable CreateProjectCallable(const Model::CreateProjectRequest& request) const;

        /**
         * <p>Creates an empty project with a placement template. A project contains zero
         * or more placements that adhere to the placement template defined in the
         * project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/CreateProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a placement. To delete a placement, it must not have any devices
         * associated with it.</p> <note> <p>When you delete a placement, all associated
         * data becomes irretrievable.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/DeletePlacement">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePlacementOutcome DeletePlacement(const Model::DeletePlacementRequest& request) const;

        /**
         * <p>Deletes a placement. To delete a placement, it must not have any devices
         * associated with it.</p> <note> <p>When you delete a placement, all associated
         * data becomes irretrievable.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/DeletePlacement">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePlacementOutcomeCallable DeletePlacementCallable(const Model::DeletePlacementRequest& request) const;

        /**
         * <p>Deletes a placement. To delete a placement, it must not have any devices
         * associated with it.</p> <note> <p>When you delete a placement, all associated
         * data becomes irretrievable.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/DeletePlacement">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePlacementAsync(const Model::DeletePlacementRequest& request, const DeletePlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a project. To delete a project, it must not have any placements
         * associated with it.</p> <note> <p>When you delete a project, all associated data
         * becomes irretrievable.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/DeleteProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest& request) const;

        /**
         * <p>Deletes a project. To delete a project, it must not have any placements
         * associated with it.</p> <note> <p>When you delete a project, all associated data
         * becomes irretrievable.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/DeleteProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProjectOutcomeCallable DeleteProjectCallable(const Model::DeleteProjectRequest& request) const;

        /**
         * <p>Deletes a project. To delete a project, it must not have any placements
         * associated with it.</p> <note> <p>When you delete a project, all associated data
         * becomes irretrievable.</p> </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/DeleteProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a placement in a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/DescribePlacement">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePlacementOutcome DescribePlacement(const Model::DescribePlacementRequest& request) const;

        /**
         * <p>Describes a placement in a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/DescribePlacement">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePlacementOutcomeCallable DescribePlacementCallable(const Model::DescribePlacementRequest& request) const;

        /**
         * <p>Describes a placement in a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/DescribePlacement">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePlacementAsync(const Model::DescribePlacementRequest& request, const DescribePlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns an object describing a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/DescribeProject">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProjectOutcome DescribeProject(const Model::DescribeProjectRequest& request) const;

        /**
         * <p>Returns an object describing a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/DescribeProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProjectOutcomeCallable DescribeProjectCallable(const Model::DescribeProjectRequest& request) const;

        /**
         * <p>Returns an object describing a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/DescribeProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProjectAsync(const Model::DescribeProjectRequest& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a physical device from a placement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/DisassociateDeviceFromPlacement">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateDeviceFromPlacementOutcome DisassociateDeviceFromPlacement(const Model::DisassociateDeviceFromPlacementRequest& request) const;

        /**
         * <p>Removes a physical device from a placement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/DisassociateDeviceFromPlacement">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateDeviceFromPlacementOutcomeCallable DisassociateDeviceFromPlacementCallable(const Model::DisassociateDeviceFromPlacementRequest& request) const;

        /**
         * <p>Removes a physical device from a placement.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/DisassociateDeviceFromPlacement">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns an object enumerating the devices in a placement.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/GetDevicesInPlacement">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDevicesInPlacementOutcomeCallable GetDevicesInPlacementCallable(const Model::GetDevicesInPlacementRequest& request) const;

        /**
         * <p>Returns an object enumerating the devices in a placement.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/GetDevicesInPlacement">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDevicesInPlacementAsync(const Model::GetDevicesInPlacementRequest& request, const GetDevicesInPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the placement(s) of a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/ListPlacements">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPlacementsOutcome ListPlacements(const Model::ListPlacementsRequest& request) const;

        /**
         * <p>Lists the placement(s) of a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/ListPlacements">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPlacementsOutcomeCallable ListPlacementsCallable(const Model::ListPlacementsRequest& request) const;

        /**
         * <p>Lists the placement(s) of a project.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/ListPlacements">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists the AWS IoT 1-Click project(s) associated with your AWS account and
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/ListProjects">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProjectsOutcomeCallable ListProjectsCallable(const Model::ListProjectsRequest& request) const;

        /**
         * <p>Lists the AWS IoT 1-Click project(s) associated with your AWS account and
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/ListProjects">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Lists the tags (metadata key/value pairs) which you have assigned to the
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists the tags (metadata key/value pairs) which you have assigned to the
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates or modifies tags for a resource. Tags are key/value pairs (metadata)
         * that can be used to manage a resource. For more information, see <a
         * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
         * Tagging Strategies</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Creates or modifies tags for a resource. Tags are key/value pairs (metadata)
         * that can be used to manage a resource. For more information, see <a
         * href="https://aws.amazon.com/answers/account-management/aws-tagging-strategies/">AWS
         * Tagging Strategies</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Removes one or more tags (metadata key/value pairs) from a
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes one or more tags (metadata key/value pairs) from a
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Updates a placement with the given attributes. To clear an attribute, pass an
         * empty value (i.e., "").</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/UpdatePlacement">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdatePlacementOutcomeCallable UpdatePlacementCallable(const Model::UpdatePlacementRequest& request) const;

        /**
         * <p>Updates a placement with the given attributes. To clear an attribute, pass an
         * empty value (i.e., "").</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/UpdatePlacement">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Updates a project associated with your AWS account and region. With the
         * exception of device template names, you can pass just the values that need to be
         * updated because the update request will change only the values that are
         * provided. To clear a value, pass the empty string (i.e.,
         * <code>""</code>).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/UpdateProject">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProjectOutcomeCallable UpdateProjectCallable(const Model::UpdateProjectRequest& request) const;

        /**
         * <p>Updates a project associated with your AWS account and region. With the
         * exception of device template names, you can pass just the values that need to be
         * updated because the update request will change only the values that are
         * provided. To clear a value, pass the empty string (i.e.,
         * <code>""</code>).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/UpdateProject">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProjectAsync(const Model::UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateDeviceWithPlacementAsyncHelper(const Model::AssociateDeviceWithPlacementRequest& request, const AssociateDeviceWithPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreatePlacementAsyncHelper(const Model::CreatePlacementRequest& request, const CreatePlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateProjectAsyncHelper(const Model::CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePlacementAsyncHelper(const Model::DeletePlacementRequest& request, const DeletePlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteProjectAsyncHelper(const Model::DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePlacementAsyncHelper(const Model::DescribePlacementRequest& request, const DescribePlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeProjectAsyncHelper(const Model::DescribeProjectRequest& request, const DescribeProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateDeviceFromPlacementAsyncHelper(const Model::DisassociateDeviceFromPlacementRequest& request, const DisassociateDeviceFromPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDevicesInPlacementAsyncHelper(const Model::GetDevicesInPlacementRequest& request, const GetDevicesInPlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPlacementsAsyncHelper(const Model::ListPlacementsRequest& request, const ListPlacementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListProjectsAsyncHelper(const Model::ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdatePlacementAsyncHelper(const Model::UpdatePlacementRequest& request, const UpdatePlacementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateProjectAsyncHelper(const Model::UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace IoT1ClickProjects
} // namespace Aws
