/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{
  enum class AssociationState
  {
    NOT_SET,
    ASSOCIATION_IN_PROGRESS,
    ASSOCIATION_FAILED,
    ASSOCIATION_SUCCEEDED,
    ASSOCIATION_DELETING,
    REFRESH_TOKEN_EXPIRED
  };

namespace AssociationStateMapper
{
AWS_IOTMANAGEDINTEGRATIONS_API AssociationState GetAssociationStateForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForAssociationState(AssociationState value);
} // namespace AssociationStateMapper
} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
