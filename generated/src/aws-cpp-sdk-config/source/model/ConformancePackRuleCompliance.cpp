/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ConformancePackRuleCompliance.h>
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

ConformancePackRuleCompliance::ConformancePackRuleCompliance() : 
    m_configRuleNameHasBeenSet(false),
    m_complianceType(ConformancePackComplianceType::NOT_SET),
    m_complianceTypeHasBeenSet(false),
    m_controlsHasBeenSet(false)
{
}

ConformancePackRuleCompliance::ConformancePackRuleCompliance(JsonView jsonValue) : 
    m_configRuleNameHasBeenSet(false),
    m_complianceType(ConformancePackComplianceType::NOT_SET),
    m_complianceTypeHasBeenSet(false),
    m_controlsHasBeenSet(false)
{
  *this = jsonValue;
}

ConformancePackRuleCompliance& ConformancePackRuleCompliance::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConfigRuleName"))
  {
    m_configRuleName = jsonValue.GetString("ConfigRuleName");

    m_configRuleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComplianceType"))
  {
    m_complianceType = ConformancePackComplianceTypeMapper::GetConformancePackComplianceTypeForName(jsonValue.GetString("ComplianceType"));

    m_complianceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Controls"))
  {
    Aws::Utils::Array<JsonView> controlsJsonList = jsonValue.GetArray("Controls");
    for(unsigned controlsIndex = 0; controlsIndex < controlsJsonList.GetLength(); ++controlsIndex)
    {
      m_controls.push_back(controlsJsonList[controlsIndex].AsString());
    }
    m_controlsHasBeenSet = true;
  }

  return *this;
}

JsonValue ConformancePackRuleCompliance::Jsonize() const
{
  JsonValue payload;

  if(m_configRuleNameHasBeenSet)
  {
   payload.WithString("ConfigRuleName", m_configRuleName);

  }

  if(m_complianceTypeHasBeenSet)
  {
   payload.WithString("ComplianceType", ConformancePackComplianceTypeMapper::GetNameForConformancePackComplianceType(m_complianceType));
  }

  if(m_controlsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> controlsJsonList(m_controls.size());
   for(unsigned controlsIndex = 0; controlsIndex < controlsJsonList.GetLength(); ++controlsIndex)
   {
     controlsJsonList[controlsIndex].AsString(m_controls[controlsIndex]);
   }
   payload.WithArray("Controls", std::move(controlsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
