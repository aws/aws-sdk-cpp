/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class Ec2DeepInspectionStatus
  {
    NOT_SET,
    ACTIVATED,
    DEACTIVATED,
    PENDING,
    FAILED
  };

namespace Ec2DeepInspectionStatusMapper
{
AWS_INSPECTOR2_API Ec2DeepInspectionStatus GetEc2DeepInspectionStatusForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForEc2DeepInspectionStatus(Ec2DeepInspectionStatus value);
} // namespace Ec2DeepInspectionStatusMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
