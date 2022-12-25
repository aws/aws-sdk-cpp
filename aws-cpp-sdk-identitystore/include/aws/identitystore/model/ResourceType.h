/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IdentityStore
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    GROUP,
    USER,
    IDENTITY_STORE,
    GROUP_MEMBERSHIP
  };

namespace ResourceTypeMapper
{
AWS_IDENTITYSTORE_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_IDENTITYSTORE_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace IdentityStore
} // namespace Aws
