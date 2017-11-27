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

#include <aws/mediapackage/model/HlsIngest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaPackage
{
namespace Model
{

HlsIngest::HlsIngest() : 
    m_ingestEndpointsHasBeenSet(false)
{
}

HlsIngest::HlsIngest(const JsonValue& jsonValue) : 
    m_ingestEndpointsHasBeenSet(false)
{
  *this = jsonValue;
}

HlsIngest& HlsIngest::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ingestEndpoints"))
  {
    Array<JsonValue> ingestEndpointsJsonList = jsonValue.GetArray("ingestEndpoints");
    for(unsigned ingestEndpointsIndex = 0; ingestEndpointsIndex < ingestEndpointsJsonList.GetLength(); ++ingestEndpointsIndex)
    {
      m_ingestEndpoints.push_back(ingestEndpointsJsonList[ingestEndpointsIndex].AsObject());
    }
    m_ingestEndpointsHasBeenSet = true;
  }

  return *this;
}

JsonValue HlsIngest::Jsonize() const
{
  JsonValue payload;

  if(m_ingestEndpointsHasBeenSet)
  {
   Array<JsonValue> ingestEndpointsJsonList(m_ingestEndpoints.size());
   for(unsigned ingestEndpointsIndex = 0; ingestEndpointsIndex < ingestEndpointsJsonList.GetLength(); ++ingestEndpointsIndex)
   {
     ingestEndpointsJsonList[ingestEndpointsIndex].AsObject(m_ingestEndpoints[ingestEndpointsIndex].Jsonize());
   }
   payload.WithArray("ingestEndpoints", std::move(ingestEndpointsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
