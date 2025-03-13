/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/NetworkAclCommonPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

NetworkAclCommonPolicy::NetworkAclCommonPolicy(JsonView jsonValue)
{
  *this = jsonValue;
}

NetworkAclCommonPolicy& NetworkAclCommonPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NetworkAclEntrySet"))
  {
    m_networkAclEntrySet = jsonValue.GetObject("NetworkAclEntrySet");
    m_networkAclEntrySetHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkAclCommonPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_networkAclEntrySetHasBeenSet)
  {
   payload.WithObject("NetworkAclEntrySet", m_networkAclEntrySet.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
