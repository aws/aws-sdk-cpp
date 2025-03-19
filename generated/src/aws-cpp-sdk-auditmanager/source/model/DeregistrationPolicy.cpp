/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/DeregistrationPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AuditManager
{
namespace Model
{

DeregistrationPolicy::DeregistrationPolicy(JsonView jsonValue)
{
  *this = jsonValue;
}

DeregistrationPolicy& DeregistrationPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deleteResources"))
  {
    m_deleteResources = DeleteResourcesMapper::GetDeleteResourcesForName(jsonValue.GetString("deleteResources"));
    m_deleteResourcesHasBeenSet = true;
  }
  return *this;
}

JsonValue DeregistrationPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_deleteResourcesHasBeenSet)
  {
   payload.WithString("deleteResources", DeleteResourcesMapper::GetNameForDeleteResources(m_deleteResources));
  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
