/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/ListCollaborationMLInputChannelsResult.h>
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

ListCollaborationMLInputChannelsResult::ListCollaborationMLInputChannelsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCollaborationMLInputChannelsResult& ListCollaborationMLInputChannelsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("collaborationMLInputChannelsList"))
  {
    Aws::Utils::Array<JsonView> collaborationMLInputChannelsListJsonList = jsonValue.GetArray("collaborationMLInputChannelsList");
    for(unsigned collaborationMLInputChannelsListIndex = 0; collaborationMLInputChannelsListIndex < collaborationMLInputChannelsListJsonList.GetLength(); ++collaborationMLInputChannelsListIndex)
    {
      m_collaborationMLInputChannelsList.push_back(collaborationMLInputChannelsListJsonList[collaborationMLInputChannelsListIndex].AsObject());
    }
    m_collaborationMLInputChannelsListHasBeenSet = true;
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
