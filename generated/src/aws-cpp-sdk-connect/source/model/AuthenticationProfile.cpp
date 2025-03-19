/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AuthenticationProfile.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

AuthenticationProfile::AuthenticationProfile(JsonView jsonValue)
{
  *this = jsonValue;
}

AuthenticationProfile& AuthenticationProfile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AllowedIps"))
  {
    Aws::Utils::Array<JsonView> allowedIpsJsonList = jsonValue.GetArray("AllowedIps");
    for(unsigned allowedIpsIndex = 0; allowedIpsIndex < allowedIpsJsonList.GetLength(); ++allowedIpsIndex)
    {
      m_allowedIps.push_back(allowedIpsJsonList[allowedIpsIndex].AsString());
    }
    m_allowedIpsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BlockedIps"))
  {
    Aws::Utils::Array<JsonView> blockedIpsJsonList = jsonValue.GetArray("BlockedIps");
    for(unsigned blockedIpsIndex = 0; blockedIpsIndex < blockedIpsJsonList.GetLength(); ++blockedIpsIndex)
    {
      m_blockedIps.push_back(blockedIpsJsonList[blockedIpsIndex].AsString());
    }
    m_blockedIpsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IsDefault"))
  {
    m_isDefault = jsonValue.GetBool("IsDefault");
    m_isDefaultHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");
    m_createdTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedRegion"))
  {
    m_lastModifiedRegion = jsonValue.GetString("LastModifiedRegion");
    m_lastModifiedRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PeriodicSessionDuration"))
  {
    m_periodicSessionDuration = jsonValue.GetInteger("PeriodicSessionDuration");
    m_periodicSessionDurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxSessionDuration"))
  {
    m_maxSessionDuration = jsonValue.GetInteger("MaxSessionDuration");
    m_maxSessionDurationHasBeenSet = true;
  }
  return *this;
}

JsonValue AuthenticationProfile::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_allowedIpsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedIpsJsonList(m_allowedIps.size());
   for(unsigned allowedIpsIndex = 0; allowedIpsIndex < allowedIpsJsonList.GetLength(); ++allowedIpsIndex)
   {
     allowedIpsJsonList[allowedIpsIndex].AsString(m_allowedIps[allowedIpsIndex]);
   }
   payload.WithArray("AllowedIps", std::move(allowedIpsJsonList));

  }

  if(m_blockedIpsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> blockedIpsJsonList(m_blockedIps.size());
   for(unsigned blockedIpsIndex = 0; blockedIpsIndex < blockedIpsJsonList.GetLength(); ++blockedIpsIndex)
   {
     blockedIpsJsonList[blockedIpsIndex].AsString(m_blockedIps[blockedIpsIndex]);
   }
   payload.WithArray("BlockedIps", std::move(blockedIpsJsonList));

  }

  if(m_isDefaultHasBeenSet)
  {
   payload.WithBool("IsDefault", m_isDefault);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedRegionHasBeenSet)
  {
   payload.WithString("LastModifiedRegion", m_lastModifiedRegion);

  }

  if(m_periodicSessionDurationHasBeenSet)
  {
   payload.WithInteger("PeriodicSessionDuration", m_periodicSessionDuration);

  }

  if(m_maxSessionDurationHasBeenSet)
  {
   payload.WithInteger("MaxSessionDuration", m_maxSessionDuration);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
