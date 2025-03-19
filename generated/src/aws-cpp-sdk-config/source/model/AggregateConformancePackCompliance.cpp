/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/AggregateConformancePackCompliance.h>
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

AggregateConformancePackCompliance::AggregateConformancePackCompliance(JsonView jsonValue)
{
  *this = jsonValue;
}

AggregateConformancePackCompliance& AggregateConformancePackCompliance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ComplianceType"))
  {
    m_complianceType = ConformancePackComplianceTypeMapper::GetConformancePackComplianceTypeForName(jsonValue.GetString("ComplianceType"));
    m_complianceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompliantRuleCount"))
  {
    m_compliantRuleCount = jsonValue.GetInteger("CompliantRuleCount");
    m_compliantRuleCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NonCompliantRuleCount"))
  {
    m_nonCompliantRuleCount = jsonValue.GetInteger("NonCompliantRuleCount");
    m_nonCompliantRuleCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TotalRuleCount"))
  {
    m_totalRuleCount = jsonValue.GetInteger("TotalRuleCount");
    m_totalRuleCountHasBeenSet = true;
  }
  return *this;
}

JsonValue AggregateConformancePackCompliance::Jsonize() const
{
  JsonValue payload;

  if(m_complianceTypeHasBeenSet)
  {
   payload.WithString("ComplianceType", ConformancePackComplianceTypeMapper::GetNameForConformancePackComplianceType(m_complianceType));
  }

  if(m_compliantRuleCountHasBeenSet)
  {
   payload.WithInteger("CompliantRuleCount", m_compliantRuleCount);

  }

  if(m_nonCompliantRuleCountHasBeenSet)
  {
   payload.WithInteger("NonCompliantRuleCount", m_nonCompliantRuleCount);

  }

  if(m_totalRuleCountHasBeenSet)
  {
   payload.WithInteger("TotalRuleCount", m_totalRuleCount);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
