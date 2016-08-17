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
#include <aws/storagegateway/model/DeviceiSCSIAttributes.h>
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

DeviceiSCSIAttributes::DeviceiSCSIAttributes() : 
    m_targetARNHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_networkInterfacePort(0),
    m_networkInterfacePortHasBeenSet(false),
    m_chapEnabled(false),
    m_chapEnabledHasBeenSet(false)
{
}

DeviceiSCSIAttributes::DeviceiSCSIAttributes(const JsonValue& jsonValue) : 
    m_targetARNHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_networkInterfacePort(0),
    m_networkInterfacePortHasBeenSet(false),
    m_chapEnabled(false),
    m_chapEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

DeviceiSCSIAttributes& DeviceiSCSIAttributes::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("TargetARN"))
  {
    m_targetARN = jsonValue.GetString("TargetARN");

    m_targetARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkInterfaceId"))
  {
    m_networkInterfaceId = jsonValue.GetString("NetworkInterfaceId");

    m_networkInterfaceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkInterfacePort"))
  {
    m_networkInterfacePort = jsonValue.GetInteger("NetworkInterfacePort");

    m_networkInterfacePortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChapEnabled"))
  {
    m_chapEnabled = jsonValue.GetBool("ChapEnabled");

    m_chapEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue DeviceiSCSIAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_targetARNHasBeenSet)
  {
   payload.WithString("TargetARN", m_targetARN);

  }

  if(m_networkInterfaceIdHasBeenSet)
  {
   payload.WithString("NetworkInterfaceId", m_networkInterfaceId);

  }

  if(m_networkInterfacePortHasBeenSet)
  {
   payload.WithInteger("NetworkInterfacePort", m_networkInterfacePort);

  }

  if(m_chapEnabledHasBeenSet)
  {
   payload.WithBool("ChapEnabled", m_chapEnabled);

  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws