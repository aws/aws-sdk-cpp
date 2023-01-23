/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/events/model/ListApiDestinationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudWatchEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListApiDestinationsResult::ListApiDestinationsResult()
{
}

ListApiDestinationsResult::ListApiDestinationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListApiDestinationsResult& ListApiDestinationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ApiDestinations"))
  {
    Aws::Utils::Array<JsonView> apiDestinationsJsonList = jsonValue.GetArray("ApiDestinations");
    for(unsigned apiDestinationsIndex = 0; apiDestinationsIndex < apiDestinationsJsonList.GetLength(); ++apiDestinationsIndex)
    {
      m_apiDestinations.push_back(apiDestinationsJsonList[apiDestinationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
