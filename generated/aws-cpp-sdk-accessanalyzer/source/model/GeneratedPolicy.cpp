/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/GeneratedPolicy.h>
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

GeneratedPolicy::GeneratedPolicy() : 
    m_policyHasBeenSet(false)
{
}

GeneratedPolicy::GeneratedPolicy(JsonView jsonValue) : 
    m_policyHasBeenSet(false)
{
  *this = jsonValue;
}

GeneratedPolicy& GeneratedPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("policy"))
  {
    m_policy = jsonValue.GetString("policy");

    m_policyHasBeenSet = true;
  }

  return *this;
}

JsonValue GeneratedPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_policyHasBeenSet)
  {
   payload.WithString("policy", m_policy);

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
