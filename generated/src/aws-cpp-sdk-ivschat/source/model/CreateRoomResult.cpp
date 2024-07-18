/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivschat/model/CreateRoomResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ivschat::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateRoomResult::CreateRoomResult() : 
    m_maximumMessageRatePerSecond(0),
    m_maximumMessageLength(0)
{
}

CreateRoomResult::CreateRoomResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : CreateRoomResult()
{
  *this = result;
}

CreateRoomResult& CreateRoomResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetString("createTime");

  }

  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetString("updateTime");

  }

  if(jsonValue.ValueExists("maximumMessageRatePerSecond"))
  {
    m_maximumMessageRatePerSecond = jsonValue.GetInteger("maximumMessageRatePerSecond");

  }

  if(jsonValue.ValueExists("maximumMessageLength"))
  {
    m_maximumMessageLength = jsonValue.GetInteger("maximumMessageLength");

  }

  if(jsonValue.ValueExists("messageReviewHandler"))
  {
    m_messageReviewHandler = jsonValue.GetObject("messageReviewHandler");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("loggingConfigurationIdentifiers"))
  {
    Aws::Utils::Array<JsonView> loggingConfigurationIdentifiersJsonList = jsonValue.GetArray("loggingConfigurationIdentifiers");
    for(unsigned loggingConfigurationIdentifiersIndex = 0; loggingConfigurationIdentifiersIndex < loggingConfigurationIdentifiersJsonList.GetLength(); ++loggingConfigurationIdentifiersIndex)
    {
      m_loggingConfigurationIdentifiers.push_back(loggingConfigurationIdentifiersJsonList[loggingConfigurationIdentifiersIndex].AsString());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
