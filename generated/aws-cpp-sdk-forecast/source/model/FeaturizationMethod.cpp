/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/FeaturizationMethod.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

FeaturizationMethod::FeaturizationMethod() : 
    m_featurizationMethodName(FeaturizationMethodName::NOT_SET),
    m_featurizationMethodNameHasBeenSet(false),
    m_featurizationMethodParametersHasBeenSet(false)
{
}

FeaturizationMethod::FeaturizationMethod(JsonView jsonValue) : 
    m_featurizationMethodName(FeaturizationMethodName::NOT_SET),
    m_featurizationMethodNameHasBeenSet(false),
    m_featurizationMethodParametersHasBeenSet(false)
{
  *this = jsonValue;
}

FeaturizationMethod& FeaturizationMethod::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FeaturizationMethodName"))
  {
    m_featurizationMethodName = FeaturizationMethodNameMapper::GetFeaturizationMethodNameForName(jsonValue.GetString("FeaturizationMethodName"));

    m_featurizationMethodNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FeaturizationMethodParameters"))
  {
    Aws::Map<Aws::String, JsonView> featurizationMethodParametersJsonMap = jsonValue.GetObject("FeaturizationMethodParameters").GetAllObjects();
    for(auto& featurizationMethodParametersItem : featurizationMethodParametersJsonMap)
    {
      m_featurizationMethodParameters[featurizationMethodParametersItem.first] = featurizationMethodParametersItem.second.AsString();
    }
    m_featurizationMethodParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue FeaturizationMethod::Jsonize() const
{
  JsonValue payload;

  if(m_featurizationMethodNameHasBeenSet)
  {
   payload.WithString("FeaturizationMethodName", FeaturizationMethodNameMapper::GetNameForFeaturizationMethodName(m_featurizationMethodName));
  }

  if(m_featurizationMethodParametersHasBeenSet)
  {
   JsonValue featurizationMethodParametersJsonMap;
   for(auto& featurizationMethodParametersItem : m_featurizationMethodParameters)
   {
     featurizationMethodParametersJsonMap.WithString(featurizationMethodParametersItem.first, featurizationMethodParametersItem.second);
   }
   payload.WithObject("FeaturizationMethodParameters", std::move(featurizationMethodParametersJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
