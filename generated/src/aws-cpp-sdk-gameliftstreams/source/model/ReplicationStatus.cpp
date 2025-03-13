/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gameliftstreams/model/ReplicationStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLiftStreams
{
namespace Model
{

ReplicationStatus::ReplicationStatus(JsonView jsonValue)
{
  *this = jsonValue;
}

ReplicationStatus& ReplicationStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Location"))
  {
    m_location = jsonValue.GetString("Location");
    m_locationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ReplicationStatusTypeMapper::GetReplicationStatusTypeForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue ReplicationStatus::Jsonize() const
{
  JsonValue payload;

  if(m_locationHasBeenSet)
  {
   payload.WithString("Location", m_location);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ReplicationStatusTypeMapper::GetNameForReplicationStatusType(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
