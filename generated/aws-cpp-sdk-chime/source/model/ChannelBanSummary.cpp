/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/ChannelBanSummary.h>
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

ChannelBanSummary::ChannelBanSummary() : 
    m_memberHasBeenSet(false)
{
}

ChannelBanSummary::ChannelBanSummary(JsonView jsonValue) : 
    m_memberHasBeenSet(false)
{
  *this = jsonValue;
}

ChannelBanSummary& ChannelBanSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Member"))
  {
    m_member = jsonValue.GetObject("Member");

    m_memberHasBeenSet = true;
  }

  return *this;
}

JsonValue ChannelBanSummary::Jsonize() const
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
