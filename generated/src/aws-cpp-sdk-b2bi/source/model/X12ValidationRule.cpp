/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/X12ValidationRule.h>
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

X12ValidationRule::X12ValidationRule(JsonView jsonValue)
{
  *this = jsonValue;
}

X12ValidationRule& X12ValidationRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("codeListValidationRule"))
  {
    m_codeListValidationRule = jsonValue.GetObject("codeListValidationRule");
    m_codeListValidationRuleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("elementLengthValidationRule"))
  {
    m_elementLengthValidationRule = jsonValue.GetObject("elementLengthValidationRule");
    m_elementLengthValidationRuleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("elementRequirementValidationRule"))
  {
    m_elementRequirementValidationRule = jsonValue.GetObject("elementRequirementValidationRule");
    m_elementRequirementValidationRuleHasBeenSet = true;
  }
  return *this;
}

JsonValue X12ValidationRule::Jsonize() const
{
  JsonValue payload;

  if(m_codeListValidationRuleHasBeenSet)
  {
   payload.WithObject("codeListValidationRule", m_codeListValidationRule.Jsonize());

  }

  if(m_elementLengthValidationRuleHasBeenSet)
  {
   payload.WithObject("elementLengthValidationRule", m_elementLengthValidationRule.Jsonize());

  }

  if(m_elementRequirementValidationRuleHasBeenSet)
  {
   payload.WithObject("elementRequirementValidationRule", m_elementRequirementValidationRule.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
