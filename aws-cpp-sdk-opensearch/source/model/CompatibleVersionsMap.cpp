/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/CompatibleVersionsMap.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
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
    Aws::Utils::Array<JsonView> targetVersionsJsonList = jsonValue.GetArray("TargetVersions");
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
   Aws::Utils::Array<JsonValue> targetVersionsJsonList(m_targetVersions.size());
   for(unsigned targetVersionsIndex = 0; targetVersionsIndex < targetVersionsJsonList.GetLength(); ++targetVersionsIndex)
   {
     targetVersionsJsonList[targetVersionsIndex].AsString(m_targetVersions[targetVersionsIndex]);
   }
   payload.WithArray("TargetVersions", std::move(targetVersionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
