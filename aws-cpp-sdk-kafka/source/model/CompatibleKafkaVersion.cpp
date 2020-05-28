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

#include <aws/kafka/model/CompatibleKafkaVersion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

CompatibleKafkaVersion::CompatibleKafkaVersion() : 
    m_sourceVersionHasBeenSet(false),
    m_targetVersionsHasBeenSet(false)
{
}

CompatibleKafkaVersion::CompatibleKafkaVersion(JsonView jsonValue) : 
    m_sourceVersionHasBeenSet(false),
    m_targetVersionsHasBeenSet(false)
{
  *this = jsonValue;
}

CompatibleKafkaVersion& CompatibleKafkaVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceVersion"))
  {
    m_sourceVersion = jsonValue.GetString("sourceVersion");

    m_sourceVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetVersions"))
  {
    Array<JsonView> targetVersionsJsonList = jsonValue.GetArray("targetVersions");
    for(unsigned targetVersionsIndex = 0; targetVersionsIndex < targetVersionsJsonList.GetLength(); ++targetVersionsIndex)
    {
      m_targetVersions.push_back(targetVersionsJsonList[targetVersionsIndex].AsString());
    }
    m_targetVersionsHasBeenSet = true;
  }

  return *this;
}

JsonValue CompatibleKafkaVersion::Jsonize() const
{
  JsonValue payload;

  if(m_sourceVersionHasBeenSet)
  {
   payload.WithString("sourceVersion", m_sourceVersion);

  }

  if(m_targetVersionsHasBeenSet)
  {
   Array<JsonValue> targetVersionsJsonList(m_targetVersions.size());
   for(unsigned targetVersionsIndex = 0; targetVersionsIndex < targetVersionsJsonList.GetLength(); ++targetVersionsIndex)
   {
     targetVersionsJsonList[targetVersionsIndex].AsString(m_targetVersions[targetVersionsIndex]);
   }
   payload.WithArray("targetVersions", std::move(targetVersionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
