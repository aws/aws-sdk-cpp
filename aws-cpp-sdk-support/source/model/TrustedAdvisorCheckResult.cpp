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
#include <aws/support/model/TrustedAdvisorCheckResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Support
{
namespace Model
{

TrustedAdvisorCheckResult::TrustedAdvisorCheckResult() : 
    m_checkIdHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_resourcesSummaryHasBeenSet(false),
    m_categorySpecificSummaryHasBeenSet(false),
    m_flaggedResourcesHasBeenSet(false)
{
}

TrustedAdvisorCheckResult::TrustedAdvisorCheckResult(const JsonValue& jsonValue) : 
    m_checkIdHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_resourcesSummaryHasBeenSet(false),
    m_categorySpecificSummaryHasBeenSet(false),
    m_flaggedResourcesHasBeenSet(false)
{
  *this = jsonValue;
}

TrustedAdvisorCheckResult& TrustedAdvisorCheckResult::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("checkId"))
  {
    m_checkId = jsonValue.GetString("checkId");

    m_checkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetString("timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourcesSummary"))
  {
    m_resourcesSummary = jsonValue.GetObject("resourcesSummary");

    m_resourcesSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("categorySpecificSummary"))
  {
    m_categorySpecificSummary = jsonValue.GetObject("categorySpecificSummary");

    m_categorySpecificSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("flaggedResources"))
  {
    Array<JsonValue> flaggedResourcesJsonList = jsonValue.GetArray("flaggedResources");
    for(unsigned flaggedResourcesIndex = 0; flaggedResourcesIndex < flaggedResourcesJsonList.GetLength(); ++flaggedResourcesIndex)
    {
      m_flaggedResources.push_back(flaggedResourcesJsonList[flaggedResourcesIndex].AsObject());
    }
    m_flaggedResourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue TrustedAdvisorCheckResult::Jsonize() const
{
  JsonValue payload;

  if(m_checkIdHasBeenSet)
  {
   payload.WithString("checkId", m_checkId);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithString("timestamp", m_timestamp);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_resourcesSummaryHasBeenSet)
  {
   payload.WithObject("resourcesSummary", m_resourcesSummary.Jsonize());

  }

  if(m_categorySpecificSummaryHasBeenSet)
  {
   payload.WithObject("categorySpecificSummary", m_categorySpecificSummary.Jsonize());

  }

  if(m_flaggedResourcesHasBeenSet)
  {
   Array<JsonValue> flaggedResourcesJsonList(m_flaggedResources.size());
   for(unsigned flaggedResourcesIndex = 0; flaggedResourcesIndex < flaggedResourcesJsonList.GetLength(); ++flaggedResourcesIndex)
   {
     flaggedResourcesJsonList[flaggedResourcesIndex].AsObject(m_flaggedResources[flaggedResourcesIndex].Jsonize());
   }
   payload.WithArray("flaggedResources", std::move(flaggedResourcesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Support
} // namespace Aws