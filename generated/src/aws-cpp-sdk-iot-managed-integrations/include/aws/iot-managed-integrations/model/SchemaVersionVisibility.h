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
  enum class SchemaVersionVisibility
  {
    NOT_SET,
    PUBLIC_,
    PRIVATE_
  };

namespace SchemaVersionVisibilityMapper
{
AWS_IOTMANAGEDINTEGRATIONS_API SchemaVersionVisibility GetSchemaVersionVisibilityForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForSchemaVersionVisibility(SchemaVersionVisibility value);
} // namespace SchemaVersionVisibilityMapper
} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
