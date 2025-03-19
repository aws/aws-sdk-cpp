/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ConfiguredTableAssociationAnalysisRule.h>
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

ConfiguredTableAssociationAnalysisRule::ConfiguredTableAssociationAnalysisRule(JsonView jsonValue)
{
  *this = jsonValue;
}

ConfiguredTableAssociationAnalysisRule& ConfiguredTableAssociationAnalysisRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("membershipIdentifier"))
  {
    m_membershipIdentifier = jsonValue.GetString("membershipIdentifier");
    m_membershipIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("configuredTableAssociationId"))
  {
    m_configuredTableAssociationId = jsonValue.GetString("configuredTableAssociationId");
    m_configuredTableAssociationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("configuredTableAssociationArn"))
  {
    m_configuredTableAssociationArn = jsonValue.GetString("configuredTableAssociationArn");
    m_configuredTableAssociationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("policy"))
  {
    m_policy = jsonValue.GetObject("policy");
    m_policyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = ConfiguredTableAssociationAnalysisRuleTypeMapper::GetConfiguredTableAssociationAnalysisRuleTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
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
  return *this;
}

JsonValue ConfiguredTableAssociationAnalysisRule::Jsonize() const
{
  JsonValue payload;

  if(m_membershipIdentifierHasBeenSet)
  {
   payload.WithString("membershipIdentifier", m_membershipIdentifier);

  }

  if(m_configuredTableAssociationIdHasBeenSet)
  {
   payload.WithString("configuredTableAssociationId", m_configuredTableAssociationId);

  }

  if(m_configuredTableAssociationArnHasBeenSet)
  {
   payload.WithString("configuredTableAssociationArn", m_configuredTableAssociationArn);

  }

  if(m_policyHasBeenSet)
  {
   payload.WithObject("policy", m_policy.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ConfiguredTableAssociationAnalysisRuleTypeMapper::GetNameForConfiguredTableAssociationAnalysisRuleType(m_type));
  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("createTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_updateTimeHasBeenSet)
  {
   payload.WithDouble("updateTime", m_updateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
