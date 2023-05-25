/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
