/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/PolicyQualifierInfo.h>
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

PolicyQualifierInfo::PolicyQualifierInfo() : 
    m_policyQualifierId(PolicyQualifierId::NOT_SET),
    m_policyQualifierIdHasBeenSet(false),
    m_qualifierHasBeenSet(false)
{
}

PolicyQualifierInfo::PolicyQualifierInfo(JsonView jsonValue) : 
    m_policyQualifierId(PolicyQualifierId::NOT_SET),
    m_policyQualifierIdHasBeenSet(false),
    m_qualifierHasBeenSet(false)
{
  *this = jsonValue;
}

PolicyQualifierInfo& PolicyQualifierInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PolicyQualifierId"))
  {
    m_policyQualifierId = PolicyQualifierIdMapper::GetPolicyQualifierIdForName(jsonValue.GetString("PolicyQualifierId"));

    m_policyQualifierIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Qualifier"))
  {
    m_qualifier = jsonValue.GetObject("Qualifier");

    m_qualifierHasBeenSet = true;
  }

  return *this;
}

JsonValue PolicyQualifierInfo::Jsonize() const
{
  JsonValue payload;

  if(m_policyQualifierIdHasBeenSet)
  {
   payload.WithString("PolicyQualifierId", PolicyQualifierIdMapper::GetNameForPolicyQualifierId(m_policyQualifierId));
  }

  if(m_qualifierHasBeenSet)
  {
   payload.WithObject("Qualifier", m_qualifier.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
