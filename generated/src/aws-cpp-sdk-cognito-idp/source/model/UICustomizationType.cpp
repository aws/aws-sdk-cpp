/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/UICustomizationType.h>
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

UICustomizationType::UICustomizationType() : 
    m_userPoolIdHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_cSSHasBeenSet(false),
    m_cSSVersionHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
}

UICustomizationType::UICustomizationType(JsonView jsonValue) : 
    m_userPoolIdHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_cSSHasBeenSet(false),
    m_cSSVersionHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
  *this = jsonValue;
}

UICustomizationType& UICustomizationType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserPoolId"))
  {
    m_userPoolId = jsonValue.GetString("UserPoolId");

    m_userPoolIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientId"))
  {
    m_clientId = jsonValue.GetString("ClientId");

    m_clientIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImageUrl"))
  {
    m_imageUrl = jsonValue.GetString("ImageUrl");

    m_imageUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CSS"))
  {
    m_cSS = jsonValue.GetString("CSS");

    m_cSSHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CSSVersion"))
  {
    m_cSSVersion = jsonValue.GetString("CSSVersion");

    m_cSSVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("LastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  return *this;
}

JsonValue UICustomizationType::Jsonize() const
{
  JsonValue payload;

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("ClientId", m_clientId);

  }

  if(m_imageUrlHasBeenSet)
  {
   payload.WithString("ImageUrl", m_imageUrl);

  }

  if(m_cSSHasBeenSet)
  {
   payload.WithString("CSS", m_cSS);

  }

  if(m_cSSVersionHasBeenSet)
  {
   payload.WithString("CSSVersion", m_cSSVersion);

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithDouble("LastModifiedDate", m_lastModifiedDate.SecondsWithMSPrecision());
  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
