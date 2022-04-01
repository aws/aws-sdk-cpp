﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DescribeRetentionConfigurationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeRetentionConfigurationsResult::DescribeRetentionConfigurationsResult()
{
}

DescribeRetentionConfigurationsResult::DescribeRetentionConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeRetentionConfigurationsResult& DescribeRetentionConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RetentionConfigurations"))
  {
    Array<JsonView> retentionConfigurationsJsonList = jsonValue.GetArray("RetentionConfigurations");
    for(unsigned retentionConfigurationsIndex = 0; retentionConfigurationsIndex < retentionConfigurationsJsonList.GetLength(); ++retentionConfigurationsIndex)
    {
      m_retentionConfigurations.push_back(retentionConfigurationsJsonList[retentionConfigurationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
