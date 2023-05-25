/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-identity/model/AppInstanceUser.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKIdentity
{
namespace Model
{

AppInstanceUser::AppInstanceUser() : 
    m_appInstanceUserArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_lastUpdatedTimestampHasBeenSet(false),
    m_expirationSettingsHasBeenSet(false)
{
}

AppInstanceUser::AppInstanceUser(JsonView jsonValue) : 
    m_appInstanceUserArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_createdTimestampHasBeenSet(false),
    m_lastUpdatedTimestampHasBeenSet(false),
    m_expirationSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

AppInstanceUser& AppInstanceUser::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AppInstanceUserArn"))
  {
    m_appInstanceUserArn = jsonValue.GetString("AppInstanceUserArn");

    m_appInstanceUserArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Metadata"))
  {
    m_metadata = jsonValue.GetString("Metadata");

    m_metadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTimestamp"))
  {
    m_lastUpdatedTimestamp = jsonValue.GetDouble("LastUpdatedTimestamp");

    m_lastUpdatedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpirationSettings"))
  {
    m_expirationSettings = jsonValue.GetObject("ExpirationSettings");

    m_expirationSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue AppInstanceUser::Jsonize() const
{
  JsonValue payload;

  if(m_appInstanceUserArnHasBeenSet)
  {
   payload.WithString("AppInstanceUserArn", m_appInstanceUserArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_metadataHasBeenSet)
  {
   payload.WithString("Metadata", m_metadata);

  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimestampHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTimestamp", m_lastUpdatedTimestamp.SecondsWithMSPrecision());
  }

  if(m_expirationSettingsHasBeenSet)
  {
   payload.WithObject("ExpirationSettings", m_expirationSettings.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
