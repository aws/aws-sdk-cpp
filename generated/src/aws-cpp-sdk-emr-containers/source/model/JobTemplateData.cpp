/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/JobTemplateData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRContainers
{
namespace Model
{

JobTemplateData::JobTemplateData() : 
    m_executionRoleArnHasBeenSet(false),
    m_releaseLabelHasBeenSet(false),
    m_configurationOverridesHasBeenSet(false),
    m_jobDriverHasBeenSet(false),
    m_parameterConfigurationHasBeenSet(false),
    m_jobTagsHasBeenSet(false)
{
}

JobTemplateData::JobTemplateData(JsonView jsonValue) : 
    m_executionRoleArnHasBeenSet(false),
    m_releaseLabelHasBeenSet(false),
    m_configurationOverridesHasBeenSet(false),
    m_jobDriverHasBeenSet(false),
    m_parameterConfigurationHasBeenSet(false),
    m_jobTagsHasBeenSet(false)
{
  *this = jsonValue;
}

JobTemplateData& JobTemplateData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("executionRoleArn"))
  {
    m_executionRoleArn = jsonValue.GetString("executionRoleArn");

    m_executionRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("releaseLabel"))
  {
    m_releaseLabel = jsonValue.GetString("releaseLabel");

    m_releaseLabelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configurationOverrides"))
  {
    m_configurationOverrides = jsonValue.GetObject("configurationOverrides");

    m_configurationOverridesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobDriver"))
  {
    m_jobDriver = jsonValue.GetObject("jobDriver");

    m_jobDriverHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parameterConfiguration"))
  {
    Aws::Map<Aws::String, JsonView> parameterConfigurationJsonMap = jsonValue.GetObject("parameterConfiguration").GetAllObjects();
    for(auto& parameterConfigurationItem : parameterConfigurationJsonMap)
    {
      m_parameterConfiguration[parameterConfigurationItem.first] = parameterConfigurationItem.second.AsObject();
    }
    m_parameterConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobTags"))
  {
    Aws::Map<Aws::String, JsonView> jobTagsJsonMap = jsonValue.GetObject("jobTags").GetAllObjects();
    for(auto& jobTagsItem : jobTagsJsonMap)
    {
      m_jobTags[jobTagsItem.first] = jobTagsItem.second.AsString();
    }
    m_jobTagsHasBeenSet = true;
  }

  return *this;
}

JsonValue JobTemplateData::Jsonize() const
{
  JsonValue payload;

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("executionRoleArn", m_executionRoleArn);

  }

  if(m_releaseLabelHasBeenSet)
  {
   payload.WithString("releaseLabel", m_releaseLabel);

  }

  if(m_configurationOverridesHasBeenSet)
  {
   payload.WithObject("configurationOverrides", m_configurationOverrides.Jsonize());

  }

  if(m_jobDriverHasBeenSet)
  {
   payload.WithObject("jobDriver", m_jobDriver.Jsonize());

  }

  if(m_parameterConfigurationHasBeenSet)
  {
   JsonValue parameterConfigurationJsonMap;
   for(auto& parameterConfigurationItem : m_parameterConfiguration)
   {
     parameterConfigurationJsonMap.WithObject(parameterConfigurationItem.first, parameterConfigurationItem.second.Jsonize());
   }
   payload.WithObject("parameterConfiguration", std::move(parameterConfigurationJsonMap));

  }

  if(m_jobTagsHasBeenSet)
  {
   JsonValue jobTagsJsonMap;
   for(auto& jobTagsItem : m_jobTags)
   {
     jobTagsJsonMap.WithString(jobTagsItem.first, jobTagsItem.second);
   }
   payload.WithObject("jobTags", std::move(jobTagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
