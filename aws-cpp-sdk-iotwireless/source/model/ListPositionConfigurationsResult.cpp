/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/ListPositionConfigurationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPositionConfigurationsResult::ListPositionConfigurationsResult()
{
}

ListPositionConfigurationsResult::ListPositionConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPositionConfigurationsResult& ListPositionConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PositionConfigurationList"))
  {
    Array<JsonView> positionConfigurationListJsonList = jsonValue.GetArray("PositionConfigurationList");
    for(unsigned positionConfigurationListIndex = 0; positionConfigurationListIndex < positionConfigurationListJsonList.GetLength(); ++positionConfigurationListIndex)
    {
      m_positionConfigurationList.push_back(positionConfigurationListJsonList[positionConfigurationListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
