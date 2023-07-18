/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Appflow
{
namespace Model
{
  enum class ConnectorProvisioningType
  {
    NOT_SET,
    LAMBDA
  };

namespace ConnectorProvisioningTypeMapper
{
AWS_APPFLOW_API ConnectorProvisioningType GetConnectorProvisioningTypeForName(const Aws::String& name);

AWS_APPFLOW_API Aws::String GetNameForConnectorProvisioningType(ConnectorProvisioningType value);
} // namespace ConnectorProvisioningTypeMapper
} // namespace Model
} // namespace Appflow
} // namespace Aws
