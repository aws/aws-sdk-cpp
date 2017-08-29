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

#include <aws/sms/model/VmServer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SMS
{
namespace Model
{

VmServer::VmServer() : 
    m_vmServerAddressHasBeenSet(false),
    m_vmNameHasBeenSet(false),
    m_vmManagerNameHasBeenSet(false),
    m_vmManagerType(VmManagerType::NOT_SET),
    m_vmManagerTypeHasBeenSet(false),
    m_vmPathHasBeenSet(false)
{
}

VmServer::VmServer(const JsonValue& jsonValue) : 
    m_vmServerAddressHasBeenSet(false),
    m_vmNameHasBeenSet(false),
    m_vmManagerNameHasBeenSet(false),
    m_vmManagerType(VmManagerType::NOT_SET),
    m_vmManagerTypeHasBeenSet(false),
    m_vmPathHasBeenSet(false)
{
  *this = jsonValue;
}

VmServer& VmServer::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("vmServerAddress"))
  {
    m_vmServerAddress = jsonValue.GetObject("vmServerAddress");

    m_vmServerAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vmName"))
  {
    m_vmName = jsonValue.GetString("vmName");

    m_vmNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vmManagerName"))
  {
    m_vmManagerName = jsonValue.GetString("vmManagerName");

    m_vmManagerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vmManagerType"))
  {
    m_vmManagerType = VmManagerTypeMapper::GetVmManagerTypeForName(jsonValue.GetString("vmManagerType"));

    m_vmManagerTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vmPath"))
  {
    m_vmPath = jsonValue.GetString("vmPath");

    m_vmPathHasBeenSet = true;
  }

  return *this;
}

JsonValue VmServer::Jsonize() const
{
  JsonValue payload;

  if(m_vmServerAddressHasBeenSet)
  {
   payload.WithObject("vmServerAddress", m_vmServerAddress.Jsonize());

  }

  if(m_vmNameHasBeenSet)
  {
   payload.WithString("vmName", m_vmName);

  }

  if(m_vmManagerNameHasBeenSet)
  {
   payload.WithString("vmManagerName", m_vmManagerName);

  }

  if(m_vmManagerTypeHasBeenSet)
  {
   payload.WithString("vmManagerType", VmManagerTypeMapper::GetNameForVmManagerType(m_vmManagerType));
  }

  if(m_vmPathHasBeenSet)
  {
   payload.WithString("vmPath", m_vmPath);

  }

  return payload;
}

} // namespace Model
} // namespace SMS
} // namespace Aws
