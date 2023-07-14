/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/StageKey.h>
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

StageKey::StageKey() : 
    m_restApiIdHasBeenSet(false),
    m_stageNameHasBeenSet(false)
{
}

StageKey::StageKey(JsonView jsonValue) : 
    m_restApiIdHasBeenSet(false),
    m_stageNameHasBeenSet(false)
{
  *this = jsonValue;
}

StageKey& StageKey::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("restApiId"))
  {
    m_restApiId = jsonValue.GetString("restApiId");

    m_restApiIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stageName"))
  {
    m_stageName = jsonValue.GetString("stageName");

    m_stageNameHasBeenSet = true;
  }

  return *this;
}

JsonValue StageKey::Jsonize() const
{
  JsonValue payload;

  if(m_restApiIdHasBeenSet)
  {
   payload.WithString("restApiId", m_restApiId);

  }

  if(m_stageNameHasBeenSet)
  {
   payload.WithString("stageName", m_stageName);

  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws
