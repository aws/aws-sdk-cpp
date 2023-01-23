/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ConformancePackComplianceFilters.h>
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

ConformancePackComplianceFilters::ConformancePackComplianceFilters() : 
    m_configRuleNamesHasBeenSet(false),
    m_complianceType(ConformancePackComplianceType::NOT_SET),
    m_complianceTypeHasBeenSet(false)
{
}

ConformancePackComplianceFilters::ConformancePackComplianceFilters(JsonView jsonValue) : 
    m_configRuleNamesHasBeenSet(false),
    m_complianceType(ConformancePackComplianceType::NOT_SET),
    m_complianceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ConformancePackComplianceFilters& ConformancePackComplianceFilters::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue ConformancePackComplianceFilters::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
