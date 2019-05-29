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
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/iotthingsgraph/IoTThingsGraphErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotthingsgraph/model/AssociateEntityToThingResult.h>
#include <aws/iotthingsgraph/model/CreateFlowTemplateResult.h>
#include <aws/iotthingsgraph/model/CreateSystemInstanceResult.h>
#include <aws/iotthingsgraph/model/CreateSystemTemplateResult.h>
#include <aws/iotthingsgraph/model/DeleteFlowTemplateResult.h>
#include <aws/iotthingsgraph/model/DeleteNamespaceResult.h>
#include <aws/iotthingsgraph/model/DeleteSystemInstanceResult.h>
#include <aws/iotthingsgraph/model/DeleteSystemTemplateResult.h>
#include <aws/iotthingsgraph/model/DeploySystemInstanceResult.h>
#include <aws/iotthingsgraph/model/DeprecateFlowTemplateResult.h>
#include <aws/iotthingsgraph/model/DeprecateSystemTemplateResult.h>
#include <aws/iotthingsgraph/model/DescribeNamespaceResult.h>
#include <aws/iotthingsgraph/model/DissociateEntityFromThingResult.h>
#include <aws/iotthingsgraph/model/GetEntitiesResult.h>
#include <aws/iotthingsgraph/model/GetFlowTemplateResult.h>
#include <aws/iotthingsgraph/model/GetFlowTemplateRevisionsResult.h>
#include <aws/iotthingsgraph/model/GetNamespaceDeletionStatusResult.h>
#include <aws/iotthingsgraph/model/GetSystemInstanceResult.h>
#include <aws/iotthingsgraph/model/GetSystemTemplateResult.h>
#include <aws/iotthingsgraph/model/GetSystemTemplateRevisionsResult.h>
#include <aws/iotthingsgraph/model/GetUploadStatusResult.h>
#include <aws/iotthingsgraph/model/ListFlowExecutionMessagesResult.h>
#include <aws/iotthingsgraph/model/ListTagsForResourceResult.h>
#include <aws/iotthingsgraph/model/SearchEntitiesResult.h>
#include <aws/iotthingsgraph/model/SearchFlowExecutionsResult.h>
#include <aws/iotthingsgraph/model/SearchFlowTemplatesResult.h>
#include <aws/iotthingsgraph/model/SearchSystemInstancesResult.h>
#include <aws/iotthingsgraph/model/SearchSystemTemplatesResult.h>
#include <aws/iotthingsgraph/model/SearchThingsResult.h>
#include <aws/iotthingsgraph/model/TagResourceResult.h>
#include <aws/iotthingsgraph/model/UndeploySystemInstanceResult.h>
#include <aws/iotthingsgraph/model/UntagResourceResult.h>
#include <aws/iotthingsgraph/model/UpdateFlowTemplateResult.h>
#include <aws/iotthingsgraph/model/UpdateSystemTemplateResult.h>
#include <aws/iotthingsgraph/model/UploadEntityDefinitionsResult.h>
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

namespace IoTThingsGraph
{

namespace Model
{
        class AssociateEntityToThingRequest;
        class CreateFlowTemplateRequest;
        class CreateSystemInstanceRequest;
        class CreateSystemTemplateRequest;
        class DeleteFlowTemplateRequest;
        class DeleteNamespaceRequest;
        class DeleteSystemInstanceRequest;
        class DeleteSystemTemplateRequest;
        class DeploySystemInstanceRequest;
        class DeprecateFlowTemplateRequest;
        class DeprecateSystemTemplateRequest;
        class DescribeNamespaceRequest;
        class DissociateEntityFromThingRequest;
        class GetEntitiesRequest;
        class GetFlowTemplateRequest;
        class GetFlowTemplateRevisionsRequest;
        class GetNamespaceDeletionStatusRequest;
        class GetSystemInstanceRequest;
        class GetSystemTemplateRequest;
        class GetSystemTemplateRevisionsRequest;
        class GetUploadStatusRequest;
        class ListFlowExecutionMessagesRequest;
        class ListTagsForResourceRequest;
        class SearchEntitiesRequest;
        class SearchFlowExecutionsRequest;
        class SearchFlowTemplatesRequest;
        class SearchSystemInstancesRequest;
        class SearchSystemTemplatesRequest;
        class SearchThingsRequest;
        class TagResourceRequest;
        class UndeploySystemInstanceRequest;
        class UntagResourceRequest;
        class UpdateFlowTemplateRequest;
        class UpdateSystemTemplateRequest;
        class UploadEntityDefinitionsRequest;

        typedef Aws::Utils::Outcome<AssociateEntityToThingResult, Aws::Client::AWSError<IoTThingsGraphErrors>> AssociateEntityToThingOutcome;
        typedef Aws::Utils::Outcome<CreateFlowTemplateResult, Aws::Client::AWSError<IoTThingsGraphErrors>> CreateFlowTemplateOutcome;
        typedef Aws::Utils::Outcome<CreateSystemInstanceResult, Aws::Client::AWSError<IoTThingsGraphErrors>> CreateSystemInstanceOutcome;
        typedef Aws::Utils::Outcome<CreateSystemTemplateResult, Aws::Client::AWSError<IoTThingsGraphErrors>> CreateSystemTemplateOutcome;
        typedef Aws::Utils::Outcome<DeleteFlowTemplateResult, Aws::Client::AWSError<IoTThingsGraphErrors>> DeleteFlowTemplateOutcome;
        typedef Aws::Utils::Outcome<DeleteNamespaceResult, Aws::Client::AWSError<IoTThingsGraphErrors>> DeleteNamespaceOutcome;
        typedef Aws::Utils::Outcome<DeleteSystemInstanceResult, Aws::Client::AWSError<IoTThingsGraphErrors>> DeleteSystemInstanceOutcome;
        typedef Aws::Utils::Outcome<DeleteSystemTemplateResult, Aws::Client::AWSError<IoTThingsGraphErrors>> DeleteSystemTemplateOutcome;
        typedef Aws::Utils::Outcome<DeploySystemInstanceResult, Aws::Client::AWSError<IoTThingsGraphErrors>> DeploySystemInstanceOutcome;
        typedef Aws::Utils::Outcome<DeprecateFlowTemplateResult, Aws::Client::AWSError<IoTThingsGraphErrors>> DeprecateFlowTemplateOutcome;
        typedef Aws::Utils::Outcome<DeprecateSystemTemplateResult, Aws::Client::AWSError<IoTThingsGraphErrors>> DeprecateSystemTemplateOutcome;
        typedef Aws::Utils::Outcome<DescribeNamespaceResult, Aws::Client::AWSError<IoTThingsGraphErrors>> DescribeNamespaceOutcome;
        typedef Aws::Utils::Outcome<DissociateEntityFromThingResult, Aws::Client::AWSError<IoTThingsGraphErrors>> DissociateEntityFromThingOutcome;
        typedef Aws::Utils::Outcome<GetEntitiesResult, Aws::Client::AWSError<IoTThingsGraphErrors>> GetEntitiesOutcome;
        typedef Aws::Utils::Outcome<GetFlowTemplateResult, Aws::Client::AWSError<IoTThingsGraphErrors>> GetFlowTemplateOutcome;
        typedef Aws::Utils::Outcome<GetFlowTemplateRevisionsResult, Aws::Client::AWSError<IoTThingsGraphErrors>> GetFlowTemplateRevisionsOutcome;
        typedef Aws::Utils::Outcome<GetNamespaceDeletionStatusResult, Aws::Client::AWSError<IoTThingsGraphErrors>> GetNamespaceDeletionStatusOutcome;
        typedef Aws::Utils::Outcome<GetSystemInstanceResult, Aws::Client::AWSError<IoTThingsGraphErrors>> GetSystemInstanceOutcome;
        typedef Aws::Utils::Outcome<GetSystemTemplateResult, Aws::Client::AWSError<IoTThingsGraphErrors>> GetSystemTemplateOutcome;
        typedef Aws::Utils::Outcome<GetSystemTemplateRevisionsResult, Aws::Client::AWSError<IoTThingsGraphErrors>> GetSystemTemplateRevisionsOutcome;
        typedef Aws::Utils::Outcome<GetUploadStatusResult, Aws::Client::AWSError<IoTThingsGraphErrors>> GetUploadStatusOutcome;
        typedef Aws::Utils::Outcome<ListFlowExecutionMessagesResult, Aws::Client::AWSError<IoTThingsGraphErrors>> ListFlowExecutionMessagesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<IoTThingsGraphErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<SearchEntitiesResult, Aws::Client::AWSError<IoTThingsGraphErrors>> SearchEntitiesOutcome;
        typedef Aws::Utils::Outcome<SearchFlowExecutionsResult, Aws::Client::AWSError<IoTThingsGraphErrors>> SearchFlowExecutionsOutcome;
        typedef Aws::Utils::Outcome<SearchFlowTemplatesResult, Aws::Client::AWSError<IoTThingsGraphErrors>> SearchFlowTemplatesOutcome;
        typedef Aws::Utils::Outcome<SearchSystemInstancesResult, Aws::Client::AWSError<IoTThingsGraphErrors>> SearchSystemInstancesOutcome;
        typedef Aws::Utils::Outcome<SearchSystemTemplatesResult, Aws::Client::AWSError<IoTThingsGraphErrors>> SearchSystemTemplatesOutcome;
        typedef Aws::Utils::Outcome<SearchThingsResult, Aws::Client::AWSError<IoTThingsGraphErrors>> SearchThingsOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<IoTThingsGraphErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UndeploySystemInstanceResult, Aws::Client::AWSError<IoTThingsGraphErrors>> UndeploySystemInstanceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<IoTThingsGraphErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateFlowTemplateResult, Aws::Client::AWSError<IoTThingsGraphErrors>> UpdateFlowTemplateOutcome;
        typedef Aws::Utils::Outcome<UpdateSystemTemplateResult, Aws::Client::AWSError<IoTThingsGraphErrors>> UpdateSystemTemplateOutcome;
        typedef Aws::Utils::Outcome<UploadEntityDefinitionsResult, Aws::Client::AWSError<IoTThingsGraphErrors>> UploadEntityDefinitionsOutcome;

        typedef std::future<AssociateEntityToThingOutcome> AssociateEntityToThingOutcomeCallable;
        typedef std::future<CreateFlowTemplateOutcome> CreateFlowTemplateOutcomeCallable;
        typedef std::future<CreateSystemInstanceOutcome> CreateSystemInstanceOutcomeCallable;
        typedef std::future<CreateSystemTemplateOutcome> CreateSystemTemplateOutcomeCallable;
        typedef std::future<DeleteFlowTemplateOutcome> DeleteFlowTemplateOutcomeCallable;
        typedef std::future<DeleteNamespaceOutcome> DeleteNamespaceOutcomeCallable;
        typedef std::future<DeleteSystemInstanceOutcome> DeleteSystemInstanceOutcomeCallable;
        typedef std::future<DeleteSystemTemplateOutcome> DeleteSystemTemplateOutcomeCallable;
        typedef std::future<DeploySystemInstanceOutcome> DeploySystemInstanceOutcomeCallable;
        typedef std::future<DeprecateFlowTemplateOutcome> DeprecateFlowTemplateOutcomeCallable;
        typedef std::future<DeprecateSystemTemplateOutcome> DeprecateSystemTemplateOutcomeCallable;
        typedef std::future<DescribeNamespaceOutcome> DescribeNamespaceOutcomeCallable;
        typedef std::future<DissociateEntityFromThingOutcome> DissociateEntityFromThingOutcomeCallable;
        typedef std::future<GetEntitiesOutcome> GetEntitiesOutcomeCallable;
        typedef std::future<GetFlowTemplateOutcome> GetFlowTemplateOutcomeCallable;
        typedef std::future<GetFlowTemplateRevisionsOutcome> GetFlowTemplateRevisionsOutcomeCallable;
        typedef std::future<GetNamespaceDeletionStatusOutcome> GetNamespaceDeletionStatusOutcomeCallable;
        typedef std::future<GetSystemInstanceOutcome> GetSystemInstanceOutcomeCallable;
        typedef std::future<GetSystemTemplateOutcome> GetSystemTemplateOutcomeCallable;
        typedef std::future<GetSystemTemplateRevisionsOutcome> GetSystemTemplateRevisionsOutcomeCallable;
        typedef std::future<GetUploadStatusOutcome> GetUploadStatusOutcomeCallable;
        typedef std::future<ListFlowExecutionMessagesOutcome> ListFlowExecutionMessagesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<SearchEntitiesOutcome> SearchEntitiesOutcomeCallable;
        typedef std::future<SearchFlowExecutionsOutcome> SearchFlowExecutionsOutcomeCallable;
        typedef std::future<SearchFlowTemplatesOutcome> SearchFlowTemplatesOutcomeCallable;
        typedef std::future<SearchSystemInstancesOutcome> SearchSystemInstancesOutcomeCallable;
        typedef std::future<SearchSystemTemplatesOutcome> SearchSystemTemplatesOutcomeCallable;
        typedef std::future<SearchThingsOutcome> SearchThingsOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UndeploySystemInstanceOutcome> UndeploySystemInstanceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateFlowTemplateOutcome> UpdateFlowTemplateOutcomeCallable;
        typedef std::future<UpdateSystemTemplateOutcome> UpdateSystemTemplateOutcomeCallable;
        typedef std::future<UploadEntityDefinitionsOutcome> UploadEntityDefinitionsOutcomeCallable;
} // namespace Model

  class IoTThingsGraphClient;

    typedef std::function<void(const IoTThingsGraphClient*, const Model::AssociateEntityToThingRequest&, const Model::AssociateEntityToThingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateEntityToThingResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::CreateFlowTemplateRequest&, const Model::CreateFlowTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFlowTemplateResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::CreateSystemInstanceRequest&, const Model::CreateSystemInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSystemInstanceResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::CreateSystemTemplateRequest&, const Model::CreateSystemTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSystemTemplateResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::DeleteFlowTemplateRequest&, const Model::DeleteFlowTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFlowTemplateResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::DeleteNamespaceRequest&, const Model::DeleteNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNamespaceResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::DeleteSystemInstanceRequest&, const Model::DeleteSystemInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSystemInstanceResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::DeleteSystemTemplateRequest&, const Model::DeleteSystemTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSystemTemplateResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::DeploySystemInstanceRequest&, const Model::DeploySystemInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeploySystemInstanceResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::DeprecateFlowTemplateRequest&, const Model::DeprecateFlowTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeprecateFlowTemplateResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::DeprecateSystemTemplateRequest&, const Model::DeprecateSystemTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeprecateSystemTemplateResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::DescribeNamespaceRequest&, const Model::DescribeNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNamespaceResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::DissociateEntityFromThingRequest&, const Model::DissociateEntityFromThingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DissociateEntityFromThingResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::GetEntitiesRequest&, const Model::GetEntitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEntitiesResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::GetFlowTemplateRequest&, const Model::GetFlowTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFlowTemplateResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::GetFlowTemplateRevisionsRequest&, const Model::GetFlowTemplateRevisionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFlowTemplateRevisionsResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::GetNamespaceDeletionStatusRequest&, const Model::GetNamespaceDeletionStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNamespaceDeletionStatusResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::GetSystemInstanceRequest&, const Model::GetSystemInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSystemInstanceResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::GetSystemTemplateRequest&, const Model::GetSystemTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSystemTemplateResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::GetSystemTemplateRevisionsRequest&, const Model::GetSystemTemplateRevisionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSystemTemplateRevisionsResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::GetUploadStatusRequest&, const Model::GetUploadStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUploadStatusResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::ListFlowExecutionMessagesRequest&, const Model::ListFlowExecutionMessagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFlowExecutionMessagesResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::SearchEntitiesRequest&, const Model::SearchEntitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchEntitiesResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::SearchFlowExecutionsRequest&, const Model::SearchFlowExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchFlowExecutionsResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::SearchFlowTemplatesRequest&, const Model::SearchFlowTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchFlowTemplatesResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::SearchSystemInstancesRequest&, const Model::SearchSystemInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchSystemInstancesResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::SearchSystemTemplatesRequest&, const Model::SearchSystemTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchSystemTemplatesResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::SearchThingsRequest&, const Model::SearchThingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchThingsResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::UndeploySystemInstanceRequest&, const Model::UndeploySystemInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UndeploySystemInstanceResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::UpdateFlowTemplateRequest&, const Model::UpdateFlowTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFlowTemplateResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::UpdateSystemTemplateRequest&, const Model::UpdateSystemTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSystemTemplateResponseReceivedHandler;
    typedef std::function<void(const IoTThingsGraphClient*, const Model::UploadEntityDefinitionsRequest&, const Model::UploadEntityDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UploadEntityDefinitionsResponseReceivedHandler;

  /**
   * <fullname>AWS IoT Things Graph</fullname> <p>AWS IoT Things Graph provides an
   * integrated set of tools that enable developers to connect devices and services
   * that use different standards, such as units of measure and communication
   * protocols. AWS IoT Things Graph makes it possible to build IoT applications with
   * little to no code by connecting devices and services and defining how they
   * interact at an abstract level.</p> <p>For more information about how AWS IoT
   * Things Graph works, see the <a
   * href="https://docs.aws.amazon.com/thingsgraph/latest/ug/iot-tg-whatis.html">User
   * Guide</a>.</p>
   */
  class AWS_IOTTHINGSGRAPH_API IoTThingsGraphClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTThingsGraphClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTThingsGraphClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTThingsGraphClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~IoTThingsGraphClient();

        inline virtual const char* GetServiceClientName() const override { return "IoTThingsGraph"; }


        /**
         * <p>Associates a device with a concrete thing that is in the user's registry.</p>
         * <p>A thing can be associated with only one device at a time. If you associate a
         * thing with a new device id, its previous association will be
         * removed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/AssociateEntityToThing">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateEntityToThingOutcome AssociateEntityToThing(const Model::AssociateEntityToThingRequest& request) const;

        /**
         * <p>Associates a device with a concrete thing that is in the user's registry.</p>
         * <p>A thing can be associated with only one device at a time. If you associate a
         * thing with a new device id, its previous association will be
         * removed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/AssociateEntityToThing">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateEntityToThingOutcomeCallable AssociateEntityToThingCallable(const Model::AssociateEntityToThingRequest& request) const;

        /**
         * <p>Associates a device with a concrete thing that is in the user's registry.</p>
         * <p>A thing can be associated with only one device at a time. If you associate a
         * thing with a new device id, its previous association will be
         * removed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/AssociateEntityToThing">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateEntityToThingAsync(const Model::AssociateEntityToThingRequest& request, const AssociateEntityToThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a workflow template. Workflows can be created only in the user's
         * namespace. (The public namespace contains only entities.) The workflow can
         * contain only entities in the specified namespace. The workflow is validated
         * against the entities in the latest version of the user's namespace unless
         * another namespace version is specified in the request.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/CreateFlowTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFlowTemplateOutcome CreateFlowTemplate(const Model::CreateFlowTemplateRequest& request) const;

        /**
         * <p>Creates a workflow template. Workflows can be created only in the user's
         * namespace. (The public namespace contains only entities.) The workflow can
         * contain only entities in the specified namespace. The workflow is validated
         * against the entities in the latest version of the user's namespace unless
         * another namespace version is specified in the request.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/CreateFlowTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFlowTemplateOutcomeCallable CreateFlowTemplateCallable(const Model::CreateFlowTemplateRequest& request) const;

        /**
         * <p>Creates a workflow template. Workflows can be created only in the user's
         * namespace. (The public namespace contains only entities.) The workflow can
         * contain only entities in the specified namespace. The workflow is validated
         * against the entities in the latest version of the user's namespace unless
         * another namespace version is specified in the request.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/CreateFlowTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFlowTemplateAsync(const Model::CreateFlowTemplateRequest& request, const CreateFlowTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a system instance. </p> <p>This action validates the system instance,
         * prepares the deployment-related resources. For Greengrass deployments, it
         * updates the Greengrass group that is specified by the
         * <code>greengrassGroupName</code> parameter. It also adds a file to the S3 bucket
         * specified by the <code>s3BucketName</code> parameter. You need to call
         * <code>DeploySystemInstance</code> after running this action.</p> <p>For
         * Greengrass deployments, since this action modifies and adds resources to a
         * Greengrass group and an S3 bucket on the caller's behalf, the calling identity
         * must have write permissions to both the specified Greengrass group and S3
         * bucket. Otherwise, the call will fail with an authorization error.</p> <p>For
         * cloud deployments, this action requires a <code>flowActionsRoleArn</code> value.
         * This is an IAM role that has permissions to access AWS services, such as AWS
         * Lambda and AWS IoT, that the flow uses when it executes.</p> <p>If the
         * definition document doesn't specify a version of the user's namespace, the
         * latest version will be used by default.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/CreateSystemInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSystemInstanceOutcome CreateSystemInstance(const Model::CreateSystemInstanceRequest& request) const;

        /**
         * <p>Creates a system instance. </p> <p>This action validates the system instance,
         * prepares the deployment-related resources. For Greengrass deployments, it
         * updates the Greengrass group that is specified by the
         * <code>greengrassGroupName</code> parameter. It also adds a file to the S3 bucket
         * specified by the <code>s3BucketName</code> parameter. You need to call
         * <code>DeploySystemInstance</code> after running this action.</p> <p>For
         * Greengrass deployments, since this action modifies and adds resources to a
         * Greengrass group and an S3 bucket on the caller's behalf, the calling identity
         * must have write permissions to both the specified Greengrass group and S3
         * bucket. Otherwise, the call will fail with an authorization error.</p> <p>For
         * cloud deployments, this action requires a <code>flowActionsRoleArn</code> value.
         * This is an IAM role that has permissions to access AWS services, such as AWS
         * Lambda and AWS IoT, that the flow uses when it executes.</p> <p>If the
         * definition document doesn't specify a version of the user's namespace, the
         * latest version will be used by default.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/CreateSystemInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSystemInstanceOutcomeCallable CreateSystemInstanceCallable(const Model::CreateSystemInstanceRequest& request) const;

        /**
         * <p>Creates a system instance. </p> <p>This action validates the system instance,
         * prepares the deployment-related resources. For Greengrass deployments, it
         * updates the Greengrass group that is specified by the
         * <code>greengrassGroupName</code> parameter. It also adds a file to the S3 bucket
         * specified by the <code>s3BucketName</code> parameter. You need to call
         * <code>DeploySystemInstance</code> after running this action.</p> <p>For
         * Greengrass deployments, since this action modifies and adds resources to a
         * Greengrass group and an S3 bucket on the caller's behalf, the calling identity
         * must have write permissions to both the specified Greengrass group and S3
         * bucket. Otherwise, the call will fail with an authorization error.</p> <p>For
         * cloud deployments, this action requires a <code>flowActionsRoleArn</code> value.
         * This is an IAM role that has permissions to access AWS services, such as AWS
         * Lambda and AWS IoT, that the flow uses when it executes.</p> <p>If the
         * definition document doesn't specify a version of the user's namespace, the
         * latest version will be used by default.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/CreateSystemInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSystemInstanceAsync(const Model::CreateSystemInstanceRequest& request, const CreateSystemInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a system. The system is validated against the entities in the latest
         * version of the user's namespace unless another namespace version is specified in
         * the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/CreateSystemTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSystemTemplateOutcome CreateSystemTemplate(const Model::CreateSystemTemplateRequest& request) const;

        /**
         * <p>Creates a system. The system is validated against the entities in the latest
         * version of the user's namespace unless another namespace version is specified in
         * the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/CreateSystemTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSystemTemplateOutcomeCallable CreateSystemTemplateCallable(const Model::CreateSystemTemplateRequest& request) const;

        /**
         * <p>Creates a system. The system is validated against the entities in the latest
         * version of the user's namespace unless another namespace version is specified in
         * the request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/CreateSystemTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSystemTemplateAsync(const Model::CreateSystemTemplateRequest& request, const CreateSystemTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a workflow. Any new system or deployment that contains this workflow
         * will fail to update or deploy. Existing deployments that contain the workflow
         * will continue to run (since they use a snapshot of the workflow taken at the
         * time of deployment).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/DeleteFlowTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFlowTemplateOutcome DeleteFlowTemplate(const Model::DeleteFlowTemplateRequest& request) const;

        /**
         * <p>Deletes a workflow. Any new system or deployment that contains this workflow
         * will fail to update or deploy. Existing deployments that contain the workflow
         * will continue to run (since they use a snapshot of the workflow taken at the
         * time of deployment).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/DeleteFlowTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFlowTemplateOutcomeCallable DeleteFlowTemplateCallable(const Model::DeleteFlowTemplateRequest& request) const;

        /**
         * <p>Deletes a workflow. Any new system or deployment that contains this workflow
         * will fail to update or deploy. Existing deployments that contain the workflow
         * will continue to run (since they use a snapshot of the workflow taken at the
         * time of deployment).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/DeleteFlowTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFlowTemplateAsync(const Model::DeleteFlowTemplateRequest& request, const DeleteFlowTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified namespace. This action deletes all of the entities in
         * the namespace. Delete the systems and flows that use entities in the namespace
         * before performing this action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/DeleteNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNamespaceOutcome DeleteNamespace(const Model::DeleteNamespaceRequest& request) const;

        /**
         * <p>Deletes the specified namespace. This action deletes all of the entities in
         * the namespace. Delete the systems and flows that use entities in the namespace
         * before performing this action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/DeleteNamespace">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteNamespaceOutcomeCallable DeleteNamespaceCallable(const Model::DeleteNamespaceRequest& request) const;

        /**
         * <p>Deletes the specified namespace. This action deletes all of the entities in
         * the namespace. Delete the systems and flows that use entities in the namespace
         * before performing this action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/DeleteNamespace">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteNamespaceAsync(const Model::DeleteNamespaceRequest& request, const DeleteNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a system instance. Only system instances that have never been
         * deployed, or that have been undeployed can be deleted.</p> <p>Users can create a
         * new system instance that has the same ID as a deleted system
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/DeleteSystemInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSystemInstanceOutcome DeleteSystemInstance(const Model::DeleteSystemInstanceRequest& request) const;

        /**
         * <p>Deletes a system instance. Only system instances that have never been
         * deployed, or that have been undeployed can be deleted.</p> <p>Users can create a
         * new system instance that has the same ID as a deleted system
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/DeleteSystemInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSystemInstanceOutcomeCallable DeleteSystemInstanceCallable(const Model::DeleteSystemInstanceRequest& request) const;

        /**
         * <p>Deletes a system instance. Only system instances that have never been
         * deployed, or that have been undeployed can be deleted.</p> <p>Users can create a
         * new system instance that has the same ID as a deleted system
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/DeleteSystemInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSystemInstanceAsync(const Model::DeleteSystemInstanceRequest& request, const DeleteSystemInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a system. New deployments can't contain the system after its
         * deletion. Existing deployments that contain the system will continue to work
         * because they use a snapshot of the system that is taken when it is
         * deployed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/DeleteSystemTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSystemTemplateOutcome DeleteSystemTemplate(const Model::DeleteSystemTemplateRequest& request) const;

        /**
         * <p>Deletes a system. New deployments can't contain the system after its
         * deletion. Existing deployments that contain the system will continue to work
         * because they use a snapshot of the system that is taken when it is
         * deployed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/DeleteSystemTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSystemTemplateOutcomeCallable DeleteSystemTemplateCallable(const Model::DeleteSystemTemplateRequest& request) const;

        /**
         * <p>Deletes a system. New deployments can't contain the system after its
         * deletion. Existing deployments that contain the system will continue to work
         * because they use a snapshot of the system that is taken when it is
         * deployed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/DeleteSystemTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSystemTemplateAsync(const Model::DeleteSystemTemplateRequest& request, const DeleteSystemTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> <b>Greengrass and Cloud Deployments</b> </p> <p>Deploys the system instance
         * to the target specified in <code>CreateSystemInstance</code>. </p> <p>
         * <b>Greengrass Deployments</b> </p> <p>If the system or any workflows and
         * entities have been updated before this action is called, then the deployment
         * will create a new Amazon Simple Storage Service resource file and then deploy
         * it.</p> <p>Since this action creates a Greengrass deployment on the caller's
         * behalf, the calling identity must have write permissions to the specified
         * Greengrass group. Otherwise, the call will fail with an authorization error.</p>
         * <p>For information about the artifacts that get added to your Greengrass core
         * device when you use this API, see <a
         * href="https://docs.aws.amazon.com/thingsgraph/latest/ug/iot-tg-greengrass.html">AWS
         * IoT Things Graph and AWS IoT Greengrass</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/DeploySystemInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeploySystemInstanceOutcome DeploySystemInstance(const Model::DeploySystemInstanceRequest& request) const;

        /**
         * <p> <b>Greengrass and Cloud Deployments</b> </p> <p>Deploys the system instance
         * to the target specified in <code>CreateSystemInstance</code>. </p> <p>
         * <b>Greengrass Deployments</b> </p> <p>If the system or any workflows and
         * entities have been updated before this action is called, then the deployment
         * will create a new Amazon Simple Storage Service resource file and then deploy
         * it.</p> <p>Since this action creates a Greengrass deployment on the caller's
         * behalf, the calling identity must have write permissions to the specified
         * Greengrass group. Otherwise, the call will fail with an authorization error.</p>
         * <p>For information about the artifacts that get added to your Greengrass core
         * device when you use this API, see <a
         * href="https://docs.aws.amazon.com/thingsgraph/latest/ug/iot-tg-greengrass.html">AWS
         * IoT Things Graph and AWS IoT Greengrass</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/DeploySystemInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeploySystemInstanceOutcomeCallable DeploySystemInstanceCallable(const Model::DeploySystemInstanceRequest& request) const;

        /**
         * <p> <b>Greengrass and Cloud Deployments</b> </p> <p>Deploys the system instance
         * to the target specified in <code>CreateSystemInstance</code>. </p> <p>
         * <b>Greengrass Deployments</b> </p> <p>If the system or any workflows and
         * entities have been updated before this action is called, then the deployment
         * will create a new Amazon Simple Storage Service resource file and then deploy
         * it.</p> <p>Since this action creates a Greengrass deployment on the caller's
         * behalf, the calling identity must have write permissions to the specified
         * Greengrass group. Otherwise, the call will fail with an authorization error.</p>
         * <p>For information about the artifacts that get added to your Greengrass core
         * device when you use this API, see <a
         * href="https://docs.aws.amazon.com/thingsgraph/latest/ug/iot-tg-greengrass.html">AWS
         * IoT Things Graph and AWS IoT Greengrass</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/DeploySystemInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeploySystemInstanceAsync(const Model::DeploySystemInstanceRequest& request, const DeploySystemInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deprecates the specified workflow. This action marks the workflow for
         * deletion. Deprecated flows can't be deployed, but existing deployments will
         * continue to run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/DeprecateFlowTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeprecateFlowTemplateOutcome DeprecateFlowTemplate(const Model::DeprecateFlowTemplateRequest& request) const;

        /**
         * <p>Deprecates the specified workflow. This action marks the workflow for
         * deletion. Deprecated flows can't be deployed, but existing deployments will
         * continue to run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/DeprecateFlowTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeprecateFlowTemplateOutcomeCallable DeprecateFlowTemplateCallable(const Model::DeprecateFlowTemplateRequest& request) const;

        /**
         * <p>Deprecates the specified workflow. This action marks the workflow for
         * deletion. Deprecated flows can't be deployed, but existing deployments will
         * continue to run.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/DeprecateFlowTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeprecateFlowTemplateAsync(const Model::DeprecateFlowTemplateRequest& request, const DeprecateFlowTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deprecates the specified system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/DeprecateSystemTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeprecateSystemTemplateOutcome DeprecateSystemTemplate(const Model::DeprecateSystemTemplateRequest& request) const;

        /**
         * <p>Deprecates the specified system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/DeprecateSystemTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeprecateSystemTemplateOutcomeCallable DeprecateSystemTemplateCallable(const Model::DeprecateSystemTemplateRequest& request) const;

        /**
         * <p>Deprecates the specified system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/DeprecateSystemTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeprecateSystemTemplateAsync(const Model::DeprecateSystemTemplateRequest& request, const DeprecateSystemTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the latest version of the user's namespace and the public version that
         * it is tracking.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/DescribeNamespace">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNamespaceOutcome DescribeNamespace(const Model::DescribeNamespaceRequest& request) const;

        /**
         * <p>Gets the latest version of the user's namespace and the public version that
         * it is tracking.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/DescribeNamespace">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeNamespaceOutcomeCallable DescribeNamespaceCallable(const Model::DescribeNamespaceRequest& request) const;

        /**
         * <p>Gets the latest version of the user's namespace and the public version that
         * it is tracking.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/DescribeNamespace">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeNamespaceAsync(const Model::DescribeNamespaceRequest& request, const DescribeNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Dissociates a device entity from a concrete thing. The action takes only the
         * type of the entity that you need to dissociate because only one entity of a
         * particular type can be associated with a thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/DissociateEntityFromThing">AWS
         * API Reference</a></p>
         */
        virtual Model::DissociateEntityFromThingOutcome DissociateEntityFromThing(const Model::DissociateEntityFromThingRequest& request) const;

        /**
         * <p>Dissociates a device entity from a concrete thing. The action takes only the
         * type of the entity that you need to dissociate because only one entity of a
         * particular type can be associated with a thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/DissociateEntityFromThing">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DissociateEntityFromThingOutcomeCallable DissociateEntityFromThingCallable(const Model::DissociateEntityFromThingRequest& request) const;

        /**
         * <p>Dissociates a device entity from a concrete thing. The action takes only the
         * type of the entity that you need to dissociate because only one entity of a
         * particular type can be associated with a thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/DissociateEntityFromThing">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DissociateEntityFromThingAsync(const Model::DissociateEntityFromThingRequest& request, const DissociateEntityFromThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets definitions of the specified entities. Uses the latest version of the
         * user's namespace by default. This API returns the following TDM entities.</p>
         * <ul> <li> <p>Properties</p> </li> <li> <p>States</p> </li> <li> <p>Events</p>
         * </li> <li> <p>Actions</p> </li> <li> <p>Capabilities</p> </li> <li>
         * <p>Mappings</p> </li> <li> <p>Devices</p> </li> <li> <p>Device Models</p> </li>
         * <li> <p>Services</p> </li> </ul> <p>This action doesn't return definitions for
         * systems, flows, and deployments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/GetEntities">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEntitiesOutcome GetEntities(const Model::GetEntitiesRequest& request) const;

        /**
         * <p>Gets definitions of the specified entities. Uses the latest version of the
         * user's namespace by default. This API returns the following TDM entities.</p>
         * <ul> <li> <p>Properties</p> </li> <li> <p>States</p> </li> <li> <p>Events</p>
         * </li> <li> <p>Actions</p> </li> <li> <p>Capabilities</p> </li> <li>
         * <p>Mappings</p> </li> <li> <p>Devices</p> </li> <li> <p>Device Models</p> </li>
         * <li> <p>Services</p> </li> </ul> <p>This action doesn't return definitions for
         * systems, flows, and deployments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/GetEntities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEntitiesOutcomeCallable GetEntitiesCallable(const Model::GetEntitiesRequest& request) const;

        /**
         * <p>Gets definitions of the specified entities. Uses the latest version of the
         * user's namespace by default. This API returns the following TDM entities.</p>
         * <ul> <li> <p>Properties</p> </li> <li> <p>States</p> </li> <li> <p>Events</p>
         * </li> <li> <p>Actions</p> </li> <li> <p>Capabilities</p> </li> <li>
         * <p>Mappings</p> </li> <li> <p>Devices</p> </li> <li> <p>Device Models</p> </li>
         * <li> <p>Services</p> </li> </ul> <p>This action doesn't return definitions for
         * systems, flows, and deployments.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/GetEntities">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEntitiesAsync(const Model::GetEntitiesRequest& request, const GetEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the latest version of the <code>DefinitionDocument</code> and
         * <code>FlowTemplateSummary</code> for the specified workflow.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/GetFlowTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFlowTemplateOutcome GetFlowTemplate(const Model::GetFlowTemplateRequest& request) const;

        /**
         * <p>Gets the latest version of the <code>DefinitionDocument</code> and
         * <code>FlowTemplateSummary</code> for the specified workflow.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/GetFlowTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFlowTemplateOutcomeCallable GetFlowTemplateCallable(const Model::GetFlowTemplateRequest& request) const;

        /**
         * <p>Gets the latest version of the <code>DefinitionDocument</code> and
         * <code>FlowTemplateSummary</code> for the specified workflow.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/GetFlowTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFlowTemplateAsync(const Model::GetFlowTemplateRequest& request, const GetFlowTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets revisions of the specified workflow. Only the last 100 revisions are
         * stored. If the workflow has been deprecated, this action will return revisions
         * that occurred before the deprecation. This action won't work for workflows that
         * have been deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/GetFlowTemplateRevisions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFlowTemplateRevisionsOutcome GetFlowTemplateRevisions(const Model::GetFlowTemplateRevisionsRequest& request) const;

        /**
         * <p>Gets revisions of the specified workflow. Only the last 100 revisions are
         * stored. If the workflow has been deprecated, this action will return revisions
         * that occurred before the deprecation. This action won't work for workflows that
         * have been deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/GetFlowTemplateRevisions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFlowTemplateRevisionsOutcomeCallable GetFlowTemplateRevisionsCallable(const Model::GetFlowTemplateRevisionsRequest& request) const;

        /**
         * <p>Gets revisions of the specified workflow. Only the last 100 revisions are
         * stored. If the workflow has been deprecated, this action will return revisions
         * that occurred before the deprecation. This action won't work for workflows that
         * have been deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/GetFlowTemplateRevisions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFlowTemplateRevisionsAsync(const Model::GetFlowTemplateRevisionsRequest& request, const GetFlowTemplateRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the status of a namespace deletion task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/GetNamespaceDeletionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNamespaceDeletionStatusOutcome GetNamespaceDeletionStatus(const Model::GetNamespaceDeletionStatusRequest& request) const;

        /**
         * <p>Gets the status of a namespace deletion task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/GetNamespaceDeletionStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetNamespaceDeletionStatusOutcomeCallable GetNamespaceDeletionStatusCallable(const Model::GetNamespaceDeletionStatusRequest& request) const;

        /**
         * <p>Gets the status of a namespace deletion task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/GetNamespaceDeletionStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetNamespaceDeletionStatusAsync(const Model::GetNamespaceDeletionStatusRequest& request, const GetNamespaceDeletionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a system instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/GetSystemInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSystemInstanceOutcome GetSystemInstance(const Model::GetSystemInstanceRequest& request) const;

        /**
         * <p>Gets a system instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/GetSystemInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSystemInstanceOutcomeCallable GetSystemInstanceCallable(const Model::GetSystemInstanceRequest& request) const;

        /**
         * <p>Gets a system instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/GetSystemInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSystemInstanceAsync(const Model::GetSystemInstanceRequest& request, const GetSystemInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/GetSystemTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSystemTemplateOutcome GetSystemTemplate(const Model::GetSystemTemplateRequest& request) const;

        /**
         * <p>Gets a system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/GetSystemTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSystemTemplateOutcomeCallable GetSystemTemplateCallable(const Model::GetSystemTemplateRequest& request) const;

        /**
         * <p>Gets a system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/GetSystemTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSystemTemplateAsync(const Model::GetSystemTemplateRequest& request, const GetSystemTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets revisions made to the specified system template. Only the previous 100
         * revisions are stored. If the system has been deprecated, this action will return
         * the revisions that occurred before its deprecation. This action won't work with
         * systems that have been deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/GetSystemTemplateRevisions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSystemTemplateRevisionsOutcome GetSystemTemplateRevisions(const Model::GetSystemTemplateRevisionsRequest& request) const;

        /**
         * <p>Gets revisions made to the specified system template. Only the previous 100
         * revisions are stored. If the system has been deprecated, this action will return
         * the revisions that occurred before its deprecation. This action won't work with
         * systems that have been deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/GetSystemTemplateRevisions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSystemTemplateRevisionsOutcomeCallable GetSystemTemplateRevisionsCallable(const Model::GetSystemTemplateRevisionsRequest& request) const;

        /**
         * <p>Gets revisions made to the specified system template. Only the previous 100
         * revisions are stored. If the system has been deprecated, this action will return
         * the revisions that occurred before its deprecation. This action won't work with
         * systems that have been deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/GetSystemTemplateRevisions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSystemTemplateRevisionsAsync(const Model::GetSystemTemplateRevisionsRequest& request, const GetSystemTemplateRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the status of the specified upload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/GetUploadStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetUploadStatusOutcome GetUploadStatus(const Model::GetUploadStatusRequest& request) const;

        /**
         * <p>Gets the status of the specified upload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/GetUploadStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetUploadStatusOutcomeCallable GetUploadStatusCallable(const Model::GetUploadStatusRequest& request) const;

        /**
         * <p>Gets the status of the specified upload.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/GetUploadStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetUploadStatusAsync(const Model::GetUploadStatusRequest& request, const GetUploadStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of objects that contain information about events in a flow
         * execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/ListFlowExecutionMessages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFlowExecutionMessagesOutcome ListFlowExecutionMessages(const Model::ListFlowExecutionMessagesRequest& request) const;

        /**
         * <p>Returns a list of objects that contain information about events in a flow
         * execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/ListFlowExecutionMessages">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFlowExecutionMessagesOutcomeCallable ListFlowExecutionMessagesCallable(const Model::ListFlowExecutionMessagesRequest& request) const;

        /**
         * <p>Returns a list of objects that contain information about events in a flow
         * execution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/ListFlowExecutionMessages">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFlowExecutionMessagesAsync(const Model::ListFlowExecutionMessagesRequest& request, const ListFlowExecutionMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all tags on an AWS IoT Things Graph resource.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists all tags on an AWS IoT Things Graph resource.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists all tags on an AWS IoT Things Graph resource.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches for entities of the specified type. You can search for entities in
         * your namespace and the public namespace that you're tracking.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/SearchEntities">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchEntitiesOutcome SearchEntities(const Model::SearchEntitiesRequest& request) const;

        /**
         * <p>Searches for entities of the specified type. You can search for entities in
         * your namespace and the public namespace that you're tracking.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/SearchEntities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchEntitiesOutcomeCallable SearchEntitiesCallable(const Model::SearchEntitiesRequest& request) const;

        /**
         * <p>Searches for entities of the specified type. You can search for entities in
         * your namespace and the public namespace that you're tracking.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/SearchEntities">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchEntitiesAsync(const Model::SearchEntitiesRequest& request, const SearchEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches for AWS IoT Things Graph workflow execution instances.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/SearchFlowExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchFlowExecutionsOutcome SearchFlowExecutions(const Model::SearchFlowExecutionsRequest& request) const;

        /**
         * <p>Searches for AWS IoT Things Graph workflow execution instances.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/SearchFlowExecutions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchFlowExecutionsOutcomeCallable SearchFlowExecutionsCallable(const Model::SearchFlowExecutionsRequest& request) const;

        /**
         * <p>Searches for AWS IoT Things Graph workflow execution instances.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/SearchFlowExecutions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchFlowExecutionsAsync(const Model::SearchFlowExecutionsRequest& request, const SearchFlowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches for summary information about workflows.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/SearchFlowTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchFlowTemplatesOutcome SearchFlowTemplates(const Model::SearchFlowTemplatesRequest& request) const;

        /**
         * <p>Searches for summary information about workflows.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/SearchFlowTemplates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchFlowTemplatesOutcomeCallable SearchFlowTemplatesCallable(const Model::SearchFlowTemplatesRequest& request) const;

        /**
         * <p>Searches for summary information about workflows.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/SearchFlowTemplates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchFlowTemplatesAsync(const Model::SearchFlowTemplatesRequest& request, const SearchFlowTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches for system instances in the user's account.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/SearchSystemInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchSystemInstancesOutcome SearchSystemInstances(const Model::SearchSystemInstancesRequest& request) const;

        /**
         * <p>Searches for system instances in the user's account.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/SearchSystemInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchSystemInstancesOutcomeCallable SearchSystemInstancesCallable(const Model::SearchSystemInstancesRequest& request) const;

        /**
         * <p>Searches for system instances in the user's account.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/SearchSystemInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchSystemInstancesAsync(const Model::SearchSystemInstancesRequest& request, const SearchSystemInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches for summary information about systems in the user's account. You can
         * filter by the ID of a workflow to return only systems that use the specified
         * workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/SearchSystemTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchSystemTemplatesOutcome SearchSystemTemplates(const Model::SearchSystemTemplatesRequest& request) const;

        /**
         * <p>Searches for summary information about systems in the user's account. You can
         * filter by the ID of a workflow to return only systems that use the specified
         * workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/SearchSystemTemplates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchSystemTemplatesOutcomeCallable SearchSystemTemplatesCallable(const Model::SearchSystemTemplatesRequest& request) const;

        /**
         * <p>Searches for summary information about systems in the user's account. You can
         * filter by the ID of a workflow to return only systems that use the specified
         * workflow.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/SearchSystemTemplates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchSystemTemplatesAsync(const Model::SearchSystemTemplatesRequest& request, const SearchSystemTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Searches for things associated with the specified entity. You can search by
         * both device and device model.</p> <p>For example, if two different devices,
         * camera1 and camera2, implement the camera device model, the user can associate
         * thing1 to camera1 and thing2 to camera2. <code>SearchThings(camera2)</code> will
         * return only thing2, but <code>SearchThings(camera)</code> will return both
         * thing1 and thing2.</p> <p>This action searches for exact matches and doesn't
         * perform partial text matching.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/SearchThings">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchThingsOutcome SearchThings(const Model::SearchThingsRequest& request) const;

        /**
         * <p>Searches for things associated with the specified entity. You can search by
         * both device and device model.</p> <p>For example, if two different devices,
         * camera1 and camera2, implement the camera device model, the user can associate
         * thing1 to camera1 and thing2 to camera2. <code>SearchThings(camera2)</code> will
         * return only thing2, but <code>SearchThings(camera)</code> will return both
         * thing1 and thing2.</p> <p>This action searches for exact matches and doesn't
         * perform partial text matching.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/SearchThings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchThingsOutcomeCallable SearchThingsCallable(const Model::SearchThingsRequest& request) const;

        /**
         * <p>Searches for things associated with the specified entity. You can search by
         * both device and device model.</p> <p>For example, if two different devices,
         * camera1 and camera2, implement the camera device model, the user can associate
         * thing1 to camera1 and thing2 to camera2. <code>SearchThings(camera2)</code> will
         * return only thing2, but <code>SearchThings(camera)</code> will return both
         * thing1 and thing2.</p> <p>This action searches for exact matches and doesn't
         * perform partial text matching.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/SearchThings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchThingsAsync(const Model::SearchThingsRequest& request, const SearchThingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a tag for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Creates a tag for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Creates a tag for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a system instance from its target (Cloud or
         * Greengrass).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/UndeploySystemInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::UndeploySystemInstanceOutcome UndeploySystemInstance(const Model::UndeploySystemInstanceRequest& request) const;

        /**
         * <p>Removes a system instance from its target (Cloud or
         * Greengrass).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/UndeploySystemInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UndeploySystemInstanceOutcomeCallable UndeploySystemInstanceCallable(const Model::UndeploySystemInstanceRequest& request) const;

        /**
         * <p>Removes a system instance from its target (Cloud or
         * Greengrass).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/UndeploySystemInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UndeploySystemInstanceAsync(const Model::UndeploySystemInstanceRequest& request, const UndeploySystemInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes a tag from the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes a tag from the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes a tag from the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified workflow. All deployed systems and system instances
         * that use the workflow will see the changes in the flow when it is redeployed. If
         * you don't want this behavior, copy the workflow (creating a new workflow with a
         * different ID), and update the copy. The workflow can contain only entities in
         * the specified namespace. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/UpdateFlowTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFlowTemplateOutcome UpdateFlowTemplate(const Model::UpdateFlowTemplateRequest& request) const;

        /**
         * <p>Updates the specified workflow. All deployed systems and system instances
         * that use the workflow will see the changes in the flow when it is redeployed. If
         * you don't want this behavior, copy the workflow (creating a new workflow with a
         * different ID), and update the copy. The workflow can contain only entities in
         * the specified namespace. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/UpdateFlowTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFlowTemplateOutcomeCallable UpdateFlowTemplateCallable(const Model::UpdateFlowTemplateRequest& request) const;

        /**
         * <p>Updates the specified workflow. All deployed systems and system instances
         * that use the workflow will see the changes in the flow when it is redeployed. If
         * you don't want this behavior, copy the workflow (creating a new workflow with a
         * different ID), and update the copy. The workflow can contain only entities in
         * the specified namespace. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/UpdateFlowTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFlowTemplateAsync(const Model::UpdateFlowTemplateRequest& request, const UpdateFlowTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified system. You don't need to run this action after
         * updating a workflow. Any deployment that uses the system will see the changes in
         * the system when it is redeployed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/UpdateSystemTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSystemTemplateOutcome UpdateSystemTemplate(const Model::UpdateSystemTemplateRequest& request) const;

        /**
         * <p>Updates the specified system. You don't need to run this action after
         * updating a workflow. Any deployment that uses the system will see the changes in
         * the system when it is redeployed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/UpdateSystemTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSystemTemplateOutcomeCallable UpdateSystemTemplateCallable(const Model::UpdateSystemTemplateRequest& request) const;

        /**
         * <p>Updates the specified system. You don't need to run this action after
         * updating a workflow. Any deployment that uses the system will see the changes in
         * the system when it is redeployed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/UpdateSystemTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSystemTemplateAsync(const Model::UpdateSystemTemplateRequest& request, const UpdateSystemTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Asynchronously uploads one or more entity definitions to the user's
         * namespace. The <code>document</code> parameter is required if
         * <code>syncWithPublicNamespace</code> and <code>deleteExistingEntites</code> are
         * false. If the <code>syncWithPublicNamespace</code> parameter is set to
         * <code>true</code>, the user's namespace will synchronize with the latest version
         * of the public namespace. If <code>deprecateExistingEntities</code> is set to
         * true, all entities in the latest version will be deleted before the new
         * <code>DefinitionDocument</code> is uploaded.</p> <p>When a user uploads entity
         * definitions for the first time, the service creates a new namespace for the
         * user. The new namespace tracks the public namespace. Currently users can have
         * only one namespace. The namespace version increments whenever a user uploads
         * entity definitions that are backwards-incompatible and whenever a user sets the
         * <code>syncWithPublicNamespace</code> parameter or the
         * <code>deprecateExistingEntities</code> parameter to <code>true</code>.</p>
         * <p>The IDs for all of the entities should be in URN format. Each entity must be
         * in the user's namespace. Users can't create entities in the public namespace,
         * but entity definitions can refer to entities in the public namespace.</p>
         * <p>Valid entities are <code>Device</code>, <code>DeviceModel</code>,
         * <code>Service</code>, <code>Capability</code>, <code>State</code>,
         * <code>Action</code>, <code>Event</code>, <code>Property</code>,
         * <code>Mapping</code>, <code>Enum</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/UploadEntityDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::UploadEntityDefinitionsOutcome UploadEntityDefinitions(const Model::UploadEntityDefinitionsRequest& request) const;

        /**
         * <p>Asynchronously uploads one or more entity definitions to the user's
         * namespace. The <code>document</code> parameter is required if
         * <code>syncWithPublicNamespace</code> and <code>deleteExistingEntites</code> are
         * false. If the <code>syncWithPublicNamespace</code> parameter is set to
         * <code>true</code>, the user's namespace will synchronize with the latest version
         * of the public namespace. If <code>deprecateExistingEntities</code> is set to
         * true, all entities in the latest version will be deleted before the new
         * <code>DefinitionDocument</code> is uploaded.</p> <p>When a user uploads entity
         * definitions for the first time, the service creates a new namespace for the
         * user. The new namespace tracks the public namespace. Currently users can have
         * only one namespace. The namespace version increments whenever a user uploads
         * entity definitions that are backwards-incompatible and whenever a user sets the
         * <code>syncWithPublicNamespace</code> parameter or the
         * <code>deprecateExistingEntities</code> parameter to <code>true</code>.</p>
         * <p>The IDs for all of the entities should be in URN format. Each entity must be
         * in the user's namespace. Users can't create entities in the public namespace,
         * but entity definitions can refer to entities in the public namespace.</p>
         * <p>Valid entities are <code>Device</code>, <code>DeviceModel</code>,
         * <code>Service</code>, <code>Capability</code>, <code>State</code>,
         * <code>Action</code>, <code>Event</code>, <code>Property</code>,
         * <code>Mapping</code>, <code>Enum</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/UploadEntityDefinitions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UploadEntityDefinitionsOutcomeCallable UploadEntityDefinitionsCallable(const Model::UploadEntityDefinitionsRequest& request) const;

        /**
         * <p>Asynchronously uploads one or more entity definitions to the user's
         * namespace. The <code>document</code> parameter is required if
         * <code>syncWithPublicNamespace</code> and <code>deleteExistingEntites</code> are
         * false. If the <code>syncWithPublicNamespace</code> parameter is set to
         * <code>true</code>, the user's namespace will synchronize with the latest version
         * of the public namespace. If <code>deprecateExistingEntities</code> is set to
         * true, all entities in the latest version will be deleted before the new
         * <code>DefinitionDocument</code> is uploaded.</p> <p>When a user uploads entity
         * definitions for the first time, the service creates a new namespace for the
         * user. The new namespace tracks the public namespace. Currently users can have
         * only one namespace. The namespace version increments whenever a user uploads
         * entity definitions that are backwards-incompatible and whenever a user sets the
         * <code>syncWithPublicNamespace</code> parameter or the
         * <code>deprecateExistingEntities</code> parameter to <code>true</code>.</p>
         * <p>The IDs for all of the entities should be in URN format. Each entity must be
         * in the user's namespace. Users can't create entities in the public namespace,
         * but entity definitions can refer to entities in the public namespace.</p>
         * <p>Valid entities are <code>Device</code>, <code>DeviceModel</code>,
         * <code>Service</code>, <code>Capability</code>, <code>State</code>,
         * <code>Action</code>, <code>Event</code>, <code>Property</code>,
         * <code>Mapping</code>, <code>Enum</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iotthingsgraph-2018-09-06/UploadEntityDefinitions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UploadEntityDefinitionsAsync(const Model::UploadEntityDefinitionsRequest& request, const UploadEntityDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateEntityToThingAsyncHelper(const Model::AssociateEntityToThingRequest& request, const AssociateEntityToThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFlowTemplateAsyncHelper(const Model::CreateFlowTemplateRequest& request, const CreateFlowTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSystemInstanceAsyncHelper(const Model::CreateSystemInstanceRequest& request, const CreateSystemInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSystemTemplateAsyncHelper(const Model::CreateSystemTemplateRequest& request, const CreateSystemTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFlowTemplateAsyncHelper(const Model::DeleteFlowTemplateRequest& request, const DeleteFlowTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteNamespaceAsyncHelper(const Model::DeleteNamespaceRequest& request, const DeleteNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSystemInstanceAsyncHelper(const Model::DeleteSystemInstanceRequest& request, const DeleteSystemInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSystemTemplateAsyncHelper(const Model::DeleteSystemTemplateRequest& request, const DeleteSystemTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeploySystemInstanceAsyncHelper(const Model::DeploySystemInstanceRequest& request, const DeploySystemInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeprecateFlowTemplateAsyncHelper(const Model::DeprecateFlowTemplateRequest& request, const DeprecateFlowTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeprecateSystemTemplateAsyncHelper(const Model::DeprecateSystemTemplateRequest& request, const DeprecateSystemTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeNamespaceAsyncHelper(const Model::DescribeNamespaceRequest& request, const DescribeNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DissociateEntityFromThingAsyncHelper(const Model::DissociateEntityFromThingRequest& request, const DissociateEntityFromThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetEntitiesAsyncHelper(const Model::GetEntitiesRequest& request, const GetEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFlowTemplateAsyncHelper(const Model::GetFlowTemplateRequest& request, const GetFlowTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFlowTemplateRevisionsAsyncHelper(const Model::GetFlowTemplateRevisionsRequest& request, const GetFlowTemplateRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetNamespaceDeletionStatusAsyncHelper(const Model::GetNamespaceDeletionStatusRequest& request, const GetNamespaceDeletionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSystemInstanceAsyncHelper(const Model::GetSystemInstanceRequest& request, const GetSystemInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSystemTemplateAsyncHelper(const Model::GetSystemTemplateRequest& request, const GetSystemTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSystemTemplateRevisionsAsyncHelper(const Model::GetSystemTemplateRevisionsRequest& request, const GetSystemTemplateRevisionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetUploadStatusAsyncHelper(const Model::GetUploadStatusRequest& request, const GetUploadStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFlowExecutionMessagesAsyncHelper(const Model::ListFlowExecutionMessagesRequest& request, const ListFlowExecutionMessagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchEntitiesAsyncHelper(const Model::SearchEntitiesRequest& request, const SearchEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchFlowExecutionsAsyncHelper(const Model::SearchFlowExecutionsRequest& request, const SearchFlowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchFlowTemplatesAsyncHelper(const Model::SearchFlowTemplatesRequest& request, const SearchFlowTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchSystemInstancesAsyncHelper(const Model::SearchSystemInstancesRequest& request, const SearchSystemInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchSystemTemplatesAsyncHelper(const Model::SearchSystemTemplatesRequest& request, const SearchSystemTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchThingsAsyncHelper(const Model::SearchThingsRequest& request, const SearchThingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UndeploySystemInstanceAsyncHelper(const Model::UndeploySystemInstanceRequest& request, const UndeploySystemInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFlowTemplateAsyncHelper(const Model::UpdateFlowTemplateRequest& request, const UpdateFlowTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSystemTemplateAsyncHelper(const Model::UpdateSystemTemplateRequest& request, const UpdateSystemTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UploadEntityDefinitionsAsyncHelper(const Model::UploadEntityDefinitionsRequest& request, const UploadEntityDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace IoTThingsGraph
} // namespace Aws
