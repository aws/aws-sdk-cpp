/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/shield/Shield_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Shield
{
namespace Model
{
  enum class SubResourceType
  {
    NOT_SET,
    IP,
    URL
  };

namespace SubResourceTypeMapper
{
AWS_SHIELD_API SubResourceType GetSubResourceTypeForName(const Aws::String& name);

AWS_SHIELD_API Aws::String GetNameForSubResourceType(SubResourceType value);
} // namespace SubResourceTypeMapper
} // namespace Model
} // namespace Shield
} // namespace Aws
