/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/EmailOutboundConfig.h>
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

EmailOutboundConfig::EmailOutboundConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

EmailOutboundConfig& EmailOutboundConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("connectSourceEmailAddress"))
  {
    m_connectSourceEmailAddress = jsonValue.GetString("connectSourceEmailAddress");
    m_connectSourceEmailAddressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceEmailAddressDisplayName"))
  {
    m_sourceEmailAddressDisplayName = jsonValue.GetString("sourceEmailAddressDisplayName");
    m_sourceEmailAddressDisplayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("wisdomTemplateArn"))
  {
    m_wisdomTemplateArn = jsonValue.GetString("wisdomTemplateArn");
    m_wisdomTemplateArnHasBeenSet = true;
  }
  return *this;
}

JsonValue EmailOutboundConfig::Jsonize() const
{
  JsonValue payload;

  if(m_connectSourceEmailAddressHasBeenSet)
  {
   payload.WithString("connectSourceEmailAddress", m_connectSourceEmailAddress);

  }

  if(m_sourceEmailAddressDisplayNameHasBeenSet)
  {
   payload.WithString("sourceEmailAddressDisplayName", m_sourceEmailAddressDisplayName);

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
