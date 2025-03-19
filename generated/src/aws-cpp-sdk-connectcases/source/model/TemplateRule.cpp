/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/TemplateRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

TemplateRule::TemplateRule(JsonView jsonValue)
{
  *this = jsonValue;
}

TemplateRule& TemplateRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("caseRuleId"))
  {
    m_caseRuleId = jsonValue.GetString("caseRuleId");
    m_caseRuleIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fieldId"))
  {
    m_fieldId = jsonValue.GetString("fieldId");
    m_fieldIdHasBeenSet = true;
  }
  return *this;
}

JsonValue TemplateRule::Jsonize() const
{
  JsonValue payload;

  if(m_caseRuleIdHasBeenSet)
  {
   payload.WithString("caseRuleId", m_caseRuleId);

  }

  if(m_fieldIdHasBeenSet)
  {
   payload.WithString("fieldId", m_fieldId);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
