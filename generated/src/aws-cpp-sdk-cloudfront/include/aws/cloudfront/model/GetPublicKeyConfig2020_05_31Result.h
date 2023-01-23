/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/PublicKeyConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{
  class GetPublicKeyConfig2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API GetPublicKeyConfig2020_05_31Result();
    AWS_CLOUDFRONT_API GetPublicKeyConfig2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API GetPublicKeyConfig2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A public key configuration.</p>
     */
    inline const PublicKeyConfig& GetPublicKeyConfig() const{ return m_publicKeyConfig; }

    /**
     * <p>A public key configuration.</p>
     */
    inline void SetPublicKeyConfig(const PublicKeyConfig& value) { m_publicKeyConfig = value; }

    /**
     * <p>A public key configuration.</p>
     */
    inline void SetPublicKeyConfig(PublicKeyConfig&& value) { m_publicKeyConfig = std::move(value); }

    /**
     * <p>A public key configuration.</p>
     */
    inline GetPublicKeyConfig2020_05_31Result& WithPublicKeyConfig(const PublicKeyConfig& value) { SetPublicKeyConfig(value); return *this;}

    /**
     * <p>A public key configuration.</p>
     */
    inline GetPublicKeyConfig2020_05_31Result& WithPublicKeyConfig(PublicKeyConfig&& value) { SetPublicKeyConfig(std::move(value)); return *this;}


    /**
     * <p>The identifier for this version of the public key configuration.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The identifier for this version of the public key configuration.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * <p>The identifier for this version of the public key configuration.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }

    /**
     * <p>The identifier for this version of the public key configuration.</p>
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * <p>The identifier for this version of the public key configuration.</p>
     */
    inline GetPublicKeyConfig2020_05_31Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The identifier for this version of the public key configuration.</p>
     */
    inline GetPublicKeyConfig2020_05_31Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The identifier for this version of the public key configuration.</p>
     */
    inline GetPublicKeyConfig2020_05_31Result& WithETag(const char* value) { SetETag(value); return *this;}

  private:

    PublicKeyConfig m_publicKeyConfig;

    Aws::String m_eTag;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
