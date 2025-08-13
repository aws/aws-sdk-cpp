/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/EnvironmentConfigurationUserParameter.h>
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

EnvironmentConfigurationUserParameter::EnvironmentConfigurationUserParameter(JsonView jsonValue)
{
  *this = jsonValue;
}

EnvironmentConfigurationUserParameter& EnvironmentConfigurationUserParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("environmentConfigurationName"))
  {
    m_environmentConfigurationName = jsonValue.GetString("environmentConfigurationName");
    m_environmentConfigurationNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");
    m_environmentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("environmentParameters"))
  {
    Aws::Utils::Array<JsonView> environmentParametersJsonList = jsonValue.GetArray("environmentParameters");
    for(unsigned environmentParametersIndex = 0; environmentParametersIndex < environmentParametersJsonList.GetLength(); ++environmentParametersIndex)
    {
      m_environmentParameters.push_back(environmentParametersJsonList[environmentParametersIndex].AsObject());
    }
    m_environmentParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("environmentResolvedAccount"))
  {
    m_environmentResolvedAccount = jsonValue.GetObject("environmentResolvedAccount");
    m_environmentResolvedAccountHasBeenSet = true;
  }
  return *this;
}

JsonValue EnvironmentConfigurationUserParameter::Jsonize() const
{
  JsonValue payload;

  if(m_environmentConfigurationNameHasBeenSet)
  {
   payload.WithString("environmentConfigurationName", m_environmentConfigurationName);

  }

  if(m_environmentIdHasBeenSet)
  {
   payload.WithString("environmentId", m_environmentId);

  }

  if(m_environmentParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> environmentParametersJsonList(m_environmentParameters.size());
   for(unsigned environmentParametersIndex = 0; environmentParametersIndex < environmentParametersJsonList.GetLength(); ++environmentParametersIndex)
   {
     environmentParametersJsonList[environmentParametersIndex].AsObject(m_environmentParameters[environmentParametersIndex].Jsonize());
   }
   payload.WithArray("environmentParameters", std::move(environmentParametersJsonList));

  }

  if(m_environmentResolvedAccountHasBeenSet)
  {
   payload.WithObject("environmentResolvedAccount", m_environmentResolvedAccount.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
