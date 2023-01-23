/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/ResponseHeadersPolicyConfig.h>
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
  class GetResponseHeadersPolicyConfig2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API GetResponseHeadersPolicyConfig2020_05_31Result();
    AWS_CLOUDFRONT_API GetResponseHeadersPolicyConfig2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API GetResponseHeadersPolicyConfig2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Contains a response headers policy.</p>
     */
    inline const ResponseHeadersPolicyConfig& GetResponseHeadersPolicyConfig() const{ return m_responseHeadersPolicyConfig; }

    /**
     * <p>Contains a response headers policy.</p>
     */
    inline void SetResponseHeadersPolicyConfig(const ResponseHeadersPolicyConfig& value) { m_responseHeadersPolicyConfig = value; }

    /**
     * <p>Contains a response headers policy.</p>
     */
    inline void SetResponseHeadersPolicyConfig(ResponseHeadersPolicyConfig&& value) { m_responseHeadersPolicyConfig = std::move(value); }

    /**
     * <p>Contains a response headers policy.</p>
     */
    inline GetResponseHeadersPolicyConfig2020_05_31Result& WithResponseHeadersPolicyConfig(const ResponseHeadersPolicyConfig& value) { SetResponseHeadersPolicyConfig(value); return *this;}

    /**
     * <p>Contains a response headers policy.</p>
     */
    inline GetResponseHeadersPolicyConfig2020_05_31Result& WithResponseHeadersPolicyConfig(ResponseHeadersPolicyConfig&& value) { SetResponseHeadersPolicyConfig(std::move(value)); return *this;}


    /**
     * <p>The version identifier for the current version of the response headers
     * policy.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The version identifier for the current version of the response headers
     * policy.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * <p>The version identifier for the current version of the response headers
     * policy.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }

    /**
     * <p>The version identifier for the current version of the response headers
     * policy.</p>
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * <p>The version identifier for the current version of the response headers
     * policy.</p>
     */
    inline GetResponseHeadersPolicyConfig2020_05_31Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The version identifier for the current version of the response headers
     * policy.</p>
     */
    inline GetResponseHeadersPolicyConfig2020_05_31Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The version identifier for the current version of the response headers
     * policy.</p>
     */
    inline GetResponseHeadersPolicyConfig2020_05_31Result& WithETag(const char* value) { SetETag(value); return *this;}

  private:

    ResponseHeadersPolicyConfig m_responseHeadersPolicyConfig;

    Aws::String m_eTag;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
