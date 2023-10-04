/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/Member.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

Member::Member() : 
    m_groupIdentifierHasBeenSet(false),
    m_userIdentifierHasBeenSet(false)
{
}

Member::Member(JsonView jsonValue) : 
    m_groupIdentifierHasBeenSet(false),
    m_userIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

Member& Member::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("groupIdentifier"))
  {
    m_groupIdentifier = jsonValue.GetString("groupIdentifier");

    m_groupIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userIdentifier"))
  {
    m_userIdentifier = jsonValue.GetString("userIdentifier");

    m_userIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue Member::Jsonize() const
{
  JsonValue payload;

  if(m_groupIdentifierHasBeenSet)
  {
   payload.WithString("groupIdentifier", m_groupIdentifier);

  }

  if(m_userIdentifierHasBeenSet)
  {
   payload.WithString("userIdentifier", m_userIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
