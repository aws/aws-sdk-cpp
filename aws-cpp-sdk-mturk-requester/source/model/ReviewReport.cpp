/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/mturk-requester/model/ReviewReport.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MTurk
{
namespace Model
{

ReviewReport::ReviewReport() : 
    m_reviewResultsHasBeenSet(false),
    m_reviewActionsHasBeenSet(false)
{
}

ReviewReport::ReviewReport(const JsonValue& jsonValue) : 
    m_reviewResultsHasBeenSet(false),
    m_reviewActionsHasBeenSet(false)
{
  *this = jsonValue;
}

ReviewReport& ReviewReport::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ReviewResults"))
  {
    Array<JsonValue> reviewResultsJsonList = jsonValue.GetArray("ReviewResults");
    for(unsigned reviewResultsIndex = 0; reviewResultsIndex < reviewResultsJsonList.GetLength(); ++reviewResultsIndex)
    {
      m_reviewResults.push_back(reviewResultsJsonList[reviewResultsIndex].AsObject());
    }
    m_reviewResultsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReviewActions"))
  {
    Array<JsonValue> reviewActionsJsonList = jsonValue.GetArray("ReviewActions");
    for(unsigned reviewActionsIndex = 0; reviewActionsIndex < reviewActionsJsonList.GetLength(); ++reviewActionsIndex)
    {
      m_reviewActions.push_back(reviewActionsJsonList[reviewActionsIndex].AsObject());
    }
    m_reviewActionsHasBeenSet = true;
  }

  return *this;
}

JsonValue ReviewReport::Jsonize() const
{
  JsonValue payload;

  if(m_reviewResultsHasBeenSet)
  {
   Array<JsonValue> reviewResultsJsonList(m_reviewResults.size());
   for(unsigned reviewResultsIndex = 0; reviewResultsIndex < reviewResultsJsonList.GetLength(); ++reviewResultsIndex)
   {
     reviewResultsJsonList[reviewResultsIndex].AsObject(m_reviewResults[reviewResultsIndex].Jsonize());
   }
   payload.WithArray("ReviewResults", std::move(reviewResultsJsonList));

  }

  if(m_reviewActionsHasBeenSet)
  {
   Array<JsonValue> reviewActionsJsonList(m_reviewActions.size());
   for(unsigned reviewActionsIndex = 0; reviewActionsIndex < reviewActionsJsonList.GetLength(); ++reviewActionsIndex)
   {
     reviewActionsJsonList[reviewActionsIndex].AsObject(m_reviewActions[reviewActionsIndex].Jsonize());
   }
   payload.WithArray("ReviewActions", std::move(reviewActionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MTurk
} // namespace Aws