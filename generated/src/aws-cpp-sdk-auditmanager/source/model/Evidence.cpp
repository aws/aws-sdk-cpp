/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/Evidence.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AuditManager
{
namespace Model
{

Evidence::Evidence() : 
    m_dataSourceHasBeenSet(false),
    m_evidenceAwsAccountIdHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_eventSourceHasBeenSet(false),
    m_eventNameHasBeenSet(false),
    m_evidenceByTypeHasBeenSet(false),
    m_resourcesIncludedHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_iamIdHasBeenSet(false),
    m_complianceCheckHasBeenSet(false),
    m_awsOrganizationHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false),
    m_evidenceFolderIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_assessmentReportSelectionHasBeenSet(false)
{
}

Evidence::Evidence(JsonView jsonValue) : 
    m_dataSourceHasBeenSet(false),
    m_evidenceAwsAccountIdHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_eventSourceHasBeenSet(false),
    m_eventNameHasBeenSet(false),
    m_evidenceByTypeHasBeenSet(false),
    m_resourcesIncludedHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_iamIdHasBeenSet(false),
    m_complianceCheckHasBeenSet(false),
    m_awsOrganizationHasBeenSet(false),
    m_awsAccountIdHasBeenSet(false),
    m_evidenceFolderIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_assessmentReportSelectionHasBeenSet(false)
{
  *this = jsonValue;
}

Evidence& Evidence::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataSource"))
  {
    m_dataSource = jsonValue.GetString("dataSource");

    m_dataSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("evidenceAwsAccountId"))
  {
    m_evidenceAwsAccountId = jsonValue.GetString("evidenceAwsAccountId");

    m_evidenceAwsAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("time"))
  {
    m_time = jsonValue.GetDouble("time");

    m_timeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventSource"))
  {
    m_eventSource = jsonValue.GetString("eventSource");

    m_eventSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventName"))
  {
    m_eventName = jsonValue.GetString("eventName");

    m_eventNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("evidenceByType"))
  {
    m_evidenceByType = jsonValue.GetString("evidenceByType");

    m_evidenceByTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourcesIncluded"))
  {
    Aws::Utils::Array<JsonView> resourcesIncludedJsonList = jsonValue.GetArray("resourcesIncluded");
    for(unsigned resourcesIncludedIndex = 0; resourcesIncludedIndex < resourcesIncludedJsonList.GetLength(); ++resourcesIncludedIndex)
    {
      m_resourcesIncluded.push_back(resourcesIncludedJsonList[resourcesIncludedIndex].AsObject());
    }
    m_resourcesIncludedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attributes"))
  {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[attributesItem.first] = attributesItem.second.AsString();
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iamId"))
  {
    m_iamId = jsonValue.GetString("iamId");

    m_iamIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("complianceCheck"))
  {
    m_complianceCheck = jsonValue.GetString("complianceCheck");

    m_complianceCheckHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsOrganization"))
  {
    m_awsOrganization = jsonValue.GetString("awsOrganization");

    m_awsOrganizationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("awsAccountId");

    m_awsAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("evidenceFolderId"))
  {
    m_evidenceFolderId = jsonValue.GetString("evidenceFolderId");

    m_evidenceFolderIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assessmentReportSelection"))
  {
    m_assessmentReportSelection = jsonValue.GetString("assessmentReportSelection");

    m_assessmentReportSelectionHasBeenSet = true;
  }

  return *this;
}

JsonValue Evidence::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceHasBeenSet)
  {
   payload.WithString("dataSource", m_dataSource);

  }

  if(m_evidenceAwsAccountIdHasBeenSet)
  {
   payload.WithString("evidenceAwsAccountId", m_evidenceAwsAccountId);

  }

  if(m_timeHasBeenSet)
  {
   payload.WithDouble("time", m_time.SecondsWithMSPrecision());
  }

  if(m_eventSourceHasBeenSet)
  {
   payload.WithString("eventSource", m_eventSource);

  }

  if(m_eventNameHasBeenSet)
  {
   payload.WithString("eventName", m_eventName);

  }

  if(m_evidenceByTypeHasBeenSet)
  {
   payload.WithString("evidenceByType", m_evidenceByType);

  }

  if(m_resourcesIncludedHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourcesIncludedJsonList(m_resourcesIncluded.size());
   for(unsigned resourcesIncludedIndex = 0; resourcesIncludedIndex < resourcesIncludedJsonList.GetLength(); ++resourcesIncludedIndex)
   {
     resourcesIncludedJsonList[resourcesIncludedIndex].AsObject(m_resourcesIncluded[resourcesIncludedIndex].Jsonize());
   }
   payload.WithArray("resourcesIncluded", std::move(resourcesIncludedJsonList));

  }

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
   }
   payload.WithObject("attributes", std::move(attributesJsonMap));

  }

  if(m_iamIdHasBeenSet)
  {
   payload.WithString("iamId", m_iamId);

  }

  if(m_complianceCheckHasBeenSet)
  {
   payload.WithString("complianceCheck", m_complianceCheck);

  }

  if(m_awsOrganizationHasBeenSet)
  {
   payload.WithString("awsOrganization", m_awsOrganization);

  }

  if(m_awsAccountIdHasBeenSet)
  {
   payload.WithString("awsAccountId", m_awsAccountId);

  }

  if(m_evidenceFolderIdHasBeenSet)
  {
   payload.WithString("evidenceFolderId", m_evidenceFolderId);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_assessmentReportSelectionHasBeenSet)
  {
   payload.WithString("assessmentReportSelection", m_assessmentReportSelection);

  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
