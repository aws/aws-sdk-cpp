/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/BaiduChannelRequest.h>
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

BaiduChannelRequest::BaiduChannelRequest() : 
    m_apiKeyHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_secretKeyHasBeenSet(false)
{
}

BaiduChannelRequest::BaiduChannelRequest(JsonView jsonValue) : 
    m_apiKeyHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_secretKeyHasBeenSet(false)
{
  *this = jsonValue;
}

BaiduChannelRequest& BaiduChannelRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApiKey"))
  {
    m_apiKey = jsonValue.GetString("ApiKey");

    m_apiKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretKey"))
  {
    m_secretKey = jsonValue.GetString("SecretKey");

    m_secretKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue BaiduChannelRequest::Jsonize() const
{
  JsonValue payload;

  if(m_apiKeyHasBeenSet)
  {
   payload.WithString("ApiKey", m_apiKey);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_secretKeyHasBeenSet)
  {
   payload.WithString("SecretKey", m_secretKey);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
