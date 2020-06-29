/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/InboundCrossClusterSearchConnection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

InboundCrossClusterSearchConnection::InboundCrossClusterSearchConnection() : 
    m_sourceDomainInfoHasBeenSet(false),
    m_destinationDomainInfoHasBeenSet(false),
    m_crossClusterSearchConnectionIdHasBeenSet(false),
    m_connectionStatusHasBeenSet(false)
{
}

InboundCrossClusterSearchConnection::InboundCrossClusterSearchConnection(JsonView jsonValue) : 
    m_sourceDomainInfoHasBeenSet(false),
    m_destinationDomainInfoHasBeenSet(false),
    m_crossClusterSearchConnectionIdHasBeenSet(false),
    m_connectionStatusHasBeenSet(false)
{
  *this = jsonValue;
}

InboundCrossClusterSearchConnection& InboundCrossClusterSearchConnection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceDomainInfo"))
  {
    m_sourceDomainInfo = jsonValue.GetObject("SourceDomainInfo");

    m_sourceDomainInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationDomainInfo"))
  {
    m_destinationDomainInfo = jsonValue.GetObject("DestinationDomainInfo");

    m_destinationDomainInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CrossClusterSearchConnectionId"))
  {
    m_crossClusterSearchConnectionId = jsonValue.GetString("CrossClusterSearchConnectionId");

    m_crossClusterSearchConnectionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionStatus"))
  {
    m_connectionStatus = jsonValue.GetObject("ConnectionStatus");

    m_connectionStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue InboundCrossClusterSearchConnection::Jsonize() const
{
  JsonValue payload;

  if(m_sourceDomainInfoHasBeenSet)
  {
   payload.WithObject("SourceDomainInfo", m_sourceDomainInfo.Jsonize());

  }

  if(m_destinationDomainInfoHasBeenSet)
  {
   payload.WithObject("DestinationDomainInfo", m_destinationDomainInfo.Jsonize());

  }

  if(m_crossClusterSearchConnectionIdHasBeenSet)
  {
   payload.WithString("CrossClusterSearchConnectionId", m_crossClusterSearchConnectionId);

  }

  if(m_connectionStatusHasBeenSet)
  {
   payload.WithObject("ConnectionStatus", m_connectionStatus.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
