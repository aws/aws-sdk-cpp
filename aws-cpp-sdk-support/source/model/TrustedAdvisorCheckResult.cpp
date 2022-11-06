/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

TrustedAdvisorCheckResult::TrustedAdvisorCheckResult(JsonView jsonValue) : 
    m_checkIdHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_resourcesSummaryHasBeenSet(false),
    m_categorySpecificSummaryHasBeenSet(false),
    m_flaggedResourcesHasBeenSet(false)
{
  *this = jsonValue;
}

TrustedAdvisorCheckResult& TrustedAdvisorCheckResult::operator =(JsonView jsonValue)
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
    Aws::Utils::Array<JsonView> flaggedResourcesJsonList = jsonValue.GetArray("flaggedResources");
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
   Aws::Utils::Array<JsonValue> flaggedResourcesJsonList(m_flaggedResources.size());
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
