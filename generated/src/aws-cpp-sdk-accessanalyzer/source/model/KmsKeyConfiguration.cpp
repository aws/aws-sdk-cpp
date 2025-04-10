﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/KmsKeyConfiguration.h>
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

KmsKeyConfiguration::KmsKeyConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

KmsKeyConfiguration& KmsKeyConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("keyPolicies"))
  {
    Aws::Map<Aws::String, JsonView> keyPoliciesJsonMap = jsonValue.GetObject("keyPolicies").GetAllObjects();
    for(auto& keyPoliciesItem : keyPoliciesJsonMap)
    {
      m_keyPolicies[keyPoliciesItem.first] = keyPoliciesItem.second.AsString();
    }
    m_keyPoliciesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("grants"))
  {
    Aws::Utils::Array<JsonView> grantsJsonList = jsonValue.GetArray("grants");
    for(unsigned grantsIndex = 0; grantsIndex < grantsJsonList.GetLength(); ++grantsIndex)
    {
      m_grants.push_back(grantsJsonList[grantsIndex].AsObject());
    }
    m_grantsHasBeenSet = true;
  }
  return *this;
}

JsonValue KmsKeyConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_keyPoliciesHasBeenSet)
  {
   JsonValue keyPoliciesJsonMap;
   for(auto& keyPoliciesItem : m_keyPolicies)
   {
     keyPoliciesJsonMap.WithString(keyPoliciesItem.first, keyPoliciesItem.second);
   }
   payload.WithObject("keyPolicies", std::move(keyPoliciesJsonMap));

  }

  if(m_grantsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> grantsJsonList(m_grants.size());
   for(unsigned grantsIndex = 0; grantsIndex < grantsJsonList.GetLength(); ++grantsIndex)
   {
     grantsJsonList[grantsIndex].AsObject(m_grants[grantsIndex].Jsonize());
   }
   payload.WithArray("grants", std::move(grantsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
