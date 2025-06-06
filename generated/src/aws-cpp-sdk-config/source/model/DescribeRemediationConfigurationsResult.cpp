﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DescribeRemediationConfigurationsResult.h>
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

DescribeRemediationConfigurationsResult::DescribeRemediationConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeRemediationConfigurationsResult& DescribeRemediationConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RemediationConfigurations"))
  {
    Aws::Utils::Array<JsonView> remediationConfigurationsJsonList = jsonValue.GetArray("RemediationConfigurations");
    for(unsigned remediationConfigurationsIndex = 0; remediationConfigurationsIndex < remediationConfigurationsJsonList.GetLength(); ++remediationConfigurationsIndex)
    {
      m_remediationConfigurations.push_back(remediationConfigurationsJsonList[remediationConfigurationsIndex].AsObject());
    }
    m_remediationConfigurationsHasBeenSet = true;
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
