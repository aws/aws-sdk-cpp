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
  enum class OtaType
  {
    NOT_SET,
    ONE_TIME,
    CONTINUOUS
  };

namespace OtaTypeMapper
{
AWS_IOTMANAGEDINTEGRATIONS_API OtaType GetOtaTypeForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForOtaType(OtaType value);
} // namespace OtaTypeMapper
} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
