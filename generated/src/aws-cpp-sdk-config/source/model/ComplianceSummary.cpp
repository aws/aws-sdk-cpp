/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

ComplianceSummary::ComplianceSummary(JsonView jsonValue) : 
    m_compliantResourceCountHasBeenSet(false),
    m_nonCompliantResourceCountHasBeenSet(false),
    m_complianceSummaryTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

ComplianceSummary& ComplianceSummary::operator =(JsonView jsonValue)
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
