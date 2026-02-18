/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsClient.h>
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

namespace Aws {
namespace IoTManagedIntegrations {

using ListAccountAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<IoTManagedIntegrationsClient, Model::ListAccountAssociationsRequest,
                                      Pagination::ListAccountAssociationsPaginationTraits<IoTManagedIntegrationsClient>>;
using ListCloudConnectorsPaginator =
    Aws::Utils::Pagination::Paginator<IoTManagedIntegrationsClient, Model::ListCloudConnectorsRequest,
                                      Pagination::ListCloudConnectorsPaginationTraits<IoTManagedIntegrationsClient>>;
using ListConnectorDestinationsPaginator =
    Aws::Utils::Pagination::Paginator<IoTManagedIntegrationsClient, Model::ListConnectorDestinationsRequest,
                                      Pagination::ListConnectorDestinationsPaginationTraits<IoTManagedIntegrationsClient>>;
using ListCredentialLockersPaginator =
    Aws::Utils::Pagination::Paginator<IoTManagedIntegrationsClient, Model::ListCredentialLockersRequest,
                                      Pagination::ListCredentialLockersPaginationTraits<IoTManagedIntegrationsClient>>;
using ListDestinationsPaginator =
    Aws::Utils::Pagination::Paginator<IoTManagedIntegrationsClient, Model::ListDestinationsRequest,
                                      Pagination::ListDestinationsPaginationTraits<IoTManagedIntegrationsClient>>;
using ListDeviceDiscoveriesPaginator =
    Aws::Utils::Pagination::Paginator<IoTManagedIntegrationsClient, Model::ListDeviceDiscoveriesRequest,
                                      Pagination::ListDeviceDiscoveriesPaginationTraits<IoTManagedIntegrationsClient>>;
using ListDiscoveredDevicesPaginator =
    Aws::Utils::Pagination::Paginator<IoTManagedIntegrationsClient, Model::ListDiscoveredDevicesRequest,
                                      Pagination::ListDiscoveredDevicesPaginationTraits<IoTManagedIntegrationsClient>>;
using ListEventLogConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<IoTManagedIntegrationsClient, Model::ListEventLogConfigurationsRequest,
                                      Pagination::ListEventLogConfigurationsPaginationTraits<IoTManagedIntegrationsClient>>;
using ListManagedThingAccountAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<IoTManagedIntegrationsClient, Model::ListManagedThingAccountAssociationsRequest,
                                      Pagination::ListManagedThingAccountAssociationsPaginationTraits<IoTManagedIntegrationsClient>>;
using ListManagedThingsPaginator =
    Aws::Utils::Pagination::Paginator<IoTManagedIntegrationsClient, Model::ListManagedThingsRequest,
                                      Pagination::ListManagedThingsPaginationTraits<IoTManagedIntegrationsClient>>;
using ListManagedThingSchemasPaginator =
    Aws::Utils::Pagination::Paginator<IoTManagedIntegrationsClient, Model::ListManagedThingSchemasRequest,
                                      Pagination::ListManagedThingSchemasPaginationTraits<IoTManagedIntegrationsClient>>;
using ListNotificationConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<IoTManagedIntegrationsClient, Model::ListNotificationConfigurationsRequest,
                                      Pagination::ListNotificationConfigurationsPaginationTraits<IoTManagedIntegrationsClient>>;
using ListOtaTaskConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<IoTManagedIntegrationsClient, Model::ListOtaTaskConfigurationsRequest,
                                      Pagination::ListOtaTaskConfigurationsPaginationTraits<IoTManagedIntegrationsClient>>;
using ListOtaTaskExecutionsPaginator =
    Aws::Utils::Pagination::Paginator<IoTManagedIntegrationsClient, Model::ListOtaTaskExecutionsRequest,
                                      Pagination::ListOtaTaskExecutionsPaginationTraits<IoTManagedIntegrationsClient>>;
using ListOtaTasksPaginator = Aws::Utils::Pagination::Paginator<IoTManagedIntegrationsClient, Model::ListOtaTasksRequest,
                                                                Pagination::ListOtaTasksPaginationTraits<IoTManagedIntegrationsClient>>;
using ListProvisioningProfilesPaginator =
    Aws::Utils::Pagination::Paginator<IoTManagedIntegrationsClient, Model::ListProvisioningProfilesRequest,
                                      Pagination::ListProvisioningProfilesPaginationTraits<IoTManagedIntegrationsClient>>;
using ListSchemaVersionsPaginator =
    Aws::Utils::Pagination::Paginator<IoTManagedIntegrationsClient, Model::ListSchemaVersionsRequest,
                                      Pagination::ListSchemaVersionsPaginationTraits<IoTManagedIntegrationsClient>>;

}  // namespace IoTManagedIntegrations
}  // namespace Aws
