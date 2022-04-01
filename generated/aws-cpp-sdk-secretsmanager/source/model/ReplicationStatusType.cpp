/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/secretsmanager/model/ReplicationStatusType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecretsManager
{
namespace Model
{

ReplicationStatusType::ReplicationStatusType() : 
    m_regionHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_status(StatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_lastAccessedDateHasBeenSet(false)
{
}

ReplicationStatusType::ReplicationStatusType(JsonView jsonValue) : 
    m_regionHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_status(StatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_lastAccessedDateHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicationStatusType& ReplicationStatusType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

    m_kmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = StatusTypeMapper::GetStatusTypeForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastAccessedDate"))
  {
    m_lastAccessedDate = jsonValue.GetDouble("LastAccessedDate");

    m_lastAccessedDateHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicationStatusType::Jsonize() const
{
  JsonValue payload;

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", StatusTypeMapper::GetNameForStatusType(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_lastAccessedDateHasBeenSet)
  {
   payload.WithDouble("LastAccessedDate", m_lastAccessedDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
