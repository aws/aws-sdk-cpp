/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/DescribeContactResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeContactResult::DescribeContactResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeContactResult& DescribeContactResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("contactId"))
  {
    m_contactId = jsonValue.GetString("contactId");
    m_contactIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("contactStatus"))
  {
    m_contactStatus = ContactStatusMapper::GetContactStatusForName(jsonValue.GetString("contactStatus"));
    m_contactStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataflowList"))
  {
    Aws::Utils::Array<JsonView> dataflowListJsonList = jsonValue.GetArray("dataflowList");
    for(unsigned dataflowListIndex = 0; dataflowListIndex < dataflowListJsonList.GetLength(); ++dataflowListIndex)
    {
      m_dataflowList.push_back(dataflowListJsonList[dataflowListIndex].AsObject());
    }
    m_dataflowListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");
    m_endTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("groundStation"))
  {
    m_groundStation = jsonValue.GetString("groundStation");
    m_groundStationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maximumElevation"))
  {
    m_maximumElevation = jsonValue.GetObject("maximumElevation");
    m_maximumElevationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("missionProfileArn"))
  {
    m_missionProfileArn = jsonValue.GetString("missionProfileArn");
    m_missionProfileArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("postPassEndTime"))
  {
    m_postPassEndTime = jsonValue.GetDouble("postPassEndTime");
    m_postPassEndTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("prePassStartTime"))
  {
    m_prePassStartTime = jsonValue.GetDouble("prePassStartTime");
    m_prePassStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");
    m_regionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("satelliteArn"))
  {
    m_satelliteArn = jsonValue.GetString("satelliteArn");
    m_satelliteArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("visibilityEndTime"))
  {
    m_visibilityEndTime = jsonValue.GetDouble("visibilityEndTime");
    m_visibilityEndTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("visibilityStartTime"))
  {
    m_visibilityStartTime = jsonValue.GetDouble("visibilityStartTime");
    m_visibilityStartTimeHasBeenSet = true;
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
