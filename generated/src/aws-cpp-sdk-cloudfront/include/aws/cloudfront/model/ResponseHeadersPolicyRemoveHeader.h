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
    AWS_CLOUDFRONT_API ResponseHeadersPolicyRemoveHeader() = default;
    AWS_CLOUDFRONT_API ResponseHeadersPolicyRemoveHeader(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ResponseHeadersPolicyRemoveHeader& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The HTTP header name.</p>
     */
    inline const Aws::String& GetHeader() const { return m_header; }
    inline bool HeaderHasBeenSet() const { return m_headerHasBeenSet; }
    template<typename HeaderT = Aws::String>
    void SetHeader(HeaderT&& value) { m_headerHasBeenSet = true; m_header = std::forward<HeaderT>(value); }
    template<typename HeaderT = Aws::String>
    ResponseHeadersPolicyRemoveHeader& WithHeader(HeaderT&& value) { SetHeader(std::forward<HeaderT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_header;
    bool m_headerHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
