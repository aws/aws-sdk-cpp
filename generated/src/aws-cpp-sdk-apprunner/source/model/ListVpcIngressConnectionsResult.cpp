/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/ListVpcIngressConnectionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListVpcIngressConnectionsResult::ListVpcIngressConnectionsResult()
{
}

ListVpcIngressConnectionsResult::ListVpcIngressConnectionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListVpcIngressConnectionsResult& ListVpcIngressConnectionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("VpcIngressConnectionSummaryList"))
  {
    Aws::Utils::Array<JsonView> vpcIngressConnectionSummaryListJsonList = jsonValue.GetArray("VpcIngressConnectionSummaryList");
    for(unsigned vpcIngressConnectionSummaryListIndex = 0; vpcIngressConnectionSummaryListIndex < vpcIngressConnectionSummaryListJsonList.GetLength(); ++vpcIngressConnectionSummaryListIndex)
    {
      m_vpcIngressConnectionSummaryList.push_back(vpcIngressConnectionSummaryListJsonList[vpcIngressConnectionSummaryListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
