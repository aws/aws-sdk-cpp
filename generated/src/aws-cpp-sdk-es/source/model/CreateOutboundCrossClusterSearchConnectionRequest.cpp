/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/CreateOutboundCrossClusterSearchConnectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateOutboundCrossClusterSearchConnectionRequest::CreateOutboundCrossClusterSearchConnectionRequest() : 
    m_sourceDomainInfoHasBeenSet(false),
    m_destinationDomainInfoHasBeenSet(false),
    m_connectionAliasHasBeenSet(false)
{
}

Aws::String CreateOutboundCrossClusterSearchConnectionRequest::SerializePayload() const
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

  if(m_connectionAliasHasBeenSet)
  {
   payload.WithString("ConnectionAlias", m_connectionAlias);

  }

  return payload.View().WriteReadable();
}




