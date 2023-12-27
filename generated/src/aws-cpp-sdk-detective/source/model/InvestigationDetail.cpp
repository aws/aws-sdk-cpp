/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/InvestigationDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Detective
{
namespace Model
{

InvestigationDetail::InvestigationDetail() : 
    m_investigationIdHasBeenSet(false),
    m_severity(Severity::NOT_SET),
    m_severityHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_state(State::NOT_SET),
    m_stateHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_entityArnHasBeenSet(false),
    m_entityType(EntityType::NOT_SET),
    m_entityTypeHasBeenSet(false)
{
}

InvestigationDetail::InvestigationDetail(JsonView jsonValue) : 
    m_investigationIdHasBeenSet(false),
    m_severity(Severity::NOT_SET),
    m_severityHasBeenSet(false),
    m_status(Status::NOT_SET),
    m_statusHasBeenSet(false),
    m_state(State::NOT_SET),
    m_stateHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_entityArnHasBeenSet(false),
    m_entityType(EntityType::NOT_SET),
    m_entityTypeHasBeenSet(false)
{
  *this = jsonValue;
}

InvestigationDetail& InvestigationDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InvestigationId"))
  {
    m_investigationId = jsonValue.GetString("InvestigationId");

    m_investigationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Severity"))
  {
    m_severity = SeverityMapper::GetSeverityForName(jsonValue.GetString("Severity"));

    m_severityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = StateMapper::GetStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetString("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntityArn"))
  {
    m_entityArn = jsonValue.GetString("EntityArn");

    m_entityArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EntityType"))
  {
    m_entityType = EntityTypeMapper::GetEntityTypeForName(jsonValue.GetString("EntityType"));

    m_entityTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue InvestigationDetail::Jsonize() const
{
  JsonValue payload;

  if(m_investigationIdHasBeenSet)
  {
   payload.WithString("InvestigationId", m_investigationId);

  }

  if(m_severityHasBeenSet)
  {
   payload.WithString("Severity", SeverityMapper::GetNameForSeverity(m_severity));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StatusMapper::GetNameForStatus(m_status));
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", StateMapper::GetNameForState(m_state));
  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithString("CreatedTime", m_createdTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_entityArnHasBeenSet)
  {
   payload.WithString("EntityArn", m_entityArn);

  }

  if(m_entityTypeHasBeenSet)
  {
   payload.WithString("EntityType", EntityTypeMapper::GetNameForEntityType(m_entityType));
  }

  return payload;
}

} // namespace Model
} // namespace Detective
} // namespace Aws
