/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/UpdateCalculatedAttributeDefinitionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateCalculatedAttributeDefinitionResult::UpdateCalculatedAttributeDefinitionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateCalculatedAttributeDefinitionResult& UpdateCalculatedAttributeDefinitionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CalculatedAttributeName"))
  {
    m_calculatedAttributeName = jsonValue.GetString("CalculatedAttributeName");
    m_calculatedAttributeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Statistic"))
  {
    m_statistic = StatisticMapper::GetStatisticForName(jsonValue.GetString("Statistic"));
    m_statisticHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Conditions"))
  {
    m_conditions = jsonValue.GetObject("Conditions");
    m_conditionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AttributeDetails"))
  {
    m_attributeDetails = jsonValue.GetObject("AttributeDetails");
    m_attributeDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UseHistoricalData"))
  {
    m_useHistoricalData = jsonValue.GetBool("UseHistoricalData");
    m_useHistoricalDataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ReadinessStatusMapper::GetReadinessStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Readiness"))
  {
    m_readiness = jsonValue.GetObject("Readiness");
    m_readinessHasBeenSet = true;
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

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
