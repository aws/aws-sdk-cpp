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
#include <aws/support/model/TrustedAdvisorCheckSummary.h>
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

TrustedAdvisorCheckSummary::TrustedAdvisorCheckSummary() : 
    m_checkIdHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_hasFlaggedResources(false),
    m_hasFlaggedResourcesHasBeenSet(false),
    m_resourcesSummaryHasBeenSet(false),
    m_categorySpecificSummaryHasBeenSet(false)
{
}

TrustedAdvisorCheckSummary::TrustedAdvisorCheckSummary(const JsonValue& jsonValue) : 
    m_checkIdHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_hasFlaggedResources(false),
    m_hasFlaggedResourcesHasBeenSet(false),
    m_resourcesSummaryHasBeenSet(false),
    m_categorySpecificSummaryHasBeenSet(false)
{
  *this = jsonValue;
}

TrustedAdvisorCheckSummary& TrustedAdvisorCheckSummary::operator =(const JsonValue& jsonValue)
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

  if(jsonValue.ValueExists("hasFlaggedResources"))
  {
    m_hasFlaggedResources = jsonValue.GetBool("hasFlaggedResources");

    m_hasFlaggedResourcesHasBeenSet = true;
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

  return *this;
}

JsonValue TrustedAdvisorCheckSummary::Jsonize() const
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

  if(m_hasFlaggedResourcesHasBeenSet)
  {
   payload.WithBool("hasFlaggedResources", m_hasFlaggedResources);

  }

  if(m_resourcesSummaryHasBeenSet)
  {
   payload.WithObject("resourcesSummary", m_resourcesSummary.Jsonize());

  }

  if(m_categorySpecificSummaryHasBeenSet)
  {
   payload.WithObject("categorySpecificSummary", m_categorySpecificSummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Support
} // namespace Aws