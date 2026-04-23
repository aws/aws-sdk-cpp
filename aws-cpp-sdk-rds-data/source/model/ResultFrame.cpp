/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
