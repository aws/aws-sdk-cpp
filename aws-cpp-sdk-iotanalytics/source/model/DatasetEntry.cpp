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

#include <aws/iotanalytics/model/DatasetEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

DatasetEntry::DatasetEntry() : 
    m_entryNameHasBeenSet(false),
    m_dataURIHasBeenSet(false)
{
}

DatasetEntry::DatasetEntry(const JsonValue& jsonValue) : 
    m_entryNameHasBeenSet(false),
    m_dataURIHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetEntry& DatasetEntry::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("entryName"))
  {
    m_entryName = jsonValue.GetString("entryName");

    m_entryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataURI"))
  {
    m_dataURI = jsonValue.GetString("dataURI");

    m_dataURIHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetEntry::Jsonize() const
{
  JsonValue payload;

  if(m_entryNameHasBeenSet)
  {
   payload.WithString("entryName", m_entryName);

  }

  if(m_dataURIHasBeenSet)
  {
   payload.WithString("dataURI", m_dataURI);

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
