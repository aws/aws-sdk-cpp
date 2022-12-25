/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/DescribeVpcPeeringAuthorizationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeVpcPeeringAuthorizationsResult::DescribeVpcPeeringAuthorizationsResult()
{
}

DescribeVpcPeeringAuthorizationsResult::DescribeVpcPeeringAuthorizationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeVpcPeeringAuthorizationsResult& DescribeVpcPeeringAuthorizationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("VpcPeeringAuthorizations"))
  {
    Aws::Utils::Array<JsonView> vpcPeeringAuthorizationsJsonList = jsonValue.GetArray("VpcPeeringAuthorizations");
    for(unsigned vpcPeeringAuthorizationsIndex = 0; vpcPeeringAuthorizationsIndex < vpcPeeringAuthorizationsJsonList.GetLength(); ++vpcPeeringAuthorizationsIndex)
    {
      m_vpcPeeringAuthorizations.push_back(vpcPeeringAuthorizationsJsonList[vpcPeeringAuthorizationsIndex].AsObject());
    }
  }



  return *this;
}
