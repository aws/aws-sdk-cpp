/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/DataSetImportConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

DataSetImportConfig::DataSetImportConfig() : 
    m_dataSetsHasBeenSet(false),
    m_s3LocationHasBeenSet(false)
{
}

DataSetImportConfig::DataSetImportConfig(JsonView jsonValue) : 
    m_dataSetsHasBeenSet(false),
    m_s3LocationHasBeenSet(false)
{
  *this = jsonValue;
}

DataSetImportConfig& DataSetImportConfig::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("s3Location"))
  {
    m_s3Location = jsonValue.GetString("s3Location");

    m_s3LocationHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSetImportConfig::Jsonize() const
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

  if(m_s3LocationHasBeenSet)
  {
   payload.WithString("s3Location", m_s3Location);

  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
