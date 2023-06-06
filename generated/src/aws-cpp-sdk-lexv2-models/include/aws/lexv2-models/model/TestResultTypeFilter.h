/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{
  enum class TestResultTypeFilter
  {
    NOT_SET,
    OverallTestResults,
    ConversationLevelTestResults,
    IntentClassificationTestResults,
    SlotResolutionTestResults,
    UtteranceLevelResults
  };

namespace TestResultTypeFilterMapper
{
AWS_LEXMODELSV2_API TestResultTypeFilter GetTestResultTypeFilterForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForTestResultTypeFilter(TestResultTypeFilter value);
} // namespace TestResultTypeFilterMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
