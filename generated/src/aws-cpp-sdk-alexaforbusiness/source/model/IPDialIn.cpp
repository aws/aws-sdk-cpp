/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
