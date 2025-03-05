/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gameliftstreams/model/GetStreamGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GameLiftStreams::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetStreamGroupResult::GetStreamGroupResult() : 
    m_status(StreamGroupStatus::NOT_SET),
    m_statusReason(StreamGroupStatusReason::NOT_SET),
    m_streamClass(StreamClass::NOT_SET)
{
}

GetStreamGroupResult::GetStreamGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetStreamGroupResult()
{
  *this = result;
}

GetStreamGroupResult& GetStreamGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("AssociatedApplications"))
  {
    Aws::Utils::Array<JsonView> associatedApplicationsJsonList = jsonValue.GetArray("AssociatedApplications");
    for(unsigned associatedApplicationsIndex = 0; associatedApplicationsIndex < associatedApplicationsJsonList.GetLength(); ++associatedApplicationsIndex)
    {
      m_associatedApplications.push_back(associatedApplicationsJsonList[associatedApplicationsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

  }

  if(jsonValue.ValueExists("DefaultApplication"))
  {
    m_defaultApplication = jsonValue.GetObject("DefaultApplication");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

  }

  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");

  }

  if(jsonValue.ValueExists("LocationStates"))
  {
    Aws::Utils::Array<JsonView> locationStatesJsonList = jsonValue.GetArray("LocationStates");
    for(unsigned locationStatesIndex = 0; locationStatesIndex < locationStatesJsonList.GetLength(); ++locationStatesIndex)
    {
      m_locationStates.push_back(locationStatesJsonList[locationStatesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = StreamGroupStatusMapper::GetStreamGroupStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = StreamGroupStatusReasonMapper::GetStreamGroupStatusReasonForName(jsonValue.GetString("StatusReason"));

  }

  if(jsonValue.ValueExists("StreamClass"))
  {
    m_streamClass = StreamClassMapper::GetStreamClassForName(jsonValue.GetString("StreamClass"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
