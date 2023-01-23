/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace drs
{
namespace Model
{
  enum class PITPolicyRuleUnits
  {
    NOT_SET,
    MINUTE,
    HOUR,
    DAY
  };

namespace PITPolicyRuleUnitsMapper
{
AWS_DRS_API PITPolicyRuleUnits GetPITPolicyRuleUnitsForName(const Aws::String& name);

AWS_DRS_API Aws::String GetNameForPITPolicyRuleUnits(PITPolicyRuleUnits value);
} // namespace PITPolicyRuleUnitsMapper
} // namespace Model
} // namespace drs
} // namespace Aws
