/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
#include <aws/amplifybackend/model/BackendAuthSocialProviderConfig.h>
#include <aws/amplifybackend/model/BackendAuthAppleProviderConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AmplifyBackend
{
namespace Model
{

  /**
   * <p>The settings for using the social identity providers for access to your
   * Amplify app.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/SocialProviderSettings">AWS
   * API Reference</a></p>
   */
  class SocialProviderSettings
  {
  public:
    AWS_AMPLIFYBACKEND_API SocialProviderSettings();
    AWS_AMPLIFYBACKEND_API SocialProviderSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API SocialProviderSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const BackendAuthSocialProviderConfig& GetFacebook() const{ return m_facebook; }

    
    inline bool FacebookHasBeenSet() const { return m_facebookHasBeenSet; }

    
    inline void SetFacebook(const BackendAuthSocialProviderConfig& value) { m_facebookHasBeenSet = true; m_facebook = value; }

    
    inline void SetFacebook(BackendAuthSocialProviderConfig&& value) { m_facebookHasBeenSet = true; m_facebook = std::move(value); }

    
    inline SocialProviderSettings& WithFacebook(const BackendAuthSocialProviderConfig& value) { SetFacebook(value); return *this;}

    
    inline SocialProviderSettings& WithFacebook(BackendAuthSocialProviderConfig&& value) { SetFacebook(std::move(value)); return *this;}


    
    inline const BackendAuthSocialProviderConfig& GetGoogle() const{ return m_google; }

    
    inline bool GoogleHasBeenSet() const { return m_googleHasBeenSet; }

    
    inline void SetGoogle(const BackendAuthSocialProviderConfig& value) { m_googleHasBeenSet = true; m_google = value; }

    
    inline void SetGoogle(BackendAuthSocialProviderConfig&& value) { m_googleHasBeenSet = true; m_google = std::move(value); }

    
    inline SocialProviderSettings& WithGoogle(const BackendAuthSocialProviderConfig& value) { SetGoogle(value); return *this;}

    
    inline SocialProviderSettings& WithGoogle(BackendAuthSocialProviderConfig&& value) { SetGoogle(std::move(value)); return *this;}


    
    inline const BackendAuthSocialProviderConfig& GetLoginWithAmazon() const{ return m_loginWithAmazon; }

    
    inline bool LoginWithAmazonHasBeenSet() const { return m_loginWithAmazonHasBeenSet; }

    
    inline void SetLoginWithAmazon(const BackendAuthSocialProviderConfig& value) { m_loginWithAmazonHasBeenSet = true; m_loginWithAmazon = value; }

    
    inline void SetLoginWithAmazon(BackendAuthSocialProviderConfig&& value) { m_loginWithAmazonHasBeenSet = true; m_loginWithAmazon = std::move(value); }

    
    inline SocialProviderSettings& WithLoginWithAmazon(const BackendAuthSocialProviderConfig& value) { SetLoginWithAmazon(value); return *this;}

    
    inline SocialProviderSettings& WithLoginWithAmazon(BackendAuthSocialProviderConfig&& value) { SetLoginWithAmazon(std::move(value)); return *this;}


    
    inline const BackendAuthAppleProviderConfig& GetSignInWithApple() const{ return m_signInWithApple; }

    
    inline bool SignInWithAppleHasBeenSet() const { return m_signInWithAppleHasBeenSet; }

    
    inline void SetSignInWithApple(const BackendAuthAppleProviderConfig& value) { m_signInWithAppleHasBeenSet = true; m_signInWithApple = value; }

    
    inline void SetSignInWithApple(BackendAuthAppleProviderConfig&& value) { m_signInWithAppleHasBeenSet = true; m_signInWithApple = std::move(value); }

    
    inline SocialProviderSettings& WithSignInWithApple(const BackendAuthAppleProviderConfig& value) { SetSignInWithApple(value); return *this;}

    
    inline SocialProviderSettings& WithSignInWithApple(BackendAuthAppleProviderConfig&& value) { SetSignInWithApple(std::move(value)); return *this;}

  private:

    BackendAuthSocialProviderConfig m_facebook;
    bool m_facebookHasBeenSet = false;

    BackendAuthSocialProviderConfig m_google;
    bool m_googleHasBeenSet = false;

    BackendAuthSocialProviderConfig m_loginWithAmazon;
    bool m_loginWithAmazonHasBeenSet = false;

    BackendAuthAppleProviderConfig m_signInWithApple;
    bool m_signInWithAppleHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
