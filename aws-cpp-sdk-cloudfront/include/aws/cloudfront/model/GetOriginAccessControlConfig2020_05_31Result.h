/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/OriginAccessControlConfig.h>
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
  class GetOriginAccessControlConfig2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API GetOriginAccessControlConfig2020_05_31Result();
    AWS_CLOUDFRONT_API GetOriginAccessControlConfig2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API GetOriginAccessControlConfig2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Contains an origin access control configuration.</p>
     */
    inline const OriginAccessControlConfig& GetOriginAccessControlConfig() const{ return m_originAccessControlConfig; }

    /**
     * <p>Contains an origin access control configuration.</p>
     */
    inline void SetOriginAccessControlConfig(const OriginAccessControlConfig& value) { m_originAccessControlConfig = value; }

    /**
     * <p>Contains an origin access control configuration.</p>
     */
    inline void SetOriginAccessControlConfig(OriginAccessControlConfig&& value) { m_originAccessControlConfig = std::move(value); }

    /**
     * <p>Contains an origin access control configuration.</p>
     */
    inline GetOriginAccessControlConfig2020_05_31Result& WithOriginAccessControlConfig(const OriginAccessControlConfig& value) { SetOriginAccessControlConfig(value); return *this;}

    /**
     * <p>Contains an origin access control configuration.</p>
     */
    inline GetOriginAccessControlConfig2020_05_31Result& WithOriginAccessControlConfig(OriginAccessControlConfig&& value) { SetOriginAccessControlConfig(std::move(value)); return *this;}


    /**
     * <p>The version identifier for the current version of the origin access
     * control.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The version identifier for the current version of the origin access
     * control.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * <p>The version identifier for the current version of the origin access
     * control.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }

    /**
     * <p>The version identifier for the current version of the origin access
     * control.</p>
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * <p>The version identifier for the current version of the origin access
     * control.</p>
     */
    inline GetOriginAccessControlConfig2020_05_31Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The version identifier for the current version of the origin access
     * control.</p>
     */
    inline GetOriginAccessControlConfig2020_05_31Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The version identifier for the current version of the origin access
     * control.</p>
     */
    inline GetOriginAccessControlConfig2020_05_31Result& WithETag(const char* value) { SetETag(value); return *this;}

  private:

    OriginAccessControlConfig m_originAccessControlConfig;

    Aws::String m_eTag;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
