/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/InvisibleFieldInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

InvisibleFieldInfo::InvisibleFieldInfo() : 
    m_idHasBeenSet(false)
{
}

InvisibleFieldInfo::InvisibleFieldInfo(JsonView jsonValue) : 
    m_idHasBeenSet(false)
{
  *this = jsonValue;
}

InvisibleFieldInfo& InvisibleFieldInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetObject("Id");

    m_idHasBeenSet = true;
  }

  return *this;
}

JsonValue InvisibleFieldInfo::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithObject("Id", m_id.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
