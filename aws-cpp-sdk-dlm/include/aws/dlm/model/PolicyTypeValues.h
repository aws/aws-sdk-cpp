/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DLM
{
namespace Model
{
  enum class PolicyTypeValues
  {
    NOT_SET,
    EBS_SNAPSHOT_MANAGEMENT,
    IMAGE_MANAGEMENT
  };

namespace PolicyTypeValuesMapper
{
AWS_DLM_API PolicyTypeValues GetPolicyTypeValuesForName(const Aws::String& name);

AWS_DLM_API Aws::String GetNameForPolicyTypeValues(PolicyTypeValues value);
} // namespace PolicyTypeValuesMapper
} // namespace Model
} // namespace DLM
} // namespace Aws
