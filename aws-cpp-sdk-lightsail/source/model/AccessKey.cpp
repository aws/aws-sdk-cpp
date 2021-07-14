/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/AccessKey.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

AccessKey::AccessKey() : 
    m_accessKeyIdHasBeenSet(false),
    m_secretAccessKeyHasBeenSet(false),
    m_status(StatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
}

AccessKey::AccessKey(JsonView jsonValue) : 
    m_accessKeyIdHasBeenSet(false),
    m_secretAccessKeyHasBeenSet(false),
    m_status(StatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
  *this = jsonValue;
}

AccessKey& AccessKey::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accessKeyId"))
  {
    m_accessKeyId = jsonValue.GetString("accessKeyId");

    m_accessKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secretAccessKey"))
  {
    m_secretAccessKey = jsonValue.GetString("secretAccessKey");

    m_secretAccessKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = StatusTypeMapper::GetStatusTypeForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessKey::Jsonize() const
{
  JsonValue payload;

  if(m_accessKeyIdHasBeenSet)
  {
   payload.WithString("accessKeyId", m_accessKeyId);

  }

  if(m_secretAccessKeyHasBeenSet)
  {
   payload.WithString("secretAccessKey", m_secretAccessKey);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", StatusTypeMapper::GetNameForStatusType(m_status));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
