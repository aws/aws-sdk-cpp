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
    m_certificateHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_privateKeyHasBeenSet(false)
{
}

APNSSandboxChannelRequest::APNSSandboxChannelRequest(const JsonValue& jsonValue) : 
    m_certificateHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_privateKeyHasBeenSet(false)
{
  *this = jsonValue;
}

APNSSandboxChannelRequest& APNSSandboxChannelRequest::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Certificate"))
  {
    m_certificate = jsonValue.GetString("Certificate");

    m_certificateHasBeenSet = true;
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

  return *this;
}

JsonValue APNSSandboxChannelRequest::Jsonize() const
{
  JsonValue payload;

  if(m_certificateHasBeenSet)
  {
   payload.WithString("Certificate", m_certificate);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_privateKeyHasBeenSet)
  {
   payload.WithString("PrivateKey", m_privateKey);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws