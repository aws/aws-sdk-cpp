﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DescribeConformancePackStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeConformancePackStatusResult::DescribeConformancePackStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeConformancePackStatusResult& DescribeConformancePackStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConformancePackStatusDetails"))
  {
    Aws::Utils::Array<JsonView> conformancePackStatusDetailsJsonList = jsonValue.GetArray("ConformancePackStatusDetails");
    for(unsigned conformancePackStatusDetailsIndex = 0; conformancePackStatusDetailsIndex < conformancePackStatusDetailsJsonList.GetLength(); ++conformancePackStatusDetailsIndex)
    {
      m_conformancePackStatusDetails.push_back(conformancePackStatusDetailsJsonList[conformancePackStatusDetailsIndex].AsObject());
    }
    m_conformancePackStatusDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
