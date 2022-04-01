/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/AggregateConformancePackComplianceSummary.h>
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

AggregateConformancePackComplianceSummary::AggregateConformancePackComplianceSummary() : 
    m_complianceSummaryHasBeenSet(false),
    m_groupNameHasBeenSet(false)
{
}

AggregateConformancePackComplianceSummary::AggregateConformancePackComplianceSummary(JsonView jsonValue) : 
    m_complianceSummaryHasBeenSet(false),
    m_groupNameHasBeenSet(false)
{
  *this = jsonValue;
}

AggregateConformancePackComplianceSummary& AggregateConformancePackComplianceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ComplianceSummary"))
  {
    m_complianceSummary = jsonValue.GetObject("ComplianceSummary");

    m_complianceSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GroupName"))
  {
    m_groupName = jsonValue.GetString("GroupName");

    m_groupNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AggregateConformancePackComplianceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_complianceSummaryHasBeenSet)
  {
   payload.WithObject("ComplianceSummary", m_complianceSummary.Jsonize());

  }

  if(m_groupNameHasBeenSet)
  {
   payload.WithString("GroupName", m_groupName);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
