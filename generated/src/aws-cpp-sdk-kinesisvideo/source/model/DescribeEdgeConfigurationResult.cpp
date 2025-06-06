﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/DescribeEdgeConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::KinesisVideo::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeEdgeConfigurationResult::DescribeEdgeConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeEdgeConfigurationResult& DescribeEdgeConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("StreamName"))
  {
    m_streamName = jsonValue.GetString("StreamName");
    m_streamNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StreamARN"))
  {
    m_streamARN = jsonValue.GetString("StreamARN");
    m_streamARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SyncStatus"))
  {
    m_syncStatus = SyncStatusMapper::GetSyncStatusForName(jsonValue.GetString("SyncStatus"));
    m_syncStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailedStatusDetails"))
  {
    m_failedStatusDetails = jsonValue.GetString("FailedStatusDetails");
    m_failedStatusDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EdgeConfig"))
  {
    m_edgeConfig = jsonValue.GetObject("EdgeConfig");
    m_edgeConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EdgeAgentStatus"))
  {
    m_edgeAgentStatus = jsonValue.GetObject("EdgeAgentStatus");
    m_edgeAgentStatusHasBeenSet = true;
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
