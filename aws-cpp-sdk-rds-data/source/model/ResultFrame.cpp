/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds-data/model/ResultFrame.h>
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

ResultFrame::ResultFrame() : 
    m_recordsHasBeenSet(false),
    m_resultSetMetadataHasBeenSet(false)
{
}

ResultFrame::ResultFrame(JsonView jsonValue) : 
    m_recordsHasBeenSet(false),
    m_resultSetMetadataHasBeenSet(false)
{
  *this = jsonValue;
}

ResultFrame& ResultFrame::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("records"))
  {
    Array<JsonView> recordsJsonList = jsonValue.GetArray("records");
    for(unsigned recordsIndex = 0; recordsIndex < recordsJsonList.GetLength(); ++recordsIndex)
    {
      m_records.push_back(recordsJsonList[recordsIndex].AsObject());
    }
    m_recordsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resultSetMetadata"))
  {
    m_resultSetMetadata = jsonValue.GetObject("resultSetMetadata");

    m_resultSetMetadataHasBeenSet = true;
  }

  return *this;
}

JsonValue ResultFrame::Jsonize() const
{
  JsonValue payload;

  if(m_recordsHasBeenSet)
  {
   Array<JsonValue> recordsJsonList(m_records.size());
   for(unsigned recordsIndex = 0; recordsIndex < recordsJsonList.GetLength(); ++recordsIndex)
   {
     recordsJsonList[recordsIndex].AsObject(m_records[recordsIndex].Jsonize());
   }
   payload.WithArray("records", std::move(recordsJsonList));

  }

  if(m_resultSetMetadataHasBeenSet)
  {
   payload.WithObject("resultSetMetadata", m_resultSetMetadata.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
