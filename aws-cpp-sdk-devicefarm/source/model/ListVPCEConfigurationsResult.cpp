/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/ListVPCEConfigurationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListVPCEConfigurationsResult::ListVPCEConfigurationsResult()
{
}

ListVPCEConfigurationsResult::ListVPCEConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListVPCEConfigurationsResult& ListVPCEConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("vpceConfigurations"))
  {
    Aws::Utils::Array<JsonView> vpceConfigurationsJsonList = jsonValue.GetArray("vpceConfigurations");
    for(unsigned vpceConfigurationsIndex = 0; vpceConfigurationsIndex < vpceConfigurationsJsonList.GetLength(); ++vpceConfigurationsIndex)
    {
      m_vpceConfigurations.push_back(vpceConfigurationsJsonList[vpceConfigurationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
