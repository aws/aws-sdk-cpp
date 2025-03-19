/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/CreateDataSourceResult.h>
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

CreateDataSourceResult::CreateDataSourceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateDataSourceResult& CreateDataSourceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("assetFormsOutput"))
  {
    Aws::Utils::Array<JsonView> assetFormsOutputJsonList = jsonValue.GetArray("assetFormsOutput");
    for(unsigned assetFormsOutputIndex = 0; assetFormsOutputIndex < assetFormsOutputJsonList.GetLength(); ++assetFormsOutputIndex)
    {
      m_assetFormsOutput.push_back(assetFormsOutputJsonList[assetFormsOutputIndex].AsObject());
    }
    m_assetFormsOutputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("configuration"))
  {
    m_configuration = jsonValue.GetObject("configuration");
    m_configurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("connectionId"))
  {
    m_connectionId = jsonValue.GetString("connectionId");
    m_connectionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domainId"))
  {
    m_domainId = jsonValue.GetString("domainId");
    m_domainIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("enableSetting"))
  {
    m_enableSetting = EnableSettingMapper::GetEnableSettingForName(jsonValue.GetString("enableSetting"));
    m_enableSettingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");
    m_environmentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetObject("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastRunAt"))
  {
    m_lastRunAt = jsonValue.GetString("lastRunAt");
    m_lastRunAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastRunErrorMessage"))
  {
    m_lastRunErrorMessage = jsonValue.GetObject("lastRunErrorMessage");
    m_lastRunErrorMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastRunStatus"))
  {
    m_lastRunStatus = DataSourceRunStatusMapper::GetDataSourceRunStatusForName(jsonValue.GetString("lastRunStatus"));
    m_lastRunStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("projectId"))
  {
    m_projectId = jsonValue.GetString("projectId");
    m_projectIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("publishOnImport"))
  {
    m_publishOnImport = jsonValue.GetBool("publishOnImport");
    m_publishOnImportHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recommendation"))
  {
    m_recommendation = jsonValue.GetObject("recommendation");
    m_recommendationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("schedule"))
  {
    m_schedule = jsonValue.GetObject("schedule");
    m_scheduleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = DataSourceStatusMapper::GetDataSourceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
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
