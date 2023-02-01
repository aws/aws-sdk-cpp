/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/OriginRequestPolicyConfig.h>
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
  class GetOriginRequestPolicyConfig2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API GetOriginRequestPolicyConfig2020_05_31Result();
    AWS_CLOUDFRONT_API GetOriginRequestPolicyConfig2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API GetOriginRequestPolicyConfig2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The origin request policy configuration.</p>
     */
    inline const OriginRequestPolicyConfig& GetOriginRequestPolicyConfig() const{ return m_originRequestPolicyConfig; }

    /**
     * <p>The origin request policy configuration.</p>
     */
    inline void SetOriginRequestPolicyConfig(const OriginRequestPolicyConfig& value) { m_originRequestPolicyConfig = value; }

    /**
     * <p>The origin request policy configuration.</p>
     */
    inline void SetOriginRequestPolicyConfig(OriginRequestPolicyConfig&& value) { m_originRequestPolicyConfig = std::move(value); }

    /**
     * <p>The origin request policy configuration.</p>
     */
    inline GetOriginRequestPolicyConfig2020_05_31Result& WithOriginRequestPolicyConfig(const OriginRequestPolicyConfig& value) { SetOriginRequestPolicyConfig(value); return *this;}

    /**
     * <p>The origin request policy configuration.</p>
     */
    inline GetOriginRequestPolicyConfig2020_05_31Result& WithOriginRequestPolicyConfig(OriginRequestPolicyConfig&& value) { SetOriginRequestPolicyConfig(std::move(value)); return *this;}


    /**
     * <p>The current version of the origin request policy.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The current version of the origin request policy.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * <p>The current version of the origin request policy.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }

    /**
     * <p>The current version of the origin request policy.</p>
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * <p>The current version of the origin request policy.</p>
     */
    inline GetOriginRequestPolicyConfig2020_05_31Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The current version of the origin request policy.</p>
     */
    inline GetOriginRequestPolicyConfig2020_05_31Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The current version of the origin request policy.</p>
     */
    inline GetOriginRequestPolicyConfig2020_05_31Result& WithETag(const char* value) { SetETag(value); return *this;}

  private:

    OriginRequestPolicyConfig m_originRequestPolicyConfig;

    Aws::String m_eTag;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
