﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{
  enum class StackDriftStatus
  {
    NOT_SET,
    DRIFTED,
    IN_SYNC,
    UNKNOWN,
    NOT_CHECKED
  };

namespace StackDriftStatusMapper
{
AWS_CLOUDFORMATION_API StackDriftStatus GetStackDriftStatusForName(const Aws::String& name);

AWS_CLOUDFORMATION_API Aws::String GetNameForStackDriftStatus(StackDriftStatus value);
} // namespace StackDriftStatusMapper
} // namespace Model
} // namespace CloudFormation
} // namespace Aws
