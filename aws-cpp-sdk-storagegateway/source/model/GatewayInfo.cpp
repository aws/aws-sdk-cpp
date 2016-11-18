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
#include <aws/storagegateway/model/GatewayInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

GatewayInfo::GatewayInfo() : 
    m_gatewayIdHasBeenSet(false),
    m_gatewayARNHasBeenSet(false),
    m_gatewayTypeHasBeenSet(false),
    m_gatewayOperationalStateHasBeenSet(false),
    m_gatewayNameHasBeenSet(false)
{
}

GatewayInfo::GatewayInfo(const JsonValue& jsonValue) : 
    m_gatewayIdHasBeenSet(false),
    m_gatewayARNHasBeenSet(false),
    m_gatewayTypeHasBeenSet(false),
    m_gatewayOperationalStateHasBeenSet(false),
    m_gatewayNameHasBeenSet(false)
{
  *this = jsonValue;
}

GatewayInfo& GatewayInfo::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("GatewayId"))
  {
    m_gatewayId = jsonValue.GetString("GatewayId");

    m_gatewayIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GatewayARN"))
  {
    m_gatewayARN = jsonValue.GetString("GatewayARN");

    m_gatewayARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GatewayType"))
  {
    m_gatewayType = jsonValue.GetString("GatewayType");

    m_gatewayTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GatewayOperationalState"))
  {
    m_gatewayOperationalState = jsonValue.GetString("GatewayOperationalState");

    m_gatewayOperationalStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GatewayName"))
  {
    m_gatewayName = jsonValue.GetString("GatewayName");

    m_gatewayNameHasBeenSet = true;
  }

  return *this;
}

JsonValue GatewayInfo::Jsonize() const
{
  JsonValue payload;

  if(m_gatewayIdHasBeenSet)
  {
   payload.WithString("GatewayId", m_gatewayId);

  }

  if(m_gatewayARNHasBeenSet)
  {
   payload.WithString("GatewayARN", m_gatewayARN);

  }

  if(m_gatewayTypeHasBeenSet)
  {
   payload.WithString("GatewayType", m_gatewayType);

  }

  if(m_gatewayOperationalStateHasBeenSet)
  {
   payload.WithString("GatewayOperationalState", m_gatewayOperationalState);

  }

  if(m_gatewayNameHasBeenSet)
  {
   payload.WithString("GatewayName", m_gatewayName);

  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws