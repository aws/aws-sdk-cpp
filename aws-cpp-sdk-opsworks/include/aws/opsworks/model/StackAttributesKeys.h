/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{
  enum class StackAttributesKeys
  {
    NOT_SET,
    Color
  };

namespace StackAttributesKeysMapper
{
AWS_OPSWORKS_API StackAttributesKeys GetStackAttributesKeysForName(const Aws::String& name);

AWS_OPSWORKS_API Aws::String GetNameForStackAttributesKeys(StackAttributesKeys value);
} // namespace StackAttributesKeysMapper
} // namespace Model
} // namespace OpsWorks
} // namespace Aws
