/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gameliftstreams/model/CreateStreamGroupResult.h>
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

CreateStreamGroupResult::CreateStreamGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateStreamGroupResult& CreateStreamGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DefaultApplication"))
  {
    m_defaultApplication = jsonValue.GetObject("DefaultApplication");
    m_defaultApplicationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LocationStates"))
  {
    Aws::Utils::Array<JsonView> locationStatesJsonList = jsonValue.GetArray("LocationStates");
    for(unsigned locationStatesIndex = 0; locationStatesIndex < locationStatesJsonList.GetLength(); ++locationStatesIndex)
    {
      m_locationStates.push_back(locationStatesJsonList[locationStatesIndex].AsObject());
    }
    m_locationStatesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StreamClass"))
  {
    m_streamClass = StreamClassMapper::GetStreamClassForName(jsonValue.GetString("StreamClass"));
    m_streamClassHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = StreamGroupStatusMapper::GetStreamGroupStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = StreamGroupStatusReasonMapper::GetStreamGroupStatusReasonForName(jsonValue.GetString("StatusReason"));
    m_statusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AssociatedApplications"))
  {
    Aws::Utils::Array<JsonView> associatedApplicationsJsonList = jsonValue.GetArray("AssociatedApplications");
    for(unsigned associatedApplicationsIndex = 0; associatedApplicationsIndex < associatedApplicationsJsonList.GetLength(); ++associatedApplicationsIndex)
    {
      m_associatedApplications.push_back(associatedApplicationsJsonList[associatedApplicationsIndex].AsString());
    }
    m_associatedApplicationsHasBeenSet = true;
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
