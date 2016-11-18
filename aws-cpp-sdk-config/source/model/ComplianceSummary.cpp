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
#include <aws/config/model/ComplianceSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

ComplianceSummary::ComplianceSummary() : 
    m_compliantResourceCountHasBeenSet(false),
    m_nonCompliantResourceCountHasBeenSet(false),
    m_complianceSummaryTimestampHasBeenSet(false)
{
}

ComplianceSummary::ComplianceSummary(const JsonValue& jsonValue) : 
    m_compliantResourceCountHasBeenSet(false),
    m_nonCompliantResourceCountHasBeenSet(false),
    m_complianceSummaryTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

ComplianceSummary& ComplianceSummary::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("CompliantResourceCount"))
  {
    m_compliantResourceCount = jsonValue.GetObject("CompliantResourceCount");

    m_compliantResourceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NonCompliantResourceCount"))
  {
    m_nonCompliantResourceCount = jsonValue.GetObject("NonCompliantResourceCount");

    m_nonCompliantResourceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComplianceSummaryTimestamp"))
  {
    m_complianceSummaryTimestamp = jsonValue.GetDouble("ComplianceSummaryTimestamp");

    m_complianceSummaryTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue ComplianceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_compliantResourceCountHasBeenSet)
  {
   payload.WithObject("CompliantResourceCount", m_compliantResourceCount.Jsonize());

  }

  if(m_nonCompliantResourceCountHasBeenSet)
  {
   payload.WithObject("NonCompliantResourceCount", m_nonCompliantResourceCount.Jsonize());

  }

  if(m_complianceSummaryTimestampHasBeenSet)
  {
   payload.WithDouble("ComplianceSummaryTimestamp", m_complianceSummaryTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws