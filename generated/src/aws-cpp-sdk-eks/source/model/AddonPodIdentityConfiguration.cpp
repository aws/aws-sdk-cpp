/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/AddonPodIdentityConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

AddonPodIdentityConfiguration::AddonPodIdentityConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

AddonPodIdentityConfiguration& AddonPodIdentityConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serviceAccount"))
  {
    m_serviceAccount = jsonValue.GetString("serviceAccount");
    m_serviceAccountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recommendedManagedPolicies"))
  {
    Aws::Utils::Array<JsonView> recommendedManagedPoliciesJsonList = jsonValue.GetArray("recommendedManagedPolicies");
    for(unsigned recommendedManagedPoliciesIndex = 0; recommendedManagedPoliciesIndex < recommendedManagedPoliciesJsonList.GetLength(); ++recommendedManagedPoliciesIndex)
    {
      m_recommendedManagedPolicies.push_back(recommendedManagedPoliciesJsonList[recommendedManagedPoliciesIndex].AsString());
    }
    m_recommendedManagedPoliciesHasBeenSet = true;
  }
  return *this;
}

JsonValue AddonPodIdentityConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_serviceAccountHasBeenSet)
  {
   payload.WithString("serviceAccount", m_serviceAccount);

  }

  if(m_recommendedManagedPoliciesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recommendedManagedPoliciesJsonList(m_recommendedManagedPolicies.size());
   for(unsigned recommendedManagedPoliciesIndex = 0; recommendedManagedPoliciesIndex < recommendedManagedPoliciesJsonList.GetLength(); ++recommendedManagedPoliciesIndex)
   {
     recommendedManagedPoliciesJsonList[recommendedManagedPoliciesIndex].AsString(m_recommendedManagedPolicies[recommendedManagedPoliciesIndex]);
   }
   payload.WithArray("recommendedManagedPolicies", std::move(recommendedManagedPoliciesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
