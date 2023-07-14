/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ParameterInlinePolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

ParameterInlinePolicy::ParameterInlinePolicy() : 
    m_policyTextHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_policyStatusHasBeenSet(false)
{
}

ParameterInlinePolicy::ParameterInlinePolicy(JsonView jsonValue) : 
    m_policyTextHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_policyStatusHasBeenSet(false)
{
  *this = jsonValue;
}

ParameterInlinePolicy& ParameterInlinePolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PolicyText"))
  {
    m_policyText = jsonValue.GetString("PolicyText");

    m_policyTextHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyType"))
  {
    m_policyType = jsonValue.GetString("PolicyType");

    m_policyTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyStatus"))
  {
    m_policyStatus = jsonValue.GetString("PolicyStatus");

    m_policyStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue ParameterInlinePolicy::Jsonize() const
{
  JsonValue payload;

  if(m_policyTextHasBeenSet)
  {
   payload.WithString("PolicyText", m_policyText);

  }

  if(m_policyTypeHasBeenSet)
  {
   payload.WithString("PolicyType", m_policyType);

  }

  if(m_policyStatusHasBeenSet)
  {
   payload.WithString("PolicyStatus", m_policyStatus);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
