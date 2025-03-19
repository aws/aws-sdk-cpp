/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/SmsOutboundConfig.h>
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

SmsOutboundConfig::SmsOutboundConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

SmsOutboundConfig& SmsOutboundConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("connectSourcePhoneNumberArn"))
  {
    m_connectSourcePhoneNumberArn = jsonValue.GetString("connectSourcePhoneNumberArn");
    m_connectSourcePhoneNumberArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("wisdomTemplateArn"))
  {
    m_wisdomTemplateArn = jsonValue.GetString("wisdomTemplateArn");
    m_wisdomTemplateArnHasBeenSet = true;
  }
  return *this;
}

JsonValue SmsOutboundConfig::Jsonize() const
{
  JsonValue payload;

  if(m_connectSourcePhoneNumberArnHasBeenSet)
  {
   payload.WithString("connectSourcePhoneNumberArn", m_connectSourcePhoneNumberArn);

  }

  if(m_wisdomTemplateArnHasBeenSet)
  {
   payload.WithString("wisdomTemplateArn", m_wisdomTemplateArn);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
