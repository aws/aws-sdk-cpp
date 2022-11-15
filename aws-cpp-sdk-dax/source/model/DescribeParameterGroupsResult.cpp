/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dax/model/DescribeParameterGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DAX::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeParameterGroupsResult::DescribeParameterGroupsResult()
{
}

DescribeParameterGroupsResult::DescribeParameterGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeParameterGroupsResult& DescribeParameterGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("ParameterGroups"))
  {
    Aws::Utils::Array<JsonView> parameterGroupsJsonList = jsonValue.GetArray("ParameterGroups");
    for(unsigned parameterGroupsIndex = 0; parameterGroupsIndex < parameterGroupsJsonList.GetLength(); ++parameterGroupsIndex)
    {
      m_parameterGroups.push_back(parameterGroupsJsonList[parameterGroupsIndex].AsObject());
    }
  }



  return *this;
}
