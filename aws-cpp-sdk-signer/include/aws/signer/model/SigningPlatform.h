/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signer/model/Category.h>
#include <aws/signer/model/SigningConfiguration.h>
#include <aws/signer/model/SigningImageFormat.h>
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
namespace signer
{
namespace Model
{

  /**
   * <p>Contains information about the signing configurations and parameters that are
   * used to perform a code signing job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/SigningPlatform">AWS
   * API Reference</a></p>
   */
  class SigningPlatform
  {
  public:
    AWS_SIGNER_API SigningPlatform();
    AWS_SIGNER_API SigningPlatform(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API SigningPlatform& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIGNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of a code signing; platform.</p>
     */
    inline const Aws::String& GetPlatformId() const{ return m_platformId; }

    /**
     * <p>The ID of a code signing; platform.</p>
     */
    inline bool PlatformIdHasBeenSet() const { return m_platformIdHasBeenSet; }

    /**
     * <p>The ID of a code signing; platform.</p>
     */
    inline void SetPlatformId(const Aws::String& value) { m_platformIdHasBeenSet = true; m_platformId = value; }

    /**
     * <p>The ID of a code signing; platform.</p>
     */
    inline void SetPlatformId(Aws::String&& value) { m_platformIdHasBeenSet = true; m_platformId = std::move(value); }

    /**
     * <p>The ID of a code signing; platform.</p>
     */
    inline void SetPlatformId(const char* value) { m_platformIdHasBeenSet = true; m_platformId.assign(value); }

    /**
     * <p>The ID of a code signing; platform.</p>
     */
    inline SigningPlatform& WithPlatformId(const Aws::String& value) { SetPlatformId(value); return *this;}

    /**
     * <p>The ID of a code signing; platform.</p>
     */
    inline SigningPlatform& WithPlatformId(Aws::String&& value) { SetPlatformId(std::move(value)); return *this;}

    /**
     * <p>The ID of a code signing; platform.</p>
     */
    inline SigningPlatform& WithPlatformId(const char* value) { SetPlatformId(value); return *this;}


    /**
     * <p>The display name of a code signing platform.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name of a code signing platform.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The display name of a code signing platform.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The display name of a code signing platform.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The display name of a code signing platform.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The display name of a code signing platform.</p>
     */
    inline SigningPlatform& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name of a code signing platform.</p>
     */
    inline SigningPlatform& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of a code signing platform.</p>
     */
    inline SigningPlatform& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>Any partner entities linked to a code signing platform.</p>
     */
    inline const Aws::String& GetPartner() const{ return m_partner; }

    /**
     * <p>Any partner entities linked to a code signing platform.</p>
     */
    inline bool PartnerHasBeenSet() const { return m_partnerHasBeenSet; }

    /**
     * <p>Any partner entities linked to a code signing platform.</p>
     */
    inline void SetPartner(const Aws::String& value) { m_partnerHasBeenSet = true; m_partner = value; }

    /**
     * <p>Any partner entities linked to a code signing platform.</p>
     */
    inline void SetPartner(Aws::String&& value) { m_partnerHasBeenSet = true; m_partner = std::move(value); }

    /**
     * <p>Any partner entities linked to a code signing platform.</p>
     */
    inline void SetPartner(const char* value) { m_partnerHasBeenSet = true; m_partner.assign(value); }

    /**
     * <p>Any partner entities linked to a code signing platform.</p>
     */
    inline SigningPlatform& WithPartner(const Aws::String& value) { SetPartner(value); return *this;}

    /**
     * <p>Any partner entities linked to a code signing platform.</p>
     */
    inline SigningPlatform& WithPartner(Aws::String&& value) { SetPartner(std::move(value)); return *this;}

    /**
     * <p>Any partner entities linked to a code signing platform.</p>
     */
    inline SigningPlatform& WithPartner(const char* value) { SetPartner(value); return *this;}


    /**
     * <p>The types of targets that can be signed by a code signing platform.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * <p>The types of targets that can be signed by a code signing platform.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The types of targets that can be signed by a code signing platform.</p>
     */
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The types of targets that can be signed by a code signing platform.</p>
     */
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The types of targets that can be signed by a code signing platform.</p>
     */
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }

    /**
     * <p>The types of targets that can be signed by a code signing platform.</p>
     */
    inline SigningPlatform& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p>The types of targets that can be signed by a code signing platform.</p>
     */
    inline SigningPlatform& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * <p>The types of targets that can be signed by a code signing platform.</p>
     */
    inline SigningPlatform& WithTarget(const char* value) { SetTarget(value); return *this;}


    /**
     * <p>The category of a code signing platform.</p>
     */
    inline const Category& GetCategory() const{ return m_category; }

    /**
     * <p>The category of a code signing platform.</p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p>The category of a code signing platform.</p>
     */
    inline void SetCategory(const Category& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>The category of a code signing platform.</p>
     */
    inline void SetCategory(Category&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p>The category of a code signing platform.</p>
     */
    inline SigningPlatform& WithCategory(const Category& value) { SetCategory(value); return *this;}

    /**
     * <p>The category of a code signing platform.</p>
     */
    inline SigningPlatform& WithCategory(Category&& value) { SetCategory(std::move(value)); return *this;}


    /**
     * <p>The configuration of a code signing platform. This includes the designated
     * hash algorithm and encryption algorithm of a signing platform.</p>
     */
    inline const SigningConfiguration& GetSigningConfiguration() const{ return m_signingConfiguration; }

    /**
     * <p>The configuration of a code signing platform. This includes the designated
     * hash algorithm and encryption algorithm of a signing platform.</p>
     */
    inline bool SigningConfigurationHasBeenSet() const { return m_signingConfigurationHasBeenSet; }

    /**
     * <p>The configuration of a code signing platform. This includes the designated
     * hash algorithm and encryption algorithm of a signing platform.</p>
     */
    inline void SetSigningConfiguration(const SigningConfiguration& value) { m_signingConfigurationHasBeenSet = true; m_signingConfiguration = value; }

    /**
     * <p>The configuration of a code signing platform. This includes the designated
     * hash algorithm and encryption algorithm of a signing platform.</p>
     */
    inline void SetSigningConfiguration(SigningConfiguration&& value) { m_signingConfigurationHasBeenSet = true; m_signingConfiguration = std::move(value); }

    /**
     * <p>The configuration of a code signing platform. This includes the designated
     * hash algorithm and encryption algorithm of a signing platform.</p>
     */
    inline SigningPlatform& WithSigningConfiguration(const SigningConfiguration& value) { SetSigningConfiguration(value); return *this;}

    /**
     * <p>The configuration of a code signing platform. This includes the designated
     * hash algorithm and encryption algorithm of a signing platform.</p>
     */
    inline SigningPlatform& WithSigningConfiguration(SigningConfiguration&& value) { SetSigningConfiguration(std::move(value)); return *this;}


    
    inline const SigningImageFormat& GetSigningImageFormat() const{ return m_signingImageFormat; }

    
    inline bool SigningImageFormatHasBeenSet() const { return m_signingImageFormatHasBeenSet; }

    
    inline void SetSigningImageFormat(const SigningImageFormat& value) { m_signingImageFormatHasBeenSet = true; m_signingImageFormat = value; }

    
    inline void SetSigningImageFormat(SigningImageFormat&& value) { m_signingImageFormatHasBeenSet = true; m_signingImageFormat = std::move(value); }

    
    inline SigningPlatform& WithSigningImageFormat(const SigningImageFormat& value) { SetSigningImageFormat(value); return *this;}

    
    inline SigningPlatform& WithSigningImageFormat(SigningImageFormat&& value) { SetSigningImageFormat(std::move(value)); return *this;}


    /**
     * <p>The maximum size (in MB) of code that can be signed by a code signing
     * platform.</p>
     */
    inline int GetMaxSizeInMB() const{ return m_maxSizeInMB; }

    /**
     * <p>The maximum size (in MB) of code that can be signed by a code signing
     * platform.</p>
     */
    inline bool MaxSizeInMBHasBeenSet() const { return m_maxSizeInMBHasBeenSet; }

    /**
     * <p>The maximum size (in MB) of code that can be signed by a code signing
     * platform.</p>
     */
    inline void SetMaxSizeInMB(int value) { m_maxSizeInMBHasBeenSet = true; m_maxSizeInMB = value; }

    /**
     * <p>The maximum size (in MB) of code that can be signed by a code signing
     * platform.</p>
     */
    inline SigningPlatform& WithMaxSizeInMB(int value) { SetMaxSizeInMB(value); return *this;}


    /**
     * <p>Indicates whether revocation is supported for the platform.</p>
     */
    inline bool GetRevocationSupported() const{ return m_revocationSupported; }

    /**
     * <p>Indicates whether revocation is supported for the platform.</p>
     */
    inline bool RevocationSupportedHasBeenSet() const { return m_revocationSupportedHasBeenSet; }

    /**
     * <p>Indicates whether revocation is supported for the platform.</p>
     */
    inline void SetRevocationSupported(bool value) { m_revocationSupportedHasBeenSet = true; m_revocationSupported = value; }

    /**
     * <p>Indicates whether revocation is supported for the platform.</p>
     */
    inline SigningPlatform& WithRevocationSupported(bool value) { SetRevocationSupported(value); return *this;}

  private:

    Aws::String m_platformId;
    bool m_platformIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_partner;
    bool m_partnerHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    Category m_category;
    bool m_categoryHasBeenSet = false;

    SigningConfiguration m_signingConfiguration;
    bool m_signingConfigurationHasBeenSet = false;

    SigningImageFormat m_signingImageFormat;
    bool m_signingImageFormatHasBeenSet = false;

    int m_maxSizeInMB;
    bool m_maxSizeInMBHasBeenSet = false;

    bool m_revocationSupported;
    bool m_revocationSupportedHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
