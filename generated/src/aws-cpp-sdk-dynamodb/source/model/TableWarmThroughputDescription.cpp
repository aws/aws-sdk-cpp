/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/TableWarmThroughputDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

TableWarmThroughputDescription::TableWarmThroughputDescription(JsonView jsonValue)
{
  *this = jsonValue;
}

TableWarmThroughputDescription& TableWarmThroughputDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReadUnitsPerSecond"))
  {
    m_readUnitsPerSecond = jsonValue.GetInt64("ReadUnitsPerSecond");
    m_readUnitsPerSecondHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WriteUnitsPerSecond"))
  {
    m_writeUnitsPerSecond = jsonValue.GetInt64("WriteUnitsPerSecond");
    m_writeUnitsPerSecondHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = TableStatusMapper::GetTableStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue TableWarmThroughputDescription::Jsonize() const
{
  JsonValue payload;

  if(m_readUnitsPerSecondHasBeenSet)
  {
   payload.WithInt64("ReadUnitsPerSecond", m_readUnitsPerSecond);

  }

  if(m_writeUnitsPerSecondHasBeenSet)
  {
   payload.WithInt64("WriteUnitsPerSecond", m_writeUnitsPerSecond);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", TableStatusMapper::GetNameForTableStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
