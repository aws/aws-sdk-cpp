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
#include <aws/directconnect/model/VirtualGateway.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

VirtualGateway::VirtualGateway() : 
    m_virtualGatewayIdHasBeenSet(false),
    m_virtualGatewayStateHasBeenSet(false)
{
}

VirtualGateway::VirtualGateway(const JsonValue& jsonValue) : 
    m_virtualGatewayIdHasBeenSet(false),
    m_virtualGatewayStateHasBeenSet(false)
{
  *this = jsonValue;
}

VirtualGateway& VirtualGateway::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("virtualGatewayId"))
  {
    m_virtualGatewayId = jsonValue.GetString("virtualGatewayId");

    m_virtualGatewayIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("virtualGatewayState"))
  {
    m_virtualGatewayState = jsonValue.GetString("virtualGatewayState");

    m_virtualGatewayStateHasBeenSet = true;
  }

  return *this;
}

JsonValue VirtualGateway::Jsonize() const
{
  JsonValue payload;

  if(m_virtualGatewayIdHasBeenSet)
  {
   payload.WithString("virtualGatewayId", m_virtualGatewayId);

  }

  if(m_virtualGatewayStateHasBeenSet)
  {
   payload.WithString("virtualGatewayState", m_virtualGatewayState);

  }

  return payload;
}

} // namespace Model
} // namespace DirectConnect
} // namespace Aws