/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{
  enum class RequiredAttributeBehavior
  {
    NOT_SET,
    REQUIRED_ALWAYS,
    NOT_REQUIRED
  };

namespace RequiredAttributeBehaviorMapper
{
AWS_CLOUDDIRECTORY_API RequiredAttributeBehavior GetRequiredAttributeBehaviorForName(const Aws::String& name);

AWS_CLOUDDIRECTORY_API Aws::String GetNameForRequiredAttributeBehavior(RequiredAttributeBehavior value);
} // namespace RequiredAttributeBehaviorMapper
} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
