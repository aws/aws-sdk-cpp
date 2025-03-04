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
  enum class OtaMechanism
  {
    NOT_SET,
    PUSH
  };

namespace OtaMechanismMapper
{
AWS_IOTMANAGEDINTEGRATIONS_API OtaMechanism GetOtaMechanismForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForOtaMechanism(OtaMechanism value);
} // namespace OtaMechanismMapper
} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
