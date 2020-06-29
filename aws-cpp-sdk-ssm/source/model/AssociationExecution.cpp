/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/AssociationExecution.h>
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

AssociationExecution::AssociationExecution() : 
    m_associationIdHasBeenSet(false),
    m_associationVersionHasBeenSet(false),
    m_executionIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_detailedStatusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastExecutionDateHasBeenSet(false),
    m_resourceCountByStatusHasBeenSet(false)
{
}

AssociationExecution::AssociationExecution(JsonView jsonValue) : 
    m_associationIdHasBeenSet(false),
    m_associationVersionHasBeenSet(false),
    m_executionIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_detailedStatusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_lastExecutionDateHasBeenSet(false),
    m_resourceCountByStatusHasBeenSet(false)
{
  *this = jsonValue;
}

AssociationExecution& AssociationExecution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssociationId"))
  {
    m_associationId = jsonValue.GetString("AssociationId");

    m_associationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociationVersion"))
  {
    m_associationVersion = jsonValue.GetString("AssociationVersion");

    m_associationVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionId"))
  {
    m_executionId = jsonValue.GetString("ExecutionId");

    m_executionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DetailedStatus"))
  {
    m_detailedStatus = jsonValue.GetString("DetailedStatus");

    m_detailedStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastExecutionDate"))
  {
    m_lastExecutionDate = jsonValue.GetDouble("LastExecutionDate");

    m_lastExecutionDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceCountByStatus"))
  {
    m_resourceCountByStatus = jsonValue.GetString("ResourceCountByStatus");

    m_resourceCountByStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue AssociationExecution::Jsonize() const
{
  JsonValue payload;

  if(m_associationIdHasBeenSet)
  {
   payload.WithString("AssociationId", m_associationId);

  }

  if(m_associationVersionHasBeenSet)
  {
   payload.WithString("AssociationVersion", m_associationVersion);

  }

  if(m_executionIdHasBeenSet)
  {
   payload.WithString("ExecutionId", m_executionId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_detailedStatusHasBeenSet)
  {
   payload.WithString("DetailedStatus", m_detailedStatus);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_lastExecutionDateHasBeenSet)
  {
   payload.WithDouble("LastExecutionDate", m_lastExecutionDate.SecondsWithMSPrecision());
  }

  if(m_resourceCountByStatusHasBeenSet)
  {
   payload.WithString("ResourceCountByStatus", m_resourceCountByStatus);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
