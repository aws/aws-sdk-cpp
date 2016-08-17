/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/glacier/model/VaultLockPolicy.h>
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

VaultLockPolicy::VaultLockPolicy() : 
    m_policyHasBeenSet(false)
{
}

VaultLockPolicy::VaultLockPolicy(const JsonValue& jsonValue) : 
    m_policyHasBeenSet(false)
{
  *this = jsonValue;
}

VaultLockPolicy& VaultLockPolicy::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Policy"))
  {
    m_policy = jsonValue.GetString("Policy");

    m_policyHasBeenSet = true;
  }

  return *this;
}

JsonValue VaultLockPolicy::Jsonize() const
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