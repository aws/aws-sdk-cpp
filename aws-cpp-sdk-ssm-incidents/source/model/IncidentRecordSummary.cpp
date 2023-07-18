/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-incidents/model/IncidentRecordSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

IncidentRecordSummary::IncidentRecordSummary() : 
    m_arnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_impact(0),
    m_impactHasBeenSet(false),
    m_incidentRecordSourceHasBeenSet(false),
    m_resolvedTimeHasBeenSet(false),
    m_status(IncidentRecordStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_titleHasBeenSet(false)
{
}

IncidentRecordSummary::IncidentRecordSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_impact(0),
    m_impactHasBeenSet(false),
    m_incidentRecordSourceHasBeenSet(false),
    m_resolvedTimeHasBeenSet(false),
    m_status(IncidentRecordStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_titleHasBeenSet(false)
{
  *this = jsonValue;
}

IncidentRecordSummary& IncidentRecordSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("impact"))
  {
    m_impact = jsonValue.GetInteger("impact");

    m_impactHasBeenSet = true;
  }

  if(jsonValue.ValueExists("incidentRecordSource"))
  {
    m_incidentRecordSource = jsonValue.GetObject("incidentRecordSource");

    m_incidentRecordSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resolvedTime"))
  {
    m_resolvedTime = jsonValue.GetDouble("resolvedTime");

    m_resolvedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = IncidentRecordStatusMapper::GetIncidentRecordStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");

    m_titleHasBeenSet = true;
  }

  return *this;
}

JsonValue IncidentRecordSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_impactHasBeenSet)
  {
   payload.WithInteger("impact", m_impact);

  }

  if(m_incidentRecordSourceHasBeenSet)
  {
   payload.WithObject("incidentRecordSource", m_incidentRecordSource.Jsonize());

  }

  if(m_resolvedTimeHasBeenSet)
  {
   payload.WithDouble("resolvedTime", m_resolvedTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", IncidentRecordStatusMapper::GetNameForIncidentRecordStatus(m_status));
  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  return payload;
}

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
