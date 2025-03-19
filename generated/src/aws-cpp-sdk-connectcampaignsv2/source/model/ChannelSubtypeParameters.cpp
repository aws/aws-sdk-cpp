/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/ChannelSubtypeParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCampaignsV2
{
namespace Model
{

ChannelSubtypeParameters::ChannelSubtypeParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

ChannelSubtypeParameters& ChannelSubtypeParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("telephony"))
  {
    m_telephony = jsonValue.GetObject("telephony");
    m_telephonyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sms"))
  {
    m_sms = jsonValue.GetObject("sms");
    m_smsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("email"))
  {
    m_email = jsonValue.GetObject("email");
    m_emailHasBeenSet = true;
  }
  return *this;
}

JsonValue ChannelSubtypeParameters::Jsonize() const
{
  JsonValue payload;

  if(m_telephonyHasBeenSet)
  {
   payload.WithObject("telephony", m_telephony.Jsonize());

  }

  if(m_smsHasBeenSet)
  {
   payload.WithObject("sms", m_sms.Jsonize());

  }

  if(m_emailHasBeenSet)
  {
   payload.WithObject("email", m_email.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
