/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{
  enum class ComponentVisibilityScope
  {
    NOT_SET,
    PRIVATE_,
    PUBLIC_
  };

namespace ComponentVisibilityScopeMapper
{
AWS_GREENGRASSV2_API ComponentVisibilityScope GetComponentVisibilityScopeForName(const Aws::String& name);

AWS_GREENGRASSV2_API Aws::String GetNameForComponentVisibilityScope(ComponentVisibilityScope value);
} // namespace ComponentVisibilityScopeMapper
} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
