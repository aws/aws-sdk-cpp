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
#include <aws/apigateway/model/MethodSnapshot.h>
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

MethodSnapshot::MethodSnapshot() : 
    m_authorizationTypeHasBeenSet(false),
    m_apiKeyRequired(false),
    m_apiKeyRequiredHasBeenSet(false)
{
}

MethodSnapshot::MethodSnapshot(const JsonValue& jsonValue) : 
    m_authorizationTypeHasBeenSet(false),
    m_apiKeyRequired(false),
    m_apiKeyRequiredHasBeenSet(false)
{
  *this = jsonValue;
}

MethodSnapshot& MethodSnapshot::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("authorizationType"))
  {
    m_authorizationType = jsonValue.GetString("authorizationType");

    m_authorizationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("apiKeyRequired"))
  {
    m_apiKeyRequired = jsonValue.GetBool("apiKeyRequired");

    m_apiKeyRequiredHasBeenSet = true;
  }

  return *this;
}

JsonValue MethodSnapshot::Jsonize() const
{
  JsonValue payload;

  if(m_authorizationTypeHasBeenSet)
  {
   payload.WithString("authorizationType", m_authorizationType);

  }

  if(m_apiKeyRequiredHasBeenSet)
  {
   payload.WithBool("apiKeyRequired", m_apiKeyRequired);

  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws