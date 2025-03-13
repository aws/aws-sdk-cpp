/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/DescribeTrackerResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LocationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeTrackerResult::DescribeTrackerResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeTrackerResult& DescribeTrackerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TrackerName"))
  {
    m_trackerName = jsonValue.GetString("TrackerName");
    m_trackerNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrackerArn"))
  {
    m_trackerArn = jsonValue.GetString("TrackerArn");
    m_trackerArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreateTime"))
  {
    m_createTime = jsonValue.GetString("CreateTime");
    m_createTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdateTime"))
  {
    m_updateTime = jsonValue.GetString("UpdateTime");
    m_updateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PositionFiltering"))
  {
    m_positionFiltering = PositionFilteringMapper::GetPositionFilteringForName(jsonValue.GetString("PositionFiltering"));
    m_positionFilteringHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EventBridgeEnabled"))
  {
    m_eventBridgeEnabled = jsonValue.GetBool("EventBridgeEnabled");
    m_eventBridgeEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KmsKeyEnableGeospatialQueries"))
  {
    m_kmsKeyEnableGeospatialQueries = jsonValue.GetBool("KmsKeyEnableGeospatialQueries");
    m_kmsKeyEnableGeospatialQueriesHasBeenSet = true;
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
