/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class ResourceType
  {
    NOT_SET,
    CONTACT,
    CONTACT_FLOW,
    INSTANCE,
    PARTICIPANT,
    HIERARCHY_LEVEL,
    HIERARCHY_GROUP,
    USER
  };

namespace ResourceTypeMapper
{
AWS_CONNECT_API ResourceType GetResourceTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForResourceType(ResourceType value);
} // namespace ResourceTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
