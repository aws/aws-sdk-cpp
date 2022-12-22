/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/GroundStationServiceClientModel.h>

namespace Aws
{
namespace GroundStation
{
  /**
   * <p>Welcome to the AWS Ground Station API Reference. AWS Ground Station is a
   * fully managed service that enables you to control satellite communications,
   * downlink and process satellite data, and scale your satellite operations
   * efficiently and cost-effectively without having to build or manage your own
   * ground station infrastructure.</p>
   */
  class AWS_GROUNDSTATION_API GroundStationClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<GroundStationClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GroundStationClient(const Aws::GroundStation::GroundStationClientConfiguration& clientConfiguration = Aws::GroundStation::GroundStationClientConfiguration(),
                            std::shared_ptr<GroundStationEndpointProviderBase> endpointProvider = Aws::MakeShared<GroundStationEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GroundStationClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<GroundStationEndpointProviderBase> endpointProvider = Aws::MakeShared<GroundStationEndpointProvider>(ALLOCATION_TAG),
                            const Aws::GroundStation::GroundStationClientConfiguration& clientConfiguration = Aws::GroundStation::GroundStationClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GroundStationClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<GroundStationEndpointProviderBase> endpointProvider = Aws::MakeShared<GroundStationEndpointProvider>(ALLOCATION_TAG),
                            const Aws::GroundStation::GroundStationClientConfiguration& clientConfiguration = Aws::GroundStation::GroundStationClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GroundStationClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GroundStationClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GroundStationClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~GroundStationClient();

        /**
         * <p>Cancels a contact with a specified contact ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/CancelContact">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelContactOutcome CancelContact(const Model::CancelContactRequest& request) const;

        /**
         * A Callable wrapper for CancelContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelContactOutcomeCallable CancelContactCallable(const Model::CancelContactRequest& request) const;

        /**
         * An Async wrapper for CancelContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelContactAsync(const Model::CancelContactRequest& request, const CancelContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <code>Config</code> with the specified <code>configData</code>
         * parameters.</p> <p>Only one type of <code>configData</code> can be
         * specified.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/CreateConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConfigOutcome CreateConfig(const Model::CreateConfigRequest& request) const;

        /**
         * A Callable wrapper for CreateConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConfigOutcomeCallable CreateConfigCallable(const Model::CreateConfigRequest& request) const;

        /**
         * An Async wrapper for CreateConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConfigAsync(const Model::CreateConfigRequest& request, const CreateConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a <code>DataflowEndpoint</code> group containing the specified list
         * of <code>DataflowEndpoint</code> objects.</p> <p>The <code>name</code> field in
         * each endpoint is used in your mission profile
         * <code>DataflowEndpointConfig</code> to specify which endpoints to use during a
         * contact.</p> <p>When a contact uses multiple <code>DataflowEndpointConfig</code>
         * objects, each <code>Config</code> must match a <code>DataflowEndpoint</code> in
         * the same group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/CreateDataflowEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataflowEndpointGroupOutcome CreateDataflowEndpointGroup(const Model::CreateDataflowEndpointGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateDataflowEndpointGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDataflowEndpointGroupOutcomeCallable CreateDataflowEndpointGroupCallable(const Model::CreateDataflowEndpointGroupRequest& request) const;

        /**
         * An Async wrapper for CreateDataflowEndpointGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDataflowEndpointGroupAsync(const Model::CreateDataflowEndpointGroupRequest& request, const CreateDataflowEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Ephemeris with the specified
         * <code>EphemerisData</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/CreateEphemeris">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEphemerisOutcome CreateEphemeris(const Model::CreateEphemerisRequest& request) const;

        /**
         * A Callable wrapper for CreateEphemeris that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateEphemerisOutcomeCallable CreateEphemerisCallable(const Model::CreateEphemerisRequest& request) const;

        /**
         * An Async wrapper for CreateEphemeris that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateEphemerisAsync(const Model::CreateEphemerisRequest& request, const CreateEphemerisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a mission profile.</p> <p> <code>dataflowEdges</code> is a list of
         * lists of strings. Each lower level list of strings has two elements: a
         * <i>from</i> ARN and a <i>to</i> ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/CreateMissionProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMissionProfileOutcome CreateMissionProfile(const Model::CreateMissionProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateMissionProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMissionProfileOutcomeCallable CreateMissionProfileCallable(const Model::CreateMissionProfileRequest& request) const;

        /**
         * An Async wrapper for CreateMissionProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMissionProfileAsync(const Model::CreateMissionProfileRequest& request, const CreateMissionProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a <code>Config</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DeleteConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigOutcome DeleteConfig(const Model::DeleteConfigRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConfigOutcomeCallable DeleteConfigCallable(const Model::DeleteConfigRequest& request) const;

        /**
         * An Async wrapper for DeleteConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConfigAsync(const Model::DeleteConfigRequest& request, const DeleteConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a dataflow endpoint group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DeleteDataflowEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataflowEndpointGroupOutcome DeleteDataflowEndpointGroup(const Model::DeleteDataflowEndpointGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataflowEndpointGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDataflowEndpointGroupOutcomeCallable DeleteDataflowEndpointGroupCallable(const Model::DeleteDataflowEndpointGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteDataflowEndpointGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDataflowEndpointGroupAsync(const Model::DeleteDataflowEndpointGroupRequest& request, const DeleteDataflowEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an ephemeris</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DeleteEphemeris">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEphemerisOutcome DeleteEphemeris(const Model::DeleteEphemerisRequest& request) const;

        /**
         * A Callable wrapper for DeleteEphemeris that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteEphemerisOutcomeCallable DeleteEphemerisCallable(const Model::DeleteEphemerisRequest& request) const;

        /**
         * An Async wrapper for DeleteEphemeris that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteEphemerisAsync(const Model::DeleteEphemerisRequest& request, const DeleteEphemerisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a mission profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DeleteMissionProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMissionProfileOutcome DeleteMissionProfile(const Model::DeleteMissionProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteMissionProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMissionProfileOutcomeCallable DeleteMissionProfileCallable(const Model::DeleteMissionProfileRequest& request) const;

        /**
         * An Async wrapper for DeleteMissionProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMissionProfileAsync(const Model::DeleteMissionProfileRequest& request, const DeleteMissionProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an existing contact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DescribeContact">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeContactOutcome DescribeContact(const Model::DescribeContactRequest& request) const;

        /**
         * A Callable wrapper for DescribeContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeContactOutcomeCallable DescribeContactCallable(const Model::DescribeContactRequest& request) const;

        /**
         * An Async wrapper for DescribeContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeContactAsync(const Model::DescribeContactRequest& request, const DescribeContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an existing ephemeris.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DescribeEphemeris">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEphemerisOutcome DescribeEphemeris(const Model::DescribeEphemerisRequest& request) const;

        /**
         * A Callable wrapper for DescribeEphemeris that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEphemerisOutcomeCallable DescribeEphemerisCallable(const Model::DescribeEphemerisRequest& request) const;

        /**
         * An Async wrapper for DescribeEphemeris that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEphemerisAsync(const Model::DescribeEphemerisRequest& request, const DescribeEphemerisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns <code>Config</code> information.</p> <p>Only one <code>Config</code>
         * response can be returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConfigOutcome GetConfig(const Model::GetConfigRequest& request) const;

        /**
         * A Callable wrapper for GetConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConfigOutcomeCallable GetConfigCallable(const Model::GetConfigRequest& request) const;

        /**
         * An Async wrapper for GetConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConfigAsync(const Model::GetConfigRequest& request, const GetConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the dataflow endpoint group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetDataflowEndpointGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDataflowEndpointGroupOutcome GetDataflowEndpointGroup(const Model::GetDataflowEndpointGroupRequest& request) const;

        /**
         * A Callable wrapper for GetDataflowEndpointGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDataflowEndpointGroupOutcomeCallable GetDataflowEndpointGroupCallable(const Model::GetDataflowEndpointGroupRequest& request) const;

        /**
         * An Async wrapper for GetDataflowEndpointGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDataflowEndpointGroupAsync(const Model::GetDataflowEndpointGroupRequest& request, const GetDataflowEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the number of minutes used by account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetMinuteUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMinuteUsageOutcome GetMinuteUsage(const Model::GetMinuteUsageRequest& request) const;

        /**
         * A Callable wrapper for GetMinuteUsage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMinuteUsageOutcomeCallable GetMinuteUsageCallable(const Model::GetMinuteUsageRequest& request) const;

        /**
         * An Async wrapper for GetMinuteUsage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMinuteUsageAsync(const Model::GetMinuteUsageRequest& request, const GetMinuteUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a mission profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetMissionProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMissionProfileOutcome GetMissionProfile(const Model::GetMissionProfileRequest& request) const;

        /**
         * A Callable wrapper for GetMissionProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMissionProfileOutcomeCallable GetMissionProfileCallable(const Model::GetMissionProfileRequest& request) const;

        /**
         * An Async wrapper for GetMissionProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMissionProfileAsync(const Model::GetMissionProfileRequest& request, const GetMissionProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a satellite.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/GetSatellite">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSatelliteOutcome GetSatellite(const Model::GetSatelliteRequest& request) const;

        /**
         * A Callable wrapper for GetSatellite that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSatelliteOutcomeCallable GetSatelliteCallable(const Model::GetSatelliteRequest& request) const;

        /**
         * An Async wrapper for GetSatellite that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSatelliteAsync(const Model::GetSatelliteRequest& request, const GetSatelliteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of <code>Config</code> objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfigsOutcome ListConfigs(const Model::ListConfigsRequest& request) const;

        /**
         * A Callable wrapper for ListConfigs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConfigsOutcomeCallable ListConfigsCallable(const Model::ListConfigsRequest& request) const;

        /**
         * An Async wrapper for ListConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConfigsAsync(const Model::ListConfigsRequest& request, const ListConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of contacts.</p> <p>If <code>statusList</code> contains
         * AVAILABLE, the request must include <code>groundStation</code>,
         * <code>missionprofileArn</code>, and <code>satelliteArn</code>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListContacts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListContactsOutcome ListContacts(const Model::ListContactsRequest& request) const;

        /**
         * A Callable wrapper for ListContacts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListContactsOutcomeCallable ListContactsCallable(const Model::ListContactsRequest& request) const;

        /**
         * An Async wrapper for ListContacts that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListDataflowEndpointGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDataflowEndpointGroupsOutcomeCallable ListDataflowEndpointGroupsCallable(const Model::ListDataflowEndpointGroupsRequest& request) const;

        /**
         * An Async wrapper for ListDataflowEndpointGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDataflowEndpointGroupsAsync(const Model::ListDataflowEndpointGroupsRequest& request, const ListDataflowEndpointGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List existing ephemerides.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListEphemerides">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEphemeridesOutcome ListEphemerides(const Model::ListEphemeridesRequest& request) const;

        /**
         * A Callable wrapper for ListEphemerides that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEphemeridesOutcomeCallable ListEphemeridesCallable(const Model::ListEphemeridesRequest& request) const;

        /**
         * An Async wrapper for ListEphemerides that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEphemeridesAsync(const Model::ListEphemeridesRequest& request, const ListEphemeridesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of ground stations. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListGroundStations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroundStationsOutcome ListGroundStations(const Model::ListGroundStationsRequest& request) const;

        /**
         * A Callable wrapper for ListGroundStations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroundStationsOutcomeCallable ListGroundStationsCallable(const Model::ListGroundStationsRequest& request) const;

        /**
         * An Async wrapper for ListGroundStations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroundStationsAsync(const Model::ListGroundStationsRequest& request, const ListGroundStationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of mission profiles.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListMissionProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMissionProfilesOutcome ListMissionProfiles(const Model::ListMissionProfilesRequest& request) const;

        /**
         * A Callable wrapper for ListMissionProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMissionProfilesOutcomeCallable ListMissionProfilesCallable(const Model::ListMissionProfilesRequest& request) const;

        /**
         * An Async wrapper for ListMissionProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMissionProfilesAsync(const Model::ListMissionProfilesRequest& request, const ListMissionProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of satellites.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListSatellites">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSatellitesOutcome ListSatellites(const Model::ListSatellitesRequest& request) const;

        /**
         * A Callable wrapper for ListSatellites that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSatellitesOutcomeCallable ListSatellitesCallable(const Model::ListSatellitesRequest& request) const;

        /**
         * An Async wrapper for ListSatellites that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSatellitesAsync(const Model::ListSatellitesRequest& request, const ListSatellitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of tags for a specified resource.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListTagsForResource">AWS
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
         * <p>Reserves a contact using specified parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ReserveContact">AWS
         * API Reference</a></p>
         */
        virtual Model::ReserveContactOutcome ReserveContact(const Model::ReserveContactRequest& request) const;

        /**
         * A Callable wrapper for ReserveContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReserveContactOutcomeCallable ReserveContactCallable(const Model::ReserveContactRequest& request) const;

        /**
         * An Async wrapper for ReserveContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReserveContactAsync(const Model::ReserveContactRequest& request, const ReserveContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns a tag to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/TagResource">AWS
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
         * <p>Deassigns a resource tag.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/UntagResource">AWS
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
         * <p>Updates the <code>Config</code> used when scheduling contacts.</p>
         * <p>Updating a <code>Config</code> will not update the execution parameters for
         * existing future contacts scheduled with this <code>Config</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/UpdateConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConfigOutcome UpdateConfig(const Model::UpdateConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConfigOutcomeCallable UpdateConfigCallable(const Model::UpdateConfigRequest& request) const;

        /**
         * An Async wrapper for UpdateConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConfigAsync(const Model::UpdateConfigRequest& request, const UpdateConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing ephemeris</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/UpdateEphemeris">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEphemerisOutcome UpdateEphemeris(const Model::UpdateEphemerisRequest& request) const;

        /**
         * A Callable wrapper for UpdateEphemeris that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEphemerisOutcomeCallable UpdateEphemerisCallable(const Model::UpdateEphemerisRequest& request) const;

        /**
         * An Async wrapper for UpdateEphemeris that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEphemerisAsync(const Model::UpdateEphemerisRequest& request, const UpdateEphemerisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a mission profile.</p> <p>Updating a mission profile will not update
         * the execution parameters for existing future contacts.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/UpdateMissionProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMissionProfileOutcome UpdateMissionProfile(const Model::UpdateMissionProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateMissionProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMissionProfileOutcomeCallable UpdateMissionProfileCallable(const Model::UpdateMissionProfileRequest& request) const;

        /**
         * An Async wrapper for UpdateMissionProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMissionProfileAsync(const Model::UpdateMissionProfileRequest& request, const UpdateMissionProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<GroundStationEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<GroundStationClient>;
      void init(const GroundStationClientConfiguration& clientConfiguration);

      GroundStationClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<GroundStationEndpointProviderBase> m_endpointProvider;
  };

} // namespace GroundStation
} // namespace Aws
