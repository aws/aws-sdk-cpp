﻿/*
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

#include <aws/iot/model/ResourceIdentifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

ResourceIdentifier::ResourceIdentifier() : 
    m_deviceCertificateIdHasBeenSet(false),
    m_caCertificateIdHasBeenSet(false),
    m_cognitoIdentityPoolIdHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_policyVersionIdentifierHasBeenSet(false),
    m_accountHasBeenSet(false)
{
}

ResourceIdentifier::ResourceIdentifier(JsonView jsonValue) : 
    m_deviceCertificateIdHasBeenSet(false),
    m_caCertificateIdHasBeenSet(false),
    m_cognitoIdentityPoolIdHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_policyVersionIdentifierHasBeenSet(false),
    m_accountHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceIdentifier& ResourceIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deviceCertificateId"))
  {
    m_deviceCertificateId = jsonValue.GetString("deviceCertificateId");

    m_deviceCertificateIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("caCertificateId"))
  {
    m_caCertificateId = jsonValue.GetString("caCertificateId");

    m_caCertificateIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cognitoIdentityPoolId"))
  {
    m_cognitoIdentityPoolId = jsonValue.GetString("cognitoIdentityPoolId");

    m_cognitoIdentityPoolIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clientId"))
  {
    m_clientId = jsonValue.GetString("clientId");

    m_clientIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("policyVersionIdentifier"))
  {
    m_policyVersionIdentifier = jsonValue.GetObject("policyVersionIdentifier");

    m_policyVersionIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("account"))
  {
    m_account = jsonValue.GetString("account");

    m_accountHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_deviceCertificateIdHasBeenSet)
  {
   payload.WithString("deviceCertificateId", m_deviceCertificateId);

  }

  if(m_caCertificateIdHasBeenSet)
  {
   payload.WithString("caCertificateId", m_caCertificateId);

  }

  if(m_cognitoIdentityPoolIdHasBeenSet)
  {
   payload.WithString("cognitoIdentityPoolId", m_cognitoIdentityPoolId);

  }

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("clientId", m_clientId);

  }

  if(m_policyVersionIdentifierHasBeenSet)
  {
   payload.WithObject("policyVersionIdentifier", m_policyVersionIdentifier.Jsonize());

  }

  if(m_accountHasBeenSet)
  {
   payload.WithString("account", m_account);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
