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
  enum class ConfiguredTableAssociationAnalysisRuleType
  {
    NOT_SET,
    AGGREGATION,
    LIST,
    CUSTOM
  };

namespace ConfiguredTableAssociationAnalysisRuleTypeMapper
{
AWS_CLEANROOMS_API ConfiguredTableAssociationAnalysisRuleType GetConfiguredTableAssociationAnalysisRuleTypeForName(const Aws::String& name);

AWS_CLEANROOMS_API Aws::String GetNameForConfiguredTableAssociationAnalysisRuleType(ConfiguredTableAssociationAnalysisRuleType value);
} // namespace ConfiguredTableAssociationAnalysisRuleTypeMapper
} // namespace Model
} // namespace CleanRooms
} // namespace Aws
