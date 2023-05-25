/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/GeneratedPolicyResults.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

GeneratedPolicyResults::GeneratedPolicyResults() : 
    m_propertiesHasBeenSet(false),
    m_generatedPoliciesHasBeenSet(false)
{
}

GeneratedPolicyResults::GeneratedPolicyResults(JsonView jsonValue) : 
    m_propertiesHasBeenSet(false),
    m_generatedPoliciesHasBeenSet(false)
{
  *this = jsonValue;
}

GeneratedPolicyResults& GeneratedPolicyResults::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("properties"))
  {
    m_properties = jsonValue.GetObject("properties");

    m_propertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("generatedPolicies"))
  {
    Aws::Utils::Array<JsonView> generatedPoliciesJsonList = jsonValue.GetArray("generatedPolicies");
    for(unsigned generatedPoliciesIndex = 0; generatedPoliciesIndex < generatedPoliciesJsonList.GetLength(); ++generatedPoliciesIndex)
    {
      m_generatedPolicies.push_back(generatedPoliciesJsonList[generatedPoliciesIndex].AsObject());
    }
    m_generatedPoliciesHasBeenSet = true;
  }

  return *this;
}

JsonValue GeneratedPolicyResults::Jsonize() const
{
  JsonValue payload;

  if(m_propertiesHasBeenSet)
  {
   payload.WithObject("properties", m_properties.Jsonize());

  }

  if(m_generatedPoliciesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> generatedPoliciesJsonList(m_generatedPolicies.size());
   for(unsigned generatedPoliciesIndex = 0; generatedPoliciesIndex < generatedPoliciesJsonList.GetLength(); ++generatedPoliciesIndex)
   {
     generatedPoliciesJsonList[generatedPoliciesIndex].AsObject(m_generatedPolicies[generatedPoliciesIndex].Jsonize());
   }
   payload.WithArray("generatedPolicies", std::move(generatedPoliciesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
