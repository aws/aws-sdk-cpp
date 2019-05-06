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
#include <aws/signer/SignerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signer/model/SigningMaterial.h>
#include <aws/signer/model/SigningPlatformOverrides.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace signer
{
namespace Model
{

  /**
   */
  class AWS_SIGNER_API PutSigningProfileRequest : public SignerRequest
  {
  public:
    PutSigningProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutSigningProfile"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the signing profile to be created.</p>
     */
    inline const Aws::String& GetProfileName() const{ return m_profileName; }

    /**
     * <p>The name of the signing profile to be created.</p>
     */
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }

    /**
     * <p>The name of the signing profile to be created.</p>
     */
    inline void SetProfileName(const Aws::String& value) { m_profileNameHasBeenSet = true; m_profileName = value; }

    /**
     * <p>The name of the signing profile to be created.</p>
     */
    inline void SetProfileName(Aws::String&& value) { m_profileNameHasBeenSet = true; m_profileName = std::move(value); }

    /**
     * <p>The name of the signing profile to be created.</p>
     */
    inline void SetProfileName(const char* value) { m_profileNameHasBeenSet = true; m_profileName.assign(value); }

    /**
     * <p>The name of the signing profile to be created.</p>
     */
    inline PutSigningProfileRequest& WithProfileName(const Aws::String& value) { SetProfileName(value); return *this;}

    /**
     * <p>The name of the signing profile to be created.</p>
     */
    inline PutSigningProfileRequest& WithProfileName(Aws::String&& value) { SetProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the signing profile to be created.</p>
     */
    inline PutSigningProfileRequest& WithProfileName(const char* value) { SetProfileName(value); return *this;}


    /**
     * <p>The AWS Certificate Manager certificate that will be used to sign code with
     * the new signing profile.</p>
     */
    inline const SigningMaterial& GetSigningMaterial() const{ return m_signingMaterial; }

    /**
     * <p>The AWS Certificate Manager certificate that will be used to sign code with
     * the new signing profile.</p>
     */
    inline bool SigningMaterialHasBeenSet() const { return m_signingMaterialHasBeenSet; }

    /**
     * <p>The AWS Certificate Manager certificate that will be used to sign code with
     * the new signing profile.</p>
     */
    inline void SetSigningMaterial(const SigningMaterial& value) { m_signingMaterialHasBeenSet = true; m_signingMaterial = value; }

    /**
     * <p>The AWS Certificate Manager certificate that will be used to sign code with
     * the new signing profile.</p>
     */
    inline void SetSigningMaterial(SigningMaterial&& value) { m_signingMaterialHasBeenSet = true; m_signingMaterial = std::move(value); }

    /**
     * <p>The AWS Certificate Manager certificate that will be used to sign code with
     * the new signing profile.</p>
     */
    inline PutSigningProfileRequest& WithSigningMaterial(const SigningMaterial& value) { SetSigningMaterial(value); return *this;}

    /**
     * <p>The AWS Certificate Manager certificate that will be used to sign code with
     * the new signing profile.</p>
     */
    inline PutSigningProfileRequest& WithSigningMaterial(SigningMaterial&& value) { SetSigningMaterial(std::move(value)); return *this;}


    /**
     * <p>The ID of the signing profile to be created.</p>
     */
    inline const Aws::String& GetPlatformId() const{ return m_platformId; }

    /**
     * <p>The ID of the signing profile to be created.</p>
     */
    inline bool PlatformIdHasBeenSet() const { return m_platformIdHasBeenSet; }

    /**
     * <p>The ID of the signing profile to be created.</p>
     */
    inline void SetPlatformId(const Aws::String& value) { m_platformIdHasBeenSet = true; m_platformId = value; }

    /**
     * <p>The ID of the signing profile to be created.</p>
     */
    inline void SetPlatformId(Aws::String&& value) { m_platformIdHasBeenSet = true; m_platformId = std::move(value); }

    /**
     * <p>The ID of the signing profile to be created.</p>
     */
    inline void SetPlatformId(const char* value) { m_platformIdHasBeenSet = true; m_platformId.assign(value); }

    /**
     * <p>The ID of the signing profile to be created.</p>
     */
    inline PutSigningProfileRequest& WithPlatformId(const Aws::String& value) { SetPlatformId(value); return *this;}

    /**
     * <p>The ID of the signing profile to be created.</p>
     */
    inline PutSigningProfileRequest& WithPlatformId(Aws::String&& value) { SetPlatformId(std::move(value)); return *this;}

    /**
     * <p>The ID of the signing profile to be created.</p>
     */
    inline PutSigningProfileRequest& WithPlatformId(const char* value) { SetPlatformId(value); return *this;}


    /**
     * <p>A subfield of <code>platform</code>. This specifies any different
     * configuration options that you want to apply to the chosen platform (such as a
     * different <code>hash-algorithm</code> or <code>signing-algorithm</code>).</p>
     */
    inline const SigningPlatformOverrides& GetOverrides() const{ return m_overrides; }

    /**
     * <p>A subfield of <code>platform</code>. This specifies any different
     * configuration options that you want to apply to the chosen platform (such as a
     * different <code>hash-algorithm</code> or <code>signing-algorithm</code>).</p>
     */
    inline bool OverridesHasBeenSet() const { return m_overridesHasBeenSet; }

    /**
     * <p>A subfield of <code>platform</code>. This specifies any different
     * configuration options that you want to apply to the chosen platform (such as a
     * different <code>hash-algorithm</code> or <code>signing-algorithm</code>).</p>
     */
    inline void SetOverrides(const SigningPlatformOverrides& value) { m_overridesHasBeenSet = true; m_overrides = value; }

    /**
     * <p>A subfield of <code>platform</code>. This specifies any different
     * configuration options that you want to apply to the chosen platform (such as a
     * different <code>hash-algorithm</code> or <code>signing-algorithm</code>).</p>
     */
    inline void SetOverrides(SigningPlatformOverrides&& value) { m_overridesHasBeenSet = true; m_overrides = std::move(value); }

    /**
     * <p>A subfield of <code>platform</code>. This specifies any different
     * configuration options that you want to apply to the chosen platform (such as a
     * different <code>hash-algorithm</code> or <code>signing-algorithm</code>).</p>
     */
    inline PutSigningProfileRequest& WithOverrides(const SigningPlatformOverrides& value) { SetOverrides(value); return *this;}

    /**
     * <p>A subfield of <code>platform</code>. This specifies any different
     * configuration options that you want to apply to the chosen platform (such as a
     * different <code>hash-algorithm</code> or <code>signing-algorithm</code>).</p>
     */
    inline PutSigningProfileRequest& WithOverrides(SigningPlatformOverrides&& value) { SetOverrides(std::move(value)); return *this;}


    /**
     * <p>Map of key-value pairs for signing. These can include any information that
     * you want to use during signing.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSigningParameters() const{ return m_signingParameters; }

    /**
     * <p>Map of key-value pairs for signing. These can include any information that
     * you want to use during signing.</p>
     */
    inline bool SigningParametersHasBeenSet() const { return m_signingParametersHasBeenSet; }

    /**
     * <p>Map of key-value pairs for signing. These can include any information that
     * you want to use during signing.</p>
     */
    inline void SetSigningParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_signingParametersHasBeenSet = true; m_signingParameters = value; }

    /**
     * <p>Map of key-value pairs for signing. These can include any information that
     * you want to use during signing.</p>
     */
    inline void SetSigningParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_signingParametersHasBeenSet = true; m_signingParameters = std::move(value); }

    /**
     * <p>Map of key-value pairs for signing. These can include any information that
     * you want to use during signing.</p>
     */
    inline PutSigningProfileRequest& WithSigningParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetSigningParameters(value); return *this;}

    /**
     * <p>Map of key-value pairs for signing. These can include any information that
     * you want to use during signing.</p>
     */
    inline PutSigningProfileRequest& WithSigningParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetSigningParameters(std::move(value)); return *this;}

    /**
     * <p>Map of key-value pairs for signing. These can include any information that
     * you want to use during signing.</p>
     */
    inline PutSigningProfileRequest& AddSigningParameters(const Aws::String& key, const Aws::String& value) { m_signingParametersHasBeenSet = true; m_signingParameters.emplace(key, value); return *this; }

    /**
     * <p>Map of key-value pairs for signing. These can include any information that
     * you want to use during signing.</p>
     */
    inline PutSigningProfileRequest& AddSigningParameters(Aws::String&& key, const Aws::String& value) { m_signingParametersHasBeenSet = true; m_signingParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map of key-value pairs for signing. These can include any information that
     * you want to use during signing.</p>
     */
    inline PutSigningProfileRequest& AddSigningParameters(const Aws::String& key, Aws::String&& value) { m_signingParametersHasBeenSet = true; m_signingParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map of key-value pairs for signing. These can include any information that
     * you want to use during signing.</p>
     */
    inline PutSigningProfileRequest& AddSigningParameters(Aws::String&& key, Aws::String&& value) { m_signingParametersHasBeenSet = true; m_signingParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Map of key-value pairs for signing. These can include any information that
     * you want to use during signing.</p>
     */
    inline PutSigningProfileRequest& AddSigningParameters(const char* key, Aws::String&& value) { m_signingParametersHasBeenSet = true; m_signingParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map of key-value pairs for signing. These can include any information that
     * you want to use during signing.</p>
     */
    inline PutSigningProfileRequest& AddSigningParameters(Aws::String&& key, const char* value) { m_signingParametersHasBeenSet = true; m_signingParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map of key-value pairs for signing. These can include any information that
     * you want to use during signing.</p>
     */
    inline PutSigningProfileRequest& AddSigningParameters(const char* key, const char* value) { m_signingParametersHasBeenSet = true; m_signingParameters.emplace(key, value); return *this; }

  private:

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet;

    SigningMaterial m_signingMaterial;
    bool m_signingMaterialHasBeenSet;

    Aws::String m_platformId;
    bool m_platformIdHasBeenSet;

    SigningPlatformOverrides m_overrides;
    bool m_overridesHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_signingParameters;
    bool m_signingParametersHasBeenSet;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
