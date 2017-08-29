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

#include <aws/pinpoint/model/GCMChannelRequest.h>
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

GCMChannelRequest::GCMChannelRequest() : 
    m_apiKeyHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
}

GCMChannelRequest::GCMChannelRequest(const JsonValue& jsonValue) : 
    m_apiKeyHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
  *this = jsonValue;
}

GCMChannelRequest& GCMChannelRequest::operator =(const JsonValue& jsonValue)
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

  return *this;
}

JsonValue GCMChannelRequest::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
