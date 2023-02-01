/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DescribeConfigurationRecorderStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeConfigurationRecorderStatusResult::DescribeConfigurationRecorderStatusResult()
{
}

DescribeConfigurationRecorderStatusResult::DescribeConfigurationRecorderStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeConfigurationRecorderStatusResult& DescribeConfigurationRecorderStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConfigurationRecordersStatus"))
  {
    Aws::Utils::Array<JsonView> configurationRecordersStatusJsonList = jsonValue.GetArray("ConfigurationRecordersStatus");
    for(unsigned configurationRecordersStatusIndex = 0; configurationRecordersStatusIndex < configurationRecordersStatusJsonList.GetLength(); ++configurationRecordersStatusIndex)
    {
      m_configurationRecordersStatus.push_back(configurationRecordersStatusJsonList[configurationRecordersStatusIndex].AsObject());
    }
  }



  return *this;
}
