﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/ProactiveOrganizationInsightSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

ProactiveOrganizationInsightSummary::ProactiveOrganizationInsightSummary() : 
    m_idHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_organizationalUnitIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_severity(InsightSeverity::NOT_SET),
    m_severityHasBeenSet(false),
    m_status(InsightStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_insightTimeRangeHasBeenSet(false),
    m_predictionTimeRangeHasBeenSet(false),
    m_resourceCollectionHasBeenSet(false),
    m_serviceCollectionHasBeenSet(false)
{
}

ProactiveOrganizationInsightSummary::ProactiveOrganizationInsightSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_organizationalUnitIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_severity(InsightSeverity::NOT_SET),
    m_severityHasBeenSet(false),
    m_status(InsightStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_insightTimeRangeHasBeenSet(false),
    m_predictionTimeRangeHasBeenSet(false),
    m_resourceCollectionHasBeenSet(false),
    m_serviceCollectionHasBeenSet(false)
{
  *this = jsonValue;
}

ProactiveOrganizationInsightSummary& ProactiveOrganizationInsightSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrganizationalUnitId"))
  {
    m_organizationalUnitId = jsonValue.GetString("OrganizationalUnitId");

    m_organizationalUnitIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Severity"))
  {
    m_severity = InsightSeverityMapper::GetInsightSeverityForName(jsonValue.GetString("Severity"));

    m_severityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = InsightStatusMapper::GetInsightStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InsightTimeRange"))
  {
    m_insightTimeRange = jsonValue.GetObject("InsightTimeRange");

    m_insightTimeRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PredictionTimeRange"))
  {
    m_predictionTimeRange = jsonValue.GetObject("PredictionTimeRange");

    m_predictionTimeRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceCollection"))
  {
    m_resourceCollection = jsonValue.GetObject("ResourceCollection");

    m_resourceCollectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceCollection"))
  {
    m_serviceCollection = jsonValue.GetObject("ServiceCollection");

    m_serviceCollectionHasBeenSet = true;
  }

  return *this;
}

JsonValue ProactiveOrganizationInsightSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_organizationalUnitIdHasBeenSet)
  {
   payload.WithString("OrganizationalUnitId", m_organizationalUnitId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_severityHasBeenSet)
  {
   payload.WithString("Severity", InsightSeverityMapper::GetNameForInsightSeverity(m_severity));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", InsightStatusMapper::GetNameForInsightStatus(m_status));
  }

  if(m_insightTimeRangeHasBeenSet)
  {
   payload.WithObject("InsightTimeRange", m_insightTimeRange.Jsonize());

  }

  if(m_predictionTimeRangeHasBeenSet)
  {
   payload.WithObject("PredictionTimeRange", m_predictionTimeRange.Jsonize());

  }

  if(m_resourceCollectionHasBeenSet)
  {
   payload.WithObject("ResourceCollection", m_resourceCollection.Jsonize());

  }

  if(m_serviceCollectionHasBeenSet)
  {
   payload.WithObject("ServiceCollection", m_serviceCollection.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
