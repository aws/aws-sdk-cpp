/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/BackendAPIAppSyncAuthSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyBackend
{
namespace Model
{

BackendAPIAppSyncAuthSettings::BackendAPIAppSyncAuthSettings() : 
    m_cognitoUserPoolIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_expirationTime(0.0),
    m_expirationTimeHasBeenSet(false),
    m_openIDAuthTTLHasBeenSet(false),
    m_openIDClientIdHasBeenSet(false),
    m_openIDIatTTLHasBeenSet(false),
    m_openIDIssueURLHasBeenSet(false),
    m_openIDProviderNameHasBeenSet(false)
{
}

BackendAPIAppSyncAuthSettings::BackendAPIAppSyncAuthSettings(JsonView jsonValue) : 
    m_cognitoUserPoolIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_expirationTime(0.0),
    m_expirationTimeHasBeenSet(false),
    m_openIDAuthTTLHasBeenSet(false),
    m_openIDClientIdHasBeenSet(false),
    m_openIDIatTTLHasBeenSet(false),
    m_openIDIssueURLHasBeenSet(false),
    m_openIDProviderNameHasBeenSet(false)
{
  *this = jsonValue;
}

BackendAPIAppSyncAuthSettings& BackendAPIAppSyncAuthSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cognitoUserPoolId"))
  {
    m_cognitoUserPoolId = jsonValue.GetString("cognitoUserPoolId");

    m_cognitoUserPoolIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("expirationTime"))
  {
    m_expirationTime = jsonValue.GetDouble("expirationTime");

    m_expirationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("openIDAuthTTL"))
  {
    m_openIDAuthTTL = jsonValue.GetString("openIDAuthTTL");

    m_openIDAuthTTLHasBeenSet = true;
  }

  if(jsonValue.ValueExists("openIDClientId"))
  {
    m_openIDClientId = jsonValue.GetString("openIDClientId");

    m_openIDClientIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("openIDIatTTL"))
  {
    m_openIDIatTTL = jsonValue.GetString("openIDIatTTL");

    m_openIDIatTTLHasBeenSet = true;
  }

  if(jsonValue.ValueExists("openIDIssueURL"))
  {
    m_openIDIssueURL = jsonValue.GetString("openIDIssueURL");

    m_openIDIssueURLHasBeenSet = true;
  }

  if(jsonValue.ValueExists("openIDProviderName"))
  {
    m_openIDProviderName = jsonValue.GetString("openIDProviderName");

    m_openIDProviderNameHasBeenSet = true;
  }

  return *this;
}

JsonValue BackendAPIAppSyncAuthSettings::Jsonize() const
{
  JsonValue payload;

  if(m_cognitoUserPoolIdHasBeenSet)
  {
   payload.WithString("cognitoUserPoolId", m_cognitoUserPoolId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_expirationTimeHasBeenSet)
  {
   payload.WithDouble("expirationTime", m_expirationTime);

  }

  if(m_openIDAuthTTLHasBeenSet)
  {
   payload.WithString("openIDAuthTTL", m_openIDAuthTTL);

  }

  if(m_openIDClientIdHasBeenSet)
  {
   payload.WithString("openIDClientId", m_openIDClientId);

  }

  if(m_openIDIatTTLHasBeenSet)
  {
   payload.WithString("openIDIatTTL", m_openIDIatTTL);

  }

  if(m_openIDIssueURLHasBeenSet)
  {
   payload.WithString("openIDIssueURL", m_openIDIssueURL);

  }

  if(m_openIDProviderNameHasBeenSet)
  {
   payload.WithString("openIDProviderName", m_openIDProviderName);

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
