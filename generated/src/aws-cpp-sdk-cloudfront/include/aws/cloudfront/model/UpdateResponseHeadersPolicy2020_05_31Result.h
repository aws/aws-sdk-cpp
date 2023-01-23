/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/ResponseHeadersPolicy.h>
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
  class UpdateResponseHeadersPolicy2020_05_31Result
  {
  public:
    AWS_CLOUDFRONT_API UpdateResponseHeadersPolicy2020_05_31Result();
    AWS_CLOUDFRONT_API UpdateResponseHeadersPolicy2020_05_31Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDFRONT_API UpdateResponseHeadersPolicy2020_05_31Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A response headers policy.</p>
     */
    inline const ResponseHeadersPolicy& GetResponseHeadersPolicy() const{ return m_responseHeadersPolicy; }

    /**
     * <p>A response headers policy.</p>
     */
    inline void SetResponseHeadersPolicy(const ResponseHeadersPolicy& value) { m_responseHeadersPolicy = value; }

    /**
     * <p>A response headers policy.</p>
     */
    inline void SetResponseHeadersPolicy(ResponseHeadersPolicy&& value) { m_responseHeadersPolicy = std::move(value); }

    /**
     * <p>A response headers policy.</p>
     */
    inline UpdateResponseHeadersPolicy2020_05_31Result& WithResponseHeadersPolicy(const ResponseHeadersPolicy& value) { SetResponseHeadersPolicy(value); return *this;}

    /**
     * <p>A response headers policy.</p>
     */
    inline UpdateResponseHeadersPolicy2020_05_31Result& WithResponseHeadersPolicy(ResponseHeadersPolicy&& value) { SetResponseHeadersPolicy(std::move(value)); return *this;}


    /**
     * <p>The current version of the response headers policy.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The current version of the response headers policy.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * <p>The current version of the response headers policy.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }

    /**
     * <p>The current version of the response headers policy.</p>
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * <p>The current version of the response headers policy.</p>
     */
    inline UpdateResponseHeadersPolicy2020_05_31Result& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The current version of the response headers policy.</p>
     */
    inline UpdateResponseHeadersPolicy2020_05_31Result& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The current version of the response headers policy.</p>
     */
    inline UpdateResponseHeadersPolicy2020_05_31Result& WithETag(const char* value) { SetETag(value); return *this;}

  private:

    ResponseHeadersPolicy m_responseHeadersPolicy;

    Aws::String m_eTag;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
