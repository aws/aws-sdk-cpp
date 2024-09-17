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
    AWS_KENDRA_API JwtTokenTypeConfiguration();
    AWS_KENDRA_API JwtTokenTypeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API JwtTokenTypeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The location of the key.</p>
     */
    inline const KeyLocation& GetKeyLocation() const{ return m_keyLocation; }
    inline bool KeyLocationHasBeenSet() const { return m_keyLocationHasBeenSet; }
    inline void SetKeyLocation(const KeyLocation& value) { m_keyLocationHasBeenSet = true; m_keyLocation = value; }
    inline void SetKeyLocation(KeyLocation&& value) { m_keyLocationHasBeenSet = true; m_keyLocation = std::move(value); }
    inline JwtTokenTypeConfiguration& WithKeyLocation(const KeyLocation& value) { SetKeyLocation(value); return *this;}
    inline JwtTokenTypeConfiguration& WithKeyLocation(KeyLocation&& value) { SetKeyLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signing key URL.</p>
     */
    inline const Aws::String& GetURL() const{ return m_uRL; }
    inline bool URLHasBeenSet() const { return m_uRLHasBeenSet; }
    inline void SetURL(const Aws::String& value) { m_uRLHasBeenSet = true; m_uRL = value; }
    inline void SetURL(Aws::String&& value) { m_uRLHasBeenSet = true; m_uRL = std::move(value); }
    inline void SetURL(const char* value) { m_uRLHasBeenSet = true; m_uRL.assign(value); }
    inline JwtTokenTypeConfiguration& WithURL(const Aws::String& value) { SetURL(value); return *this;}
    inline JwtTokenTypeConfiguration& WithURL(Aws::String&& value) { SetURL(std::move(value)); return *this;}
    inline JwtTokenTypeConfiguration& WithURL(const char* value) { SetURL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (arn) of the secret.</p>
     */
    inline const Aws::String& GetSecretManagerArn() const{ return m_secretManagerArn; }
    inline bool SecretManagerArnHasBeenSet() const { return m_secretManagerArnHasBeenSet; }
    inline void SetSecretManagerArn(const Aws::String& value) { m_secretManagerArnHasBeenSet = true; m_secretManagerArn = value; }
    inline void SetSecretManagerArn(Aws::String&& value) { m_secretManagerArnHasBeenSet = true; m_secretManagerArn = std::move(value); }
    inline void SetSecretManagerArn(const char* value) { m_secretManagerArnHasBeenSet = true; m_secretManagerArn.assign(value); }
    inline JwtTokenTypeConfiguration& WithSecretManagerArn(const Aws::String& value) { SetSecretManagerArn(value); return *this;}
    inline JwtTokenTypeConfiguration& WithSecretManagerArn(Aws::String&& value) { SetSecretManagerArn(std::move(value)); return *this;}
    inline JwtTokenTypeConfiguration& WithSecretManagerArn(const char* value) { SetSecretManagerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name attribute field.</p>
     */
    inline const Aws::String& GetUserNameAttributeField() const{ return m_userNameAttributeField; }
    inline bool UserNameAttributeFieldHasBeenSet() const { return m_userNameAttributeFieldHasBeenSet; }
    inline void SetUserNameAttributeField(const Aws::String& value) { m_userNameAttributeFieldHasBeenSet = true; m_userNameAttributeField = value; }
    inline void SetUserNameAttributeField(Aws::String&& value) { m_userNameAttributeFieldHasBeenSet = true; m_userNameAttributeField = std::move(value); }
    inline void SetUserNameAttributeField(const char* value) { m_userNameAttributeFieldHasBeenSet = true; m_userNameAttributeField.assign(value); }
    inline JwtTokenTypeConfiguration& WithUserNameAttributeField(const Aws::String& value) { SetUserNameAttributeField(value); return *this;}
    inline JwtTokenTypeConfiguration& WithUserNameAttributeField(Aws::String&& value) { SetUserNameAttributeField(std::move(value)); return *this;}
    inline JwtTokenTypeConfiguration& WithUserNameAttributeField(const char* value) { SetUserNameAttributeField(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group attribute field.</p>
     */
    inline const Aws::String& GetGroupAttributeField() const{ return m_groupAttributeField; }
    inline bool GroupAttributeFieldHasBeenSet() const { return m_groupAttributeFieldHasBeenSet; }
    inline void SetGroupAttributeField(const Aws::String& value) { m_groupAttributeFieldHasBeenSet = true; m_groupAttributeField = value; }
    inline void SetGroupAttributeField(Aws::String&& value) { m_groupAttributeFieldHasBeenSet = true; m_groupAttributeField = std::move(value); }
    inline void SetGroupAttributeField(const char* value) { m_groupAttributeFieldHasBeenSet = true; m_groupAttributeField.assign(value); }
    inline JwtTokenTypeConfiguration& WithGroupAttributeField(const Aws::String& value) { SetGroupAttributeField(value); return *this;}
    inline JwtTokenTypeConfiguration& WithGroupAttributeField(Aws::String&& value) { SetGroupAttributeField(std::move(value)); return *this;}
    inline JwtTokenTypeConfiguration& WithGroupAttributeField(const char* value) { SetGroupAttributeField(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The issuer of the token.</p>
     */
    inline const Aws::String& GetIssuer() const{ return m_issuer; }
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
    inline void SetIssuer(const Aws::String& value) { m_issuerHasBeenSet = true; m_issuer = value; }
    inline void SetIssuer(Aws::String&& value) { m_issuerHasBeenSet = true; m_issuer = std::move(value); }
    inline void SetIssuer(const char* value) { m_issuerHasBeenSet = true; m_issuer.assign(value); }
    inline JwtTokenTypeConfiguration& WithIssuer(const Aws::String& value) { SetIssuer(value); return *this;}
    inline JwtTokenTypeConfiguration& WithIssuer(Aws::String&& value) { SetIssuer(std::move(value)); return *this;}
    inline JwtTokenTypeConfiguration& WithIssuer(const char* value) { SetIssuer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The regular expression that identifies the claim.</p>
     */
    inline const Aws::String& GetClaimRegex() const{ return m_claimRegex; }
    inline bool ClaimRegexHasBeenSet() const { return m_claimRegexHasBeenSet; }
    inline void SetClaimRegex(const Aws::String& value) { m_claimRegexHasBeenSet = true; m_claimRegex = value; }
    inline void SetClaimRegex(Aws::String&& value) { m_claimRegexHasBeenSet = true; m_claimRegex = std::move(value); }
    inline void SetClaimRegex(const char* value) { m_claimRegexHasBeenSet = true; m_claimRegex.assign(value); }
    inline JwtTokenTypeConfiguration& WithClaimRegex(const Aws::String& value) { SetClaimRegex(value); return *this;}
    inline JwtTokenTypeConfiguration& WithClaimRegex(Aws::String&& value) { SetClaimRegex(std::move(value)); return *this;}
    inline JwtTokenTypeConfiguration& WithClaimRegex(const char* value) { SetClaimRegex(value); return *this;}
    ///@}
  private:

    KeyLocation m_keyLocation;
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
