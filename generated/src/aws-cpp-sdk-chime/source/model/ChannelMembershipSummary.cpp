/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/ChannelMembershipSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

ChannelMembershipSummary::ChannelMembershipSummary() : 
    m_memberHasBeenSet(false)
{
}

ChannelMembershipSummary::ChannelMembershipSummary(JsonView jsonValue) : 
    m_memberHasBeenSet(false)
{
  *this = jsonValue;
}

ChannelMembershipSummary& ChannelMembershipSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Member"))
  {
    m_member = jsonValue.GetObject("Member");

    m_memberHasBeenSet = true;
  }

  return *this;
}

JsonValue ChannelMembershipSummary::Jsonize() const
{
  JsonValue payload;

  if(m_memberHasBeenSet)
  {
   payload.WithObject("Member", m_member.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
