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
#include <aws/elastictranscoder/model/Permission.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticTranscoder
{
namespace Model
{

Permission::Permission() : 
    m_granteeTypeHasBeenSet(false),
    m_granteeHasBeenSet(false),
    m_accessHasBeenSet(false)
{
}

Permission::Permission(const JsonValue& jsonValue) : 
    m_granteeTypeHasBeenSet(false),
    m_granteeHasBeenSet(false),
    m_accessHasBeenSet(false)
{
  *this = jsonValue;
}

Permission& Permission::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("GranteeType"))
  {
    m_granteeType = jsonValue.GetString("GranteeType");

    m_granteeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Grantee"))
  {
    m_grantee = jsonValue.GetString("Grantee");

    m_granteeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Access"))
  {
    Array<JsonValue> accessJsonList = jsonValue.GetArray("Access");
    for(unsigned accessIndex = 0; accessIndex < accessJsonList.GetLength(); ++accessIndex)
    {
      m_access.push_back(accessJsonList[accessIndex].AsString());
    }
    m_accessHasBeenSet = true;
  }

  return *this;
}

JsonValue Permission::Jsonize() const
{
  JsonValue payload;

  if(m_granteeTypeHasBeenSet)
  {
   payload.WithString("GranteeType", m_granteeType);

  }

  if(m_granteeHasBeenSet)
  {
   payload.WithString("Grantee", m_grantee);

  }

  if(m_accessHasBeenSet)
  {
   Array<JsonValue> accessJsonList(m_access.size());
   for(unsigned accessIndex = 0; accessIndex < accessJsonList.GetLength(); ++accessIndex)
   {
     accessJsonList[accessIndex].AsString(m_access[accessIndex]);
   }
   payload.WithArray("Access", std::move(accessJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws