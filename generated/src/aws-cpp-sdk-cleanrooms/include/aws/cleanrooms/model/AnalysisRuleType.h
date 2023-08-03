/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRooms
{
namespace Model
{
  enum class AnalysisRuleType
  {
    NOT_SET,
    AGGREGATION,
    LIST,
    CUSTOM
  };

namespace AnalysisRuleTypeMapper
{
AWS_CLEANROOMS_API AnalysisRuleType GetAnalysisRuleTypeForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForAnalysisRuleType(AnalysisRuleType value);
} // namespace AnalysisRuleTypeMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
