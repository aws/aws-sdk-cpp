/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/StartDataSourceRunResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartDataSourceRunResult::StartDataSourceRunResult() : 
    m_status(DataSourceRunStatus::NOT_SET),
    m_type(DataSourceRunType::NOT_SET)
{
}

StartDataSourceRunResult::StartDataSourceRunResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(DataSourceRunStatus::NOT_SET),
    m_type(DataSourceRunType::NOT_SET)
{
  *this = result;
}

StartDataSourceRunResult& StartDataSourceRunResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }

  if(jsonValue.ValueExists("dataSourceConfigurationSnapshot"))
  {
    m_dataSourceConfigurationSnapshot = jsonValue.GetString("dataSourceConfigurationSnapshot");

  }

  if(jsonValue.ValueExists("dataSourceId"))
  {
    m_dataSourceId = jsonValue.GetString("dataSourceId");

  }

  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");

  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetObject("errorMessage");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("projectId"))
  {
    m_projectId = jsonValue.GetString("projectId");

  }

  if(jsonValue.ValueExists("runStatisticsForAssets"))
  {
    m_runStatisticsForAssets = jsonValue.GetObject("runStatisticsForAssets");

  }

  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetString("startedAt");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = DataSourceRunStatusMapper::GetDataSourceRunStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("stoppedAt"))
  {
    m_stoppedAt = jsonValue.GetString("stoppedAt");

  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = DataSourceRunTypeMapper::GetDataSourceRunTypeForName(jsonValue.GetString("type"));

  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
