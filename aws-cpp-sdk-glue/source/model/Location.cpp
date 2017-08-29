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
    m_s3HasBeenSet(false)
{
}

Location::Location(const JsonValue& jsonValue) : 
    m_jdbcHasBeenSet(false),
    m_s3HasBeenSet(false)
{
  *this = jsonValue;
}

Location& Location::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Jdbc"))
  {
    Array<JsonValue> jdbcJsonList = jsonValue.GetArray("Jdbc");
    for(unsigned jdbcIndex = 0; jdbcIndex < jdbcJsonList.GetLength(); ++jdbcIndex)
    {
      m_jdbc.push_back(jdbcJsonList[jdbcIndex].AsObject());
    }
    m_jdbcHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3"))
  {
    Array<JsonValue> s3JsonList = jsonValue.GetArray("S3");
    for(unsigned s3Index = 0; s3Index < s3JsonList.GetLength(); ++s3Index)
    {
      m_s3.push_back(s3JsonList[s3Index].AsObject());
    }
    m_s3HasBeenSet = true;
  }

  return *this;
}

JsonValue Location::Jsonize() const
{
  JsonValue payload;

  if(m_jdbcHasBeenSet)
  {
   Array<JsonValue> jdbcJsonList(m_jdbc.size());
   for(unsigned jdbcIndex = 0; jdbcIndex < jdbcJsonList.GetLength(); ++jdbcIndex)
   {
     jdbcJsonList[jdbcIndex].AsObject(m_jdbc[jdbcIndex].Jsonize());
   }
   payload.WithArray("Jdbc", std::move(jdbcJsonList));

  }

  if(m_s3HasBeenSet)
  {
   Array<JsonValue> s3JsonList(m_s3.size());
   for(unsigned s3Index = 0; s3Index < s3JsonList.GetLength(); ++s3Index)
   {
     s3JsonList[s3Index].AsObject(m_s3[s3Index].Jsonize());
   }
   payload.WithArray("S3", std::move(s3JsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
