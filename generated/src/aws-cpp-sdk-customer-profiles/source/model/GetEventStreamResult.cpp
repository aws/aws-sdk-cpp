/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/GetEventStreamResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEventStreamResult::GetEventStreamResult() : 
    m_state(EventStreamState::NOT_SET)
{
}

GetEventStreamResult::GetEventStreamResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(EventStreamState::NOT_SET)
{
  *this = result;
}

GetEventStreamResult& GetEventStreamResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

  }

  if(jsonValue.ValueExists("EventStreamArn"))
  {
    m_eventStreamArn = jsonValue.GetString("EventStreamArn");

  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = EventStreamStateMapper::GetEventStreamStateForName(jsonValue.GetString("State"));

  }

  if(jsonValue.ValueExists("StoppedSince"))
  {
    m_stoppedSince = jsonValue.GetDouble("StoppedSince");

  }

  if(jsonValue.ValueExists("DestinationDetails"))
  {
    m_destinationDetails = jsonValue.GetObject("DestinationDetails");

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
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
