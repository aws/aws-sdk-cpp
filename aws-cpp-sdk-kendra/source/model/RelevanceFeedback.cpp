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

#include <aws/kendra/model/RelevanceFeedback.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

RelevanceFeedback::RelevanceFeedback() : 
    m_resultIdHasBeenSet(false),
    m_relevanceValue(RelevanceType::NOT_SET),
    m_relevanceValueHasBeenSet(false)
{
}

RelevanceFeedback::RelevanceFeedback(JsonView jsonValue) : 
    m_resultIdHasBeenSet(false),
    m_relevanceValue(RelevanceType::NOT_SET),
    m_relevanceValueHasBeenSet(false)
{
  *this = jsonValue;
}

RelevanceFeedback& RelevanceFeedback::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResultId"))
  {
    m_resultId = jsonValue.GetString("ResultId");

    m_resultIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RelevanceValue"))
  {
    m_relevanceValue = RelevanceTypeMapper::GetRelevanceTypeForName(jsonValue.GetString("RelevanceValue"));

    m_relevanceValueHasBeenSet = true;
  }

  return *this;
}

JsonValue RelevanceFeedback::Jsonize() const
{
  JsonValue payload;

  if(m_resultIdHasBeenSet)
  {
   payload.WithString("ResultId", m_resultId);

  }

  if(m_relevanceValueHasBeenSet)
  {
   payload.WithString("RelevanceValue", RelevanceTypeMapper::GetNameForRelevanceType(m_relevanceValue));
  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
