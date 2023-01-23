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
    AWS_CLOUDFRONT_API ResponseHeadersPolicyCustomHeader();
    AWS_CLOUDFRONT_API ResponseHeadersPolicyCustomHeader(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ResponseHeadersPolicyCustomHeader& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The HTTP response header name.</p>
     */
    inline const Aws::String& GetHeader() const{ return m_header; }

    /**
     * <p>The HTTP response header name.</p>
     */
    inline bool HeaderHasBeenSet() const { return m_headerHasBeenSet; }

    /**
     * <p>The HTTP response header name.</p>
     */
    inline void SetHeader(const Aws::String& value) { m_headerHasBeenSet = true; m_header = value; }

    /**
     * <p>The HTTP response header name.</p>
     */
    inline void SetHeader(Aws::String&& value) { m_headerHasBeenSet = true; m_header = std::move(value); }

    /**
     * <p>The HTTP response header name.</p>
     */
    inline void SetHeader(const char* value) { m_headerHasBeenSet = true; m_header.assign(value); }

    /**
     * <p>The HTTP response header name.</p>
     */
    inline ResponseHeadersPolicyCustomHeader& WithHeader(const Aws::String& value) { SetHeader(value); return *this;}

    /**
     * <p>The HTTP response header name.</p>
     */
    inline ResponseHeadersPolicyCustomHeader& WithHeader(Aws::String&& value) { SetHeader(std::move(value)); return *this;}

    /**
     * <p>The HTTP response header name.</p>
     */
    inline ResponseHeadersPolicyCustomHeader& WithHeader(const char* value) { SetHeader(value); return *this;}


    /**
     * <p>The value for the HTTP response header.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value for the HTTP response header.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value for the HTTP response header.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value for the HTTP response header.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value for the HTTP response header.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value for the HTTP response header.</p>
     */
    inline ResponseHeadersPolicyCustomHeader& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value for the HTTP response header.</p>
     */
    inline ResponseHeadersPolicyCustomHeader& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value for the HTTP response header.</p>
     */
    inline ResponseHeadersPolicyCustomHeader& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>A Boolean that determines whether CloudFront overrides a response header with
     * the same name received from the origin with the header specified here.</p>
     */
    inline bool GetOverride() const{ return m_override; }

    /**
     * <p>A Boolean that determines whether CloudFront overrides a response header with
     * the same name received from the origin with the header specified here.</p>
     */
    inline bool OverrideHasBeenSet() const { return m_overrideHasBeenSet; }

    /**
     * <p>A Boolean that determines whether CloudFront overrides a response header with
     * the same name received from the origin with the header specified here.</p>
     */
    inline void SetOverride(bool value) { m_overrideHasBeenSet = true; m_override = value; }

    /**
     * <p>A Boolean that determines whether CloudFront overrides a response header with
     * the same name received from the origin with the header specified here.</p>
     */
    inline ResponseHeadersPolicyCustomHeader& WithOverride(bool value) { SetOverride(value); return *this;}

  private:

    Aws::String m_header;
    bool m_headerHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    bool m_override;
    bool m_overrideHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
