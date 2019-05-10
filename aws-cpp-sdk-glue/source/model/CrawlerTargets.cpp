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

#include <aws/glue/model/CrawlerTargets.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

CrawlerTargets::CrawlerTargets() : 
    m_s3TargetsHasBeenSet(false),
    m_jdbcTargetsHasBeenSet(false),
    m_dynamoDBTargetsHasBeenSet(false),
    m_catalogTargetsHasBeenSet(false)
{
}

CrawlerTargets::CrawlerTargets(JsonView jsonValue) : 
    m_s3TargetsHasBeenSet(false),
    m_jdbcTargetsHasBeenSet(false),
    m_dynamoDBTargetsHasBeenSet(false),
    m_catalogTargetsHasBeenSet(false)
{
  *this = jsonValue;
}

CrawlerTargets& CrawlerTargets::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Targets"))
  {
    Array<JsonView> s3TargetsJsonList = jsonValue.GetArray("S3Targets");
    for(unsigned s3TargetsIndex = 0; s3TargetsIndex < s3TargetsJsonList.GetLength(); ++s3TargetsIndex)
    {
      m_s3Targets.push_back(s3TargetsJsonList[s3TargetsIndex].AsObject());
    }
    m_s3TargetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JdbcTargets"))
  {
    Array<JsonView> jdbcTargetsJsonList = jsonValue.GetArray("JdbcTargets");
    for(unsigned jdbcTargetsIndex = 0; jdbcTargetsIndex < jdbcTargetsJsonList.GetLength(); ++jdbcTargetsIndex)
    {
      m_jdbcTargets.push_back(jdbcTargetsJsonList[jdbcTargetsIndex].AsObject());
    }
    m_jdbcTargetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DynamoDBTargets"))
  {
    Array<JsonView> dynamoDBTargetsJsonList = jsonValue.GetArray("DynamoDBTargets");
    for(unsigned dynamoDBTargetsIndex = 0; dynamoDBTargetsIndex < dynamoDBTargetsJsonList.GetLength(); ++dynamoDBTargetsIndex)
    {
      m_dynamoDBTargets.push_back(dynamoDBTargetsJsonList[dynamoDBTargetsIndex].AsObject());
    }
    m_dynamoDBTargetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CatalogTargets"))
  {
    Array<JsonView> catalogTargetsJsonList = jsonValue.GetArray("CatalogTargets");
    for(unsigned catalogTargetsIndex = 0; catalogTargetsIndex < catalogTargetsJsonList.GetLength(); ++catalogTargetsIndex)
    {
      m_catalogTargets.push_back(catalogTargetsJsonList[catalogTargetsIndex].AsObject());
    }
    m_catalogTargetsHasBeenSet = true;
  }

  return *this;
}

JsonValue CrawlerTargets::Jsonize() const
{
  JsonValue payload;

  if(m_s3TargetsHasBeenSet)
  {
   Array<JsonValue> s3TargetsJsonList(m_s3Targets.size());
   for(unsigned s3TargetsIndex = 0; s3TargetsIndex < s3TargetsJsonList.GetLength(); ++s3TargetsIndex)
   {
     s3TargetsJsonList[s3TargetsIndex].AsObject(m_s3Targets[s3TargetsIndex].Jsonize());
   }
   payload.WithArray("S3Targets", std::move(s3TargetsJsonList));

  }

  if(m_jdbcTargetsHasBeenSet)
  {
   Array<JsonValue> jdbcTargetsJsonList(m_jdbcTargets.size());
   for(unsigned jdbcTargetsIndex = 0; jdbcTargetsIndex < jdbcTargetsJsonList.GetLength(); ++jdbcTargetsIndex)
   {
     jdbcTargetsJsonList[jdbcTargetsIndex].AsObject(m_jdbcTargets[jdbcTargetsIndex].Jsonize());
   }
   payload.WithArray("JdbcTargets", std::move(jdbcTargetsJsonList));

  }

  if(m_dynamoDBTargetsHasBeenSet)
  {
   Array<JsonValue> dynamoDBTargetsJsonList(m_dynamoDBTargets.size());
   for(unsigned dynamoDBTargetsIndex = 0; dynamoDBTargetsIndex < dynamoDBTargetsJsonList.GetLength(); ++dynamoDBTargetsIndex)
   {
     dynamoDBTargetsJsonList[dynamoDBTargetsIndex].AsObject(m_dynamoDBTargets[dynamoDBTargetsIndex].Jsonize());
   }
   payload.WithArray("DynamoDBTargets", std::move(dynamoDBTargetsJsonList));

  }

  if(m_catalogTargetsHasBeenSet)
  {
   Array<JsonValue> catalogTargetsJsonList(m_catalogTargets.size());
   for(unsigned catalogTargetsIndex = 0; catalogTargetsIndex < catalogTargetsJsonList.GetLength(); ++catalogTargetsIndex)
   {
     catalogTargetsJsonList[catalogTargetsIndex].AsObject(m_catalogTargets[catalogTargetsIndex].Jsonize());
   }
   payload.WithArray("CatalogTargets", std::move(catalogTargetsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
