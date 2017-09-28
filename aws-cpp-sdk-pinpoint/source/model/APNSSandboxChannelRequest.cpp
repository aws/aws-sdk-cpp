/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/pinpoint/model/APNSSandboxChannelRequest.h>
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

APNSSandboxChannelRequest::APNSSandboxChannelRequest() : 
    m_bundleIdHasBeenSet(false),
    m_certificateHasBeenSet(false),
    m_defaultAuthenticationMethodHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_privateKeyHasBeenSet(false),
    m_teamIdHasBeenSet(false),
    m_tokenKeyHasBeenSet(false),
    m_tokenKeyIdHasBeenSet(false)
{
}

APNSSandboxChannelRequest::APNSSandboxChannelRequest(const JsonValue& jsonValue) : 
    m_bundleIdHasBeenSet(false),
    m_certificateHasBeenSet(false),
    m_defaultAuthenticationMethodHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_privateKeyHasBeenSet(false),
    m_teamIdHasBeenSet(false),
    m_tokenKeyHasBeenSet(false),
    m_tokenKeyIdHasBeenSet(false)
{
  *this = jsonValue;
}

APNSSandboxChannelRequest& APNSSandboxChannelRequest::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("BundleId"))
  {
    m_bundleId = jsonValue.GetString("BundleId");

    m_bundleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Certificate"))
  {
    m_certificate = jsonValue.GetString("Certificate");

    m_certificateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultAuthenticationMethod"))
  {
    m_defaultAuthenticationMethod = jsonValue.GetString("DefaultAuthenticationMethod");

    m_defaultAuthenticationMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrivateKey"))
  {
    m_privateKey = jsonValue.GetString("PrivateKey");

    m_privateKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TeamId"))
  {
    m_teamId = jsonValue.GetString("TeamId");

    m_teamIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TokenKey"))
  {
    m_tokenKey = jsonValue.GetString("TokenKey");

    m_tokenKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TokenKeyId"))
  {
    m_tokenKeyId = jsonValue.GetString("TokenKeyId");

    m_tokenKeyIdHasBeenSet = true;
  }

  return *this;
}

JsonValue APNSSandboxChannelRequest::Jsonize() const
{
  JsonValue payload;

  if(m_bundleIdHasBeenSet)
  {
   payload.WithString("BundleId", m_bundleId);

  }

  if(m_certificateHasBeenSet)
  {
   payload.WithString("Certificate", m_certificate);

  }

  if(m_defaultAuthenticationMethodHasBeenSet)
  {
   payload.WithString("DefaultAuthenticationMethod", m_defaultAuthenticationMethod);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_privateKeyHasBeenSet)
  {
   payload.WithString("PrivateKey", m_privateKey);

  }

  if(m_teamIdHasBeenSet)
  {
   payload.WithString("TeamId", m_teamId);

  }

  if(m_tokenKeyHasBeenSet)
  {
   payload.WithString("TokenKey", m_tokenKey);

  }

  if(m_tokenKeyIdHasBeenSet)
  {
   payload.WithString("TokenKeyId", m_tokenKeyId);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
