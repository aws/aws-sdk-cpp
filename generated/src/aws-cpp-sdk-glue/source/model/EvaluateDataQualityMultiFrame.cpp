/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/EvaluateDataQualityMultiFrame.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

EvaluateDataQualityMultiFrame::EvaluateDataQualityMultiFrame() : 
    m_nameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_additionalDataSourcesHasBeenSet(false),
    m_rulesetHasBeenSet(false),
    m_publishingOptionsHasBeenSet(false),
    m_additionalOptionsHasBeenSet(false),
    m_stopJobOnFailureOptionsHasBeenSet(false)
{
}

EvaluateDataQualityMultiFrame::EvaluateDataQualityMultiFrame(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_additionalDataSourcesHasBeenSet(false),
    m_rulesetHasBeenSet(false),
    m_publishingOptionsHasBeenSet(false),
    m_additionalOptionsHasBeenSet(false),
    m_stopJobOnFailureOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluateDataQualityMultiFrame& EvaluateDataQualityMultiFrame::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Inputs"))
  {
    Aws::Utils::Array<JsonView> inputsJsonList = jsonValue.GetArray("Inputs");
    for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
    {
      m_inputs.push_back(inputsJsonList[inputsIndex].AsString());
    }
    m_inputsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalDataSources"))
  {
    Aws::Map<Aws::String, JsonView> additionalDataSourcesJsonMap = jsonValue.GetObject("AdditionalDataSources").GetAllObjects();
    for(auto& additionalDataSourcesItem : additionalDataSourcesJsonMap)
    {
      m_additionalDataSources[additionalDataSourcesItem.first] = additionalDataSourcesItem.second.AsString();
    }
    m_additionalDataSourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ruleset"))
  {
    m_ruleset = jsonValue.GetString("Ruleset");

    m_rulesetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PublishingOptions"))
  {
    m_publishingOptions = jsonValue.GetObject("PublishingOptions");

    m_publishingOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalOptions"))
  {
    Aws::Map<Aws::String, JsonView> additionalOptionsJsonMap = jsonValue.GetObject("AdditionalOptions").GetAllObjects();
    for(auto& additionalOptionsItem : additionalOptionsJsonMap)
    {
      m_additionalOptions[AdditionalOptionKeysMapper::GetAdditionalOptionKeysForName(additionalOptionsItem.first)] = additionalOptionsItem.second.AsString();
    }
    m_additionalOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StopJobOnFailureOptions"))
  {
    m_stopJobOnFailureOptions = jsonValue.GetObject("StopJobOnFailureOptions");

    m_stopJobOnFailureOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue EvaluateDataQualityMultiFrame::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_inputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputsJsonList(m_inputs.size());
   for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
   {
     inputsJsonList[inputsIndex].AsString(m_inputs[inputsIndex]);
   }
   payload.WithArray("Inputs", std::move(inputsJsonList));

  }

  if(m_additionalDataSourcesHasBeenSet)
  {
   JsonValue additionalDataSourcesJsonMap;
   for(auto& additionalDataSourcesItem : m_additionalDataSources)
   {
     additionalDataSourcesJsonMap.WithString(additionalDataSourcesItem.first, additionalDataSourcesItem.second);
   }
   payload.WithObject("AdditionalDataSources", std::move(additionalDataSourcesJsonMap));

  }

  if(m_rulesetHasBeenSet)
  {
   payload.WithString("Ruleset", m_ruleset);

  }

  if(m_publishingOptionsHasBeenSet)
  {
   payload.WithObject("PublishingOptions", m_publishingOptions.Jsonize());

  }

  if(m_additionalOptionsHasBeenSet)
  {
   JsonValue additionalOptionsJsonMap;
   for(auto& additionalOptionsItem : m_additionalOptions)
   {
     additionalOptionsJsonMap.WithString(AdditionalOptionKeysMapper::GetNameForAdditionalOptionKeys(additionalOptionsItem.first), additionalOptionsItem.second);
   }
   payload.WithObject("AdditionalOptions", std::move(additionalOptionsJsonMap));

  }

  if(m_stopJobOnFailureOptionsHasBeenSet)
  {
   payload.WithObject("StopJobOnFailureOptions", m_stopJobOnFailureOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
