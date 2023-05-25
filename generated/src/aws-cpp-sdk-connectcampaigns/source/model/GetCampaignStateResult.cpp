/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/model/GetCampaignStateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ConnectCampaigns::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCampaignStateResult::GetCampaignStateResult() : 
    m_state(CampaignState::NOT_SET)
{
}

GetCampaignStateResult::GetCampaignStateResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(CampaignState::NOT_SET)
{
  *this = result;
}

GetCampaignStateResult& GetCampaignStateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("state"))
  {
    m_state = CampaignStateMapper::GetCampaignStateForName(jsonValue.GetString("state"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
