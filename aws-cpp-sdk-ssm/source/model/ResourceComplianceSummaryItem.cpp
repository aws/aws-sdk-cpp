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

#include <aws/ssm/model/ResourceComplianceSummaryItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

ResourceComplianceSummaryItem::ResourceComplianceSummaryItem() : 
    m_complianceTypeHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_status(ComplianceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_overallSeverity(ComplianceSeverity::NOT_SET),
    m_overallSeverityHasBeenSet(false),
    m_executionSummaryHasBeenSet(false),
    m_compliantSummaryHasBeenSet(false),
    m_nonCompliantSummaryHasBeenSet(false)
{
}

ResourceComplianceSummaryItem::ResourceComplianceSummaryItem(const JsonValue& jsonValue) : 
    m_complianceTypeHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_status(ComplianceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_overallSeverity(ComplianceSeverity::NOT_SET),
    m_overallSeverityHasBeenSet(false),
    m_executionSummaryHasBeenSet(false),
    m_compliantSummaryHasBeenSet(false),
    m_nonCompliantSummaryHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceComplianceSummaryItem& ResourceComplianceSummaryItem::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ComplianceType"))
  {
    m_complianceType = jsonValue.GetString("ComplianceType");

    m_complianceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ComplianceStatusMapper::GetComplianceStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OverallSeverity"))
  {
    m_overallSeverity = ComplianceSeverityMapper::GetComplianceSeverityForName(jsonValue.GetString("OverallSeverity"));

    m_overallSeverityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionSummary"))
  {
    m_executionSummary = jsonValue.GetObject("ExecutionSummary");

    m_executionSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompliantSummary"))
  {
    m_compliantSummary = jsonValue.GetObject("CompliantSummary");

    m_compliantSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NonCompliantSummary"))
  {
    m_nonCompliantSummary = jsonValue.GetObject("NonCompliantSummary");

    m_nonCompliantSummaryHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceComplianceSummaryItem::Jsonize() const
{
  JsonValue payload;

  if(m_complianceTypeHasBeenSet)
  {
   payload.WithString("ComplianceType", m_complianceType);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ComplianceStatusMapper::GetNameForComplianceStatus(m_status));
  }

  if(m_overallSeverityHasBeenSet)
  {
   payload.WithString("OverallSeverity", ComplianceSeverityMapper::GetNameForComplianceSeverity(m_overallSeverity));
  }

  if(m_executionSummaryHasBeenSet)
  {
   payload.WithObject("ExecutionSummary", m_executionSummary.Jsonize());

  }

  if(m_compliantSummaryHasBeenSet)
  {
   payload.WithObject("CompliantSummary", m_compliantSummary.Jsonize());

  }

  if(m_nonCompliantSummaryHasBeenSet)
  {
   payload.WithObject("NonCompliantSummary", m_nonCompliantSummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
