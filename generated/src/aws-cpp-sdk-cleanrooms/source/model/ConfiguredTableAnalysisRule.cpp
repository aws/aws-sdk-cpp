/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ConfiguredTableAnalysisRule.h>
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

ConfiguredTableAnalysisRule::ConfiguredTableAnalysisRule() : 
    m_configuredTableIdHasBeenSet(false),
    m_configuredTableArnHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_type(ConfiguredTableAnalysisRuleType::NOT_SET),
    m_typeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

ConfiguredTableAnalysisRule::ConfiguredTableAnalysisRule(JsonView jsonValue) : 
    m_configuredTableIdHasBeenSet(false),
    m_configuredTableArnHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_type(ConfiguredTableAnalysisRuleType::NOT_SET),
    m_typeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ConfiguredTableAnalysisRule& ConfiguredTableAnalysisRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("configuredTableId"))
  {
    m_configuredTableId = jsonValue.GetString("configuredTableId");

    m_configuredTableIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configuredTableArn"))
  {
    m_configuredTableArn = jsonValue.GetString("configuredTableArn");

    m_configuredTableArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("policy"))
  {
    m_policy = jsonValue.GetObject("policy");

    m_policyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = ConfiguredTableAnalysisRuleTypeMapper::GetConfiguredTableAnalysisRuleTypeForName(jsonValue.GetString("type"));

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

JsonValue ConfiguredTableAnalysisRule::Jsonize() const
{
  JsonValue payload;

  if(m_configuredTableIdHasBeenSet)
  {
   payload.WithString("configuredTableId", m_configuredTableId);

  }

  if(m_configuredTableArnHasBeenSet)
  {
   payload.WithString("configuredTableArn", m_configuredTableArn);

  }

  if(m_policyHasBeenSet)
  {
   payload.WithObject("policy", m_policy.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ConfiguredTableAnalysisRuleTypeMapper::GetNameForConfiguredTableAnalysisRuleType(m_type));
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
