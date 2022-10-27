/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/AWSManagedRulesBotControlRuleSet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

AWSManagedRulesBotControlRuleSet::AWSManagedRulesBotControlRuleSet() : 
    m_inspectionLevel(InspectionLevel::NOT_SET),
    m_inspectionLevelHasBeenSet(false)
{
}

AWSManagedRulesBotControlRuleSet::AWSManagedRulesBotControlRuleSet(JsonView jsonValue) : 
    m_inspectionLevel(InspectionLevel::NOT_SET),
    m_inspectionLevelHasBeenSet(false)
{
  *this = jsonValue;
}

AWSManagedRulesBotControlRuleSet& AWSManagedRulesBotControlRuleSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InspectionLevel"))
  {
    m_inspectionLevel = InspectionLevelMapper::GetInspectionLevelForName(jsonValue.GetString("InspectionLevel"));

    m_inspectionLevelHasBeenSet = true;
  }

  return *this;
}

JsonValue AWSManagedRulesBotControlRuleSet::Jsonize() const
{
  JsonValue payload;

  if(m_inspectionLevelHasBeenSet)
  {
   payload.WithString("InspectionLevel", InspectionLevelMapper::GetNameForInspectionLevel(m_inspectionLevel));
  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
