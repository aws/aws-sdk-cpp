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
    m_jdbcTargetsHasBeenSet(false)
{
}

CrawlerTargets::CrawlerTargets(const JsonValue& jsonValue) : 
    m_s3TargetsHasBeenSet(false),
    m_jdbcTargetsHasBeenSet(false)
{
  *this = jsonValue;
}

CrawlerTargets& CrawlerTargets::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("S3Targets"))
  {
    Array<JsonValue> s3TargetsJsonList = jsonValue.GetArray("S3Targets");
    for(unsigned s3TargetsIndex = 0; s3TargetsIndex < s3TargetsJsonList.GetLength(); ++s3TargetsIndex)
    {
      m_s3Targets.push_back(s3TargetsJsonList[s3TargetsIndex].AsObject());
    }
    m_s3TargetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JdbcTargets"))
  {
    Array<JsonValue> jdbcTargetsJsonList = jsonValue.GetArray("JdbcTargets");
    for(unsigned jdbcTargetsIndex = 0; jdbcTargetsIndex < jdbcTargetsJsonList.GetLength(); ++jdbcTargetsIndex)
    {
      m_jdbcTargets.push_back(jdbcTargetsJsonList[jdbcTargetsIndex].AsObject());
    }
    m_jdbcTargetsHasBeenSet = true;
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

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
