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

#include <aws/greengrass/model/ConnectivityInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Greengrass
{
namespace Model
{

ConnectivityInfo::ConnectivityInfo() : 
    m_hostAddressHasBeenSet(false),
    m_idHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_portNumber(0),
    m_portNumberHasBeenSet(false)
{
}

ConnectivityInfo::ConnectivityInfo(const JsonValue& jsonValue) : 
    m_hostAddressHasBeenSet(false),
    m_idHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_portNumber(0),
    m_portNumberHasBeenSet(false)
{
  *this = jsonValue;
}

ConnectivityInfo& ConnectivityInfo::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("HostAddress"))
  {
    m_hostAddress = jsonValue.GetString("HostAddress");

    m_hostAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Metadata"))
  {
    m_metadata = jsonValue.GetString("Metadata");

    m_metadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PortNumber"))
  {
    m_portNumber = jsonValue.GetInteger("PortNumber");

    m_portNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue ConnectivityInfo::Jsonize() const
{
  JsonValue payload;

  if(m_hostAddressHasBeenSet)
  {
   payload.WithString("HostAddress", m_hostAddress);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_metadataHasBeenSet)
  {
   payload.WithString("Metadata", m_metadata);

  }

  if(m_portNumberHasBeenSet)
  {
   payload.WithInteger("PortNumber", m_portNumber);

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
