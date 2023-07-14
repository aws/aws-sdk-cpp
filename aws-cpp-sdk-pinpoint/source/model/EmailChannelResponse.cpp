/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/EmailChannelResponse.h>
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

EmailChannelResponse::EmailChannelResponse() : 
    m_applicationIdHasBeenSet(false),
    m_configurationSetHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_fromAddressHasBeenSet(false),
    m_hasCredential(false),
    m_hasCredentialHasBeenSet(false),
    m_idHasBeenSet(false),
    m_identityHasBeenSet(false),
    m_isArchived(false),
    m_isArchivedHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_messagesPerSecond(0),
    m_messagesPerSecondHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false)
{
}

EmailChannelResponse::EmailChannelResponse(JsonView jsonValue) : 
    m_applicationIdHasBeenSet(false),
    m_configurationSetHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_fromAddressHasBeenSet(false),
    m_hasCredential(false),
    m_hasCredentialHasBeenSet(false),
    m_idHasBeenSet(false),
    m_identityHasBeenSet(false),
    m_isArchived(false),
    m_isArchivedHasBeenSet(false),
    m_lastModifiedByHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_messagesPerSecond(0),
    m_messagesPerSecondHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

EmailChannelResponse& EmailChannelResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationId"))
  {
    m_applicationId = jsonValue.GetString("ApplicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConfigurationSet"))
  {
    m_configurationSet = jsonValue.GetString("ConfigurationSet");

    m_configurationSetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetString("CreationDate");

    m_creationDateHasBeenSet = true;
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

  if(jsonValue.ValueExists("HasCredential"))
  {
    m_hasCredential = jsonValue.GetBool("HasCredential");

    m_hasCredentialHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Identity"))
  {
    m_identity = jsonValue.GetString("Identity");

    m_identityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsArchived"))
  {
    m_isArchived = jsonValue.GetBool("IsArchived");

    m_isArchivedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedBy"))
  {
    m_lastModifiedBy = jsonValue.GetString("LastModifiedBy");

    m_lastModifiedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetString("LastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessagesPerSecond"))
  {
    m_messagesPerSecond = jsonValue.GetInteger("MessagesPerSecond");

    m_messagesPerSecondHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Platform"))
  {
    m_platform = jsonValue.GetString("Platform");

    m_platformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetInteger("Version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue EmailChannelResponse::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_configurationSetHasBeenSet)
  {
   payload.WithString("ConfigurationSet", m_configurationSet);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithString("CreationDate", m_creationDate);

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_fromAddressHasBeenSet)
  {
   payload.WithString("FromAddress", m_fromAddress);

  }

  if(m_hasCredentialHasBeenSet)
  {
   payload.WithBool("HasCredential", m_hasCredential);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_identityHasBeenSet)
  {
   payload.WithString("Identity", m_identity);

  }

  if(m_isArchivedHasBeenSet)
  {
   payload.WithBool("IsArchived", m_isArchived);

  }

  if(m_lastModifiedByHasBeenSet)
  {
   payload.WithString("LastModifiedBy", m_lastModifiedBy);

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithString("LastModifiedDate", m_lastModifiedDate);

  }

  if(m_messagesPerSecondHasBeenSet)
  {
   payload.WithInteger("MessagesPerSecond", m_messagesPerSecond);

  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("Platform", m_platform);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithInteger("Version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
