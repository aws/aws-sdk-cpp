/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/ListEndpointsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Comprehend::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEndpointsResult::ListEndpointsResult()
{
}

ListEndpointsResult::ListEndpointsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEndpointsResult& ListEndpointsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EndpointPropertiesList"))
  {
    Aws::Utils::Array<JsonView> endpointPropertiesListJsonList = jsonValue.GetArray("EndpointPropertiesList");
    for(unsigned endpointPropertiesListIndex = 0; endpointPropertiesListIndex < endpointPropertiesListJsonList.GetLength(); ++endpointPropertiesListIndex)
    {
      m_endpointPropertiesList.push_back(endpointPropertiesListJsonList[endpointPropertiesListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
