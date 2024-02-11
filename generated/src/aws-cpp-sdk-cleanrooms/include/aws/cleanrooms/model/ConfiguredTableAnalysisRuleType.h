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
  enum class ConfiguredTableAnalysisRuleType
  {
    NOT_SET,
    AGGREGATION,
    LIST,
    CUSTOM
  };

namespace ConfiguredTableAnalysisRuleTypeMapper
{
AWS_CLEANROOMS_API ConfiguredTableAnalysisRuleType GetConfiguredTableAnalysisRuleTypeForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForConfiguredTableAnalysisRuleType(ConfiguredTableAnalysisRuleType value);
} // namespace ConfiguredTableAnalysisRuleTypeMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
