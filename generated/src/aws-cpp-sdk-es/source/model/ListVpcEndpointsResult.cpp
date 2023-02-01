/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/ListVpcEndpointsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListVpcEndpointsResult::ListVpcEndpointsResult()
{
}

ListVpcEndpointsResult::ListVpcEndpointsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListVpcEndpointsResult& ListVpcEndpointsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("VpcEndpointSummaryList"))
  {
    Aws::Utils::Array<JsonView> vpcEndpointSummaryListJsonList = jsonValue.GetArray("VpcEndpointSummaryList");
    for(unsigned vpcEndpointSummaryListIndex = 0; vpcEndpointSummaryListIndex < vpcEndpointSummaryListJsonList.GetLength(); ++vpcEndpointSummaryListIndex)
    {
      m_vpcEndpointSummaryList.push_back(vpcEndpointSummaryListJsonList[vpcEndpointSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
