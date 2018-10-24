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

#include <aws/alexaforbusiness/model/IPDialIn.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

IPDialIn::IPDialIn() : 
    m_endpointHasBeenSet(false),
    m_commsProtocol(CommsProtocol::NOT_SET),
    m_commsProtocolHasBeenSet(false)
{
}

IPDialIn::IPDialIn(JsonView jsonValue) : 
    m_endpointHasBeenSet(false),
    m_commsProtocol(CommsProtocol::NOT_SET),
    m_commsProtocolHasBeenSet(false)
{
  *this = jsonValue;
}

IPDialIn& IPDialIn::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Endpoint"))
  {
    m_endpoint = jsonValue.GetString("Endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CommsProtocol"))
  {
    m_commsProtocol = CommsProtocolMapper::GetCommsProtocolForName(jsonValue.GetString("CommsProtocol"));

    m_commsProtocolHasBeenSet = true;
  }

  return *this;
}

JsonValue IPDialIn::Jsonize() const
{
  JsonValue payload;

  if(m_endpointHasBeenSet)
  {
   payload.WithString("Endpoint", m_endpoint);

  }

  if(m_commsProtocolHasBeenSet)
  {
   payload.WithString("CommsProtocol", CommsProtocolMapper::GetNameForCommsProtocol(m_commsProtocol));
  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
