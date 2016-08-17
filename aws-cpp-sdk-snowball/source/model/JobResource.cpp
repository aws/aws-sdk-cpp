/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/snowball/model/JobResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

JobResource::JobResource() : 
    m_s3ResourcesHasBeenSet(false)
{
}

JobResource::JobResource(const JsonValue& jsonValue) : 
    m_s3ResourcesHasBeenSet(false)
{
  *this = jsonValue;
}

JobResource& JobResource::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("S3Resources"))
  {
    Array<JsonValue> s3ResourcesJsonList = jsonValue.GetArray("S3Resources");
    for(unsigned s3ResourcesIndex = 0; s3ResourcesIndex < s3ResourcesJsonList.GetLength(); ++s3ResourcesIndex)
    {
      m_s3Resources.push_back(s3ResourcesJsonList[s3ResourcesIndex].AsObject());
    }
    m_s3ResourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue JobResource::Jsonize() const
{
  JsonValue payload;

  if(m_s3ResourcesHasBeenSet)
  {
   Array<JsonValue> s3ResourcesJsonList(m_s3Resources.size());
   for(unsigned s3ResourcesIndex = 0; s3ResourcesIndex < s3ResourcesJsonList.GetLength(); ++s3ResourcesIndex)
   {
     s3ResourcesJsonList[s3ResourcesIndex].AsObject(m_s3Resources[s3ResourcesIndex].Jsonize());
   }
   payload.WithArray("S3Resources", std::move(s3ResourcesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws