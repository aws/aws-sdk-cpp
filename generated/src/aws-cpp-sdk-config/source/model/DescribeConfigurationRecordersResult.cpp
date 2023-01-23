/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DescribeConfigurationRecordersResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeConfigurationRecordersResult::DescribeConfigurationRecordersResult()
{
}

DescribeConfigurationRecordersResult::DescribeConfigurationRecordersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeConfigurationRecordersResult& DescribeConfigurationRecordersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConfigurationRecorders"))
  {
    Aws::Utils::Array<JsonView> configurationRecordersJsonList = jsonValue.GetArray("ConfigurationRecorders");
    for(unsigned configurationRecordersIndex = 0; configurationRecordersIndex < configurationRecordersJsonList.GetLength(); ++configurationRecordersIndex)
    {
      m_configurationRecorders.push_back(configurationRecordersJsonList[configurationRecordersIndex].AsObject());
    }
  }



  return *this;
}
