/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/StartEdgeConfigurationUpdateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::KinesisVideo::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartEdgeConfigurationUpdateResult::StartEdgeConfigurationUpdateResult() : 
    m_syncStatus(SyncStatus::NOT_SET)
{
}

StartEdgeConfigurationUpdateResult::StartEdgeConfigurationUpdateResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_syncStatus(SyncStatus::NOT_SET)
{
  *this = result;
}

StartEdgeConfigurationUpdateResult& StartEdgeConfigurationUpdateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("StreamName"))
  {
    m_streamName = jsonValue.GetString("StreamName");

  }

  if(jsonValue.ValueExists("StreamARN"))
  {
    m_streamARN = jsonValue.GetString("StreamARN");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

  }

  if(jsonValue.ValueExists("SyncStatus"))
  {
    m_syncStatus = SyncStatusMapper::GetSyncStatusForName(jsonValue.GetString("SyncStatus"));

  }

  if(jsonValue.ValueExists("FailedStatusDetails"))
  {
    m_failedStatusDetails = jsonValue.GetString("FailedStatusDetails");

  }

  if(jsonValue.ValueExists("EdgeConfig"))
  {
    m_edgeConfig = jsonValue.GetObject("EdgeConfig");

  }



  return *this;
}
