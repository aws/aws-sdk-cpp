/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
