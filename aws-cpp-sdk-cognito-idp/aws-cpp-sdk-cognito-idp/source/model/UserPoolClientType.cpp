/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cognito-idp/model/UserPoolClientType.h>
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

UserPoolClientType::UserPoolClientType() : 
    m_userPoolIdHasBeenSet(false),
    m_clientNameHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_clientSecretHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
}

UserPoolClientType::UserPoolClientType(const JsonValue& jsonValue) : 
    m_userPoolIdHasBeenSet(false),
    m_clientNameHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_clientSecretHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_creationDateHasBeenSet(false)
{
  *this = jsonValue;
}

UserPoolClientType& UserPoolClientType::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("UserPoolId"))
  {
    m_userPoolId = jsonValue.GetString("UserPoolId");

    m_userPoolIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientName"))
  {
    m_clientName = jsonValue.GetString("ClientName");

    m_clientNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientId"))
  {
    m_clientId = jsonValue.GetString("ClientId");

    m_clientIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientSecret"))
  {
    m_clientSecret = jsonValue.GetString("ClientSecret");

    m_clientSecretHasBeenSet = true;
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

JsonValue UserPoolClientType::Jsonize() const
{
  JsonValue payload;

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_clientNameHasBeenSet)
  {
   payload.WithString("ClientName", m_clientName);

  }

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("ClientId", m_clientId);

  }

  if(m_clientSecretHasBeenSet)
  {
   payload.WithString("ClientSecret", m_clientSecret);

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