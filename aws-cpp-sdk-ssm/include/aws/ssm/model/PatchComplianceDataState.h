/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class PatchComplianceDataState
  {
    NOT_SET,
    INSTALLED,
    INSTALLED_OTHER,
    INSTALLED_PENDING_REBOOT,
    INSTALLED_REJECTED,
    MISSING,
    NOT_APPLICABLE,
    FAILED
  };

namespace PatchComplianceDataStateMapper
{
AWS_SSM_API PatchComplianceDataState GetPatchComplianceDataStateForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForPatchComplianceDataState(PatchComplianceDataState value);
} // namespace PatchComplianceDataStateMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
