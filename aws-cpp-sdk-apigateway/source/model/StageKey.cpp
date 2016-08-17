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

StageKey::StageKey(const JsonValue& jsonValue) : 
    m_restApiIdHasBeenSet(false),
    m_stageNameHasBeenSet(false)
{
  *this = jsonValue;
}

StageKey& StageKey::operator =(const JsonValue& jsonValue)
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