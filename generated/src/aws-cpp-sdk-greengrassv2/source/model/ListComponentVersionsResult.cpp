/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/ListComponentVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GreengrassV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListComponentVersionsResult::ListComponentVersionsResult()
{
}

ListComponentVersionsResult::ListComponentVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListComponentVersionsResult& ListComponentVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("componentVersions"))
  {
    Aws::Utils::Array<JsonView> componentVersionsJsonList = jsonValue.GetArray("componentVersions");
    for(unsigned componentVersionsIndex = 0; componentVersionsIndex < componentVersionsJsonList.GetLength(); ++componentVersionsIndex)
    {
      m_componentVersions.push_back(componentVersionsJsonList[componentVersionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
