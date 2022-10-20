/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/GetAppReplicationConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAppReplicationConfigurationResult::GetAppReplicationConfigurationResult()
{
}

GetAppReplicationConfigurationResult::GetAppReplicationConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAppReplicationConfigurationResult& GetAppReplicationConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("serverGroupReplicationConfigurations"))
  {
    Aws::Utils::Array<JsonView> serverGroupReplicationConfigurationsJsonList = jsonValue.GetArray("serverGroupReplicationConfigurations");
    for(unsigned serverGroupReplicationConfigurationsIndex = 0; serverGroupReplicationConfigurationsIndex < serverGroupReplicationConfigurationsJsonList.GetLength(); ++serverGroupReplicationConfigurationsIndex)
    {
      m_serverGroupReplicationConfigurations.push_back(serverGroupReplicationConfigurationsJsonList[serverGroupReplicationConfigurationsIndex].AsObject());
    }
  }



  return *this;
}
