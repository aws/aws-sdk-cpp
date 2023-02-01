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
   * <p>This configuration determines which HTTP requests are sent to the staging
   * distribution. If the HTTP request contains a header and value that matches what
   * you specify here, the request is sent to the staging distribution. Otherwise the
   * request is sent to the primary distribution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ContinuousDeploymentSingleHeaderConfig">AWS
   * API Reference</a></p>
   */
  class ContinuousDeploymentSingleHeaderConfig
  {
  public:
    AWS_CLOUDFRONT_API ContinuousDeploymentSingleHeaderConfig();
    AWS_CLOUDFRONT_API ContinuousDeploymentSingleHeaderConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ContinuousDeploymentSingleHeaderConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The request header name that you want CloudFront to send to your staging
     * distribution. The header must contain the prefix <code>aws-cf-cd-</code>.</p>
     */
    inline const Aws::String& GetHeader() const{ return m_header; }

    /**
     * <p>The request header name that you want CloudFront to send to your staging
     * distribution. The header must contain the prefix <code>aws-cf-cd-</code>.</p>
     */
    inline bool HeaderHasBeenSet() const { return m_headerHasBeenSet; }

    /**
     * <p>The request header name that you want CloudFront to send to your staging
     * distribution. The header must contain the prefix <code>aws-cf-cd-</code>.</p>
     */
    inline void SetHeader(const Aws::String& value) { m_headerHasBeenSet = true; m_header = value; }

    /**
     * <p>The request header name that you want CloudFront to send to your staging
     * distribution. The header must contain the prefix <code>aws-cf-cd-</code>.</p>
     */
    inline void SetHeader(Aws::String&& value) { m_headerHasBeenSet = true; m_header = std::move(value); }

    /**
     * <p>The request header name that you want CloudFront to send to your staging
     * distribution. The header must contain the prefix <code>aws-cf-cd-</code>.</p>
     */
    inline void SetHeader(const char* value) { m_headerHasBeenSet = true; m_header.assign(value); }

    /**
     * <p>The request header name that you want CloudFront to send to your staging
     * distribution. The header must contain the prefix <code>aws-cf-cd-</code>.</p>
     */
    inline ContinuousDeploymentSingleHeaderConfig& WithHeader(const Aws::String& value) { SetHeader(value); return *this;}

    /**
     * <p>The request header name that you want CloudFront to send to your staging
     * distribution. The header must contain the prefix <code>aws-cf-cd-</code>.</p>
     */
    inline ContinuousDeploymentSingleHeaderConfig& WithHeader(Aws::String&& value) { SetHeader(std::move(value)); return *this;}

    /**
     * <p>The request header name that you want CloudFront to send to your staging
     * distribution. The header must contain the prefix <code>aws-cf-cd-</code>.</p>
     */
    inline ContinuousDeploymentSingleHeaderConfig& WithHeader(const char* value) { SetHeader(value); return *this;}


    /**
     * <p>The request header value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The request header value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The request header value.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The request header value.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The request header value.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The request header value.</p>
     */
    inline ContinuousDeploymentSingleHeaderConfig& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The request header value.</p>
     */
    inline ContinuousDeploymentSingleHeaderConfig& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The request header value.</p>
     */
    inline ContinuousDeploymentSingleHeaderConfig& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_header;
    bool m_headerHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
