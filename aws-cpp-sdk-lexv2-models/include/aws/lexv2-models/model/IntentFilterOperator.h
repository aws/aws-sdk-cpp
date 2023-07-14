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
  enum class IntentFilterOperator
  {
    NOT_SET,
    CO,
    EQ
  };

namespace IntentFilterOperatorMapper
{
AWS_LEXMODELSV2_API IntentFilterOperator GetIntentFilterOperatorForName(const Aws::String& name);

AWS_LEXMODELSV2_API Aws::String GetNameForIntentFilterOperator(IntentFilterOperator value);
} // namespace IntentFilterOperatorMapper
} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
