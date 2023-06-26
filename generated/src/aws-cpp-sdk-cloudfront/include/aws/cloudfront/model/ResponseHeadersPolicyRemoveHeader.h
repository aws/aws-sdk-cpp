/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * <p>The name of an HTTP header that CloudFront removes from HTTP responses to
   * requests that match the cache behavior that this response headers policy is
   * attached to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ResponseHeadersPolicyRemoveHeader">AWS
   * API Reference</a></p>
   */
  class ResponseHeadersPolicyRemoveHeader
  {
  public:
    AWS_CLOUDFRONT_API ResponseHeadersPolicyRemoveHeader();
    AWS_CLOUDFRONT_API ResponseHeadersPolicyRemoveHeader(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ResponseHeadersPolicyRemoveHeader& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The HTTP header name.</p>
     */
    inline const Aws::String& GetHeader() const{ return m_header; }

    /**
     * <p>The HTTP header name.</p>
     */
    inline bool HeaderHasBeenSet() const { return m_headerHasBeenSet; }

    /**
     * <p>The HTTP header name.</p>
     */
    inline void SetHeader(const Aws::String& value) { m_headerHasBeenSet = true; m_header = value; }

    /**
     * <p>The HTTP header name.</p>
     */
    inline void SetHeader(Aws::String&& value) { m_headerHasBeenSet = true; m_header = std::move(value); }

    /**
     * <p>The HTTP header name.</p>
     */
    inline void SetHeader(const char* value) { m_headerHasBeenSet = true; m_header.assign(value); }

    /**
     * <p>The HTTP header name.</p>
     */
    inline ResponseHeadersPolicyRemoveHeader& WithHeader(const Aws::String& value) { SetHeader(value); return *this;}

    /**
     * <p>The HTTP header name.</p>
     */
    inline ResponseHeadersPolicyRemoveHeader& WithHeader(Aws::String&& value) { SetHeader(std::move(value)); return *this;}

    /**
     * <p>The HTTP header name.</p>
     */
    inline ResponseHeadersPolicyRemoveHeader& WithHeader(const char* value) { SetHeader(value); return *this;}

  private:

    Aws::String m_header;
    bool m_headerHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
