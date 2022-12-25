/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ListDevEndpointsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDevEndpointsResult::ListDevEndpointsResult()
{
}

ListDevEndpointsResult::ListDevEndpointsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDevEndpointsResult& ListDevEndpointsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DevEndpointNames"))
  {
    Aws::Utils::Array<JsonView> devEndpointNamesJsonList = jsonValue.GetArray("DevEndpointNames");
    for(unsigned devEndpointNamesIndex = 0; devEndpointNamesIndex < devEndpointNamesJsonList.GetLength(); ++devEndpointNamesIndex)
    {
      m_devEndpointNames.push_back(devEndpointNamesJsonList[devEndpointNamesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
