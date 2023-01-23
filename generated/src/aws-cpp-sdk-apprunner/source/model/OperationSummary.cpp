/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/OperationSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppRunner
{
namespace Model
{

OperationSummary::OperationSummary() : 
    m_idHasBeenSet(false),
    m_type(OperationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_status(OperationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_targetArnHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_endedAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

OperationSummary::OperationSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_type(OperationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_status(OperationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_targetArnHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_endedAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

OperationSummary& OperationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = OperationTypeMapper::GetOperationTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = OperationStatusMapper::GetOperationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetArn"))
  {
    m_targetArn = jsonValue.GetString("TargetArn");

    m_targetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartedAt"))
  {
    m_startedAt = jsonValue.GetDouble("StartedAt");

    m_startedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndedAt"))
  {
    m_endedAt = jsonValue.GetDouble("EndedAt");

    m_endedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue OperationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", OperationTypeMapper::GetNameForOperationType(m_type));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", OperationStatusMapper::GetNameForOperationStatus(m_status));
  }

  if(m_targetArnHasBeenSet)
  {
   payload.WithString("TargetArn", m_targetArn);

  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithDouble("StartedAt", m_startedAt.SecondsWithMSPrecision());
  }

  if(m_endedAtHasBeenSet)
  {
   payload.WithDouble("EndedAt", m_endedAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace AppRunner
} // namespace Aws
