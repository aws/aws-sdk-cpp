/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/QueryResultsS3AccessGrantsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

QueryResultsS3AccessGrantsConfiguration::QueryResultsS3AccessGrantsConfiguration() : 
    m_enableS3AccessGrants(false),
    m_enableS3AccessGrantsHasBeenSet(false),
    m_createUserLevelPrefix(false),
    m_createUserLevelPrefixHasBeenSet(false),
    m_authenticationType(AuthenticationType::NOT_SET),
    m_authenticationTypeHasBeenSet(false)
{
}

QueryResultsS3AccessGrantsConfiguration::QueryResultsS3AccessGrantsConfiguration(JsonView jsonValue) : 
    m_enableS3AccessGrants(false),
    m_enableS3AccessGrantsHasBeenSet(false),
    m_createUserLevelPrefix(false),
    m_createUserLevelPrefixHasBeenSet(false),
    m_authenticationType(AuthenticationType::NOT_SET),
    m_authenticationTypeHasBeenSet(false)
{
  *this = jsonValue;
}

QueryResultsS3AccessGrantsConfiguration& QueryResultsS3AccessGrantsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnableS3AccessGrants"))
  {
    m_enableS3AccessGrants = jsonValue.GetBool("EnableS3AccessGrants");

    m_enableS3AccessGrantsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateUserLevelPrefix"))
  {
    m_createUserLevelPrefix = jsonValue.GetBool("CreateUserLevelPrefix");

    m_createUserLevelPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuthenticationType"))
  {
    m_authenticationType = AuthenticationTypeMapper::GetAuthenticationTypeForName(jsonValue.GetString("AuthenticationType"));

    m_authenticationTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue QueryResultsS3AccessGrantsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enableS3AccessGrantsHasBeenSet)
  {
   payload.WithBool("EnableS3AccessGrants", m_enableS3AccessGrants);

  }

  if(m_createUserLevelPrefixHasBeenSet)
  {
   payload.WithBool("CreateUserLevelPrefix", m_createUserLevelPrefix);

  }

  if(m_authenticationTypeHasBeenSet)
  {
   payload.WithString("AuthenticationType", AuthenticationTypeMapper::GetNameForAuthenticationType(m_authenticationType));
  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
