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

DescribeTrackerResult::DescribeTrackerResult() : 
    m_eventBridgeEnabled(false),
    m_kmsKeyEnableGeospatialQueries(false),
    m_positionFiltering(PositionFiltering::NOT_SET)
{
}

DescribeTrackerResult::DescribeTrackerResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_eventBridgeEnabled(false),
    m_kmsKeyEnableGeospatialQueries(false),
    m_positionFiltering(PositionFiltering::NOT_SET)
{
  *this = result;
}

DescribeTrackerResult& DescribeTrackerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CreateTime"))
  {
    m_createTime = jsonValue.GetString("CreateTime");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("EventBridgeEnabled"))
  {
    m_eventBridgeEnabled = jsonValue.GetBool("EventBridgeEnabled");

  }

  if(jsonValue.ValueExists("KmsKeyEnableGeospatialQueries"))
  {
    m_kmsKeyEnableGeospatialQueries = jsonValue.GetBool("KmsKeyEnableGeospatialQueries");

  }

  if(jsonValue.ValueExists("KmsKeyId"))
  {
    m_kmsKeyId = jsonValue.GetString("KmsKeyId");

  }

  if(jsonValue.ValueExists("PositionFiltering"))
  {
    m_positionFiltering = PositionFilteringMapper::GetPositionFilteringForName(jsonValue.GetString("PositionFiltering"));

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("TrackerArn"))
  {
    m_trackerArn = jsonValue.GetString("TrackerArn");

  }

  if(jsonValue.ValueExists("TrackerName"))
  {
    m_trackerName = jsonValue.GetString("TrackerName");

  }

  if(jsonValue.ValueExists("UpdateTime"))
  {
    m_updateTime = jsonValue.GetString("UpdateTime");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
