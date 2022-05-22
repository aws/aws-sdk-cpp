/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/ImageReplicationStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECR
{
namespace Model
{

ImageReplicationStatus::ImageReplicationStatus() : 
    m_regionHasBeenSet(false),
    m_registryIdHasBeenSet(false),
    m_status(ReplicationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_failureCodeHasBeenSet(false)
{
}

ImageReplicationStatus::ImageReplicationStatus(JsonView jsonValue) : 
    m_regionHasBeenSet(false),
    m_registryIdHasBeenSet(false),
    m_status(ReplicationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_failureCodeHasBeenSet(false)
{
  *this = jsonValue;
}

ImageReplicationStatus& ImageReplicationStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("registryId"))
  {
    m_registryId = jsonValue.GetString("registryId");

    m_registryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ReplicationStatusMapper::GetReplicationStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureCode"))
  {
    m_failureCode = jsonValue.GetString("failureCode");

    m_failureCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageReplicationStatus::Jsonize() const
{
  JsonValue payload;

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_registryIdHasBeenSet)
  {
   payload.WithString("registryId", m_registryId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ReplicationStatusMapper::GetNameForReplicationStatus(m_status));
  }

  if(m_failureCodeHasBeenSet)
  {
   payload.WithString("failureCode", m_failureCode);

  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws
