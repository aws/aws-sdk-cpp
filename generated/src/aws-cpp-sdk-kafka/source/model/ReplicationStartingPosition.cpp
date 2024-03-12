/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ReplicationStartingPosition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

ReplicationStartingPosition::ReplicationStartingPosition() : 
    m_type(ReplicationStartingPositionType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

ReplicationStartingPosition::ReplicationStartingPosition(JsonView jsonValue) : 
    m_type(ReplicationStartingPositionType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicationStartingPosition& ReplicationStartingPosition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = ReplicationStartingPositionTypeMapper::GetReplicationStartingPositionTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicationStartingPosition::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ReplicationStartingPositionTypeMapper::GetNameForReplicationStartingPositionType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
