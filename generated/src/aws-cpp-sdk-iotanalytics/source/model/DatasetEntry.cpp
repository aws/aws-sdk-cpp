/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

DatasetEntry::DatasetEntry(JsonView jsonValue) : 
    m_entryNameHasBeenSet(false),
    m_dataURIHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetEntry& DatasetEntry::operator =(JsonView jsonValue)
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
