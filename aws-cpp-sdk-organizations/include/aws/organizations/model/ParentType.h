/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Organizations
{
namespace Model
{
  enum class ParentType
  {
    NOT_SET,
    ROOT,
    ORGANIZATIONAL_UNIT
  };

namespace ParentTypeMapper
{
AWS_ORGANIZATIONS_API ParentType GetParentTypeForName(const Aws::String& name);

AWS_ORGANIZATIONS_API Aws::String GetNameForParentType(ParentType value);
} // namespace ParentTypeMapper
} // namespace Model
} // namespace Organizations
} // namespace Aws
