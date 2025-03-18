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
   * <p>An HTTP response header name and its value. CloudFront includes this header
   * in HTTP responses that it sends for requests that match a cache behavior that's
   * associated with this response headers policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ResponseHeadersPolicyCustomHeader">AWS
   * API Reference</a></p>
   */
  class ResponseHeadersPolicyCustomHeader
  {
  public:
    AWS_CLOUDFRONT_API ResponseHeadersPolicyCustomHeader() = default;
    AWS_CLOUDFRONT_API ResponseHeadersPolicyCustomHeader(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ResponseHeadersPolicyCustomHeader& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The HTTP response header name.</p>
     */
    inline const Aws::String& GetHeader() const { return m_header; }
    inline bool HeaderHasBeenSet() const { return m_headerHasBeenSet; }
    template<typename HeaderT = Aws::String>
    void SetHeader(HeaderT&& value) { m_headerHasBeenSet = true; m_header = std::forward<HeaderT>(value); }
    template<typename HeaderT = Aws::String>
    ResponseHeadersPolicyCustomHeader& WithHeader(HeaderT&& value) { SetHeader(std::forward<HeaderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for the HTTP response header.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    ResponseHeadersPolicyCustomHeader& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean that determines whether CloudFront overrides a response header with
     * the same name received from the origin with the header specified here.</p>
     */
    inline bool GetOverride() const { return m_override; }
    inline bool OverrideHasBeenSet() const { return m_overrideHasBeenSet; }
    inline void SetOverride(bool value) { m_overrideHasBeenSet = true; m_override = value; }
    inline ResponseHeadersPolicyCustomHeader& WithOverride(bool value) { SetOverride(value); return *this;}
    ///@}
  private:

    Aws::String m_header;
    bool m_headerHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    bool m_override{false};
    bool m_overrideHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
