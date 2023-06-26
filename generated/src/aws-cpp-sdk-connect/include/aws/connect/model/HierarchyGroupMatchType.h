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
  enum class HierarchyGroupMatchType
  {
    NOT_SET,
    EXACT,
    WITH_CHILD_GROUPS
  };

namespace HierarchyGroupMatchTypeMapper
{
AWS_CONNECT_API HierarchyGroupMatchType GetHierarchyGroupMatchTypeForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForHierarchyGroupMatchType(HierarchyGroupMatchType value);
} // namespace HierarchyGroupMatchTypeMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
