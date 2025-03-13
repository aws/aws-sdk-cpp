/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/DeletedUniqueId.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

DeletedUniqueId::DeletedUniqueId(JsonView jsonValue)
{
  *this = jsonValue;
}

DeletedUniqueId& DeletedUniqueId::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("uniqueId"))
  {
    m_uniqueId = jsonValue.GetString("uniqueId");
    m_uniqueIdHasBeenSet = true;
  }
  return *this;
}

JsonValue DeletedUniqueId::Jsonize() const
{
  JsonValue payload;

  if(m_uniqueIdHasBeenSet)
  {
   payload.WithString("uniqueId", m_uniqueId);

  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
