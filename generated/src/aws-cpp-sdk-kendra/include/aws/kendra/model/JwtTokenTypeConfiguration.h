/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/model/KeyLocation.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides the configuration information for the JWT token type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/JwtTokenTypeConfiguration">AWS
   * API Reference</a></p>
   */
  class JwtTokenTypeConfiguration
  {
  public:
    AWS_KENDRA_API JwtTokenTypeConfiguration() = default;
    AWS_KENDRA_API JwtTokenTypeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API JwtTokenTypeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The location of the key.</p>
     */
    inline KeyLocation GetKeyLocation() const { return m_keyLocation; }
    inline bool KeyLocationHasBeenSet() const { return m_keyLocationHasBeenSet; }
    inline void SetKeyLocation(KeyLocation value) { m_keyLocationHasBeenSet = true; m_keyLocation = value; }
    inline JwtTokenTypeConfiguration& WithKeyLocation(KeyLocation value) { SetKeyLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signing key URL.</p>
     */
    inline const Aws::String& GetURL() const { return m_uRL; }
    inline bool URLHasBeenSet() const { return m_uRLHasBeenSet; }
    template<typename URLT = Aws::String>
    void SetURL(URLT&& value) { m_uRLHasBeenSet = true; m_uRL = std::forward<URLT>(value); }
    template<typename URLT = Aws::String>
    JwtTokenTypeConfiguration& WithURL(URLT&& value) { SetURL(std::forward<URLT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (arn) of the secret.</p>
     */
    inline const Aws::String& GetSecretManagerArn() const { return m_secretManagerArn; }
    inline bool SecretManagerArnHasBeenSet() const { return m_secretManagerArnHasBeenSet; }
    template<typename SecretManagerArnT = Aws::String>
    void SetSecretManagerArn(SecretManagerArnT&& value) { m_secretManagerArnHasBeenSet = true; m_secretManagerArn = std::forward<SecretManagerArnT>(value); }
    template<typename SecretManagerArnT = Aws::String>
    JwtTokenTypeConfiguration& WithSecretManagerArn(SecretManagerArnT&& value) { SetSecretManagerArn(std::forward<SecretManagerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name attribute field.</p>
     */
    inline const Aws::String& GetUserNameAttributeField() const { return m_userNameAttributeField; }
    inline bool UserNameAttributeFieldHasBeenSet() const { return m_userNameAttributeFieldHasBeenSet; }
    template<typename UserNameAttributeFieldT = Aws::String>
    void SetUserNameAttributeField(UserNameAttributeFieldT&& value) { m_userNameAttributeFieldHasBeenSet = true; m_userNameAttributeField = std::forward<UserNameAttributeFieldT>(value); }
    template<typename UserNameAttributeFieldT = Aws::String>
    JwtTokenTypeConfiguration& WithUserNameAttributeField(UserNameAttributeFieldT&& value) { SetUserNameAttributeField(std::forward<UserNameAttributeFieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group attribute field.</p>
     */
    inline const Aws::String& GetGroupAttributeField() const { return m_groupAttributeField; }
    inline bool GroupAttributeFieldHasBeenSet() const { return m_groupAttributeFieldHasBeenSet; }
    template<typename GroupAttributeFieldT = Aws::String>
    void SetGroupAttributeField(GroupAttributeFieldT&& value) { m_groupAttributeFieldHasBeenSet = true; m_groupAttributeField = std::forward<GroupAttributeFieldT>(value); }
    template<typename GroupAttributeFieldT = Aws::String>
    JwtTokenTypeConfiguration& WithGroupAttributeField(GroupAttributeFieldT&& value) { SetGroupAttributeField(std::forward<GroupAttributeFieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The issuer of the token.</p>
     */
    inline const Aws::String& GetIssuer() const { return m_issuer; }
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
    template<typename IssuerT = Aws::String>
    void SetIssuer(IssuerT&& value) { m_issuerHasBeenSet = true; m_issuer = std::forward<IssuerT>(value); }
    template<typename IssuerT = Aws::String>
    JwtTokenTypeConfiguration& WithIssuer(IssuerT&& value) { SetIssuer(std::forward<IssuerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The regular expression that identifies the claim.</p>
     */
    inline const Aws::String& GetClaimRegex() const { return m_claimRegex; }
    inline bool ClaimRegexHasBeenSet() const { return m_claimRegexHasBeenSet; }
    template<typename ClaimRegexT = Aws::String>
    void SetClaimRegex(ClaimRegexT&& value) { m_claimRegexHasBeenSet = true; m_claimRegex = std::forward<ClaimRegexT>(value); }
    template<typename ClaimRegexT = Aws::String>
    JwtTokenTypeConfiguration& WithClaimRegex(ClaimRegexT&& value) { SetClaimRegex(std::forward<ClaimRegexT>(value)); return *this;}
    ///@}
  private:

    KeyLocation m_keyLocation{KeyLocation::NOT_SET};
    bool m_keyLocationHasBeenSet = false;

    Aws::String m_uRL;
    bool m_uRLHasBeenSet = false;

    Aws::String m_secretManagerArn;
    bool m_secretManagerArnHasBeenSet = false;

    Aws::String m_userNameAttributeField;
    bool m_userNameAttributeFieldHasBeenSet = false;

    Aws::String m_groupAttributeField;
    bool m_groupAttributeFieldHasBeenSet = false;

    Aws::String m_issuer;
    bool m_issuerHasBeenSet = false;

    Aws::String m_claimRegex;
    bool m_claimRegexHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
