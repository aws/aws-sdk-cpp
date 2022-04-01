/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/ACLsUpdateStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

ACLsUpdateStatus::ACLsUpdateStatus() : 
    m_aCLToApplyHasBeenSet(false)
{
}

ACLsUpdateStatus::ACLsUpdateStatus(JsonView jsonValue) : 
    m_aCLToApplyHasBeenSet(false)
{
  *this = jsonValue;
}

ACLsUpdateStatus& ACLsUpdateStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ACLToApply"))
  {
    m_aCLToApply = jsonValue.GetString("ACLToApply");

    m_aCLToApplyHasBeenSet = true;
  }

  return *this;
}

JsonValue ACLsUpdateStatus::Jsonize() const
{
  JsonValue payload;

  if(m_aCLToApplyHasBeenSet)
  {
   payload.WithString("ACLToApply", m_aCLToApply);

  }

  return payload;
}

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
