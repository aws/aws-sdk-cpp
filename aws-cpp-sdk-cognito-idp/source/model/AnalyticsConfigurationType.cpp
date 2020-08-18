/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/AnalyticsConfigurationType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

AnalyticsConfigurationType::AnalyticsConfigurationType() : 
    m_applicationIdHasBeenSet(false),
    m_applicationArnHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_userDataShared(false),
    m_userDataSharedHasBeenSet(false)
{
}

AnalyticsConfigurationType::AnalyticsConfigurationType(JsonView jsonValue) : 
    m_applicationIdHasBeenSet(false),
    m_applicationArnHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_userDataShared(false),
    m_userDataSharedHasBeenSet(false)
{
  *this = jsonValue;
}

AnalyticsConfigurationType& AnalyticsConfigurationType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationId"))
  {
    m_applicationId = jsonValue.GetString("ApplicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationArn"))
  {
    m_applicationArn = jsonValue.GetString("ApplicationArn");

    m_applicationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExternalId"))
  {
    m_externalId = jsonValue.GetString("ExternalId");

    m_externalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserDataShared"))
  {
    m_userDataShared = jsonValue.GetBool("UserDataShared");

    m_userDataSharedHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalyticsConfigurationType::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_applicationArnHasBeenSet)
  {
   payload.WithString("ApplicationArn", m_applicationArn);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("ExternalId", m_externalId);

  }

  if(m_userDataSharedHasBeenSet)
  {
   payload.WithBool("UserDataShared", m_userDataShared);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
