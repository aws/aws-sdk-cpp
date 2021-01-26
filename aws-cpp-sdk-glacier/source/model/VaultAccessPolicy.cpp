/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/VaultAccessPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glacier
{
namespace Model
{

VaultAccessPolicy::VaultAccessPolicy() : 
    m_policyHasBeenSet(false)
{
}

VaultAccessPolicy::VaultAccessPolicy(JsonView jsonValue) : 
    m_policyHasBeenSet(false)
{
  *this = jsonValue;
}

VaultAccessPolicy& VaultAccessPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Policy"))
  {
    m_policy = jsonValue.GetString("Policy");

    m_policyHasBeenSet = true;
  }

  return *this;
}

JsonValue VaultAccessPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_policyHasBeenSet)
  {
   payload.WithString("Policy", m_policy);

  }

  return payload;
}

} // namespace Model
} // namespace Glacier
} // namespace Aws
