/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkMail
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    ROOM,
    EQUIPMENT
  };

namespace ResourceTypeMapper
{
AWS_WORKMAIL_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_WORKMAIL_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace WorkMail
} // namespace Aws
