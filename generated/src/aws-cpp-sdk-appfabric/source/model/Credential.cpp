/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appfabric/model/Credential.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppFabric
{
namespace Model
{

Credential::Credential() : 
    m_oauth2CredentialHasBeenSet(false),
    m_apiKeyCredentialHasBeenSet(false)
{
}

Credential::Credential(JsonView jsonValue) : 
    m_oauth2CredentialHasBeenSet(false),
    m_apiKeyCredentialHasBeenSet(false)
{
  *this = jsonValue;
}

Credential& Credential::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("oauth2Credential"))
  {
    m_oauth2Credential = jsonValue.GetObject("oauth2Credential");

    m_oauth2CredentialHasBeenSet = true;
  }

  if(jsonValue.ValueExists("apiKeyCredential"))
  {
    m_apiKeyCredential = jsonValue.GetObject("apiKeyCredential");

    m_apiKeyCredentialHasBeenSet = true;
  }

  return *this;
}

JsonValue Credential::Jsonize() const
{
  JsonValue payload;

  if(m_oauth2CredentialHasBeenSet)
  {
   payload.WithObject("oauth2Credential", m_oauth2Credential.Jsonize());

  }

  if(m_apiKeyCredentialHasBeenSet)
  {
   payload.WithObject("apiKeyCredential", m_apiKeyCredential.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppFabric
} // namespace Aws
