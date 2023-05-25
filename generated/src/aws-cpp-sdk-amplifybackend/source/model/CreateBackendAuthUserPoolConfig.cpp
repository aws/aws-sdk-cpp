/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/CreateBackendAuthUserPoolConfig.h>
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

CreateBackendAuthUserPoolConfig::CreateBackendAuthUserPoolConfig() : 
    m_forgotPasswordHasBeenSet(false),
    m_mfaHasBeenSet(false),
    m_oAuthHasBeenSet(false),
    m_passwordPolicyHasBeenSet(false),
    m_requiredSignUpAttributesHasBeenSet(false),
    m_signInMethod(SignInMethod::NOT_SET),
    m_signInMethodHasBeenSet(false),
    m_userPoolNameHasBeenSet(false),
    m_verificationMessageHasBeenSet(false)
{
}

CreateBackendAuthUserPoolConfig::CreateBackendAuthUserPoolConfig(JsonView jsonValue) : 
    m_forgotPasswordHasBeenSet(false),
    m_mfaHasBeenSet(false),
    m_oAuthHasBeenSet(false),
    m_passwordPolicyHasBeenSet(false),
    m_requiredSignUpAttributesHasBeenSet(false),
    m_signInMethod(SignInMethod::NOT_SET),
    m_signInMethodHasBeenSet(false),
    m_userPoolNameHasBeenSet(false),
    m_verificationMessageHasBeenSet(false)
{
  *this = jsonValue;
}

CreateBackendAuthUserPoolConfig& CreateBackendAuthUserPoolConfig::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("requiredSignUpAttributes"))
  {
    Aws::Utils::Array<JsonView> requiredSignUpAttributesJsonList = jsonValue.GetArray("requiredSignUpAttributes");
    for(unsigned requiredSignUpAttributesIndex = 0; requiredSignUpAttributesIndex < requiredSignUpAttributesJsonList.GetLength(); ++requiredSignUpAttributesIndex)
    {
      m_requiredSignUpAttributes.push_back(RequiredSignUpAttributesElementMapper::GetRequiredSignUpAttributesElementForName(requiredSignUpAttributesJsonList[requiredSignUpAttributesIndex].AsString()));
    }
    m_requiredSignUpAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("signInMethod"))
  {
    m_signInMethod = SignInMethodMapper::GetSignInMethodForName(jsonValue.GetString("signInMethod"));

    m_signInMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userPoolName"))
  {
    m_userPoolName = jsonValue.GetString("userPoolName");

    m_userPoolNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("verificationMessage"))
  {
    m_verificationMessage = jsonValue.GetObject("verificationMessage");

    m_verificationMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateBackendAuthUserPoolConfig::Jsonize() const
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

  if(m_requiredSignUpAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> requiredSignUpAttributesJsonList(m_requiredSignUpAttributes.size());
   for(unsigned requiredSignUpAttributesIndex = 0; requiredSignUpAttributesIndex < requiredSignUpAttributesJsonList.GetLength(); ++requiredSignUpAttributesIndex)
   {
     requiredSignUpAttributesJsonList[requiredSignUpAttributesIndex].AsString(RequiredSignUpAttributesElementMapper::GetNameForRequiredSignUpAttributesElement(m_requiredSignUpAttributes[requiredSignUpAttributesIndex]));
   }
   payload.WithArray("requiredSignUpAttributes", std::move(requiredSignUpAttributesJsonList));

  }

  if(m_signInMethodHasBeenSet)
  {
   payload.WithString("signInMethod", SignInMethodMapper::GetNameForSignInMethod(m_signInMethod));
  }

  if(m_userPoolNameHasBeenSet)
  {
   payload.WithString("userPoolName", m_userPoolName);

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
