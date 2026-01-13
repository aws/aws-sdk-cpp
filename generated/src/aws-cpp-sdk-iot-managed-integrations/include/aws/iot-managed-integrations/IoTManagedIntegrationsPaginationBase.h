/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/iot-managed-integrations/model/ListAccountAssociationsPaginationTraits.h>
#include <aws/iot-managed-integrations/model/ListCloudConnectorsPaginationTraits.h>
#include <aws/iot-managed-integrations/model/ListConnectorDestinationsPaginationTraits.h>
#include <aws/iot-managed-integrations/model/ListCredentialLockersPaginationTraits.h>
#include <aws/iot-managed-integrations/model/ListDestinationsPaginationTraits.h>
#include <aws/iot-managed-integrations/model/ListDeviceDiscoveriesPaginationTraits.h>
#include <aws/iot-managed-integrations/model/ListDiscoveredDevicesPaginationTraits.h>
#include <aws/iot-managed-integrations/model/ListEventLogConfigurationsPaginationTraits.h>
#include <aws/iot-managed-integrations/model/ListManagedThingAccountAssociationsPaginationTraits.h>
#include <aws/iot-managed-integrations/model/ListManagedThingSchemasPaginationTraits.h>
#include <aws/iot-managed-integrations/model/ListManagedThingsPaginationTraits.h>
#include <aws/iot-managed-integrations/model/ListNotificationConfigurationsPaginationTraits.h>
#include <aws/iot-managed-integrations/model/ListOtaTaskConfigurationsPaginationTraits.h>
#include <aws/iot-managed-integrations/model/ListOtaTaskExecutionsPaginationTraits.h>
#include <aws/iot-managed-integrations/model/ListOtaTasksPaginationTraits.h>
#include <aws/iot-managed-integrations/model/ListProvisioningProfilesPaginationTraits.h>
#include <aws/iot-managed-integrations/model/ListSchemaVersionsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace IoTManagedIntegrations {

class IoTManagedIntegrationsClient;

template <typename DerivedClient>
class IoTManagedIntegrationsPaginationBase {
 public:
  /**
   * Create a paginator for ListAccountAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountAssociationsRequest,
                                    Pagination::ListAccountAssociationsPaginationTraits<DerivedClient>>
  ListAccountAssociationsPaginator(const Model::ListAccountAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAccountAssociationsRequest,
                                             Pagination::ListAccountAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCloudConnectors operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCloudConnectorsRequest,
                                    Pagination::ListCloudConnectorsPaginationTraits<DerivedClient>>
  ListCloudConnectorsPaginator(const Model::ListCloudConnectorsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCloudConnectorsRequest,
                                             Pagination::ListCloudConnectorsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListConnectorDestinations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectorDestinationsRequest,
                                    Pagination::ListConnectorDestinationsPaginationTraits<DerivedClient>>
  ListConnectorDestinationsPaginator(const Model::ListConnectorDestinationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectorDestinationsRequest,
                                             Pagination::ListConnectorDestinationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCredentialLockers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCredentialLockersRequest,
                                    Pagination::ListCredentialLockersPaginationTraits<DerivedClient>>
  ListCredentialLockersPaginator(const Model::ListCredentialLockersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCredentialLockersRequest,
                                             Pagination::ListCredentialLockersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDestinations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDestinationsRequest,
                                    Pagination::ListDestinationsPaginationTraits<DerivedClient>>
  ListDestinationsPaginator(const Model::ListDestinationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDestinationsRequest,
                                             Pagination::ListDestinationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListDeviceDiscoveries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeviceDiscoveriesRequest,
                                    Pagination::ListDeviceDiscoveriesPaginationTraits<DerivedClient>>
  ListDeviceDiscoveriesPaginator(const Model::ListDeviceDiscoveriesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeviceDiscoveriesRequest,
                                             Pagination::ListDeviceDiscoveriesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDiscoveredDevices operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDiscoveredDevicesRequest,
                                    Pagination::ListDiscoveredDevicesPaginationTraits<DerivedClient>>
  ListDiscoveredDevicesPaginator(const Model::ListDiscoveredDevicesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDiscoveredDevicesRequest,
                                             Pagination::ListDiscoveredDevicesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEventLogConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventLogConfigurationsRequest,
                                    Pagination::ListEventLogConfigurationsPaginationTraits<DerivedClient>>
  ListEventLogConfigurationsPaginator(const Model::ListEventLogConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEventLogConfigurationsRequest,
                                             Pagination::ListEventLogConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListManagedThingAccountAssociations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedThingAccountAssociationsRequest,
                                    Pagination::ListManagedThingAccountAssociationsPaginationTraits<DerivedClient>>
  ListManagedThingAccountAssociationsPaginator(const Model::ListManagedThingAccountAssociationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedThingAccountAssociationsRequest,
                                             Pagination::ListManagedThingAccountAssociationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListManagedThings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedThingsRequest,
                                    Pagination::ListManagedThingsPaginationTraits<DerivedClient>>
  ListManagedThingsPaginator(const Model::ListManagedThingsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedThingsRequest,
                                             Pagination::ListManagedThingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListManagedThingSchemas operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedThingSchemasRequest,
                                    Pagination::ListManagedThingSchemasPaginationTraits<DerivedClient>>
  ListManagedThingSchemasPaginator(const Model::ListManagedThingSchemasRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListManagedThingSchemasRequest,
                                             Pagination::ListManagedThingSchemasPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListNotificationConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNotificationConfigurationsRequest,
                                    Pagination::ListNotificationConfigurationsPaginationTraits<DerivedClient>>
  ListNotificationConfigurationsPaginator(const Model::ListNotificationConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListNotificationConfigurationsRequest,
                                             Pagination::ListNotificationConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListOtaTaskConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOtaTaskConfigurationsRequest,
                                    Pagination::ListOtaTaskConfigurationsPaginationTraits<DerivedClient>>
  ListOtaTaskConfigurationsPaginator(const Model::ListOtaTaskConfigurationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOtaTaskConfigurationsRequest,
                                             Pagination::ListOtaTaskConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListOtaTaskExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOtaTaskExecutionsRequest,
                                    Pagination::ListOtaTaskExecutionsPaginationTraits<DerivedClient>>
  ListOtaTaskExecutionsPaginator(const Model::ListOtaTaskExecutionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOtaTaskExecutionsRequest,
                                             Pagination::ListOtaTaskExecutionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListOtaTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOtaTasksRequest, Pagination::ListOtaTasksPaginationTraits<DerivedClient>>
  ListOtaTasksPaginator(const Model::ListOtaTasksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOtaTasksRequest,
                                             Pagination::ListOtaTasksPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListProvisioningProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProvisioningProfilesRequest,
                                    Pagination::ListProvisioningProfilesPaginationTraits<DerivedClient>>
  ListProvisioningProfilesPaginator(const Model::ListProvisioningProfilesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProvisioningProfilesRequest,
                                             Pagination::ListProvisioningProfilesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSchemaVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSchemaVersionsRequest,
                                    Pagination::ListSchemaVersionsPaginationTraits<DerivedClient>>
  ListSchemaVersionsPaginator(const Model::ListSchemaVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSchemaVersionsRequest,
                                             Pagination::ListSchemaVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace IoTManagedIntegrations
}  // namespace Aws
