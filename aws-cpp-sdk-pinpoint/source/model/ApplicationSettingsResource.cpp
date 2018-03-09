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

#include <aws/pinpoint/model/ApplicationSettingsResource.h>
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

ApplicationSettingsResource::ApplicationSettingsResource() : 
    m_applicationIdHasBeenSet(false),
    m_campaignHookHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_limitsHasBeenSet(false),
    m_quietTimeHasBeenSet(false)
{
}

ApplicationSettingsResource::ApplicationSettingsResource(const JsonValue& jsonValue) : 
    m_applicationIdHasBeenSet(false),
    m_campaignHookHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_limitsHasBeenSet(false),
    m_quietTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationSettingsResource& ApplicationSettingsResource::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ApplicationId"))
  {
    m_applicationId = jsonValue.GetString("ApplicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CampaignHook"))
  {
    m_campaignHook = jsonValue.GetObject("CampaignHook");

    m_campaignHookHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetString("LastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Limits"))
  {
    m_limits = jsonValue.GetObject("Limits");

    m_limitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QuietTime"))
  {
    m_quietTime = jsonValue.GetObject("QuietTime");

    m_quietTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationSettingsResource::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_campaignHookHasBeenSet)
  {
   payload.WithObject("CampaignHook", m_campaignHook.Jsonize());

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithString("LastModifiedDate", m_lastModifiedDate);

  }

  if(m_limitsHasBeenSet)
  {
   payload.WithObject("Limits", m_limits.Jsonize());

  }

  if(m_quietTimeHasBeenSet)
  {
   payload.WithObject("QuietTime", m_quietTime.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
