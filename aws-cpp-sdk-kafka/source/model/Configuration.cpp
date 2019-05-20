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

#include <aws/kafka/model/Configuration.h>
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

Configuration::Configuration() : 
    m_arnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_kafkaVersionsHasBeenSet(false),
    m_latestRevisionHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Configuration::Configuration(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_kafkaVersionsHasBeenSet(false),
    m_latestRevisionHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

Configuration& Configuration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kafkaVersions"))
  {
    Array<JsonView> kafkaVersionsJsonList = jsonValue.GetArray("kafkaVersions");
    for(unsigned kafkaVersionsIndex = 0; kafkaVersionsIndex < kafkaVersionsJsonList.GetLength(); ++kafkaVersionsIndex)
    {
      m_kafkaVersions.push_back(kafkaVersionsJsonList[kafkaVersionsIndex].AsString());
    }
    m_kafkaVersionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("latestRevision"))
  {
    m_latestRevision = jsonValue.GetObject("latestRevision");

    m_latestRevisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue Configuration::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_kafkaVersionsHasBeenSet)
  {
   Array<JsonValue> kafkaVersionsJsonList(m_kafkaVersions.size());
   for(unsigned kafkaVersionsIndex = 0; kafkaVersionsIndex < kafkaVersionsJsonList.GetLength(); ++kafkaVersionsIndex)
   {
     kafkaVersionsJsonList[kafkaVersionsIndex].AsString(m_kafkaVersions[kafkaVersionsIndex]);
   }
   payload.WithArray("kafkaVersions", std::move(kafkaVersionsJsonList));

  }

  if(m_latestRevisionHasBeenSet)
  {
   payload.WithObject("latestRevision", m_latestRevision.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
