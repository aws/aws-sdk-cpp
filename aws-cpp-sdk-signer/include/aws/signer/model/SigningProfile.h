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
#include <aws/signer/model/SigningMaterial.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/signer/model/SigningProfileStatus.h>
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
   * <p>Contains information about the ACM certificates and AWS Signer configuration
   * parameters that can be used by a given AWS Signer user.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/signer-2017-08-25/SigningProfile">AWS
   * API Reference</a></p>
   */
  class AWS_SIGNER_API SigningProfile
  {
  public:
    SigningProfile();
    SigningProfile(Aws::Utils::Json::JsonView jsonValue);
    SigningProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the AWS Signer profile.</p>
     */
    inline const Aws::String& GetProfileName() const{ return m_profileName; }

    /**
     * <p>The name of the AWS Signer profile.</p>
     */
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }

    /**
     * <p>The name of the AWS Signer profile.</p>
     */
    inline void SetProfileName(const Aws::String& value) { m_profileNameHasBeenSet = true; m_profileName = value; }

    /**
     * <p>The name of the AWS Signer profile.</p>
     */
    inline void SetProfileName(Aws::String&& value) { m_profileNameHasBeenSet = true; m_profileName = std::move(value); }

    /**
     * <p>The name of the AWS Signer profile.</p>
     */
    inline void SetProfileName(const char* value) { m_profileNameHasBeenSet = true; m_profileName.assign(value); }

    /**
     * <p>The name of the AWS Signer profile.</p>
     */
    inline SigningProfile& WithProfileName(const Aws::String& value) { SetProfileName(value); return *this;}

    /**
     * <p>The name of the AWS Signer profile.</p>
     */
    inline SigningProfile& WithProfileName(Aws::String&& value) { SetProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS Signer profile.</p>
     */
    inline SigningProfile& WithProfileName(const char* value) { SetProfileName(value); return *this;}


    /**
     * <p>The ACM certificate that is available for use by a signing profile.</p>
     */
    inline const SigningMaterial& GetSigningMaterial() const{ return m_signingMaterial; }

    /**
     * <p>The ACM certificate that is available for use by a signing profile.</p>
     */
    inline bool SigningMaterialHasBeenSet() const { return m_signingMaterialHasBeenSet; }

    /**
     * <p>The ACM certificate that is available for use by a signing profile.</p>
     */
    inline void SetSigningMaterial(const SigningMaterial& value) { m_signingMaterialHasBeenSet = true; m_signingMaterial = value; }

    /**
     * <p>The ACM certificate that is available for use by a signing profile.</p>
     */
    inline void SetSigningMaterial(SigningMaterial&& value) { m_signingMaterialHasBeenSet = true; m_signingMaterial = std::move(value); }

    /**
     * <p>The ACM certificate that is available for use by a signing profile.</p>
     */
    inline SigningProfile& WithSigningMaterial(const SigningMaterial& value) { SetSigningMaterial(value); return *this;}

    /**
     * <p>The ACM certificate that is available for use by a signing profile.</p>
     */
    inline SigningProfile& WithSigningMaterial(SigningMaterial&& value) { SetSigningMaterial(std::move(value)); return *this;}


    /**
     * <p>The ID of a platform that is available for use by a signing profile.</p>
     */
    inline const Aws::String& GetPlatformId() const{ return m_platformId; }

    /**
     * <p>The ID of a platform that is available for use by a signing profile.</p>
     */
    inline bool PlatformIdHasBeenSet() const { return m_platformIdHasBeenSet; }

    /**
     * <p>The ID of a platform that is available for use by a signing profile.</p>
     */
    inline void SetPlatformId(const Aws::String& value) { m_platformIdHasBeenSet = true; m_platformId = value; }

    /**
     * <p>The ID of a platform that is available for use by a signing profile.</p>
     */
    inline void SetPlatformId(Aws::String&& value) { m_platformIdHasBeenSet = true; m_platformId = std::move(value); }

    /**
     * <p>The ID of a platform that is available for use by a signing profile.</p>
     */
    inline void SetPlatformId(const char* value) { m_platformIdHasBeenSet = true; m_platformId.assign(value); }

    /**
     * <p>The ID of a platform that is available for use by a signing profile.</p>
     */
    inline SigningProfile& WithPlatformId(const Aws::String& value) { SetPlatformId(value); return *this;}

    /**
     * <p>The ID of a platform that is available for use by a signing profile.</p>
     */
    inline SigningProfile& WithPlatformId(Aws::String&& value) { SetPlatformId(std::move(value)); return *this;}

    /**
     * <p>The ID of a platform that is available for use by a signing profile.</p>
     */
    inline SigningProfile& WithPlatformId(const char* value) { SetPlatformId(value); return *this;}


    /**
     * <p>The parameters that are available for use by an AWS Signer user.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSigningParameters() const{ return m_signingParameters; }

    /**
     * <p>The parameters that are available for use by an AWS Signer user.</p>
     */
    inline bool SigningParametersHasBeenSet() const { return m_signingParametersHasBeenSet; }

    /**
     * <p>The parameters that are available for use by an AWS Signer user.</p>
     */
    inline void SetSigningParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_signingParametersHasBeenSet = true; m_signingParameters = value; }

    /**
     * <p>The parameters that are available for use by an AWS Signer user.</p>
     */
    inline void SetSigningParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_signingParametersHasBeenSet = true; m_signingParameters = std::move(value); }

    /**
     * <p>The parameters that are available for use by an AWS Signer user.</p>
     */
    inline SigningProfile& WithSigningParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetSigningParameters(value); return *this;}

    /**
     * <p>The parameters that are available for use by an AWS Signer user.</p>
     */
    inline SigningProfile& WithSigningParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetSigningParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters that are available for use by an AWS Signer user.</p>
     */
    inline SigningProfile& AddSigningParameters(const Aws::String& key, const Aws::String& value) { m_signingParametersHasBeenSet = true; m_signingParameters.emplace(key, value); return *this; }

    /**
     * <p>The parameters that are available for use by an AWS Signer user.</p>
     */
    inline SigningProfile& AddSigningParameters(Aws::String&& key, const Aws::String& value) { m_signingParametersHasBeenSet = true; m_signingParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The parameters that are available for use by an AWS Signer user.</p>
     */
    inline SigningProfile& AddSigningParameters(const Aws::String& key, Aws::String&& value) { m_signingParametersHasBeenSet = true; m_signingParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters that are available for use by an AWS Signer user.</p>
     */
    inline SigningProfile& AddSigningParameters(Aws::String&& key, Aws::String&& value) { m_signingParametersHasBeenSet = true; m_signingParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The parameters that are available for use by an AWS Signer user.</p>
     */
    inline SigningProfile& AddSigningParameters(const char* key, Aws::String&& value) { m_signingParametersHasBeenSet = true; m_signingParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parameters that are available for use by an AWS Signer user.</p>
     */
    inline SigningProfile& AddSigningParameters(Aws::String&& key, const char* value) { m_signingParametersHasBeenSet = true; m_signingParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The parameters that are available for use by an AWS Signer user.</p>
     */
    inline SigningProfile& AddSigningParameters(const char* key, const char* value) { m_signingParametersHasBeenSet = true; m_signingParameters.emplace(key, value); return *this; }


    /**
     * <p>The status of an AWS Signer profile.</p>
     */
    inline const SigningProfileStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of an AWS Signer profile.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of an AWS Signer profile.</p>
     */
    inline void SetStatus(const SigningProfileStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of an AWS Signer profile.</p>
     */
    inline void SetStatus(SigningProfileStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of an AWS Signer profile.</p>
     */
    inline SigningProfile& WithStatus(const SigningProfileStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of an AWS Signer profile.</p>
     */
    inline SigningProfile& WithStatus(SigningProfileStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet;

    SigningMaterial m_signingMaterial;
    bool m_signingMaterialHasBeenSet;

    Aws::String m_platformId;
    bool m_platformIdHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_signingParameters;
    bool m_signingParametersHasBeenSet;

    SigningProfileStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
