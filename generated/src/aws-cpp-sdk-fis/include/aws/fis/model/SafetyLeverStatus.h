/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FIS
{
namespace Model
{
  enum class SafetyLeverStatus
  {
    NOT_SET,
    disengaged,
    engaged,
    engaging
  };

namespace SafetyLeverStatusMapper
{
AWS_FIS_API SafetyLeverStatus GetSafetyLeverStatusForName(const Aws::String& name);

AWS_FIS_API Aws::String GetNameForSafetyLeverStatus(SafetyLeverStatus value);
} // namespace SafetyLeverStatusMapper
} // namespace Model
} // namespace FIS
} // namespace Aws
