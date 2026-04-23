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

#include <aws/apigatewayv2/model/ApiMapping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{

ApiMapping::ApiMapping() : 
    m_apiIdHasBeenSet(false),
    m_apiMappingIdHasBeenSet(false),
    m_apiMappingKeyHasBeenSet(false),
    m_stageHasBeenSet(false)
{
}

ApiMapping::ApiMapping(JsonView jsonValue) : 
    m_apiIdHasBeenSet(false),
    m_apiMappingIdHasBeenSet(false),
    m_apiMappingKeyHasBeenSet(false),
    m_stageHasBeenSet(false)
{
  *this = jsonValue;
}

ApiMapping& ApiMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("apiId"))
  {
    m_apiId = jsonValue.GetString("apiId");

    m_apiIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("apiMappingId"))
  {
    m_apiMappingId = jsonValue.GetString("apiMappingId");

    m_apiMappingIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("apiMappingKey"))
  {
    m_apiMappingKey = jsonValue.GetString("apiMappingKey");

    m_apiMappingKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stage"))
  {
    m_stage = jsonValue.GetString("stage");

    m_stageHasBeenSet = true;
  }

  return *this;
}

JsonValue ApiMapping::Jsonize() const
{
  JsonValue payload;

  if(m_apiIdHasBeenSet)
  {
   payload.WithString("apiId", m_apiId);

  }

  if(m_apiMappingIdHasBeenSet)
  {
   payload.WithString("apiMappingId", m_apiMappingId);

  }

  if(m_apiMappingKeyHasBeenSet)
  {
   payload.WithString("apiMappingKey", m_apiMappingKey);

  }

  if(m_stageHasBeenSet)
  {
   payload.WithString("stage", m_stage);

  }

  return payload;
}

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
