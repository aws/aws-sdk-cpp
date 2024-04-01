/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace deadline
{
namespace Model
{
  enum class DependencyConsumerResolutionStatus
  {
    NOT_SET,
    RESOLVED,
    UNRESOLVED
  };

namespace DependencyConsumerResolutionStatusMapper
{
AWS_DEADLINE_API DependencyConsumerResolutionStatus GetDependencyConsumerResolutionStatusForName(const Aws::String& name);

AWS_DEADLINE_API Aws::String GetNameForDependencyConsumerResolutionStatus(DependencyConsumerResolutionStatus value);
} // namespace DependencyConsumerResolutionStatusMapper
} // namespace Model
} // namespace deadline
} // namespace Aws
