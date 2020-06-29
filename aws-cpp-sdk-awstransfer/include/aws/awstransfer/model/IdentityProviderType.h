/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Transfer
{
namespace Model
{
  enum class IdentityProviderType
  {
    NOT_SET,
    SERVICE_MANAGED,
    API_GATEWAY
  };

namespace IdentityProviderTypeMapper
{
AWS_TRANSFER_API IdentityProviderType GetIdentityProviderTypeForName(const Aws::String& name);

AWS_TRANSFER_API Aws::String GetNameForIdentityProviderType(IdentityProviderType value);
} // namespace IdentityProviderTypeMapper
} // namespace Model
} // namespace Transfer
} // namespace Aws
