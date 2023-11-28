/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{
  enum class FoundationModelLifecycleStatus
  {
    NOT_SET,
    ACTIVE,
    LEGACY
  };

namespace FoundationModelLifecycleStatusMapper
{
AWS_BEDROCK_API FoundationModelLifecycleStatus GetFoundationModelLifecycleStatusForName(const Aws::String& name);

AWS_BEDROCK_API Aws::String GetNameForFoundationModelLifecycleStatus(FoundationModelLifecycleStatus value);
} // namespace FoundationModelLifecycleStatusMapper
} // namespace Model
} // namespace Bedrock
} // namespace Aws
