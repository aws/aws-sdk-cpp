/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/EmailChannelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

EmailChannelRequest::EmailChannelRequest() : 
    m_configurationSetHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_fromAddressHasBeenSet(false),
    m_identityHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

EmailChannelRequest::EmailChannelRequest(JsonView jsonValue) : 
    m_configurationSetHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_fromAddressHasBeenSet(false),
    m_identityHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

EmailChannelRequest& EmailChannelRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConfigurationSet"))
  {
    m_configurationSet = jsonValue.GetString("ConfigurationSet");

    m_configurationSetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FromAddress"))
  {
    m_fromAddress = jsonValue.GetString("FromAddress");

    m_fromAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Identity"))
  {
    m_identity = jsonValue.GetString("Identity");

    m_identityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue EmailChannelRequest::Jsonize() const
{
  JsonValue payload;

  if(m_configurationSetHasBeenSet)
  {
   payload.WithString("ConfigurationSet", m_configurationSet);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_fromAddressHasBeenSet)
  {
   payload.WithString("FromAddress", m_fromAddress);

  }

  if(m_identityHasBeenSet)
  {
   payload.WithString("Identity", m_identity);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
