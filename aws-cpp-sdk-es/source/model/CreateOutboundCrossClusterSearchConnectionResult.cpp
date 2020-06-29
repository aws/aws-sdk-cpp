/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/CreateOutboundCrossClusterSearchConnectionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateOutboundCrossClusterSearchConnectionResult::CreateOutboundCrossClusterSearchConnectionResult()
{
}

CreateOutboundCrossClusterSearchConnectionResult::CreateOutboundCrossClusterSearchConnectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateOutboundCrossClusterSearchConnectionResult& CreateOutboundCrossClusterSearchConnectionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SourceDomainInfo"))
  {
    m_sourceDomainInfo = jsonValue.GetObject("SourceDomainInfo");

  }

  if(jsonValue.ValueExists("DestinationDomainInfo"))
  {
    m_destinationDomainInfo = jsonValue.GetObject("DestinationDomainInfo");

  }

  if(jsonValue.ValueExists("ConnectionAlias"))
  {
    m_connectionAlias = jsonValue.GetString("ConnectionAlias");

  }

  if(jsonValue.ValueExists("ConnectionStatus"))
  {
    m_connectionStatus = jsonValue.GetObject("ConnectionStatus");

  }

  if(jsonValue.ValueExists("CrossClusterSearchConnectionId"))
  {
    m_crossClusterSearchConnectionId = jsonValue.GetString("CrossClusterSearchConnectionId");

  }



  return *this;
}
