/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/DestinationTableConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

DestinationTableConfiguration::DestinationTableConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

DestinationTableConfiguration& DestinationTableConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DestinationTableName"))
  {
    m_destinationTableName = jsonValue.GetString("DestinationTableName");
    m_destinationTableNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DestinationDatabaseName"))
  {
    m_destinationDatabaseName = jsonValue.GetString("DestinationDatabaseName");
    m_destinationDatabaseNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UniqueKeys"))
  {
    Aws::Utils::Array<JsonView> uniqueKeysJsonList = jsonValue.GetArray("UniqueKeys");
    for(unsigned uniqueKeysIndex = 0; uniqueKeysIndex < uniqueKeysJsonList.GetLength(); ++uniqueKeysIndex)
    {
      m_uniqueKeys.push_back(uniqueKeysJsonList[uniqueKeysIndex].AsString());
    }
    m_uniqueKeysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PartitionSpec"))
  {
    m_partitionSpec = jsonValue.GetObject("PartitionSpec");
    m_partitionSpecHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3ErrorOutputPrefix"))
  {
    m_s3ErrorOutputPrefix = jsonValue.GetString("S3ErrorOutputPrefix");
    m_s3ErrorOutputPrefixHasBeenSet = true;
  }
  return *this;
}

JsonValue DestinationTableConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_destinationTableNameHasBeenSet)
  {
   payload.WithString("DestinationTableName", m_destinationTableName);

  }

  if(m_destinationDatabaseNameHasBeenSet)
  {
   payload.WithString("DestinationDatabaseName", m_destinationDatabaseName);

  }

  if(m_uniqueKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> uniqueKeysJsonList(m_uniqueKeys.size());
   for(unsigned uniqueKeysIndex = 0; uniqueKeysIndex < uniqueKeysJsonList.GetLength(); ++uniqueKeysIndex)
   {
     uniqueKeysJsonList[uniqueKeysIndex].AsString(m_uniqueKeys[uniqueKeysIndex]);
   }
   payload.WithArray("UniqueKeys", std::move(uniqueKeysJsonList));

  }

  if(m_partitionSpecHasBeenSet)
  {
   payload.WithObject("PartitionSpec", m_partitionSpec.Jsonize());

  }

  if(m_s3ErrorOutputPrefixHasBeenSet)
  {
   payload.WithString("S3ErrorOutputPrefix", m_s3ErrorOutputPrefix);

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
