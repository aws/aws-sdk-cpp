/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/FileMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppTest
{
namespace Model
{

FileMetadata::FileMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

FileMetadata& FileMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataSets"))
  {
    Aws::Utils::Array<JsonView> dataSetsJsonList = jsonValue.GetArray("dataSets");
    for(unsigned dataSetsIndex = 0; dataSetsIndex < dataSetsJsonList.GetLength(); ++dataSetsIndex)
    {
      m_dataSets.push_back(dataSetsJsonList[dataSetsIndex].AsObject());
    }
    m_dataSetsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("databaseCDC"))
  {
    m_databaseCDC = jsonValue.GetObject("databaseCDC");
    m_databaseCDCHasBeenSet = true;
  }
  return *this;
}

JsonValue FileMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_dataSetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dataSetsJsonList(m_dataSets.size());
   for(unsigned dataSetsIndex = 0; dataSetsIndex < dataSetsJsonList.GetLength(); ++dataSetsIndex)
   {
     dataSetsJsonList[dataSetsIndex].AsObject(m_dataSets[dataSetsIndex].Jsonize());
   }
   payload.WithArray("dataSets", std::move(dataSetsJsonList));

  }

  if(m_databaseCDCHasBeenSet)
  {
   payload.WithObject("databaseCDC", m_databaseCDC.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
