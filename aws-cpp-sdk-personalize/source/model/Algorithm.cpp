/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/personalize/model/Algorithm.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

Algorithm::Algorithm() : 
    m_nameHasBeenSet(false),
    m_algorithmArnHasBeenSet(false),
    m_algorithmImageHasBeenSet(false),
    m_defaultHyperParametersHasBeenSet(false),
    m_defaultHyperParameterRangesHasBeenSet(false),
    m_defaultResourceConfigHasBeenSet(false),
    m_trainingInputModeHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false)
{
}

Algorithm::Algorithm(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_algorithmArnHasBeenSet(false),
    m_algorithmImageHasBeenSet(false),
    m_defaultHyperParametersHasBeenSet(false),
    m_defaultHyperParameterRangesHasBeenSet(false),
    m_defaultResourceConfigHasBeenSet(false),
    m_trainingInputModeHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Algorithm& Algorithm::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("algorithmArn"))
  {
    m_algorithmArn = jsonValue.GetString("algorithmArn");

    m_algorithmArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("algorithmImage"))
  {
    m_algorithmImage = jsonValue.GetObject("algorithmImage");

    m_algorithmImageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultHyperParameters"))
  {
    Aws::Map<Aws::String, JsonView> defaultHyperParametersJsonMap = jsonValue.GetObject("defaultHyperParameters").GetAllObjects();
    for(auto& defaultHyperParametersItem : defaultHyperParametersJsonMap)
    {
      m_defaultHyperParameters[defaultHyperParametersItem.first] = defaultHyperParametersItem.second.AsString();
    }
    m_defaultHyperParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultHyperParameterRanges"))
  {
    m_defaultHyperParameterRanges = jsonValue.GetObject("defaultHyperParameterRanges");

    m_defaultHyperParameterRangesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultResourceConfig"))
  {
    Aws::Map<Aws::String, JsonView> defaultResourceConfigJsonMap = jsonValue.GetObject("defaultResourceConfig").GetAllObjects();
    for(auto& defaultResourceConfigItem : defaultResourceConfigJsonMap)
    {
      m_defaultResourceConfig[defaultResourceConfigItem.first] = defaultResourceConfigItem.second.AsString();
    }
    m_defaultResourceConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("trainingInputMode"))
  {
    m_trainingInputMode = jsonValue.GetString("trainingInputMode");

    m_trainingInputModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("lastUpdatedDateTime");

    m_lastUpdatedDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue Algorithm::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_algorithmArnHasBeenSet)
  {
   payload.WithString("algorithmArn", m_algorithmArn);

  }

  if(m_algorithmImageHasBeenSet)
  {
   payload.WithObject("algorithmImage", m_algorithmImage.Jsonize());

  }

  if(m_defaultHyperParametersHasBeenSet)
  {
   JsonValue defaultHyperParametersJsonMap;
   for(auto& defaultHyperParametersItem : m_defaultHyperParameters)
   {
     defaultHyperParametersJsonMap.WithString(defaultHyperParametersItem.first, defaultHyperParametersItem.second);
   }
   payload.WithObject("defaultHyperParameters", std::move(defaultHyperParametersJsonMap));

  }

  if(m_defaultHyperParameterRangesHasBeenSet)
  {
   payload.WithObject("defaultHyperParameterRanges", m_defaultHyperParameterRanges.Jsonize());

  }

  if(m_defaultResourceConfigHasBeenSet)
  {
   JsonValue defaultResourceConfigJsonMap;
   for(auto& defaultResourceConfigItem : m_defaultResourceConfig)
   {
     defaultResourceConfigJsonMap.WithString(defaultResourceConfigItem.first, defaultResourceConfigItem.second);
   }
   payload.WithObject("defaultResourceConfig", std::move(defaultResourceConfigJsonMap));

  }

  if(m_trainingInputModeHasBeenSet)
  {
   payload.WithString("trainingInputMode", m_trainingInputMode);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("creationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedDateTime", m_lastUpdatedDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
