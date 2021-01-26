/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/RootStorage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

RootStorage::RootStorage() : 
    m_capacityHasBeenSet(false)
{
}

RootStorage::RootStorage(JsonView jsonValue) : 
    m_capacityHasBeenSet(false)
{
  *this = jsonValue;
}

RootStorage& RootStorage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Capacity"))
  {
    m_capacity = jsonValue.GetString("Capacity");

    m_capacityHasBeenSet = true;
  }

  return *this;
}

JsonValue RootStorage::Jsonize() const
{
  JsonValue payload;

  if(m_capacityHasBeenSet)
  {
   payload.WithString("Capacity", m_capacity);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
