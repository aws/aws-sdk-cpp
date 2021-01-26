/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

ResourceComplianceSummaryItem::ResourceComplianceSummaryItem(JsonView jsonValue) : 
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

ResourceComplianceSummaryItem& ResourceComplianceSummaryItem::operator =(JsonView jsonValue)
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
