/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ChangeSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

ChangeSpecification::ChangeSpecification(JsonView jsonValue)
{
  *this = jsonValue;
}

ChangeSpecification& ChangeSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("member"))
  {
    m_member = jsonValue.GetObject("member");
    m_memberHasBeenSet = true;
  }
  return *this;
}

JsonValue ChangeSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_memberHasBeenSet)
  {
   payload.WithObject("member", m_member.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
