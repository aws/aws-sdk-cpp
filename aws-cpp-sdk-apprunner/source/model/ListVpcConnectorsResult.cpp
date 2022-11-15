/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/ListVpcConnectorsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListVpcConnectorsResult::ListVpcConnectorsResult()
{
}

ListVpcConnectorsResult::ListVpcConnectorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListVpcConnectorsResult& ListVpcConnectorsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("VpcConnectors"))
  {
    Aws::Utils::Array<JsonView> vpcConnectorsJsonList = jsonValue.GetArray("VpcConnectors");
    for(unsigned vpcConnectorsIndex = 0; vpcConnectorsIndex < vpcConnectorsJsonList.GetLength(); ++vpcConnectorsIndex)
    {
      m_vpcConnectors.push_back(vpcConnectorsJsonList[vpcConnectorsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
