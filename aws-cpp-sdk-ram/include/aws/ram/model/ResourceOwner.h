/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RAM
{
namespace Model
{
  enum class ResourceOwner
  {
    NOT_SET,
    SELF,
    OTHER_ACCOUNTS
  };

namespace ResourceOwnerMapper
{
AWS_RAM_API ResourceOwner GetResourceOwnerForName(const Aws::String& name);

AWS_RAM_API Aws::String GetNameForResourceOwner(ResourceOwner value);
} // namespace ResourceOwnerMapper
} // namespace Model
} // namespace RAM
} // namespace Aws
