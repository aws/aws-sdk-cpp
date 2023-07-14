﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DescribeRemediationExceptionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeRemediationExceptionsResult::DescribeRemediationExceptionsResult()
{
}

DescribeRemediationExceptionsResult::DescribeRemediationExceptionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeRemediationExceptionsResult& DescribeRemediationExceptionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RemediationExceptions"))
  {
    Array<JsonView> remediationExceptionsJsonList = jsonValue.GetArray("RemediationExceptions");
    for(unsigned remediationExceptionsIndex = 0; remediationExceptionsIndex < remediationExceptionsJsonList.GetLength(); ++remediationExceptionsIndex)
    {
      m_remediationExceptions.push_back(remediationExceptionsJsonList[remediationExceptionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
