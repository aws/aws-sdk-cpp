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
    AWS_AMPLIFYBACKEND_API SocialProviderSettings() = default;
    AWS_AMPLIFYBACKEND_API SocialProviderSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API SocialProviderSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const BackendAuthSocialProviderConfig& GetFacebook() const { return m_facebook; }
    inline bool FacebookHasBeenSet() const { return m_facebookHasBeenSet; }
    template<typename FacebookT = BackendAuthSocialProviderConfig>
    void SetFacebook(FacebookT&& value) { m_facebookHasBeenSet = true; m_facebook = std::forward<FacebookT>(value); }
    template<typename FacebookT = BackendAuthSocialProviderConfig>
    SocialProviderSettings& WithFacebook(FacebookT&& value) { SetFacebook(std::forward<FacebookT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const BackendAuthSocialProviderConfig& GetGoogle() const { return m_google; }
    inline bool GoogleHasBeenSet() const { return m_googleHasBeenSet; }
    template<typename GoogleT = BackendAuthSocialProviderConfig>
    void SetGoogle(GoogleT&& value) { m_googleHasBeenSet = true; m_google = std::forward<GoogleT>(value); }
    template<typename GoogleT = BackendAuthSocialProviderConfig>
    SocialProviderSettings& WithGoogle(GoogleT&& value) { SetGoogle(std::forward<GoogleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const BackendAuthSocialProviderConfig& GetLoginWithAmazon() const { return m_loginWithAmazon; }
    inline bool LoginWithAmazonHasBeenSet() const { return m_loginWithAmazonHasBeenSet; }
    template<typename LoginWithAmazonT = BackendAuthSocialProviderConfig>
    void SetLoginWithAmazon(LoginWithAmazonT&& value) { m_loginWithAmazonHasBeenSet = true; m_loginWithAmazon = std::forward<LoginWithAmazonT>(value); }
    template<typename LoginWithAmazonT = BackendAuthSocialProviderConfig>
    SocialProviderSettings& WithLoginWithAmazon(LoginWithAmazonT&& value) { SetLoginWithAmazon(std::forward<LoginWithAmazonT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const BackendAuthAppleProviderConfig& GetSignInWithApple() const { return m_signInWithApple; }
    inline bool SignInWithAppleHasBeenSet() const { return m_signInWithAppleHasBeenSet; }
    template<typename SignInWithAppleT = BackendAuthAppleProviderConfig>
    void SetSignInWithApple(SignInWithAppleT&& value) { m_signInWithAppleHasBeenSet = true; m_signInWithApple = std::forward<SignInWithAppleT>(value); }
    template<typename SignInWithAppleT = BackendAuthAppleProviderConfig>
    SocialProviderSettings& WithSignInWithApple(SignInWithAppleT&& value) { SetSignInWithApple(std::forward<SignInWithAppleT>(value)); return *this;}
    ///@}
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
