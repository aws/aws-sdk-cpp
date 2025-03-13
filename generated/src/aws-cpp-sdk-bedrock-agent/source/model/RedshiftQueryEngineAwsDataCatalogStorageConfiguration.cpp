/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/RedshiftQueryEngineAwsDataCatalogStorageConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

RedshiftQueryEngineAwsDataCatalogStorageConfiguration::RedshiftQueryEngineAwsDataCatalogStorageConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

RedshiftQueryEngineAwsDataCatalogStorageConfiguration& RedshiftQueryEngineAwsDataCatalogStorageConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tableNames"))
  {
    Aws::Utils::Array<JsonView> tableNamesJsonList = jsonValue.GetArray("tableNames");
    for(unsigned tableNamesIndex = 0; tableNamesIndex < tableNamesJsonList.GetLength(); ++tableNamesIndex)
    {
      m_tableNames.push_back(tableNamesJsonList[tableNamesIndex].AsString());
    }
    m_tableNamesHasBeenSet = true;
  }
  return *this;
}

JsonValue RedshiftQueryEngineAwsDataCatalogStorageConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_tableNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tableNamesJsonList(m_tableNames.size());
   for(unsigned tableNamesIndex = 0; tableNamesIndex < tableNamesJsonList.GetLength(); ++tableNamesIndex)
   {
     tableNamesJsonList[tableNamesIndex].AsString(m_tableNames[tableNamesIndex]);
   }
   payload.WithArray("tableNames", std::move(tableNamesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
