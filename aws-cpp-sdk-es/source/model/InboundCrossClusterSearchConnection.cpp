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
