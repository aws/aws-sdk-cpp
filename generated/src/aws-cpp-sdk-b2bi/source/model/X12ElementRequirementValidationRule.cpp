/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/X12ElementRequirementValidationRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace B2BI
{
namespace Model
{

X12ElementRequirementValidationRule::X12ElementRequirementValidationRule(JsonView jsonValue)
{
  *this = jsonValue;
}

X12ElementRequirementValidationRule& X12ElementRequirementValidationRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("elementPosition"))
  {
    m_elementPosition = jsonValue.GetString("elementPosition");
    m_elementPositionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("requirement"))
  {
    m_requirement = ElementRequirementMapper::GetElementRequirementForName(jsonValue.GetString("requirement"));
    m_requirementHasBeenSet = true;
  }
  return *this;
}

JsonValue X12ElementRequirementValidationRule::Jsonize() const
{
  JsonValue payload;

  if(m_elementPositionHasBeenSet)
  {
   payload.WithString("elementPosition", m_elementPosition);

  }

  if(m_requirementHasBeenSet)
  {
   payload.WithString("requirement", ElementRequirementMapper::GetNameForElementRequirement(m_requirement));
  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
