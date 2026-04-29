/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace CloudFront {
namespace Model {

/**
 * <p>A complex type that specifies the HTTP header name from which CloudFront
 * extracts cache tags from origin responses. When you add
 * <code>CacheTagConfig</code> to a distribution, CloudFront reads the specified
 * header from origin responses, parses the comma-separated tag values, and stores
 * them with the cached object. You can then invalidate cached objects by tag using
 * the <code>CreateInvalidation</code> API.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/CacheTagConfig">AWS
 * API Reference</a></p>
 */
class CacheTagConfig {
 public:
  AWS_CLOUDFRONT_API CacheTagConfig() = default;
  AWS_CLOUDFRONT_API CacheTagConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_CLOUDFRONT_API CacheTagConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The name of the HTTP header that your origin includes in responses.
   * CloudFront uses this header to extract cache tags. The header value must contain
   * comma-separated tag values (for example, <code>product:electronics, category:tv,
   * brand:example</code>).</p>
   */
  inline const Aws::String& GetHeaderName() const { return m_headerName; }
  inline bool HeaderNameHasBeenSet() const { return m_headerNameHasBeenSet; }
  template <typename HeaderNameT = Aws::String>
  void SetHeaderName(HeaderNameT&& value) {
    m_headerNameHasBeenSet = true;
    m_headerName = std::forward<HeaderNameT>(value);
  }
  template <typename HeaderNameT = Aws::String>
  CacheTagConfig& WithHeaderName(HeaderNameT&& value) {
    SetHeaderName(std::forward<HeaderNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_headerName;
  bool m_headerNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
