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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace signer
{
namespace Model
{
  class AWS_SIGNER_API GetSigningPlatformResult
  {
  public:
    GetSigningPlatformResult();
    GetSigningPlatformResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetSigningPlatformResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the target signing platform.</p>
     */
    inline const Aws::String& GetPlatformId() const{ return m_platformId; }

    /**
     * <p>The ID of the target signing platform.</p>
     */
    inline void SetPlatformId(const Aws::String& value) { m_platformId = value; }

    /**
     * <p>The ID of the target signing platform.</p>
     */
    inline void SetPlatformId(Aws::String&& value) { m_platformId = std::move(value); }

    /**
     * <p>The ID of the target signing platform.</p>
     */
    inline void SetPlatformId(const char* value) { m_platformId.assign(value); }

    /**
     * <p>The ID of the target signing platform.</p>
     */
    inline GetSigningPlatformResult& WithPlatformId(const Aws::String& value) { SetPlatformId(value); return *this;}

    /**
     * <p>The ID of the target signing platform.</p>
     */
    inline GetSigningPlatformResult& WithPlatformId(Aws::String&& value) { SetPlatformId(std::move(value)); return *this;}

    /**
     * <p>The ID of the target signing platform.</p>
     */
    inline GetSigningPlatformResult& WithPlatformId(const char* value) { SetPlatformId(value); return *this;}


    /**
     * <p>The display name of the target signing platform.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name of the target signing platform.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }

    /**
     * <p>The display name of the target signing platform.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }

    /**
     * <p>The display name of the target signing platform.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }

    /**
     * <p>The display name of the target signing platform.</p>
     */
    inline GetSigningPlatformResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name of the target signing platform.</p>
     */
    inline GetSigningPlatformResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the target signing platform.</p>
     */
    inline GetSigningPlatformResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>A list of partner entities that use the target signing platform.</p>
     */
    inline const Aws::String& GetPartner() const{ return m_partner; }

    /**
     * <p>A list of partner entities that use the target signing platform.</p>
     */
    inline void SetPartner(const Aws::String& value) { m_partner = value; }

    /**
     * <p>A list of partner entities that use the target signing platform.</p>
     */
    inline void SetPartner(Aws::String&& value) { m_partner = std::move(value); }

    /**
     * <p>A list of partner entities that use the target signing platform.</p>
     */
    inline void SetPartner(const char* value) { m_partner.assign(value); }

    /**
     * <p>A list of partner entities that use the target signing platform.</p>
     */
    inline GetSigningPlatformResult& WithPartner(const Aws::String& value) { SetPartner(value); return *this;}

    /**
     * <p>A list of partner entities that use the target signing platform.</p>
     */
    inline GetSigningPlatformResult& WithPartner(Aws::String&& value) { SetPartner(std::move(value)); return *this;}

    /**
     * <p>A list of partner entities that use the target signing platform.</p>
     */
    inline GetSigningPlatformResult& WithPartner(const char* value) { SetPartner(value); return *this;}


    /**
     * <p>The validation template that is used by the target signing platform.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * <p>The validation template that is used by the target signing platform.</p>
     */
    inline void SetTarget(const Aws::String& value) { m_target = value; }

    /**
     * <p>The validation template that is used by the target signing platform.</p>
     */
    inline void SetTarget(Aws::String&& value) { m_target = std::move(value); }

    /**
     * <p>The validation template that is used by the target signing platform.</p>
     */
    inline void SetTarget(const char* value) { m_target.assign(value); }

    /**
     * <p>The validation template that is used by the target signing platform.</p>
     */
    inline GetSigningPlatformResult& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p>The validation template that is used by the target signing platform.</p>
     */
    inline GetSigningPlatformResult& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * <p>The validation template that is used by the target signing platform.</p>
     */
    inline GetSigningPlatformResult& WithTarget(const char* value) { SetTarget(value); return *this;}


    /**
     * <p>The category type of the target signing platform.</p>
     */
    inline const Category& GetCategory() const{ return m_category; }

    /**
     * <p>The category type of the target signing platform.</p>
     */
    inline void SetCategory(const Category& value) { m_category = value; }

    /**
     * <p>The category type of the target signing platform.</p>
     */
    inline void SetCategory(Category&& value) { m_category = std::move(value); }

    /**
     * <p>The category type of the target signing platform.</p>
     */
    inline GetSigningPlatformResult& WithCategory(const Category& value) { SetCategory(value); return *this;}

    /**
     * <p>The category type of the target signing platform.</p>
     */
    inline GetSigningPlatformResult& WithCategory(Category&& value) { SetCategory(std::move(value)); return *this;}


    /**
     * <p>A list of configurations applied to the target platform at signing.</p>
     */
    inline const SigningConfiguration& GetSigningConfiguration() const{ return m_signingConfiguration; }

    /**
     * <p>A list of configurations applied to the target platform at signing.</p>
     */
    inline void SetSigningConfiguration(const SigningConfiguration& value) { m_signingConfiguration = value; }

    /**
     * <p>A list of configurations applied to the target platform at signing.</p>
     */
    inline void SetSigningConfiguration(SigningConfiguration&& value) { m_signingConfiguration = std::move(value); }

    /**
     * <p>A list of configurations applied to the target platform at signing.</p>
     */
    inline GetSigningPlatformResult& WithSigningConfiguration(const SigningConfiguration& value) { SetSigningConfiguration(value); return *this;}

    /**
     * <p>A list of configurations applied to the target platform at signing.</p>
     */
    inline GetSigningPlatformResult& WithSigningConfiguration(SigningConfiguration&& value) { SetSigningConfiguration(std::move(value)); return *this;}


    /**
     * <p>The format of the target platform's signing image.</p>
     */
    inline const SigningImageFormat& GetSigningImageFormat() const{ return m_signingImageFormat; }

    /**
     * <p>The format of the target platform's signing image.</p>
     */
    inline void SetSigningImageFormat(const SigningImageFormat& value) { m_signingImageFormat = value; }

    /**
     * <p>The format of the target platform's signing image.</p>
     */
    inline void SetSigningImageFormat(SigningImageFormat&& value) { m_signingImageFormat = std::move(value); }

    /**
     * <p>The format of the target platform's signing image.</p>
     */
    inline GetSigningPlatformResult& WithSigningImageFormat(const SigningImageFormat& value) { SetSigningImageFormat(value); return *this;}

    /**
     * <p>The format of the target platform's signing image.</p>
     */
    inline GetSigningPlatformResult& WithSigningImageFormat(SigningImageFormat&& value) { SetSigningImageFormat(std::move(value)); return *this;}


    /**
     * <p>The maximum size (in MB) of the payload that can be signed by the target
     * platform.</p>
     */
    inline int GetMaxSizeInMB() const{ return m_maxSizeInMB; }

    /**
     * <p>The maximum size (in MB) of the payload that can be signed by the target
     * platform.</p>
     */
    inline void SetMaxSizeInMB(int value) { m_maxSizeInMB = value; }

    /**
     * <p>The maximum size (in MB) of the payload that can be signed by the target
     * platform.</p>
     */
    inline GetSigningPlatformResult& WithMaxSizeInMB(int value) { SetMaxSizeInMB(value); return *this;}

  private:

    Aws::String m_platformId;

    Aws::String m_displayName;

    Aws::String m_partner;

    Aws::String m_target;

    Category m_category;

    SigningConfiguration m_signingConfiguration;

    SigningImageFormat m_signingImageFormat;

    int m_maxSizeInMB;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
