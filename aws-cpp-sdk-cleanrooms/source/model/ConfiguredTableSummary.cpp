/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ConfiguredTableSummary.h>
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

ConfiguredTableSummary::ConfiguredTableSummary() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_analysisRuleTypesHasBeenSet(false),
    m_analysisMethod(AnalysisMethod::NOT_SET),
    m_analysisMethodHasBeenSet(false)
{
}

ConfiguredTableSummary::ConfiguredTableSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_analysisRuleTypesHasBeenSet(false),
    m_analysisMethod(AnalysisMethod::NOT_SET),
    m_analysisMethodHasBeenSet(false)
{
  *this = jsonValue;
}

ConfiguredTableSummary& ConfiguredTableSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
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

  if(jsonValue.ValueExists("analysisRuleTypes"))
  {
    Aws::Utils::Array<JsonView> analysisRuleTypesJsonList = jsonValue.GetArray("analysisRuleTypes");
    for(unsigned analysisRuleTypesIndex = 0; analysisRuleTypesIndex < analysisRuleTypesJsonList.GetLength(); ++analysisRuleTypesIndex)
    {
      m_analysisRuleTypes.push_back(ConfiguredTableAnalysisRuleTypeMapper::GetConfiguredTableAnalysisRuleTypeForName(analysisRuleTypesJsonList[analysisRuleTypesIndex].AsString()));
    }
    m_analysisRuleTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("analysisMethod"))
  {
    m_analysisMethod = AnalysisMethodMapper::GetAnalysisMethodForName(jsonValue.GetString("analysisMethod"));

    m_analysisMethodHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfiguredTableSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

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

  if(m_analysisRuleTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> analysisRuleTypesJsonList(m_analysisRuleTypes.size());
   for(unsigned analysisRuleTypesIndex = 0; analysisRuleTypesIndex < analysisRuleTypesJsonList.GetLength(); ++analysisRuleTypesIndex)
   {
     analysisRuleTypesJsonList[analysisRuleTypesIndex].AsString(ConfiguredTableAnalysisRuleTypeMapper::GetNameForConfiguredTableAnalysisRuleType(m_analysisRuleTypes[analysisRuleTypesIndex]));
   }
   payload.WithArray("analysisRuleTypes", std::move(analysisRuleTypesJsonList));

  }

  if(m_analysisMethodHasBeenSet)
  {
   payload.WithString("analysisMethod", AnalysisMethodMapper::GetNameForAnalysisMethod(m_analysisMethod));
  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
