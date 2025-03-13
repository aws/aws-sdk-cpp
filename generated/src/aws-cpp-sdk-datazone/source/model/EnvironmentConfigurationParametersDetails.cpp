/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/EnvironmentConfigurationParametersDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

EnvironmentConfigurationParametersDetails::EnvironmentConfigurationParametersDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

EnvironmentConfigurationParametersDetails& EnvironmentConfigurationParametersDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("parameterOverrides"))
  {
    Aws::Utils::Array<JsonView> parameterOverridesJsonList = jsonValue.GetArray("parameterOverrides");
    for(unsigned parameterOverridesIndex = 0; parameterOverridesIndex < parameterOverridesJsonList.GetLength(); ++parameterOverridesIndex)
    {
      m_parameterOverrides.push_back(parameterOverridesJsonList[parameterOverridesIndex].AsObject());
    }
    m_parameterOverridesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resolvedParameters"))
  {
    Aws::Utils::Array<JsonView> resolvedParametersJsonList = jsonValue.GetArray("resolvedParameters");
    for(unsigned resolvedParametersIndex = 0; resolvedParametersIndex < resolvedParametersJsonList.GetLength(); ++resolvedParametersIndex)
    {
      m_resolvedParameters.push_back(resolvedParametersJsonList[resolvedParametersIndex].AsObject());
    }
    m_resolvedParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ssmPath"))
  {
    m_ssmPath = jsonValue.GetString("ssmPath");
    m_ssmPathHasBeenSet = true;
  }
  return *this;
}

JsonValue EnvironmentConfigurationParametersDetails::Jsonize() const
{
  JsonValue payload;

  if(m_parameterOverridesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> parameterOverridesJsonList(m_parameterOverrides.size());
   for(unsigned parameterOverridesIndex = 0; parameterOverridesIndex < parameterOverridesJsonList.GetLength(); ++parameterOverridesIndex)
   {
     parameterOverridesJsonList[parameterOverridesIndex].AsObject(m_parameterOverrides[parameterOverridesIndex].Jsonize());
   }
   payload.WithArray("parameterOverrides", std::move(parameterOverridesJsonList));

  }

  if(m_resolvedParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resolvedParametersJsonList(m_resolvedParameters.size());
   for(unsigned resolvedParametersIndex = 0; resolvedParametersIndex < resolvedParametersJsonList.GetLength(); ++resolvedParametersIndex)
   {
     resolvedParametersJsonList[resolvedParametersIndex].AsObject(m_resolvedParameters[resolvedParametersIndex].Jsonize());
   }
   payload.WithArray("resolvedParameters", std::move(resolvedParametersJsonList));

  }

  if(m_ssmPathHasBeenSet)
  {
   payload.WithString("ssmPath", m_ssmPath);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
