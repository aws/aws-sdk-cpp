/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AnalysisRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

AnalysisRule::AnalysisRule(JsonView jsonValue)
{
  *this = jsonValue;
}

AnalysisRule& AnalysisRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("collaborationId"))
  {
    m_collaborationId = jsonValue.GetString("collaborationId");
    m_collaborationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = AnalysisRuleTypeMapper::GetAnalysisRuleTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetDouble("createTime");
    m_createTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetDouble("updateTime");
    m_updateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("policy"))
  {
    m_policy = jsonValue.GetObject("policy");
    m_policyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("collaborationPolicy"))
  {
    m_collaborationPolicy = jsonValue.GetObject("collaborationPolicy");
    m_collaborationPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("consolidatedPolicy"))
  {
    m_consolidatedPolicy = jsonValue.GetObject("consolidatedPolicy");
    m_consolidatedPolicyHasBeenSet = true;
  }
  return *this;
}

JsonValue AnalysisRule::Jsonize() const
{
  JsonValue payload;

  if(m_collaborationIdHasBeenSet)
  {
   payload.WithString("collaborationId", m_collaborationId);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", AnalysisRuleTypeMapper::GetNameForAnalysisRuleType(m_type));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("createTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_updateTimeHasBeenSet)
  {
   payload.WithDouble("updateTime", m_updateTime.SecondsWithMSPrecision());
  }

  if(m_policyHasBeenSet)
  {
   payload.WithObject("policy", m_policy.Jsonize());

  }

  if(m_collaborationPolicyHasBeenSet)
  {
   payload.WithObject("collaborationPolicy", m_collaborationPolicy.Jsonize());

  }

  if(m_consolidatedPolicyHasBeenSet)
  {
   payload.WithObject("consolidatedPolicy", m_consolidatedPolicy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
