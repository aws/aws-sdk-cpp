/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/UpdateBackendAuthUserPoolConfig.h>
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

UpdateBackendAuthUserPoolConfig::UpdateBackendAuthUserPoolConfig() : 
    m_forgotPasswordHasBeenSet(false),
    m_mfaHasBeenSet(false),
    m_oAuthHasBeenSet(false),
    m_passwordPolicyHasBeenSet(false),
    m_verificationMessageHasBeenSet(false)
{
}

UpdateBackendAuthUserPoolConfig::UpdateBackendAuthUserPoolConfig(JsonView jsonValue) : 
    m_forgotPasswordHasBeenSet(false),
    m_mfaHasBeenSet(false),
    m_oAuthHasBeenSet(false),
    m_passwordPolicyHasBeenSet(false),
    m_verificationMessageHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateBackendAuthUserPoolConfig& UpdateBackendAuthUserPoolConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("forgotPassword"))
  {
    m_forgotPassword = jsonValue.GetObject("forgotPassword");

    m_forgotPasswordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mfa"))
  {
    m_mfa = jsonValue.GetObject("mfa");

    m_mfaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("oAuth"))
  {
    m_oAuth = jsonValue.GetObject("oAuth");

    m_oAuthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("passwordPolicy"))
  {
    m_passwordPolicy = jsonValue.GetObject("passwordPolicy");

    m_passwordPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("verificationMessage"))
  {
    m_verificationMessage = jsonValue.GetObject("verificationMessage");

    m_verificationMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateBackendAuthUserPoolConfig::Jsonize() const
{
  JsonValue payload;

  if(m_forgotPasswordHasBeenSet)
  {
   payload.WithObject("forgotPassword", m_forgotPassword.Jsonize());

  }

  if(m_mfaHasBeenSet)
  {
   payload.WithObject("mfa", m_mfa.Jsonize());

  }

  if(m_oAuthHasBeenSet)
  {
   payload.WithObject("oAuth", m_oAuth.Jsonize());

  }

  if(m_passwordPolicyHasBeenSet)
  {
   payload.WithObject("passwordPolicy", m_passwordPolicy.Jsonize());

  }

  if(m_verificationMessageHasBeenSet)
  {
   payload.WithObject("verificationMessage", m_verificationMessage.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
