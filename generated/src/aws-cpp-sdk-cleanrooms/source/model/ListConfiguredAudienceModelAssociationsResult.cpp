/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ListConfiguredAudienceModelAssociationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListConfiguredAudienceModelAssociationsResult::ListConfiguredAudienceModelAssociationsResult()
{
}

ListConfiguredAudienceModelAssociationsResult::ListConfiguredAudienceModelAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListConfiguredAudienceModelAssociationsResult& ListConfiguredAudienceModelAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("configuredAudienceModelAssociationSummaries"))
  {
    Aws::Utils::Array<JsonView> configuredAudienceModelAssociationSummariesJsonList = jsonValue.GetArray("configuredAudienceModelAssociationSummaries");
    for(unsigned configuredAudienceModelAssociationSummariesIndex = 0; configuredAudienceModelAssociationSummariesIndex < configuredAudienceModelAssociationSummariesJsonList.GetLength(); ++configuredAudienceModelAssociationSummariesIndex)
    {
      m_configuredAudienceModelAssociationSummaries.push_back(configuredAudienceModelAssociationSummariesJsonList[configuredAudienceModelAssociationSummariesIndex].AsObject());
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
