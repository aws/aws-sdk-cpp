/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/SocialProviderSettings.h>
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

SocialProviderSettings::SocialProviderSettings() : 
    m_facebookHasBeenSet(false),
    m_googleHasBeenSet(false),
    m_loginWithAmazonHasBeenSet(false),
    m_signInWithAppleHasBeenSet(false)
{
}

SocialProviderSettings::SocialProviderSettings(JsonView jsonValue) : 
    m_facebookHasBeenSet(false),
    m_googleHasBeenSet(false),
    m_loginWithAmazonHasBeenSet(false),
    m_signInWithAppleHasBeenSet(false)
{
  *this = jsonValue;
}

SocialProviderSettings& SocialProviderSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Facebook"))
  {
    m_facebook = jsonValue.GetObject("Facebook");

    m_facebookHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Google"))
  {
    m_google = jsonValue.GetObject("Google");

    m_googleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LoginWithAmazon"))
  {
    m_loginWithAmazon = jsonValue.GetObject("LoginWithAmazon");

    m_loginWithAmazonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SignInWithApple"))
  {
    m_signInWithApple = jsonValue.GetObject("SignInWithApple");

    m_signInWithAppleHasBeenSet = true;
  }

  return *this;
}

JsonValue SocialProviderSettings::Jsonize() const
{
  JsonValue payload;

  if(m_facebookHasBeenSet)
  {
   payload.WithObject("Facebook", m_facebook.Jsonize());

  }

  if(m_googleHasBeenSet)
  {
   payload.WithObject("Google", m_google.Jsonize());

  }

  if(m_loginWithAmazonHasBeenSet)
  {
   payload.WithObject("LoginWithAmazon", m_loginWithAmazon.Jsonize());

  }

  if(m_signInWithAppleHasBeenSet)
  {
   payload.WithObject("SignInWithApple", m_signInWithApple.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
