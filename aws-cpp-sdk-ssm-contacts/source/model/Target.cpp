/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-contacts/model/Target.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSMContacts
{
namespace Model
{

Target::Target() : 
    m_channelTargetInfoHasBeenSet(false),
    m_contactTargetInfoHasBeenSet(false)
{
}

Target::Target(JsonView jsonValue) : 
    m_channelTargetInfoHasBeenSet(false),
    m_contactTargetInfoHasBeenSet(false)
{
  *this = jsonValue;
}

Target& Target::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ChannelTargetInfo"))
  {
    m_channelTargetInfo = jsonValue.GetObject("ChannelTargetInfo");

    m_channelTargetInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContactTargetInfo"))
  {
    m_contactTargetInfo = jsonValue.GetObject("ContactTargetInfo");

    m_contactTargetInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue Target::Jsonize() const
{
  JsonValue payload;

  if(m_channelTargetInfoHasBeenSet)
  {
   payload.WithObject("ChannelTargetInfo", m_channelTargetInfo.Jsonize());

  }

  if(m_contactTargetInfoHasBeenSet)
  {
   payload.WithObject("ContactTargetInfo", m_contactTargetInfo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSMContacts
} // namespace Aws
