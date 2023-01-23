/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/DescribeFlowResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Appflow::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeFlowResult::DescribeFlowResult() : 
    m_flowStatus(FlowStatus::NOT_SET),
    m_schemaVersion(0)
{
}

DescribeFlowResult::DescribeFlowResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_flowStatus(FlowStatus::NOT_SET),
    m_schemaVersion(0)
{
  *this = result;
}

DescribeFlowResult& DescribeFlowResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("flowArn"))
  {
    m_flowArn = jsonValue.GetString("flowArn");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("flowName"))
  {
    m_flowName = jsonValue.GetString("flowName");

  }

  if(jsonValue.ValueExists("kmsArn"))
  {
    m_kmsArn = jsonValue.GetString("kmsArn");

  }

  if(jsonValue.ValueExists("flowStatus"))
  {
    m_flowStatus = FlowStatusMapper::GetFlowStatusForName(jsonValue.GetString("flowStatus"));

  }

  if(jsonValue.ValueExists("flowStatusMessage"))
  {
    m_flowStatusMessage = jsonValue.GetString("flowStatusMessage");

  }

  if(jsonValue.ValueExists("sourceFlowConfig"))
  {
    m_sourceFlowConfig = jsonValue.GetObject("sourceFlowConfig");

  }

  if(jsonValue.ValueExists("destinationFlowConfigList"))
  {
    Aws::Utils::Array<JsonView> destinationFlowConfigListJsonList = jsonValue.GetArray("destinationFlowConfigList");
    for(unsigned destinationFlowConfigListIndex = 0; destinationFlowConfigListIndex < destinationFlowConfigListJsonList.GetLength(); ++destinationFlowConfigListIndex)
    {
      m_destinationFlowConfigList.push_back(destinationFlowConfigListJsonList[destinationFlowConfigListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("lastRunExecutionDetails"))
  {
    m_lastRunExecutionDetails = jsonValue.GetObject("lastRunExecutionDetails");

  }

  if(jsonValue.ValueExists("triggerConfig"))
  {
    m_triggerConfig = jsonValue.GetObject("triggerConfig");

  }

  if(jsonValue.ValueExists("tasks"))
  {
    Aws::Utils::Array<JsonView> tasksJsonList = jsonValue.GetArray("tasks");
    for(unsigned tasksIndex = 0; tasksIndex < tasksJsonList.GetLength(); ++tasksIndex)
    {
      m_tasks.push_back(tasksJsonList[tasksIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

  }

  if(jsonValue.ValueExists("lastUpdatedBy"))
  {
    m_lastUpdatedBy = jsonValue.GetString("lastUpdatedBy");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("metadataCatalogConfig"))
  {
    m_metadataCatalogConfig = jsonValue.GetObject("metadataCatalogConfig");

  }

  if(jsonValue.ValueExists("lastRunMetadataCatalogDetails"))
  {
    Aws::Utils::Array<JsonView> lastRunMetadataCatalogDetailsJsonList = jsonValue.GetArray("lastRunMetadataCatalogDetails");
    for(unsigned lastRunMetadataCatalogDetailsIndex = 0; lastRunMetadataCatalogDetailsIndex < lastRunMetadataCatalogDetailsJsonList.GetLength(); ++lastRunMetadataCatalogDetailsIndex)
    {
      m_lastRunMetadataCatalogDetails.push_back(lastRunMetadataCatalogDetailsJsonList[lastRunMetadataCatalogDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("schemaVersion"))
  {
    m_schemaVersion = jsonValue.GetInt64("schemaVersion");

  }



  return *this;
}
