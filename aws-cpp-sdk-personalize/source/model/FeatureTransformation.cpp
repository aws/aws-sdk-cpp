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

#include <aws/personalize/model/FeatureTransformation.h>
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

FeatureTransformation::FeatureTransformation() : 
    m_nameHasBeenSet(false),
    m_featureTransformationArnHasBeenSet(false),
    m_defaultParametersHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

FeatureTransformation::FeatureTransformation(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_featureTransformationArnHasBeenSet(false),
    m_defaultParametersHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

FeatureTransformation& FeatureTransformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("featureTransformationArn"))
  {
    m_featureTransformationArn = jsonValue.GetString("featureTransformationArn");

    m_featureTransformationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultParameters"))
  {
    Aws::Map<Aws::String, JsonView> defaultParametersJsonMap = jsonValue.GetObject("defaultParameters").GetAllObjects();
    for(auto& defaultParametersItem : defaultParametersJsonMap)
    {
      m_defaultParameters[defaultParametersItem.first] = defaultParametersItem.second.AsString();
    }
    m_defaultParametersHasBeenSet = true;
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

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue FeatureTransformation::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_featureTransformationArnHasBeenSet)
  {
   payload.WithString("featureTransformationArn", m_featureTransformationArn);

  }

  if(m_defaultParametersHasBeenSet)
  {
   JsonValue defaultParametersJsonMap;
   for(auto& defaultParametersItem : m_defaultParameters)
   {
     defaultParametersJsonMap.WithString(defaultParametersItem.first, defaultParametersItem.second);
   }
   payload.WithObject("defaultParameters", std::move(defaultParametersJsonMap));

  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("creationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedDateTime", m_lastUpdatedDateTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
