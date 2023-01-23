/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DescribeEndpointSettingsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeEndpointSettingsResult::DescribeEndpointSettingsResult()
{
}

DescribeEndpointSettingsResult::DescribeEndpointSettingsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeEndpointSettingsResult& DescribeEndpointSettingsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }

  if(jsonValue.ValueExists("EndpointSettings"))
  {
    Aws::Utils::Array<JsonView> endpointSettingsJsonList = jsonValue.GetArray("EndpointSettings");
    for(unsigned endpointSettingsIndex = 0; endpointSettingsIndex < endpointSettingsJsonList.GetLength(); ++endpointSettingsIndex)
    {
      m_endpointSettings.push_back(endpointSettingsJsonList[endpointSettingsIndex].AsObject());
    }
  }



  return *this;
}
