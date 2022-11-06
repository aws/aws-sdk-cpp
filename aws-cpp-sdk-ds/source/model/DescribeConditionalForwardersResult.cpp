/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DescribeConditionalForwardersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeConditionalForwardersResult::DescribeConditionalForwardersResult()
{
}

DescribeConditionalForwardersResult::DescribeConditionalForwardersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeConditionalForwardersResult& DescribeConditionalForwardersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConditionalForwarders"))
  {
    Aws::Utils::Array<JsonView> conditionalForwardersJsonList = jsonValue.GetArray("ConditionalForwarders");
    for(unsigned conditionalForwardersIndex = 0; conditionalForwardersIndex < conditionalForwardersJsonList.GetLength(); ++conditionalForwardersIndex)
    {
      m_conditionalForwarders.push_back(conditionalForwardersJsonList[conditionalForwardersIndex].AsObject());
    }
  }



  return *this;
}
