/*
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
   * <p>Contains information about the signing configurations and parameters that is
   * used to perform an AWS Signer job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/SigningPlatform">AWS
   * API Reference</a></p>
   */
  class AWS_SIGNER_API SigningPlatform
  {
  public:
    SigningPlatform();
    SigningPlatform(Aws::Utils::Json::JsonView jsonValue);
    SigningPlatform& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of an AWS Signer platform.</p>
     */
    inline const Aws::String& GetPlatformId() const{ return m_platformId; }

    /**
     * <p>The ID of an AWS Signer platform.</p>
     */
    inline bool PlatformIdHasBeenSet() const { return m_platformIdHasBeenSet; }

    /**
     * <p>The ID of an AWS Signer platform.</p>
     */
    inline void SetPlatformId(const Aws::String& value) { m_platformIdHasBeenSet = true; m_platformId = value; }

    /**
     * <p>The ID of an AWS Signer platform.</p>
     */
    inline void SetPlatformId(Aws::String&& value) { m_platformIdHasBeenSet = true; m_platformId = std::move(value); }

    /**
     * <p>The ID of an AWS Signer platform.</p>
     */
    inline void SetPlatformId(const char* value) { m_platformIdHasBeenSet = true; m_platformId.assign(value); }

    /**
     * <p>The ID of an AWS Signer platform.</p>
     */
    inline SigningPlatform& WithPlatformId(const Aws::String& value) { SetPlatformId(value); return *this;}

    /**
     * <p>The ID of an AWS Signer platform.</p>
     */
    inline SigningPlatform& WithPlatformId(Aws::String&& value) { SetPlatformId(std::move(value)); return *this;}

    /**
     * <p>The ID of an AWS Signer platform.</p>
     */
    inline SigningPlatform& WithPlatformId(const char* value) { SetPlatformId(value); return *this;}


    /**
     * <p>The display name of an AWS Signer platform.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name of an AWS Signer platform.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The display name of an AWS Signer platform.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The display name of an AWS Signer platform.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The display name of an AWS Signer platform.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The display name of an AWS Signer platform.</p>
     */
    inline SigningPlatform& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name of an AWS Signer platform.</p>
     */
    inline SigningPlatform& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of an AWS Signer platform.</p>
     */
    inline SigningPlatform& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>Any partner entities linked to an AWS Signer platform.</p>
     */
    inline const Aws::String& GetPartner() const{ return m_partner; }

    /**
     * <p>Any partner entities linked to an AWS Signer platform.</p>
     */
    inline bool PartnerHasBeenSet() const { return m_partnerHasBeenSet; }

    /**
     * <p>Any partner entities linked to an AWS Signer platform.</p>
     */
    inline void SetPartner(const Aws::String& value) { m_partnerHasBeenSet = true; m_partner = value; }

    /**
     * <p>Any partner entities linked to an AWS Signer platform.</p>
     */
    inline void SetPartner(Aws::String&& value) { m_partnerHasBeenSet = true; m_partner = std::move(value); }

    /**
     * <p>Any partner entities linked to an AWS Signer platform.</p>
     */
    inline void SetPartner(const char* value) { m_partnerHasBeenSet = true; m_partner.assign(value); }

    /**
     * <p>Any partner entities linked to an AWS Signer platform.</p>
     */
    inline SigningPlatform& WithPartner(const Aws::String& value) { SetPartner(value); return *this;}

    /**
     * <p>Any partner entities linked to an AWS Signer platform.</p>
     */
    inline SigningPlatform& WithPartner(Aws::String&& value) { SetPartner(std::move(value)); return *this;}

    /**
     * <p>Any partner entities linked to an AWS Signer platform.</p>
     */
    inline SigningPlatform& WithPartner(const char* value) { SetPartner(value); return *this;}


    /**
     * <p>The types of targets that can be signed by an AWS Signer platform.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * <p>The types of targets that can be signed by an AWS Signer platform.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The types of targets that can be signed by an AWS Signer platform.</p>
     */
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The types of targets that can be signed by an AWS Signer platform.</p>
     */
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The types of targets that can be signed by an AWS Signer platform.</p>
     */
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }

    /**
     * <p>The types of targets that can be signed by an AWS Signer platform.</p>
     */
    inline SigningPlatform& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p>The types of targets that can be signed by an AWS Signer platform.</p>
     */
    inline SigningPlatform& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * <p>The types of targets that can be signed by an AWS Signer platform.</p>
     */
    inline SigningPlatform& WithTarget(const char* value) { SetTarget(value); return *this;}


    /**
     * <p>The category of an AWS Signer platform.</p>
     */
    inline const Category& GetCategory() const{ return m_category; }

    /**
     * <p>The category of an AWS Signer platform.</p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p>The category of an AWS Signer platform.</p>
     */
    inline void SetCategory(const Category& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>The category of an AWS Signer platform.</p>
     */
    inline void SetCategory(Category&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p>The category of an AWS Signer platform.</p>
     */
    inline SigningPlatform& WithCategory(const Category& value) { SetCategory(value); return *this;}

    /**
     * <p>The category of an AWS Signer platform.</p>
     */
    inline SigningPlatform& WithCategory(Category&& value) { SetCategory(std::move(value)); return *this;}


    /**
     * <p>The configuration of an AWS Signer platform. This includes the designated
     * hash algorithm and encryption algorithm of a signing platform.</p>
     */
    inline const SigningConfiguration& GetSigningConfiguration() const{ return m_signingConfiguration; }

    /**
     * <p>The configuration of an AWS Signer platform. This includes the designated
     * hash algorithm and encryption algorithm of a signing platform.</p>
     */
    inline bool SigningConfigurationHasBeenSet() const { return m_signingConfigurationHasBeenSet; }

    /**
     * <p>The configuration of an AWS Signer platform. This includes the designated
     * hash algorithm and encryption algorithm of a signing platform.</p>
     */
    inline void SetSigningConfiguration(const SigningConfiguration& value) { m_signingConfigurationHasBeenSet = true; m_signingConfiguration = value; }

    /**
     * <p>The configuration of an AWS Signer platform. This includes the designated
     * hash algorithm and encryption algorithm of a signing platform.</p>
     */
    inline void SetSigningConfiguration(SigningConfiguration&& value) { m_signingConfigurationHasBeenSet = true; m_signingConfiguration = std::move(value); }

    /**
     * <p>The configuration of an AWS Signer platform. This includes the designated
     * hash algorithm and encryption algorithm of a signing platform.</p>
     */
    inline SigningPlatform& WithSigningConfiguration(const SigningConfiguration& value) { SetSigningConfiguration(value); return *this;}

    /**
     * <p>The configuration of an AWS Signer platform. This includes the designated
     * hash algorithm and encryption algorithm of a signing platform.</p>
     */
    inline SigningPlatform& WithSigningConfiguration(SigningConfiguration&& value) { SetSigningConfiguration(std::move(value)); return *this;}


    /**
     * <p>The signing image format that is used by an AWS Signer platform.</p>
     */
    inline const SigningImageFormat& GetSigningImageFormat() const{ return m_signingImageFormat; }

    /**
     * <p>The signing image format that is used by an AWS Signer platform.</p>
     */
    inline bool SigningImageFormatHasBeenSet() const { return m_signingImageFormatHasBeenSet; }

    /**
     * <p>The signing image format that is used by an AWS Signer platform.</p>
     */
    inline void SetSigningImageFormat(const SigningImageFormat& value) { m_signingImageFormatHasBeenSet = true; m_signingImageFormat = value; }

    /**
     * <p>The signing image format that is used by an AWS Signer platform.</p>
     */
    inline void SetSigningImageFormat(SigningImageFormat&& value) { m_signingImageFormatHasBeenSet = true; m_signingImageFormat = std::move(value); }

    /**
     * <p>The signing image format that is used by an AWS Signer platform.</p>
     */
    inline SigningPlatform& WithSigningImageFormat(const SigningImageFormat& value) { SetSigningImageFormat(value); return *this;}

    /**
     * <p>The signing image format that is used by an AWS Signer platform.</p>
     */
    inline SigningPlatform& WithSigningImageFormat(SigningImageFormat&& value) { SetSigningImageFormat(std::move(value)); return *this;}


    /**
     * <p>The maximum size (in MB) of code that can be signed by a AWS Signer
     * platform.</p>
     */
    inline int GetMaxSizeInMB() const{ return m_maxSizeInMB; }

    /**
     * <p>The maximum size (in MB) of code that can be signed by a AWS Signer
     * platform.</p>
     */
    inline bool MaxSizeInMBHasBeenSet() const { return m_maxSizeInMBHasBeenSet; }

    /**
     * <p>The maximum size (in MB) of code that can be signed by a AWS Signer
     * platform.</p>
     */
    inline void SetMaxSizeInMB(int value) { m_maxSizeInMBHasBeenSet = true; m_maxSizeInMB = value; }

    /**
     * <p>The maximum size (in MB) of code that can be signed by a AWS Signer
     * platform.</p>
     */
    inline SigningPlatform& WithMaxSizeInMB(int value) { SetMaxSizeInMB(value); return *this;}

  private:

    Aws::String m_platformId;
    bool m_platformIdHasBeenSet;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet;

    Aws::String m_partner;
    bool m_partnerHasBeenSet;

    Aws::String m_target;
    bool m_targetHasBeenSet;

    Category m_category;
    bool m_categoryHasBeenSet;

    SigningConfiguration m_signingConfiguration;
    bool m_signingConfigurationHasBeenSet;

    SigningImageFormat m_signingImageFormat;
    bool m_signingImageFormatHasBeenSet;

    int m_maxSizeInMB;
    bool m_maxSizeInMBHasBeenSet;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
