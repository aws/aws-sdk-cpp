/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{
  enum class Risk
  {
    NOT_SET,
    UNANSWERED,
    HIGH,
    MEDIUM,
    NONE,
    NOT_APPLICABLE
  };

namespace RiskMapper
{
AWS_WELLARCHITECTED_API Risk GetRiskForName(const Aws::String& name);

AWS_WELLARCHITECTED_API Aws::String GetNameForRisk(Risk value);
} // namespace RiskMapper
} // namespace Model
} // namespace WellArchitected
} // namespace Aws
