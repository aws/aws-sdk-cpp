/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    DEVICE_CERTIFICATE,
    CA_CERTIFICATE,
    IOT_POLICY,
    COGNITO_IDENTITY_POOL,
    CLIENT_ID,
    ACCOUNT_SETTINGS,
    ROLE_ALIAS,
    IAM_ROLE,
    ISSUER_CERTIFICATE
  };

namespace ResourceTypeMapper
{
AWS_IOT_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
