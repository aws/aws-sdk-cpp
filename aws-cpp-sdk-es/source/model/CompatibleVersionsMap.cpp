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

#include <aws/es/model/CompatibleVersionsMap.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

CompatibleVersionsMap::CompatibleVersionsMap() : 
    m_sourceVersionHasBeenSet(false),
    m_targetVersionsHasBeenSet(false)
{
}

CompatibleVersionsMap::CompatibleVersionsMap(JsonView jsonValue) : 
    m_sourceVersionHasBeenSet(false),
    m_targetVersionsHasBeenSet(false)
{
  *this = jsonValue;
}

CompatibleVersionsMap& CompatibleVersionsMap::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceVersion"))
  {
    m_sourceVersion = jsonValue.GetString("SourceVersion");

    m_sourceVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetVersions"))
  {
    Array<JsonView> targetVersionsJsonList = jsonValue.GetArray("TargetVersions");
    for(unsigned targetVersionsIndex = 0; targetVersionsIndex < targetVersionsJsonList.GetLength(); ++targetVersionsIndex)
    {
      m_targetVersions.push_back(targetVersionsJsonList[targetVersionsIndex].AsString());
    }
    m_targetVersionsHasBeenSet = true;
  }

  return *this;
}

JsonValue CompatibleVersionsMap::Jsonize() const
{
  JsonValue payload;

  if(m_sourceVersionHasBeenSet)
  {
   payload.WithString("SourceVersion", m_sourceVersion);

  }

  if(m_targetVersionsHasBeenSet)
  {
   Array<JsonValue> targetVersionsJsonList(m_targetVersions.size());
   for(unsigned targetVersionsIndex = 0; targetVersionsIndex < targetVersionsJsonList.GetLength(); ++targetVersionsIndex)
   {
     targetVersionsJsonList[targetVersionsIndex].AsString(m_targetVersions[targetVersionsIndex]);
   }
   payload.WithArray("TargetVersions", std::move(targetVersionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
