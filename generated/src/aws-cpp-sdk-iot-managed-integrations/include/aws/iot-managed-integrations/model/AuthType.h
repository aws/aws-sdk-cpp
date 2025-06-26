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
  enum class AuthType
  {
    NOT_SET,
    OAUTH
  };

namespace AuthTypeMapper
{
AWS_IOTMANAGEDINTEGRATIONS_API AuthType GetAuthTypeForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForAuthType(AuthType value);
} // namespace AuthTypeMapper
} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
