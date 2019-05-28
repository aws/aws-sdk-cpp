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
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/GroundStationErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/CancelContactResult.h>
#include <aws/groundstation/model/CreateConfigResult.h>
#include <aws/groundstation/model/CreateDataflowEndpointGroupResult.h>
#include <aws/groundstation/model/CreateMissionProfileResult.h>
#include <aws/groundstation/model/DeleteConfigResult.h>
#include <aws/groundstation/model/DeleteDataflowEndpointGroupResult.h>
#include <aws/groundstation/model/DeleteMissionProfileResult.h>
#include <aws/groundstation/model/DescribeContactResult.h>
#include <aws/groundstation/model/GetConfigResult.h>
#include <aws/groundstation/model/GetDataflowEndpointGroupResult.h>
#include <aws/groundstation/model/GetMissionProfileResult.h>
#include <aws/groundstation/model/ListConfigsResult.h>
#include <aws/groundstation/model/ListContactsResult.h>
#include <aws/groundstation/model/ListDataflowEndpointGroupsResult.h>
#include <aws/groundstation/model/ListMissionProfilesResult.h>
#include <aws/groundstation/model/ReserveContactResult.h>
#include <aws/groundstation/model/UpdateConfigResult.h>
#include <aws/groundstation/model/UpdateMissionProfileResult.h>
#include <aws/groundstation/model/GetMinuteUsageResult.h>
#include <aws/groundstation/model/GetSatelliteResult.h>
#include <aws/groundstation/model/ListGroundStationsResult.h>
#include <aws/groundstation/model/ListSatellitesResult.h>
#include <aws/groundstation/model/ListTagsForResourceResult.h>
#include <aws/groundstation/model/TagResourceResult.h>
#include <aws/groundstation/model/UntagResourceResult.h>
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

namespace GroundStation
{

namespace Model
{
        class CancelContactRequest;
        class CreateConfigRequest;
        class CreateDataflowEndpointGroupRequest;
        class CreateMissionProfileRequest;
        class DeleteConfigRequest;
        class DeleteDataflowEndpointGroupRequest;
        class DeleteMissionProfileRequest;
        class DescribeContactRequest;
        class GetConfigRequest;
        class GetDataflowEndpointGroupRequest;
        class GetMissionProfileRequest;
        class ListConfigsRequest;
        class ListContactsRequest;
        class ListDataflowEndpointGroupsRequest;
        class ListMissionProfilesRequest;
        class ReserveContactRequest;
        class UpdateConfigRequest;
        class UpdateMissionProfileRequest;
        class GetMinuteUsageRequest;
        class GetSatelliteRequest;
        class ListGroundStationsRequest;
        class ListSatellitesRequest;
        class ListTagsForResourceRequest;
        class TagResourceRequest;
        class UntagResourceRequest;

        typedef Aws::Utils::Outcome<CancelContactResult, Aws::Client::AWSError<GroundStationErrors>> CancelContactOutcome;
        typedef Aws::Utils::Outcome<CreateConfigResult, Aws::Client::AWSError<GroundStationErrors>> CreateConfigOutcome;
        typedef Aws::Utils::Outcome<CreateDataflowEndpointGroupResult, Aws::Client::AWSError<GroundStationErrors>> CreateDataflowEndpointGroupOutcome;
        typedef Aws::Utils::Outcome<CreateMissionProfileResult, Aws::Client::AWSError<GroundStationErrors>> CreateMissionProfileOutcome;
        typedef Aws::Utils::Outcome<DeleteConfigResult, Aws::Client::AWSError<GroundStationErrors>> DeleteConfigOutcome;
        typedef Aws::Utils::Outcome<DeleteDataflowEndpointGroupResult, Aws::Client::AWSError<GroundStationErrors>> DeleteDataflowEndpointGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteMissionProfileResult, Aws::Client::AWSError<GroundStationErrors>> DeleteMissionProfileOutcome;
        typedef Aws::Utils::Outcome<DescribeContactResult, Aws::Client::AWSError<GroundStationErrors>> DescribeContactOutcome;
        typedef Aws::Utils::Outcome<GetConfigResult, Aws::Client::AWSError<GroundStationErrors>> GetConfigOutcome;
        typedef Aws::Utils::Outcome<GetDataflowEndpointGroupResult, Aws::Client::AWSError<GroundStationErrors>> GetDataflowEndpointGroupOutcome;
        typedef Aws::Utils::Outcome<GetMissionProfileResult, Aws::Client::AWSError<GroundStationErrors>> GetMissionProfileOutcome;
        typedef Aws::Utils::Outcome<ListConfigsResult, Aws::Client::AWSError<GroundStationErrors>> ListConfigsOutcome;
        typedef Aws::Utils::Outcome<ListContactsResult, Aws::Client::AWSError<GroundStationErrors>> ListContactsOutcome;
        typedef Aws::Utils::Outcome<ListDataflowEndpointGroupsResult, Aws::Client::AWSError<GroundStationErrors>> ListDataflowEndpointGroupsOutcome;
        typedef Aws::Utils::Outcome<ListMissionProfilesResult, Aws::Client::AWSError<GroundStationErrors>> ListMissionProfilesOutcome;
        typedef Aws::Utils::Outcome<ReserveContactResult, Aws::Client::AWSError<GroundStationErrors>> ReserveContactOutcome;
        typedef Aws::Utils::Outcome<UpdateConfigResult, Aws::Client::AWSError<GroundStationErrors>> UpdateConfigOutcome;
        typedef Aws::Utils::Outcome<UpdateMissionProfileResult, Aws::Client::AWSError<GroundStationErrors>> UpdateMissionProfileOutcome;
        typedef Aws::Utils::Outcome<GetMinuteUsageResult, Aws::Client::AWSError<GroundStationErrors>> GetMinuteUsageOutcome;
        typedef Aws::Utils::Outcome<GetSatelliteResult, Aws::Client::AWSError<GroundStationErrors>> GetSatelliteOutcome;
        typedef Aws::Utils::Outcome<ListGroundStationsResult, Aws::Client::AWSError<GroundStationErrors>> ListGroundStationsOutcome;
        typedef Aws::Utils::Outcome<ListSatellitesResult, Aws::Client::AWSError<GroundStationErrors>> ListSatellitesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<GroundStationErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<GroundStationErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<GroundStationErrors>> UntagResourceOutcome;

        typedef std::future<CancelContactOutcome> CancelContactOutcomeCallable;
        typedef std::future<CreateConfigOutcome> CreateConfigOutcomeCallable;
        typedef std::future<CreateDataflowEndpointGroupOutcome> CreateDataflowEndpointGroupOutcomeCallable;
        typedef std::future<CreateMissionProfileOutcome> CreateMissionProfileOutcomeCallable;
        typedef std::future<DeleteConfigOutcome> DeleteConfigOutcomeCallable;
        typedef std::future<DeleteDataflowEndpointGroupOutcome> DeleteDataflowEndpointGroupOutcomeCallable;
        typedef std::future<DeleteMissionProfileOutcome> DeleteMissionProfileOutcomeCallable;
        typedef std::future<DescribeContactOutcome> DescribeContactOutcomeCallable;
        typedef std::future<GetConfigOutcome> GetConfigOutcomeCallable;
        typedef std::future<GetDataflowEndpointGroupOutcome> GetDataflowEndpointGroupOutcomeCallable;
        typedef std::future<GetMissionProfileOutcome> GetMissionProfileOutcomeCallable;
        typedef std::future<ListConfigsOutcome> ListConfigsOutcomeCallable;
        typedef std::future<ListContactsOutcome> ListContactsOutcomeCallable;
        typedef std::future<ListDataflowEndpointGroupsOutcome> ListDataflowEndpointGroupsOutcomeCallable;
        typedef std::future<ListMissionProfilesOutcome> ListMissionProfilesOutcomeCallable;
        typedef std::future<ReserveContactOutcome> ReserveContactOutcomeCallable;
        typedef std::future<UpdateConfigOutcome> UpdateConfigOutcomeCallable;
        typedef std::future<UpdateMissionProfileOutcome> UpdateMissionProfileOutcomeCallable;
        typedef std::future<GetMinuteUsageOutcome> GetMinuteUsageOutcomeCallable;
        typedef std::future<GetSatelliteOutcome> GetSatelliteOutcomeCallable;
        typedef std::future<ListGroundStationsOutcome> ListGroundStationsOutcomeCallable;
        typedef std::future<ListSatellitesOutcome> ListSatellitesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
} // namespace Model

  class GroundStationClient;

    typedef std::function<void(const GroundStationClient*, const Model::CancelContactRequest&, const Model::CancelContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelContactResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::CreateConfigRequest&, const Model::CreateConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfigResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::CreateDataflowEndpointGroupRequest&, const Model::CreateDataflowEndpointGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataflowEndpointGroupResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::CreateMissionProfileRequest&, const Model::CreateMissionProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMissionProfileResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::DeleteConfigRequest&, const Model::DeleteConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfigResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::DeleteDataflowEndpointGroupRequest&, const Model::DeleteDataflowEndpointGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataflowEndpointGroupResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::DeleteMissionProfileRequest&, const Model::DeleteMissionProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMissionProfileResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::DescribeContactRequest&, const Model::DescribeContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeContactResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::GetConfigRequest&, const Model::GetConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfigResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::GetDataflowEndpointGroupRequest&, const Model::GetDataflowEndpointGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataflowEndpointGroupResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::GetMissionProfileRequest&, const Model::GetMissionProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMissionProfileResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::ListConfigsRequest&, const Model::ListConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfigsResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::ListContactsRequest&, const Model::ListContactsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListContactsResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::ListDataflowEndpointGroupsRequest&, const Model::ListDataflowEndpointGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataflowEndpointGroupsResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::ListMissionProfilesRequest&, const Model::ListMissionProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMissionProfilesResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::ReserveContactRequest&, const Model::ReserveContactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReserveContactResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::UpdateConfigRequest&, const Model::UpdateConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConfigResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::UpdateMissionProfileRequest&, const Model::UpdateMissionProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMissionProfileResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::GetMinuteUsageRequest&, const Model::GetMinuteUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMinuteUsageResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::GetSatelliteRequest&, const Model::GetSatelliteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSatelliteResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::ListGroundStationsRequest&, const Model::ListGroundStationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroundStationsResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::ListSatellitesRequest&, const Model::ListSatellitesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSatellitesResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const GroundStationClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;

  /**
   * <p>Welcome to the AWS Ground Station API Reference. AWS Ground Station is a
   * fully managed service that
      enables you to control satellite
   * communications, downlink and process satellite data, and
      scale your
   * satellite operations efficiently and cost-effectively without having
      to
   * build or manage your own ground station infrastructure.</p>
   */
  class AWS_GROUNDSTATION_API GroundStationClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GroundStationClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GroundStationClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GroundStationClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~GroundStationClient();

        inline virtual const char* GetServiceClientName() const override { return "GroundStation"; }


        /**
         * <p>Cancels a contact with a specified contact ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/CancelContact">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelContactOutcome CancelContact(const Model::CancelContactRequest& request) const;

        /**
         * <p>Cancels a contact with a specified contact ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/CancelContact">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelContactOutcomeCallable CancelContactCallable(const Model::CancelContactRequest& request) const;

        /**
         * <p>Cancels a contact with a specified contact ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/CancelContact">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelContactAsync(const Model::CancelContactRequest& request, const CancelContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <code>Config</code> with the specified <code>configData</code>
         * parameters.</p>
         <p>Only one type of <code>configData</code> can be
         * specified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/CreateConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigOutcome CreateConfig(const Model::CreateConfigRequest& request) const;

        /**
         * <p>Creates a <code>Config</code> with the specified <code>configData</code>
         * parameters.</p>
         <p>Only one type of <code>configData</code> can be
         * specified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/CreateConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConfigOutcomeCallable CreateConfigCallable(const Model::CreateConfigRequest& request) const;

        /**
         * <p>Creates a <code>Config</code> with the specified <code>configData</code>
         * parameters.</p>
         <p>Only one type of <code>configData</code> can be
         * specified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/CreateConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConfigAsync(const Model::CreateConfigRequest& request, const CreateConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <code>DataflowEndpoint</code> group containing the specified list
         * of <code>DataflowEndpoint</code> objects.</p>
         <p>The <code>name</code>
         * field in each endpoint is used in your mission profile
         * <code>DataflowEndpointConfig</code> 
         to specify which endpoints to use
         * during a contact.</p> 
         <p>When a contact uses multiple
         * <code>DataflowEndpointConfig</code> objects, each <code>Config</code> 
        
         * must match a <code>DataflowEndpoint</code> in the same group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/CreateDataflowEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataflowEndpointGroupOutcome CreateDataflowEndpointGroup(const Model::CreateDataflowEndpointGroupRequest& request) const;

        /**
         * <p>Creates a <code>DataflowEndpoint</code> group containing the specified list
         * of <code>DataflowEndpoint</code> objects.</p>
         <p>The <code>name</code>
         * field in each endpoint is used in your mission profile
         * <code>DataflowEndpointConfig</code> 
         to specify which endpoints to use
         * during a contact.</p> 
         <p>When a contact uses multiple
         * <code>DataflowEndpointConfig</code> objects, each <code>Config</code> 
        
         * must match a <code>DataflowEndpoint</code> in the same group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/CreateDataflowEndpointGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDataflowEndpointGroupOutcomeCallable CreateDataflowEndpointGroupCallable(const Model::CreateDataflowEndpointGroupRequest& request) const;

        /**
         * <p>Creates a <code>DataflowEndpoint</code> group containing the specified list
         * of <code>DataflowEndpoint</code> objects.</p>
         <p>The <code>name</code>
         * field in each endpoint is used in your mission profile
         * <code>DataflowEndpointConfig</code> 
         to specify which endpoints to use
         * during a contact.</p> 
         <p>When a contact uses multiple
         * <code>DataflowEndpointConfig</code> objects, each <code>Config</code> 
        
         * must match a <code>DataflowEndpoint</code> in the same group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/CreateDataflowEndpointGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDataflowEndpointGroupAsync(const Model::CreateDataflowEndpointGroupRequest& request, const CreateDataflowEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a mission profile.</p>
         <p>
           
         * <code>dataflowEdges</code> is a list of lists of strings. Each lower level list
         * of strings
         has two elements: a <i>from ARN</i> and a <i>to
         * ARN</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/CreateMissionProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMissionProfileOutcome CreateMissionProfile(const Model::CreateMissionProfileRequest& request) const;

        /**
         * <p>Creates a mission profile.</p>
         <p>
           
         * <code>dataflowEdges</code> is a list of lists of strings. Each lower level list
         * of strings
         has two elements: a <i>from ARN</i> and a <i>to
         * ARN</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/CreateMissionProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMissionProfileOutcomeCallable CreateMissionProfileCallable(const Model::CreateMissionProfileRequest& request) const;

        /**
         * <p>Creates a mission profile.</p>
         <p>
           
         * <code>dataflowEdges</code> is a list of lists of strings. Each lower level list
         * of strings
         has two elements: a <i>from ARN</i> and a <i>to
         * ARN</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/CreateMissionProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMissionProfileAsync(const Model::CreateMissionProfileRequest& request, const CreateMissionProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a <code>Config</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DeleteConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigOutcome DeleteConfig(const Model::DeleteConfigRequest& request) const;

        /**
         * <p>Deletes a <code>Config</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DeleteConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConfigOutcomeCallable DeleteConfigCallable(const Model::DeleteConfigRequest& request) const;

        /**
         * <p>Deletes a <code>Config</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DeleteConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConfigAsync(const Model::DeleteConfigRequest& request, const DeleteConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a dataflow endpoint group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DeleteDataflowEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataflowEndpointGroupOutcome DeleteDataflowEndpointGroup(const Model::DeleteDataflowEndpointGroupRequest& request) const;

        /**
         * <p>Deletes a dataflow endpoint group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DeleteDataflowEndpointGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDataflowEndpointGroupOutcomeCallable DeleteDataflowEndpointGroupCallable(const Model::DeleteDataflowEndpointGroupRequest& request) const;

        /**
         * <p>Deletes a dataflow endpoint group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DeleteDataflowEndpointGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDataflowEndpointGroupAsync(const Model::DeleteDataflowEndpointGroupRequest& request, const DeleteDataflowEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a mission profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DeleteMissionProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMissionProfileOutcome DeleteMissionProfile(const Model::DeleteMissionProfileRequest& request) const;

        /**
         * <p>Deletes a mission profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DeleteMissionProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMissionProfileOutcomeCallable DeleteMissionProfileCallable(const Model::DeleteMissionProfileRequest& request) const;

        /**
         * <p>Deletes a mission profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DeleteMissionProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMissionProfileAsync(const Model::DeleteMissionProfileRequest& request, const DeleteMissionProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an existing contact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DescribeContact">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeContactOutcome DescribeContact(const Model::DescribeContactRequest& request) const;

        /**
         * <p>Describes an existing contact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DescribeContact">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeContactOutcomeCallable DescribeContactCallable(const Model::DescribeContactRequest& request) const;

        /**
         * <p>Describes an existing contact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DescribeContact">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeContactAsync(const Model::DescribeContactRequest& request, const DescribeContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns <code>Config</code> information.</p>
         <p>Only one
         * <code>Config</code> response can be returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConfigOutcome GetConfig(const Model::GetConfigRequest& request) const;

        /**
         * <p>Returns <code>Config</code> information.</p>
         <p>Only one
         * <code>Config</code> response can be returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConfigOutcomeCallable GetConfigCallable(const Model::GetConfigRequest& request) const;

        /**
         * <p>Returns <code>Config</code> information.</p>
         <p>Only one
         * <code>Config</code> response can be returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConfigAsync(const Model::GetConfigRequest& request, const GetConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the dataflow endpoint group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetDataflowEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataflowEndpointGroupOutcome GetDataflowEndpointGroup(const Model::GetDataflowEndpointGroupRequest& request) const;

        /**
         * <p>Returns the dataflow endpoint group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetDataflowEndpointGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDataflowEndpointGroupOutcomeCallable GetDataflowEndpointGroupCallable(const Model::GetDataflowEndpointGroupRequest& request) const;

        /**
         * <p>Returns the dataflow endpoint group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetDataflowEndpointGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDataflowEndpointGroupAsync(const Model::GetDataflowEndpointGroupRequest& request, const GetDataflowEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a mission profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetMissionProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMissionProfileOutcome GetMissionProfile(const Model::GetMissionProfileRequest& request) const;

        /**
         * <p>Returns a mission profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetMissionProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMissionProfileOutcomeCallable GetMissionProfileCallable(const Model::GetMissionProfileRequest& request) const;

        /**
         * <p>Returns a mission profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetMissionProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMissionProfileAsync(const Model::GetMissionProfileRequest& request, const GetMissionProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of <code>Config</code> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfigsOutcome ListConfigs(const Model::ListConfigsRequest& request) const;

        /**
         * <p>Returns a list of <code>Config</code> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListConfigs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConfigsOutcomeCallable ListConfigsCallable(const Model::ListConfigsRequest& request) const;

        /**
         * <p>Returns a list of <code>Config</code> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListConfigs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConfigsAsync(const Model::ListConfigsRequest& request, const ListConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of contacts.</p>
         <p>If <code>statusList</code>
         * contains AVAILABLE, the request must include
      <code>groundstation</code>,
         * <code>missionprofileArn</code>, and <code>satelliteArn</code>.
     
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListContacts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContactsOutcome ListContacts(const Model::ListContactsRequest& request) const;

        /**
         * <p>Returns a list of contacts.</p>
         <p>If <code>statusList</code>
         * contains AVAILABLE, the request must include
      <code>groundstation</code>,
         * <code>missionprofileArn</code>, and <code>satelliteArn</code>.
     
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListContacts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListContactsOutcomeCallable ListContactsCallable(const Model::ListContactsRequest& request) const;

        /**
         * <p>Returns a list of contacts.</p>
         <p>If <code>statusList</code>
         * contains AVAILABLE, the request must include
      <code>groundstation</code>,
         * <code>missionprofileArn</code>, and <code>satelliteArn</code>.
     
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListContacts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListContactsAsync(const Model::ListContactsRequest& request, const ListContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of <code>DataflowEndpoint</code> groups.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListDataflowEndpointGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDataflowEndpointGroupsOutcome ListDataflowEndpointGroups(const Model::ListDataflowEndpointGroupsRequest& request) const;

        /**
         * <p>Returns a list of <code>DataflowEndpoint</code> groups.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListDataflowEndpointGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDataflowEndpointGroupsOutcomeCallable ListDataflowEndpointGroupsCallable(const Model::ListDataflowEndpointGroupsRequest& request) const;

        /**
         * <p>Returns a list of <code>DataflowEndpoint</code> groups.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListDataflowEndpointGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDataflowEndpointGroupsAsync(const Model::ListDataflowEndpointGroupsRequest& request, const ListDataflowEndpointGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of mission profiles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListMissionProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMissionProfilesOutcome ListMissionProfiles(const Model::ListMissionProfilesRequest& request) const;

        /**
         * <p>Returns a list of mission profiles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListMissionProfiles">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMissionProfilesOutcomeCallable ListMissionProfilesCallable(const Model::ListMissionProfilesRequest& request) const;

        /**
         * <p>Returns a list of mission profiles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListMissionProfiles">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMissionProfilesAsync(const Model::ListMissionProfilesRequest& request, const ListMissionProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Reserves a contact using specified parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ReserveContact">AWS
         * API Reference</a></p>
         */
        virtual Model::ReserveContactOutcome ReserveContact(const Model::ReserveContactRequest& request) const;

        /**
         * <p>Reserves a contact using specified parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ReserveContact">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReserveContactOutcomeCallable ReserveContactCallable(const Model::ReserveContactRequest& request) const;

        /**
         * <p>Reserves a contact using specified parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ReserveContact">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReserveContactAsync(const Model::ReserveContactRequest& request, const ReserveContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the <code>Config</code> used when scheduling contacts.</p>
        
         * <p>Updating a <code>Config</code> will not update the execution parameters
     
         * for existing future contacts scheduled with this
         * <code>Config</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/UpdateConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfigOutcome UpdateConfig(const Model::UpdateConfigRequest& request) const;

        /**
         * <p>Updates the <code>Config</code> used when scheduling contacts.</p>
        
         * <p>Updating a <code>Config</code> will not update the execution parameters
     
         * for existing future contacts scheduled with this
         * <code>Config</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/UpdateConfig">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConfigOutcomeCallable UpdateConfigCallable(const Model::UpdateConfigRequest& request) const;

        /**
         * <p>Updates the <code>Config</code> used when scheduling contacts.</p>
        
         * <p>Updating a <code>Config</code> will not update the execution parameters
     
         * for existing future contacts scheduled with this
         * <code>Config</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/UpdateConfig">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConfigAsync(const Model::UpdateConfigRequest& request, const UpdateConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a mission profile.</p>
         <p>Updating a mission profile will
         * not update the execution parameters
         for existing future
         * contacts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/UpdateMissionProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMissionProfileOutcome UpdateMissionProfile(const Model::UpdateMissionProfileRequest& request) const;

        /**
         * <p>Updates a mission profile.</p>
         <p>Updating a mission profile will
         * not update the execution parameters
         for existing future
         * contacts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/UpdateMissionProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMissionProfileOutcomeCallable UpdateMissionProfileCallable(const Model::UpdateMissionProfileRequest& request) const;

        /**
         * <p>Updates a mission profile.</p>
         <p>Updating a mission profile will
         * not update the execution parameters
         for existing future
         * contacts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/UpdateMissionProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMissionProfileAsync(const Model::UpdateMissionProfileRequest& request, const UpdateMissionProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the number of minutes used by account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetMinuteUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMinuteUsageOutcome GetMinuteUsage(const Model::GetMinuteUsageRequest& request) const;

        /**
         * <p>Returns the number of minutes used by account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetMinuteUsage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMinuteUsageOutcomeCallable GetMinuteUsageCallable(const Model::GetMinuteUsageRequest& request) const;

        /**
         * <p>Returns the number of minutes used by account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetMinuteUsage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMinuteUsageAsync(const Model::GetMinuteUsageRequest& request, const GetMinuteUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a satellite.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetSatellite">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSatelliteOutcome GetSatellite(const Model::GetSatelliteRequest& request) const;

        /**
         * <p>Returns a satellite.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetSatellite">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSatelliteOutcomeCallable GetSatelliteCallable(const Model::GetSatelliteRequest& request) const;

        /**
         * <p>Returns a satellite.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetSatellite">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSatelliteAsync(const Model::GetSatelliteRequest& request, const GetSatelliteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of ground stations. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListGroundStations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroundStationsOutcome ListGroundStations(const Model::ListGroundStationsRequest& request) const;

        /**
         * <p>Returns a list of ground stations. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListGroundStations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroundStationsOutcomeCallable ListGroundStationsCallable(const Model::ListGroundStationsRequest& request) const;

        /**
         * <p>Returns a list of ground stations. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListGroundStations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroundStationsAsync(const Model::ListGroundStationsRequest& request, const ListGroundStationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of satellites.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListSatellites">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSatellitesOutcome ListSatellites(const Model::ListSatellitesRequest& request) const;

        /**
         * <p>Returns a list of satellites.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListSatellites">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSatellitesOutcomeCallable ListSatellitesCallable(const Model::ListSatellitesRequest& request) const;

        /**
         * <p>Returns a list of satellites.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListSatellites">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSatellitesAsync(const Model::ListSatellitesRequest& request, const ListSatellitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of tags or a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns a list of tags or a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Returns a list of tags or a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns a tag to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Assigns a tag to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Assigns a tag to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deassigns a resource tag.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Deassigns a resource tag.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Deassigns a resource tag.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CancelContactAsyncHelper(const Model::CancelContactRequest& request, const CancelContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateConfigAsyncHelper(const Model::CreateConfigRequest& request, const CreateConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDataflowEndpointGroupAsyncHelper(const Model::CreateDataflowEndpointGroupRequest& request, const CreateDataflowEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMissionProfileAsyncHelper(const Model::CreateMissionProfileRequest& request, const CreateMissionProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteConfigAsyncHelper(const Model::DeleteConfigRequest& request, const DeleteConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDataflowEndpointGroupAsyncHelper(const Model::DeleteDataflowEndpointGroupRequest& request, const DeleteDataflowEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMissionProfileAsyncHelper(const Model::DeleteMissionProfileRequest& request, const DeleteMissionProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeContactAsyncHelper(const Model::DescribeContactRequest& request, const DescribeContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetConfigAsyncHelper(const Model::GetConfigRequest& request, const GetConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDataflowEndpointGroupAsyncHelper(const Model::GetDataflowEndpointGroupRequest& request, const GetDataflowEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMissionProfileAsyncHelper(const Model::GetMissionProfileRequest& request, const GetMissionProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListConfigsAsyncHelper(const Model::ListConfigsRequest& request, const ListConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListContactsAsyncHelper(const Model::ListContactsRequest& request, const ListContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDataflowEndpointGroupsAsyncHelper(const Model::ListDataflowEndpointGroupsRequest& request, const ListDataflowEndpointGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMissionProfilesAsyncHelper(const Model::ListMissionProfilesRequest& request, const ListMissionProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ReserveContactAsyncHelper(const Model::ReserveContactRequest& request, const ReserveContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateConfigAsyncHelper(const Model::UpdateConfigRequest& request, const UpdateConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMissionProfileAsyncHelper(const Model::UpdateMissionProfileRequest& request, const UpdateMissionProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetMinuteUsageAsyncHelper(const Model::GetMinuteUsageRequest& request, const GetMinuteUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSatelliteAsyncHelper(const Model::GetSatelliteRequest& request, const GetSatelliteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGroundStationsAsyncHelper(const Model::ListGroundStationsRequest& request, const ListGroundStationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSatellitesAsyncHelper(const Model::ListSatellitesRequest& request, const ListSatellitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace GroundStation
} // namespace Aws
