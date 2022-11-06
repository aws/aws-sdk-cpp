/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DescribeEndpointTypesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeEndpointTypesResult::DescribeEndpointTypesResult()
{
}

DescribeEndpointTypesResult::DescribeEndpointTypesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeEndpointTypesResult& DescribeEndpointTypesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }

  if(jsonValue.ValueExists("SupportedEndpointTypes"))
  {
    Aws::Utils::Array<JsonView> supportedEndpointTypesJsonList = jsonValue.GetArray("SupportedEndpointTypes");
    for(unsigned supportedEndpointTypesIndex = 0; supportedEndpointTypesIndex < supportedEndpointTypesJsonList.GetLength(); ++supportedEndpointTypesIndex)
    {
      m_supportedEndpointTypes.push_back(supportedEndpointTypesJsonList[supportedEndpointTypesIndex].AsObject());
    }
  }



  return *this;
}
