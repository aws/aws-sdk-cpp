/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/DeleteOutboundCrossClusterSearchConnectionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteOutboundCrossClusterSearchConnectionResult::DeleteOutboundCrossClusterSearchConnectionResult()
{
}

DeleteOutboundCrossClusterSearchConnectionResult::DeleteOutboundCrossClusterSearchConnectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeleteOutboundCrossClusterSearchConnectionResult& DeleteOutboundCrossClusterSearchConnectionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CrossClusterSearchConnection"))
  {
    m_crossClusterSearchConnection = jsonValue.GetObject("CrossClusterSearchConnection");

  }



  return *this;
}
