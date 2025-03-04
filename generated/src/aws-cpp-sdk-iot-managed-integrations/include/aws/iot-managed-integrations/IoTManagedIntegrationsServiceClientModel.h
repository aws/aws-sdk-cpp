/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/iot-managed-integrations/IoTManagedIntegrationsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in IoTManagedIntegrationsClient header */
#include <aws/iot-managed-integrations/model/CreateCredentialLockerResult.h>
#include <aws/iot-managed-integrations/model/CreateDestinationResult.h>
#include <aws/iot-managed-integrations/model/CreateEventLogConfigurationResult.h>
#include <aws/iot-managed-integrations/model/CreateManagedThingResult.h>
#include <aws/iot-managed-integrations/model/CreateNotificationConfigurationResult.h>
#include <aws/iot-managed-integrations/model/CreateOtaTaskResult.h>
#include <aws/iot-managed-integrations/model/CreateOtaTaskConfigurationResult.h>
#include <aws/iot-managed-integrations/model/CreateProvisioningProfileResult.h>
#include <aws/iot-managed-integrations/model/GetCredentialLockerResult.h>
#include <aws/iot-managed-integrations/model/GetCustomEndpointResult.h>
#include <aws/iot-managed-integrations/model/GetDefaultEncryptionConfigurationResult.h>
#include <aws/iot-managed-integrations/model/GetDestinationResult.h>
#include <aws/iot-managed-integrations/model/GetDeviceDiscoveryResult.h>
#include <aws/iot-managed-integrations/model/GetEventLogConfigurationResult.h>
#include <aws/iot-managed-integrations/model/GetHubConfigurationResult.h>
#include <aws/iot-managed-integrations/model/GetManagedThingResult.h>
#include <aws/iot-managed-integrations/model/GetManagedThingCapabilitiesResult.h>
#include <aws/iot-managed-integrations/model/GetManagedThingConnectivityDataResult.h>
#include <aws/iot-managed-integrations/model/GetManagedThingMetaDataResult.h>
#include <aws/iot-managed-integrations/model/GetManagedThingStateResult.h>
#include <aws/iot-managed-integrations/model/GetNotificationConfigurationResult.h>
#include <aws/iot-managed-integrations/model/GetOtaTaskResult.h>
#include <aws/iot-managed-integrations/model/GetOtaTaskConfigurationResult.h>
#include <aws/iot-managed-integrations/model/GetProvisioningProfileResult.h>
#include <aws/iot-managed-integrations/model/GetRuntimeLogConfigurationResult.h>
#include <aws/iot-managed-integrations/model/GetSchemaVersionResult.h>
#include <aws/iot-managed-integrations/model/ListCredentialLockersResult.h>
#include <aws/iot-managed-integrations/model/ListDestinationsResult.h>
#include <aws/iot-managed-integrations/model/ListEventLogConfigurationsResult.h>
#include <aws/iot-managed-integrations/model/ListManagedThingSchemasResult.h>
#include <aws/iot-managed-integrations/model/ListManagedThingsResult.h>
#include <aws/iot-managed-integrations/model/ListNotificationConfigurationsResult.h>
#include <aws/iot-managed-integrations/model/ListOtaTaskConfigurationsResult.h>
#include <aws/iot-managed-integrations/model/ListOtaTaskExecutionsResult.h>
#include <aws/iot-managed-integrations/model/ListOtaTasksResult.h>
#include <aws/iot-managed-integrations/model/ListProvisioningProfilesResult.h>
#include <aws/iot-managed-integrations/model/ListSchemaVersionsResult.h>
#include <aws/iot-managed-integrations/model/PutDefaultEncryptionConfigurationResult.h>
#include <aws/iot-managed-integrations/model/PutHubConfigurationResult.h>
#include <aws/iot-managed-integrations/model/RegisterCustomEndpointResult.h>
#include <aws/iot-managed-integrations/model/SendManagedThingCommandResult.h>
#include <aws/iot-managed-integrations/model/StartDeviceDiscoveryResult.h>
#include <aws/iot-managed-integrations/model/RegisterCustomEndpointRequest.h>
#include <aws/iot-managed-integrations/model/ListProvisioningProfilesRequest.h>
#include <aws/iot-managed-integrations/model/ListEventLogConfigurationsRequest.h>
#include <aws/iot-managed-integrations/model/ListOtaTaskConfigurationsRequest.h>
#include <aws/iot-managed-integrations/model/ListCredentialLockersRequest.h>
#include <aws/iot-managed-integrations/model/CreateOtaTaskConfigurationRequest.h>
#include <aws/iot-managed-integrations/model/GetCustomEndpointRequest.h>
#include <aws/iot-managed-integrations/model/CreateCredentialLockerRequest.h>
#include <aws/iot-managed-integrations/model/GetDefaultEncryptionConfigurationRequest.h>
#include <aws/iot-managed-integrations/model/ListManagedThingsRequest.h>
#include <aws/iot-managed-integrations/model/GetHubConfigurationRequest.h>
#include <aws/iot-managed-integrations/model/ListDestinationsRequest.h>
#include <aws/iot-managed-integrations/model/ListOtaTasksRequest.h>
#include <aws/iot-managed-integrations/model/ListNotificationConfigurationsRequest.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in IoTManagedIntegrationsClient header */

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

  namespace IoTManagedIntegrations
  {
    using IoTManagedIntegrationsClientConfiguration = Aws::Client::GenericClientConfiguration;
    using IoTManagedIntegrationsEndpointProviderBase = Aws::IoTManagedIntegrations::Endpoint::IoTManagedIntegrationsEndpointProviderBase;
    using IoTManagedIntegrationsEndpointProvider = Aws::IoTManagedIntegrations::Endpoint::IoTManagedIntegrationsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in IoTManagedIntegrationsClient header */
      class CreateCredentialLockerRequest;
      class CreateDestinationRequest;
      class CreateEventLogConfigurationRequest;
      class CreateManagedThingRequest;
      class CreateNotificationConfigurationRequest;
      class CreateOtaTaskRequest;
      class CreateOtaTaskConfigurationRequest;
      class CreateProvisioningProfileRequest;
      class DeleteCredentialLockerRequest;
      class DeleteDestinationRequest;
      class DeleteEventLogConfigurationRequest;
      class DeleteManagedThingRequest;
      class DeleteNotificationConfigurationRequest;
      class DeleteOtaTaskRequest;
      class DeleteOtaTaskConfigurationRequest;
      class DeleteProvisioningProfileRequest;
      class GetCredentialLockerRequest;
      class GetCustomEndpointRequest;
      class GetDefaultEncryptionConfigurationRequest;
      class GetDestinationRequest;
      class GetDeviceDiscoveryRequest;
      class GetEventLogConfigurationRequest;
      class GetHubConfigurationRequest;
      class GetManagedThingRequest;
      class GetManagedThingCapabilitiesRequest;
      class GetManagedThingConnectivityDataRequest;
      class GetManagedThingMetaDataRequest;
      class GetManagedThingStateRequest;
      class GetNotificationConfigurationRequest;
      class GetOtaTaskRequest;
      class GetOtaTaskConfigurationRequest;
      class GetProvisioningProfileRequest;
      class GetRuntimeLogConfigurationRequest;
      class GetSchemaVersionRequest;
      class ListCredentialLockersRequest;
      class ListDestinationsRequest;
      class ListEventLogConfigurationsRequest;
      class ListManagedThingSchemasRequest;
      class ListManagedThingsRequest;
      class ListNotificationConfigurationsRequest;
      class ListOtaTaskConfigurationsRequest;
      class ListOtaTaskExecutionsRequest;
      class ListOtaTasksRequest;
      class ListProvisioningProfilesRequest;
      class ListSchemaVersionsRequest;
      class PutDefaultEncryptionConfigurationRequest;
      class PutHubConfigurationRequest;
      class PutRuntimeLogConfigurationRequest;
      class RegisterCustomEndpointRequest;
      class ResetRuntimeLogConfigurationRequest;
      class SendManagedThingCommandRequest;
      class StartDeviceDiscoveryRequest;
      class UpdateDestinationRequest;
      class UpdateEventLogConfigurationRequest;
      class UpdateManagedThingRequest;
      class UpdateNotificationConfigurationRequest;
      class UpdateOtaTaskRequest;
      /* End of service model forward declarations required in IoTManagedIntegrationsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateCredentialLockerResult, IoTManagedIntegrationsError> CreateCredentialLockerOutcome;
      typedef Aws::Utils::Outcome<CreateDestinationResult, IoTManagedIntegrationsError> CreateDestinationOutcome;
      typedef Aws::Utils::Outcome<CreateEventLogConfigurationResult, IoTManagedIntegrationsError> CreateEventLogConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreateManagedThingResult, IoTManagedIntegrationsError> CreateManagedThingOutcome;
      typedef Aws::Utils::Outcome<CreateNotificationConfigurationResult, IoTManagedIntegrationsError> CreateNotificationConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreateOtaTaskResult, IoTManagedIntegrationsError> CreateOtaTaskOutcome;
      typedef Aws::Utils::Outcome<CreateOtaTaskConfigurationResult, IoTManagedIntegrationsError> CreateOtaTaskConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreateProvisioningProfileResult, IoTManagedIntegrationsError> CreateProvisioningProfileOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTManagedIntegrationsError> DeleteCredentialLockerOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTManagedIntegrationsError> DeleteDestinationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTManagedIntegrationsError> DeleteEventLogConfigurationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTManagedIntegrationsError> DeleteManagedThingOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTManagedIntegrationsError> DeleteNotificationConfigurationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTManagedIntegrationsError> DeleteOtaTaskOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTManagedIntegrationsError> DeleteOtaTaskConfigurationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTManagedIntegrationsError> DeleteProvisioningProfileOutcome;
      typedef Aws::Utils::Outcome<GetCredentialLockerResult, IoTManagedIntegrationsError> GetCredentialLockerOutcome;
      typedef Aws::Utils::Outcome<GetCustomEndpointResult, IoTManagedIntegrationsError> GetCustomEndpointOutcome;
      typedef Aws::Utils::Outcome<GetDefaultEncryptionConfigurationResult, IoTManagedIntegrationsError> GetDefaultEncryptionConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetDestinationResult, IoTManagedIntegrationsError> GetDestinationOutcome;
      typedef Aws::Utils::Outcome<GetDeviceDiscoveryResult, IoTManagedIntegrationsError> GetDeviceDiscoveryOutcome;
      typedef Aws::Utils::Outcome<GetEventLogConfigurationResult, IoTManagedIntegrationsError> GetEventLogConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetHubConfigurationResult, IoTManagedIntegrationsError> GetHubConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetManagedThingResult, IoTManagedIntegrationsError> GetManagedThingOutcome;
      typedef Aws::Utils::Outcome<GetManagedThingCapabilitiesResult, IoTManagedIntegrationsError> GetManagedThingCapabilitiesOutcome;
      typedef Aws::Utils::Outcome<GetManagedThingConnectivityDataResult, IoTManagedIntegrationsError> GetManagedThingConnectivityDataOutcome;
      typedef Aws::Utils::Outcome<GetManagedThingMetaDataResult, IoTManagedIntegrationsError> GetManagedThingMetaDataOutcome;
      typedef Aws::Utils::Outcome<GetManagedThingStateResult, IoTManagedIntegrationsError> GetManagedThingStateOutcome;
      typedef Aws::Utils::Outcome<GetNotificationConfigurationResult, IoTManagedIntegrationsError> GetNotificationConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetOtaTaskResult, IoTManagedIntegrationsError> GetOtaTaskOutcome;
      typedef Aws::Utils::Outcome<GetOtaTaskConfigurationResult, IoTManagedIntegrationsError> GetOtaTaskConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetProvisioningProfileResult, IoTManagedIntegrationsError> GetProvisioningProfileOutcome;
      typedef Aws::Utils::Outcome<GetRuntimeLogConfigurationResult, IoTManagedIntegrationsError> GetRuntimeLogConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetSchemaVersionResult, IoTManagedIntegrationsError> GetSchemaVersionOutcome;
      typedef Aws::Utils::Outcome<ListCredentialLockersResult, IoTManagedIntegrationsError> ListCredentialLockersOutcome;
      typedef Aws::Utils::Outcome<ListDestinationsResult, IoTManagedIntegrationsError> ListDestinationsOutcome;
      typedef Aws::Utils::Outcome<ListEventLogConfigurationsResult, IoTManagedIntegrationsError> ListEventLogConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListManagedThingSchemasResult, IoTManagedIntegrationsError> ListManagedThingSchemasOutcome;
      typedef Aws::Utils::Outcome<ListManagedThingsResult, IoTManagedIntegrationsError> ListManagedThingsOutcome;
      typedef Aws::Utils::Outcome<ListNotificationConfigurationsResult, IoTManagedIntegrationsError> ListNotificationConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListOtaTaskConfigurationsResult, IoTManagedIntegrationsError> ListOtaTaskConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListOtaTaskExecutionsResult, IoTManagedIntegrationsError> ListOtaTaskExecutionsOutcome;
      typedef Aws::Utils::Outcome<ListOtaTasksResult, IoTManagedIntegrationsError> ListOtaTasksOutcome;
      typedef Aws::Utils::Outcome<ListProvisioningProfilesResult, IoTManagedIntegrationsError> ListProvisioningProfilesOutcome;
      typedef Aws::Utils::Outcome<ListSchemaVersionsResult, IoTManagedIntegrationsError> ListSchemaVersionsOutcome;
      typedef Aws::Utils::Outcome<PutDefaultEncryptionConfigurationResult, IoTManagedIntegrationsError> PutDefaultEncryptionConfigurationOutcome;
      typedef Aws::Utils::Outcome<PutHubConfigurationResult, IoTManagedIntegrationsError> PutHubConfigurationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTManagedIntegrationsError> PutRuntimeLogConfigurationOutcome;
      typedef Aws::Utils::Outcome<RegisterCustomEndpointResult, IoTManagedIntegrationsError> RegisterCustomEndpointOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTManagedIntegrationsError> ResetRuntimeLogConfigurationOutcome;
      typedef Aws::Utils::Outcome<SendManagedThingCommandResult, IoTManagedIntegrationsError> SendManagedThingCommandOutcome;
      typedef Aws::Utils::Outcome<StartDeviceDiscoveryResult, IoTManagedIntegrationsError> StartDeviceDiscoveryOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTManagedIntegrationsError> UpdateDestinationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTManagedIntegrationsError> UpdateEventLogConfigurationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTManagedIntegrationsError> UpdateManagedThingOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTManagedIntegrationsError> UpdateNotificationConfigurationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, IoTManagedIntegrationsError> UpdateOtaTaskOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateCredentialLockerOutcome> CreateCredentialLockerOutcomeCallable;
      typedef std::future<CreateDestinationOutcome> CreateDestinationOutcomeCallable;
      typedef std::future<CreateEventLogConfigurationOutcome> CreateEventLogConfigurationOutcomeCallable;
      typedef std::future<CreateManagedThingOutcome> CreateManagedThingOutcomeCallable;
      typedef std::future<CreateNotificationConfigurationOutcome> CreateNotificationConfigurationOutcomeCallable;
      typedef std::future<CreateOtaTaskOutcome> CreateOtaTaskOutcomeCallable;
      typedef std::future<CreateOtaTaskConfigurationOutcome> CreateOtaTaskConfigurationOutcomeCallable;
      typedef std::future<CreateProvisioningProfileOutcome> CreateProvisioningProfileOutcomeCallable;
      typedef std::future<DeleteCredentialLockerOutcome> DeleteCredentialLockerOutcomeCallable;
      typedef std::future<DeleteDestinationOutcome> DeleteDestinationOutcomeCallable;
      typedef std::future<DeleteEventLogConfigurationOutcome> DeleteEventLogConfigurationOutcomeCallable;
      typedef std::future<DeleteManagedThingOutcome> DeleteManagedThingOutcomeCallable;
      typedef std::future<DeleteNotificationConfigurationOutcome> DeleteNotificationConfigurationOutcomeCallable;
      typedef std::future<DeleteOtaTaskOutcome> DeleteOtaTaskOutcomeCallable;
      typedef std::future<DeleteOtaTaskConfigurationOutcome> DeleteOtaTaskConfigurationOutcomeCallable;
      typedef std::future<DeleteProvisioningProfileOutcome> DeleteProvisioningProfileOutcomeCallable;
      typedef std::future<GetCredentialLockerOutcome> GetCredentialLockerOutcomeCallable;
      typedef std::future<GetCustomEndpointOutcome> GetCustomEndpointOutcomeCallable;
      typedef std::future<GetDefaultEncryptionConfigurationOutcome> GetDefaultEncryptionConfigurationOutcomeCallable;
      typedef std::future<GetDestinationOutcome> GetDestinationOutcomeCallable;
      typedef std::future<GetDeviceDiscoveryOutcome> GetDeviceDiscoveryOutcomeCallable;
      typedef std::future<GetEventLogConfigurationOutcome> GetEventLogConfigurationOutcomeCallable;
      typedef std::future<GetHubConfigurationOutcome> GetHubConfigurationOutcomeCallable;
      typedef std::future<GetManagedThingOutcome> GetManagedThingOutcomeCallable;
      typedef std::future<GetManagedThingCapabilitiesOutcome> GetManagedThingCapabilitiesOutcomeCallable;
      typedef std::future<GetManagedThingConnectivityDataOutcome> GetManagedThingConnectivityDataOutcomeCallable;
      typedef std::future<GetManagedThingMetaDataOutcome> GetManagedThingMetaDataOutcomeCallable;
      typedef std::future<GetManagedThingStateOutcome> GetManagedThingStateOutcomeCallable;
      typedef std::future<GetNotificationConfigurationOutcome> GetNotificationConfigurationOutcomeCallable;
      typedef std::future<GetOtaTaskOutcome> GetOtaTaskOutcomeCallable;
      typedef std::future<GetOtaTaskConfigurationOutcome> GetOtaTaskConfigurationOutcomeCallable;
      typedef std::future<GetProvisioningProfileOutcome> GetProvisioningProfileOutcomeCallable;
      typedef std::future<GetRuntimeLogConfigurationOutcome> GetRuntimeLogConfigurationOutcomeCallable;
      typedef std::future<GetSchemaVersionOutcome> GetSchemaVersionOutcomeCallable;
      typedef std::future<ListCredentialLockersOutcome> ListCredentialLockersOutcomeCallable;
      typedef std::future<ListDestinationsOutcome> ListDestinationsOutcomeCallable;
      typedef std::future<ListEventLogConfigurationsOutcome> ListEventLogConfigurationsOutcomeCallable;
      typedef std::future<ListManagedThingSchemasOutcome> ListManagedThingSchemasOutcomeCallable;
      typedef std::future<ListManagedThingsOutcome> ListManagedThingsOutcomeCallable;
      typedef std::future<ListNotificationConfigurationsOutcome> ListNotificationConfigurationsOutcomeCallable;
      typedef std::future<ListOtaTaskConfigurationsOutcome> ListOtaTaskConfigurationsOutcomeCallable;
      typedef std::future<ListOtaTaskExecutionsOutcome> ListOtaTaskExecutionsOutcomeCallable;
      typedef std::future<ListOtaTasksOutcome> ListOtaTasksOutcomeCallable;
      typedef std::future<ListProvisioningProfilesOutcome> ListProvisioningProfilesOutcomeCallable;
      typedef std::future<ListSchemaVersionsOutcome> ListSchemaVersionsOutcomeCallable;
      typedef std::future<PutDefaultEncryptionConfigurationOutcome> PutDefaultEncryptionConfigurationOutcomeCallable;
      typedef std::future<PutHubConfigurationOutcome> PutHubConfigurationOutcomeCallable;
      typedef std::future<PutRuntimeLogConfigurationOutcome> PutRuntimeLogConfigurationOutcomeCallable;
      typedef std::future<RegisterCustomEndpointOutcome> RegisterCustomEndpointOutcomeCallable;
      typedef std::future<ResetRuntimeLogConfigurationOutcome> ResetRuntimeLogConfigurationOutcomeCallable;
      typedef std::future<SendManagedThingCommandOutcome> SendManagedThingCommandOutcomeCallable;
      typedef std::future<StartDeviceDiscoveryOutcome> StartDeviceDiscoveryOutcomeCallable;
      typedef std::future<UpdateDestinationOutcome> UpdateDestinationOutcomeCallable;
      typedef std::future<UpdateEventLogConfigurationOutcome> UpdateEventLogConfigurationOutcomeCallable;
      typedef std::future<UpdateManagedThingOutcome> UpdateManagedThingOutcomeCallable;
      typedef std::future<UpdateNotificationConfigurationOutcome> UpdateNotificationConfigurationOutcomeCallable;
      typedef std::future<UpdateOtaTaskOutcome> UpdateOtaTaskOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class IoTManagedIntegrationsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::CreateCredentialLockerRequest&, const Model::CreateCredentialLockerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCredentialLockerResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::CreateDestinationRequest&, const Model::CreateDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDestinationResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::CreateEventLogConfigurationRequest&, const Model::CreateEventLogConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEventLogConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::CreateManagedThingRequest&, const Model::CreateManagedThingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateManagedThingResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::CreateNotificationConfigurationRequest&, const Model::CreateNotificationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNotificationConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::CreateOtaTaskRequest&, const Model::CreateOtaTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOtaTaskResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::CreateOtaTaskConfigurationRequest&, const Model::CreateOtaTaskConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOtaTaskConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::CreateProvisioningProfileRequest&, const Model::CreateProvisioningProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProvisioningProfileResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::DeleteCredentialLockerRequest&, const Model::DeleteCredentialLockerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCredentialLockerResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::DeleteDestinationRequest&, const Model::DeleteDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDestinationResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::DeleteEventLogConfigurationRequest&, const Model::DeleteEventLogConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventLogConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::DeleteManagedThingRequest&, const Model::DeleteManagedThingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteManagedThingResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::DeleteNotificationConfigurationRequest&, const Model::DeleteNotificationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNotificationConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::DeleteOtaTaskRequest&, const Model::DeleteOtaTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOtaTaskResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::DeleteOtaTaskConfigurationRequest&, const Model::DeleteOtaTaskConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOtaTaskConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::DeleteProvisioningProfileRequest&, const Model::DeleteProvisioningProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProvisioningProfileResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::GetCredentialLockerRequest&, const Model::GetCredentialLockerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCredentialLockerResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::GetCustomEndpointRequest&, const Model::GetCustomEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCustomEndpointResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::GetDefaultEncryptionConfigurationRequest&, const Model::GetDefaultEncryptionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDefaultEncryptionConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::GetDestinationRequest&, const Model::GetDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDestinationResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::GetDeviceDiscoveryRequest&, const Model::GetDeviceDiscoveryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeviceDiscoveryResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::GetEventLogConfigurationRequest&, const Model::GetEventLogConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEventLogConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::GetHubConfigurationRequest&, const Model::GetHubConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetHubConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::GetManagedThingRequest&, const Model::GetManagedThingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetManagedThingResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::GetManagedThingCapabilitiesRequest&, const Model::GetManagedThingCapabilitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetManagedThingCapabilitiesResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::GetManagedThingConnectivityDataRequest&, const Model::GetManagedThingConnectivityDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetManagedThingConnectivityDataResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::GetManagedThingMetaDataRequest&, const Model::GetManagedThingMetaDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetManagedThingMetaDataResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::GetManagedThingStateRequest&, const Model::GetManagedThingStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetManagedThingStateResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::GetNotificationConfigurationRequest&, const Model::GetNotificationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNotificationConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::GetOtaTaskRequest&, const Model::GetOtaTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOtaTaskResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::GetOtaTaskConfigurationRequest&, const Model::GetOtaTaskConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOtaTaskConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::GetProvisioningProfileRequest&, const Model::GetProvisioningProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProvisioningProfileResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::GetRuntimeLogConfigurationRequest&, const Model::GetRuntimeLogConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRuntimeLogConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::GetSchemaVersionRequest&, const Model::GetSchemaVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSchemaVersionResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::ListCredentialLockersRequest&, const Model::ListCredentialLockersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCredentialLockersResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::ListDestinationsRequest&, const Model::ListDestinationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDestinationsResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::ListEventLogConfigurationsRequest&, const Model::ListEventLogConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventLogConfigurationsResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::ListManagedThingSchemasRequest&, const Model::ListManagedThingSchemasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListManagedThingSchemasResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::ListManagedThingsRequest&, const Model::ListManagedThingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListManagedThingsResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::ListNotificationConfigurationsRequest&, const Model::ListNotificationConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNotificationConfigurationsResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::ListOtaTaskConfigurationsRequest&, const Model::ListOtaTaskConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOtaTaskConfigurationsResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::ListOtaTaskExecutionsRequest&, const Model::ListOtaTaskExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOtaTaskExecutionsResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::ListOtaTasksRequest&, const Model::ListOtaTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOtaTasksResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::ListProvisioningProfilesRequest&, const Model::ListProvisioningProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProvisioningProfilesResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::ListSchemaVersionsRequest&, const Model::ListSchemaVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSchemaVersionsResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::PutDefaultEncryptionConfigurationRequest&, const Model::PutDefaultEncryptionConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDefaultEncryptionConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::PutHubConfigurationRequest&, const Model::PutHubConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutHubConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::PutRuntimeLogConfigurationRequest&, const Model::PutRuntimeLogConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRuntimeLogConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::RegisterCustomEndpointRequest&, const Model::RegisterCustomEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterCustomEndpointResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::ResetRuntimeLogConfigurationRequest&, const Model::ResetRuntimeLogConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetRuntimeLogConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::SendManagedThingCommandRequest&, const Model::SendManagedThingCommandOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendManagedThingCommandResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::StartDeviceDiscoveryRequest&, const Model::StartDeviceDiscoveryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDeviceDiscoveryResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::UpdateDestinationRequest&, const Model::UpdateDestinationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDestinationResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::UpdateEventLogConfigurationRequest&, const Model::UpdateEventLogConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEventLogConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::UpdateManagedThingRequest&, const Model::UpdateManagedThingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateManagedThingResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::UpdateNotificationConfigurationRequest&, const Model::UpdateNotificationConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNotificationConfigurationResponseReceivedHandler;
    typedef std::function<void(const IoTManagedIntegrationsClient*, const Model::UpdateOtaTaskRequest&, const Model::UpdateOtaTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOtaTaskResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace IoTManagedIntegrations
} // namespace Aws
