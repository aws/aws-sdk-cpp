/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/InsightSelector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

InsightSelector::InsightSelector() : 
    m_insightType(InsightType::NOT_SET),
    m_insightTypeHasBeenSet(false)
{
}

InsightSelector::InsightSelector(JsonView jsonValue) : 
    m_insightType(InsightType::NOT_SET),
    m_insightTypeHasBeenSet(false)
{
  *this = jsonValue;
}

InsightSelector& InsightSelector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InsightType"))
  {
    m_insightType = InsightTypeMapper::GetInsightTypeForName(jsonValue.GetString("InsightType"));

    m_insightTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue InsightSelector::Jsonize() const
{
  JsonValue payload;

  if(m_insightTypeHasBeenSet)
  {
   payload.WithString("InsightType", InsightTypeMapper::GetNameForInsightType(m_insightType));
  }

  return payload;
}

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
