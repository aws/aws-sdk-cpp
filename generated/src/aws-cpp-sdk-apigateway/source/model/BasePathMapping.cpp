/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/BasePathMapping.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace APIGateway
{
namespace Model
{

BasePathMapping::BasePathMapping() : 
    m_basePathHasBeenSet(false),
    m_restApiIdHasBeenSet(false),
    m_stageHasBeenSet(false)
{
}

BasePathMapping::BasePathMapping(JsonView jsonValue) : 
    m_basePathHasBeenSet(false),
    m_restApiIdHasBeenSet(false),
    m_stageHasBeenSet(false)
{
  *this = jsonValue;
}

BasePathMapping& BasePathMapping::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("basePath"))
  {
    m_basePath = jsonValue.GetString("basePath");

    m_basePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("restApiId"))
  {
    m_restApiId = jsonValue.GetString("restApiId");

    m_restApiIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stage"))
  {
    m_stage = jsonValue.GetString("stage");

    m_stageHasBeenSet = true;
  }

  return *this;
}

JsonValue BasePathMapping::Jsonize() const
{
  JsonValue payload;

  if(m_basePathHasBeenSet)
  {
   payload.WithString("basePath", m_basePath);

  }

  if(m_restApiIdHasBeenSet)
  {
   payload.WithString("restApiId", m_restApiId);

  }

  if(m_stageHasBeenSet)
  {
   payload.WithString("stage", m_stage);

  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws
