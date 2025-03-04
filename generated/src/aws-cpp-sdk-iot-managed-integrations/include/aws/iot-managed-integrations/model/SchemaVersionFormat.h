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
  enum class SchemaVersionFormat
  {
    NOT_SET,
    AWS,
    ZCL,
    CONNECTOR
  };

namespace SchemaVersionFormatMapper
{
AWS_IOTMANAGEDINTEGRATIONS_API SchemaVersionFormat GetSchemaVersionFormatForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForSchemaVersionFormat(SchemaVersionFormat value);
} // namespace SchemaVersionFormatMapper
} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
