/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/DelegationMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AuditManager
{
namespace Model
{

DelegationMetadata::DelegationMetadata() : 
    m_idHasBeenSet(false),
    m_assessmentNameHasBeenSet(false),
    m_assessmentIdHasBeenSet(false),
    m_status(DelegationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_controlSetNameHasBeenSet(false)
{
}

DelegationMetadata::DelegationMetadata(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_assessmentNameHasBeenSet(false),
    m_assessmentIdHasBeenSet(false),
    m_status(DelegationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_controlSetNameHasBeenSet(false)
{
  *this = jsonValue;
}

DelegationMetadata& DelegationMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assessmentName"))
  {
    m_assessmentName = jsonValue.GetString("assessmentName");

    m_assessmentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assessmentId"))
  {
    m_assessmentId = jsonValue.GetString("assessmentId");

    m_assessmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = DelegationStatusMapper::GetDelegationStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("controlSetName"))
  {
    m_controlSetName = jsonValue.GetString("controlSetName");

    m_controlSetNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DelegationMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_assessmentNameHasBeenSet)
  {
   payload.WithString("assessmentName", m_assessmentName);

  }

  if(m_assessmentIdHasBeenSet)
  {
   payload.WithString("assessmentId", m_assessmentId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", DelegationStatusMapper::GetNameForDelegationStatus(m_status));
  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_controlSetNameHasBeenSet)
  {
   payload.WithString("controlSetName", m_controlSetName);

  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
