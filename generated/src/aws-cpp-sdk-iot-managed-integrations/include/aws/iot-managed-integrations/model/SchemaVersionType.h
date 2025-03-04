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
  enum class SchemaVersionType
  {
    NOT_SET,
    capability,
    definition
  };

namespace SchemaVersionTypeMapper
{
AWS_IOTMANAGEDINTEGRATIONS_API SchemaVersionType GetSchemaVersionTypeForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForSchemaVersionType(SchemaVersionType value);
} // namespace SchemaVersionTypeMapper
} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
