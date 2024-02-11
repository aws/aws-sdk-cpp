/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/ListConfiguredAudienceModelsResult.h>
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

ListConfiguredAudienceModelsResult::ListConfiguredAudienceModelsResult()
{
}

ListConfiguredAudienceModelsResult::ListConfiguredAudienceModelsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListConfiguredAudienceModelsResult& ListConfiguredAudienceModelsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("configuredAudienceModels"))
  {
    Aws::Utils::Array<JsonView> configuredAudienceModelsJsonList = jsonValue.GetArray("configuredAudienceModels");
    for(unsigned configuredAudienceModelsIndex = 0; configuredAudienceModelsIndex < configuredAudienceModelsJsonList.GetLength(); ++configuredAudienceModelsIndex)
    {
      m_configuredAudienceModels.push_back(configuredAudienceModelsJsonList[configuredAudienceModelsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
