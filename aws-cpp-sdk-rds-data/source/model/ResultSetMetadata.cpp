/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds-data/model/ResultSetMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RDSDataService
{
namespace Model
{

ResultSetMetadata::ResultSetMetadata() : 
    m_columnCount(0),
    m_columnCountHasBeenSet(false),
    m_columnMetadataHasBeenSet(false)
{
}

ResultSetMetadata::ResultSetMetadata(JsonView jsonValue) : 
    m_columnCount(0),
    m_columnCountHasBeenSet(false),
    m_columnMetadataHasBeenSet(false)
{
  *this = jsonValue;
}

ResultSetMetadata& ResultSetMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("columnCount"))
  {
    m_columnCount = jsonValue.GetInt64("columnCount");

    m_columnCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("columnMetadata"))
  {
    Aws::Utils::Array<JsonView> columnMetadataJsonList = jsonValue.GetArray("columnMetadata");
    for(unsigned columnMetadataIndex = 0; columnMetadataIndex < columnMetadataJsonList.GetLength(); ++columnMetadataIndex)
    {
      m_columnMetadata.push_back(columnMetadataJsonList[columnMetadataIndex].AsObject());
    }
    m_columnMetadataHasBeenSet = true;
  }

  return *this;
}

JsonValue ResultSetMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_columnCountHasBeenSet)
  {
   payload.WithInt64("columnCount", m_columnCount);

  }

  if(m_columnMetadataHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> columnMetadataJsonList(m_columnMetadata.size());
   for(unsigned columnMetadataIndex = 0; columnMetadataIndex < columnMetadataJsonList.GetLength(); ++columnMetadataIndex)
   {
     columnMetadataJsonList[columnMetadataIndex].AsObject(m_columnMetadata[columnMetadataIndex].Jsonize());
   }
   payload.WithArray("columnMetadata", std::move(columnMetadataJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
