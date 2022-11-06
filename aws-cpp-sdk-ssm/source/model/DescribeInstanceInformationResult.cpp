/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/DescribeInstanceInformationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeInstanceInformationResult::DescribeInstanceInformationResult()
{
}

DescribeInstanceInformationResult::DescribeInstanceInformationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeInstanceInformationResult& DescribeInstanceInformationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("InstanceInformationList"))
  {
    Aws::Utils::Array<JsonView> instanceInformationListJsonList = jsonValue.GetArray("InstanceInformationList");
    for(unsigned instanceInformationListIndex = 0; instanceInformationListIndex < instanceInformationListJsonList.GetLength(); ++instanceInformationListIndex)
    {
      m_instanceInformationList.push_back(instanceInformationListJsonList[instanceInformationListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
