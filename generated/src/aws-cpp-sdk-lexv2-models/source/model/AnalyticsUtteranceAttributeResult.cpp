/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsUtteranceAttributeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

AnalyticsUtteranceAttributeResult::AnalyticsUtteranceAttributeResult() : 
    m_lastUsedIntentHasBeenSet(false)
{
}

AnalyticsUtteranceAttributeResult::AnalyticsUtteranceAttributeResult(JsonView jsonValue) : 
    m_lastUsedIntentHasBeenSet(false)
{
  *this = jsonValue;
}

AnalyticsUtteranceAttributeResult& AnalyticsUtteranceAttributeResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lastUsedIntent"))
  {
    m_lastUsedIntent = jsonValue.GetString("lastUsedIntent");

    m_lastUsedIntentHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalyticsUtteranceAttributeResult::Jsonize() const
{
  JsonValue payload;

  if(m_lastUsedIntentHasBeenSet)
  {
   payload.WithString("lastUsedIntent", m_lastUsedIntent);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
