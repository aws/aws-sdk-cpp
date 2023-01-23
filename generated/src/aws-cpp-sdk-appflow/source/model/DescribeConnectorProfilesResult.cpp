/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/DescribeConnectorProfilesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Appflow::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeConnectorProfilesResult::DescribeConnectorProfilesResult()
{
}

DescribeConnectorProfilesResult::DescribeConnectorProfilesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeConnectorProfilesResult& DescribeConnectorProfilesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("connectorProfileDetails"))
  {
    Aws::Utils::Array<JsonView> connectorProfileDetailsJsonList = jsonValue.GetArray("connectorProfileDetails");
    for(unsigned connectorProfileDetailsIndex = 0; connectorProfileDetailsIndex < connectorProfileDetailsJsonList.GetLength(); ++connectorProfileDetailsIndex)
    {
      m_connectorProfileDetails.push_back(connectorProfileDetailsJsonList[connectorProfileDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
