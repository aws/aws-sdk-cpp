/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Location.h>
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

Location::Location() : 
    m_jdbcHasBeenSet(false),
    m_s3HasBeenSet(false),
    m_dynamoDBHasBeenSet(false)
{
}

Location::Location(JsonView jsonValue) : 
    m_jdbcHasBeenSet(false),
    m_s3HasBeenSet(false),
    m_dynamoDBHasBeenSet(false)
{
  *this = jsonValue;
}

Location& Location::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Jdbc"))
  {
    Aws::Utils::Array<JsonView> jdbcJsonList = jsonValue.GetArray("Jdbc");
    for(unsigned jdbcIndex = 0; jdbcIndex < jdbcJsonList.GetLength(); ++jdbcIndex)
    {
      m_jdbc.push_back(jdbcJsonList[jdbcIndex].AsObject());
    }
    m_jdbcHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3"))
  {
    Aws::Utils::Array<JsonView> s3JsonList = jsonValue.GetArray("S3");
    for(unsigned s3Index = 0; s3Index < s3JsonList.GetLength(); ++s3Index)
    {
      m_s3.push_back(s3JsonList[s3Index].AsObject());
    }
    m_s3HasBeenSet = true;
  }

  if(jsonValue.ValueExists("DynamoDB"))
  {
    Aws::Utils::Array<JsonView> dynamoDBJsonList = jsonValue.GetArray("DynamoDB");
    for(unsigned dynamoDBIndex = 0; dynamoDBIndex < dynamoDBJsonList.GetLength(); ++dynamoDBIndex)
    {
      m_dynamoDB.push_back(dynamoDBJsonList[dynamoDBIndex].AsObject());
    }
    m_dynamoDBHasBeenSet = true;
  }

  return *this;
}

JsonValue Location::Jsonize() const
{
  JsonValue payload;

  if(m_jdbcHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> jdbcJsonList(m_jdbc.size());
   for(unsigned jdbcIndex = 0; jdbcIndex < jdbcJsonList.GetLength(); ++jdbcIndex)
   {
     jdbcJsonList[jdbcIndex].AsObject(m_jdbc[jdbcIndex].Jsonize());
   }
   payload.WithArray("Jdbc", std::move(jdbcJsonList));

  }

  if(m_s3HasBeenSet)
  {
   Aws::Utils::Array<JsonValue> s3JsonList(m_s3.size());
   for(unsigned s3Index = 0; s3Index < s3JsonList.GetLength(); ++s3Index)
   {
     s3JsonList[s3Index].AsObject(m_s3[s3Index].Jsonize());
   }
   payload.WithArray("S3", std::move(s3JsonList));

  }

  if(m_dynamoDBHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dynamoDBJsonList(m_dynamoDB.size());
   for(unsigned dynamoDBIndex = 0; dynamoDBIndex < dynamoDBJsonList.GetLength(); ++dynamoDBIndex)
   {
     dynamoDBJsonList[dynamoDBIndex].AsObject(m_dynamoDB[dynamoDBIndex].Jsonize());
   }
   payload.WithArray("DynamoDB", std::move(dynamoDBJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
