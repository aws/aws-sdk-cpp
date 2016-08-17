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
#include <aws/route53domains/model/Nameserver.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

Nameserver::Nameserver() : 
    m_nameHasBeenSet(false),
    m_glueIpsHasBeenSet(false)
{
}

Nameserver::Nameserver(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_glueIpsHasBeenSet(false)
{
  *this = jsonValue;
}

Nameserver& Nameserver::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GlueIps"))
  {
    Array<JsonValue> glueIpsJsonList = jsonValue.GetArray("GlueIps");
    for(unsigned glueIpsIndex = 0; glueIpsIndex < glueIpsJsonList.GetLength(); ++glueIpsIndex)
    {
      m_glueIps.push_back(glueIpsJsonList[glueIpsIndex].AsString());
    }
    m_glueIpsHasBeenSet = true;
  }

  return *this;
}

JsonValue Nameserver::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_glueIpsHasBeenSet)
  {
   Array<JsonValue> glueIpsJsonList(m_glueIps.size());
   for(unsigned glueIpsIndex = 0; glueIpsIndex < glueIpsJsonList.GetLength(); ++glueIpsIndex)
   {
     glueIpsJsonList[glueIpsIndex].AsString(m_glueIps[glueIpsIndex]);
   }
   payload.WithArray("GlueIps", std::move(glueIpsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Route53Domains
} // namespace Aws