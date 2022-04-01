/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-readiness/model/ListRulesOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53RecoveryReadiness
{
namespace Model
{

ListRulesOutput::ListRulesOutput() : 
    m_resourceTypeHasBeenSet(false),
    m_ruleDescriptionHasBeenSet(false),
    m_ruleIdHasBeenSet(false)
{
}

ListRulesOutput::ListRulesOutput(JsonView jsonValue) : 
    m_resourceTypeHasBeenSet(false),
    m_ruleDescriptionHasBeenSet(false),
    m_ruleIdHasBeenSet(false)
{
  *this = jsonValue;
}

ListRulesOutput& ListRulesOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = jsonValue.GetString("resourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ruleDescription"))
  {
    m_ruleDescription = jsonValue.GetString("ruleDescription");

    m_ruleDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ruleId"))
  {
    m_ruleId = jsonValue.GetString("ruleId");

    m_ruleIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ListRulesOutput::Jsonize() const
{
  JsonValue payload;

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", m_resourceType);

  }

  if(m_ruleDescriptionHasBeenSet)
  {
   payload.WithString("ruleDescription", m_ruleDescription);

  }

  if(m_ruleIdHasBeenSet)
  {
   payload.WithString("ruleId", m_ruleId);

  }

  return payload;
}

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
