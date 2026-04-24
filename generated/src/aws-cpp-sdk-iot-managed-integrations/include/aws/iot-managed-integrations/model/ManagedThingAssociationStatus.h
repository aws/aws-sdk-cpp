/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>

namespace Aws {
namespace IoTManagedIntegrations {
namespace Model {
enum class ManagedThingAssociationStatus { NOT_SET, PRE_ASSOCIATED, ASSOCIATED };

namespace ManagedThingAssociationStatusMapper {
AWS_IOTMANAGEDINTEGRATIONS_API ManagedThingAssociationStatus GetManagedThingAssociationStatusForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForManagedThingAssociationStatus(ManagedThingAssociationStatus value);
}  // namespace ManagedThingAssociationStatusMapper
}  // namespace Model
}  // namespace IoTManagedIntegrations
}  // namespace Aws
