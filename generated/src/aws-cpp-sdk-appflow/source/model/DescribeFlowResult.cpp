/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/DescribeFlowResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Appflow::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeFlowResult::DescribeFlowResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeFlowResult& DescribeFlowResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("flowArn"))
  {
    m_flowArn = jsonValue.GetString("flowArn");
    m_flowArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("flowName"))
  {
    m_flowName = jsonValue.GetString("flowName");
    m_flowNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kmsArn"))
  {
    m_kmsArn = jsonValue.GetString("kmsArn");
    m_kmsArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("flowStatus"))
  {
    m_flowStatus = FlowStatusMapper::GetFlowStatusForName(jsonValue.GetString("flowStatus"));
    m_flowStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("flowStatusMessage"))
  {
    m_flowStatusMessage = jsonValue.GetString("flowStatusMessage");
    m_flowStatusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceFlowConfig"))
  {
    m_sourceFlowConfig = jsonValue.GetObject("sourceFlowConfig");
    m_sourceFlowConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("destinationFlowConfigList"))
  {
    Aws::Utils::Array<JsonView> destinationFlowConfigListJsonList = jsonValue.GetArray("destinationFlowConfigList");
    for(unsigned destinationFlowConfigListIndex = 0; destinationFlowConfigListIndex < destinationFlowConfigListJsonList.GetLength(); ++destinationFlowConfigListIndex)
    {
      m_destinationFlowConfigList.push_back(destinationFlowConfigListJsonList[destinationFlowConfigListIndex].AsObject());
    }
    m_destinationFlowConfigListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastRunExecutionDetails"))
  {
    m_lastRunExecutionDetails = jsonValue.GetObject("lastRunExecutionDetails");
    m_lastRunExecutionDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("triggerConfig"))
  {
    m_triggerConfig = jsonValue.GetObject("triggerConfig");
    m_triggerConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tasks"))
  {
    Aws::Utils::Array<JsonView> tasksJsonList = jsonValue.GetArray("tasks");
    for(unsigned tasksIndex = 0; tasksIndex < tasksJsonList.GetLength(); ++tasksIndex)
    {
      m_tasks.push_back(tasksJsonList[tasksIndex].AsObject());
    }
    m_tasksHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");
    m_createdByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedBy"))
  {
    m_lastUpdatedBy = jsonValue.GetString("lastUpdatedBy");
    m_lastUpdatedByHasBeenSet = true;
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
  if(jsonValue.ValueExists("metadataCatalogConfig"))
  {
    m_metadataCatalogConfig = jsonValue.GetObject("metadataCatalogConfig");
    m_metadataCatalogConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastRunMetadataCatalogDetails"))
  {
    Aws::Utils::Array<JsonView> lastRunMetadataCatalogDetailsJsonList = jsonValue.GetArray("lastRunMetadataCatalogDetails");
    for(unsigned lastRunMetadataCatalogDetailsIndex = 0; lastRunMetadataCatalogDetailsIndex < lastRunMetadataCatalogDetailsJsonList.GetLength(); ++lastRunMetadataCatalogDetailsIndex)
    {
      m_lastRunMetadataCatalogDetails.push_back(lastRunMetadataCatalogDetailsJsonList[lastRunMetadataCatalogDetailsIndex].AsObject());
    }
    m_lastRunMetadataCatalogDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("schemaVersion"))
  {
    m_schemaVersion = jsonValue.GetInt64("schemaVersion");
    m_schemaVersionHasBeenSet = true;
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
