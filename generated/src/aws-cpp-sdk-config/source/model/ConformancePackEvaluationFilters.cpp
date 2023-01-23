/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ConformancePackEvaluationFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

ConformancePackEvaluationFilters::ConformancePackEvaluationFilters() : 
    m_configRuleNamesHasBeenSet(false),
    m_complianceType(ConformancePackComplianceType::NOT_SET),
    m_complianceTypeHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdsHasBeenSet(false)
{
}

ConformancePackEvaluationFilters::ConformancePackEvaluationFilters(JsonView jsonValue) : 
    m_configRuleNamesHasBeenSet(false),
    m_complianceType(ConformancePackComplianceType::NOT_SET),
    m_complianceTypeHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdsHasBeenSet(false)
{
  *this = jsonValue;
}

ConformancePackEvaluationFilters& ConformancePackEvaluationFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConfigRuleNames"))
  {
    Aws::Utils::Array<JsonView> configRuleNamesJsonList = jsonValue.GetArray("ConfigRuleNames");
    for(unsigned configRuleNamesIndex = 0; configRuleNamesIndex < configRuleNamesJsonList.GetLength(); ++configRuleNamesIndex)
    {
      m_configRuleNames.push_back(configRuleNamesJsonList[configRuleNamesIndex].AsString());
    }
    m_configRuleNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComplianceType"))
  {
    m_complianceType = ConformancePackComplianceTypeMapper::GetConformancePackComplianceTypeForName(jsonValue.GetString("ComplianceType"));

    m_complianceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceIds"))
  {
    Aws::Utils::Array<JsonView> resourceIdsJsonList = jsonValue.GetArray("ResourceIds");
    for(unsigned resourceIdsIndex = 0; resourceIdsIndex < resourceIdsJsonList.GetLength(); ++resourceIdsIndex)
    {
      m_resourceIds.push_back(resourceIdsJsonList[resourceIdsIndex].AsString());
    }
    m_resourceIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue ConformancePackEvaluationFilters::Jsonize() const
{
  JsonValue payload;

  if(m_configRuleNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configRuleNamesJsonList(m_configRuleNames.size());
   for(unsigned configRuleNamesIndex = 0; configRuleNamesIndex < configRuleNamesJsonList.GetLength(); ++configRuleNamesIndex)
   {
     configRuleNamesJsonList[configRuleNamesIndex].AsString(m_configRuleNames[configRuleNamesIndex]);
   }
   payload.WithArray("ConfigRuleNames", std::move(configRuleNamesJsonList));

  }

  if(m_complianceTypeHasBeenSet)
  {
   payload.WithString("ComplianceType", ConformancePackComplianceTypeMapper::GetNameForConformancePackComplianceType(m_complianceType));
  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_resourceIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceIdsJsonList(m_resourceIds.size());
   for(unsigned resourceIdsIndex = 0; resourceIdsIndex < resourceIdsJsonList.GetLength(); ++resourceIdsIndex)
   {
     resourceIdsJsonList[resourceIdsIndex].AsString(m_resourceIds[resourceIdsIndex]);
   }
   payload.WithArray("ResourceIds", std::move(resourceIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
