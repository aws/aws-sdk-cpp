/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/ListConfiguredModelAlgorithmsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CleanRoomsML::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListConfiguredModelAlgorithmsResult::ListConfiguredModelAlgorithmsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListConfiguredModelAlgorithmsResult& ListConfiguredModelAlgorithmsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("configuredModelAlgorithms"))
  {
    Aws::Utils::Array<JsonView> configuredModelAlgorithmsJsonList = jsonValue.GetArray("configuredModelAlgorithms");
    for(unsigned configuredModelAlgorithmsIndex = 0; configuredModelAlgorithmsIndex < configuredModelAlgorithmsJsonList.GetLength(); ++configuredModelAlgorithmsIndex)
    {
      m_configuredModelAlgorithms.push_back(configuredModelAlgorithmsJsonList[configuredModelAlgorithmsIndex].AsObject());
    }
    m_configuredModelAlgorithmsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
