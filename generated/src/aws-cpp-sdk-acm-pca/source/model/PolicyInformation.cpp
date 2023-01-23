/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/PolicyInformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ACMPCA
{
namespace Model
{

PolicyInformation::PolicyInformation() : 
    m_certPolicyIdHasBeenSet(false),
    m_policyQualifiersHasBeenSet(false)
{
}

PolicyInformation::PolicyInformation(JsonView jsonValue) : 
    m_certPolicyIdHasBeenSet(false),
    m_policyQualifiersHasBeenSet(false)
{
  *this = jsonValue;
}

PolicyInformation& PolicyInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CertPolicyId"))
  {
    m_certPolicyId = jsonValue.GetString("CertPolicyId");

    m_certPolicyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyQualifiers"))
  {
    Aws::Utils::Array<JsonView> policyQualifiersJsonList = jsonValue.GetArray("PolicyQualifiers");
    for(unsigned policyQualifiersIndex = 0; policyQualifiersIndex < policyQualifiersJsonList.GetLength(); ++policyQualifiersIndex)
    {
      m_policyQualifiers.push_back(policyQualifiersJsonList[policyQualifiersIndex].AsObject());
    }
    m_policyQualifiersHasBeenSet = true;
  }

  return *this;
}

JsonValue PolicyInformation::Jsonize() const
{
  JsonValue payload;

  if(m_certPolicyIdHasBeenSet)
  {
   payload.WithString("CertPolicyId", m_certPolicyId);

  }

  if(m_policyQualifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> policyQualifiersJsonList(m_policyQualifiers.size());
   for(unsigned policyQualifiersIndex = 0; policyQualifiersIndex < policyQualifiersJsonList.GetLength(); ++policyQualifiersIndex)
   {
     policyQualifiersJsonList[policyQualifiersIndex].AsObject(m_policyQualifiers[policyQualifiersIndex].Jsonize());
   }
   payload.WithArray("PolicyQualifiers", std::move(policyQualifiersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
