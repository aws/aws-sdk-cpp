/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ProtectedResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace Model
{

ProtectedResource::ProtectedResource() : 
    m_resourceArnHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_lastBackupTimeHasBeenSet(false)
{
}

ProtectedResource::ProtectedResource(JsonView jsonValue) : 
    m_resourceArnHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_lastBackupTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ProtectedResource& ProtectedResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastBackupTime"))
  {
    m_lastBackupTime = jsonValue.GetDouble("LastBackupTime");

    m_lastBackupTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ProtectedResource::Jsonize() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_lastBackupTimeHasBeenSet)
  {
   payload.WithDouble("LastBackupTime", m_lastBackupTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
