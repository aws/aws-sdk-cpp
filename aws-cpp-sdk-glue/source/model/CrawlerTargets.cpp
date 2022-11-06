/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_mongoDBTargetsHasBeenSet(false),
    m_dynamoDBTargetsHasBeenSet(false),
    m_catalogTargetsHasBeenSet(false),
    m_deltaTargetsHasBeenSet(false)
{
}

CrawlerTargets::CrawlerTargets(JsonView jsonValue) : 
    m_s3TargetsHasBeenSet(false),
    m_jdbcTargetsHasBeenSet(false),
    m_mongoDBTargetsHasBeenSet(false),
    m_dynamoDBTargetsHasBeenSet(false),
    m_catalogTargetsHasBeenSet(false),
    m_deltaTargetsHasBeenSet(false)
{
  *this = jsonValue;
}

CrawlerTargets& CrawlerTargets::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Targets"))
  {
    Aws::Utils::Array<JsonView> s3TargetsJsonList = jsonValue.GetArray("S3Targets");
    for(unsigned s3TargetsIndex = 0; s3TargetsIndex < s3TargetsJsonList.GetLength(); ++s3TargetsIndex)
    {
      m_s3Targets.push_back(s3TargetsJsonList[s3TargetsIndex].AsObject());
    }
    m_s3TargetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JdbcTargets"))
  {
    Aws::Utils::Array<JsonView> jdbcTargetsJsonList = jsonValue.GetArray("JdbcTargets");
    for(unsigned jdbcTargetsIndex = 0; jdbcTargetsIndex < jdbcTargetsJsonList.GetLength(); ++jdbcTargetsIndex)
    {
      m_jdbcTargets.push_back(jdbcTargetsJsonList[jdbcTargetsIndex].AsObject());
    }
    m_jdbcTargetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MongoDBTargets"))
  {
    Aws::Utils::Array<JsonView> mongoDBTargetsJsonList = jsonValue.GetArray("MongoDBTargets");
    for(unsigned mongoDBTargetsIndex = 0; mongoDBTargetsIndex < mongoDBTargetsJsonList.GetLength(); ++mongoDBTargetsIndex)
    {
      m_mongoDBTargets.push_back(mongoDBTargetsJsonList[mongoDBTargetsIndex].AsObject());
    }
    m_mongoDBTargetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DynamoDBTargets"))
  {
    Aws::Utils::Array<JsonView> dynamoDBTargetsJsonList = jsonValue.GetArray("DynamoDBTargets");
    for(unsigned dynamoDBTargetsIndex = 0; dynamoDBTargetsIndex < dynamoDBTargetsJsonList.GetLength(); ++dynamoDBTargetsIndex)
    {
      m_dynamoDBTargets.push_back(dynamoDBTargetsJsonList[dynamoDBTargetsIndex].AsObject());
    }
    m_dynamoDBTargetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CatalogTargets"))
  {
    Aws::Utils::Array<JsonView> catalogTargetsJsonList = jsonValue.GetArray("CatalogTargets");
    for(unsigned catalogTargetsIndex = 0; catalogTargetsIndex < catalogTargetsJsonList.GetLength(); ++catalogTargetsIndex)
    {
      m_catalogTargets.push_back(catalogTargetsJsonList[catalogTargetsIndex].AsObject());
    }
    m_catalogTargetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeltaTargets"))
  {
    Aws::Utils::Array<JsonView> deltaTargetsJsonList = jsonValue.GetArray("DeltaTargets");
    for(unsigned deltaTargetsIndex = 0; deltaTargetsIndex < deltaTargetsJsonList.GetLength(); ++deltaTargetsIndex)
    {
      m_deltaTargets.push_back(deltaTargetsJsonList[deltaTargetsIndex].AsObject());
    }
    m_deltaTargetsHasBeenSet = true;
  }

  return *this;
}

JsonValue CrawlerTargets::Jsonize() const
{
  JsonValue payload;

  if(m_s3TargetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> s3TargetsJsonList(m_s3Targets.size());
   for(unsigned s3TargetsIndex = 0; s3TargetsIndex < s3TargetsJsonList.GetLength(); ++s3TargetsIndex)
   {
     s3TargetsJsonList[s3TargetsIndex].AsObject(m_s3Targets[s3TargetsIndex].Jsonize());
   }
   payload.WithArray("S3Targets", std::move(s3TargetsJsonList));

  }

  if(m_jdbcTargetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> jdbcTargetsJsonList(m_jdbcTargets.size());
   for(unsigned jdbcTargetsIndex = 0; jdbcTargetsIndex < jdbcTargetsJsonList.GetLength(); ++jdbcTargetsIndex)
   {
     jdbcTargetsJsonList[jdbcTargetsIndex].AsObject(m_jdbcTargets[jdbcTargetsIndex].Jsonize());
   }
   payload.WithArray("JdbcTargets", std::move(jdbcTargetsJsonList));

  }

  if(m_mongoDBTargetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mongoDBTargetsJsonList(m_mongoDBTargets.size());
   for(unsigned mongoDBTargetsIndex = 0; mongoDBTargetsIndex < mongoDBTargetsJsonList.GetLength(); ++mongoDBTargetsIndex)
   {
     mongoDBTargetsJsonList[mongoDBTargetsIndex].AsObject(m_mongoDBTargets[mongoDBTargetsIndex].Jsonize());
   }
   payload.WithArray("MongoDBTargets", std::move(mongoDBTargetsJsonList));

  }

  if(m_dynamoDBTargetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dynamoDBTargetsJsonList(m_dynamoDBTargets.size());
   for(unsigned dynamoDBTargetsIndex = 0; dynamoDBTargetsIndex < dynamoDBTargetsJsonList.GetLength(); ++dynamoDBTargetsIndex)
   {
     dynamoDBTargetsJsonList[dynamoDBTargetsIndex].AsObject(m_dynamoDBTargets[dynamoDBTargetsIndex].Jsonize());
   }
   payload.WithArray("DynamoDBTargets", std::move(dynamoDBTargetsJsonList));

  }

  if(m_catalogTargetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> catalogTargetsJsonList(m_catalogTargets.size());
   for(unsigned catalogTargetsIndex = 0; catalogTargetsIndex < catalogTargetsJsonList.GetLength(); ++catalogTargetsIndex)
   {
     catalogTargetsJsonList[catalogTargetsIndex].AsObject(m_catalogTargets[catalogTargetsIndex].Jsonize());
   }
   payload.WithArray("CatalogTargets", std::move(catalogTargetsJsonList));

  }

  if(m_deltaTargetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> deltaTargetsJsonList(m_deltaTargets.size());
   for(unsigned deltaTargetsIndex = 0; deltaTargetsIndex < deltaTargetsJsonList.GetLength(); ++deltaTargetsIndex)
   {
     deltaTargetsJsonList[deltaTargetsIndex].AsObject(m_deltaTargets[deltaTargetsIndex].Jsonize());
   }
   payload.WithArray("DeltaTargets", std::move(deltaTargetsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
