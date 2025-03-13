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
    AWS_CLOUDFRONT_API ContinuousDeploymentSingleHeaderConfig() = default;
    AWS_CLOUDFRONT_API ContinuousDeploymentSingleHeaderConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ContinuousDeploymentSingleHeaderConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The request header name that you want CloudFront to send to your staging
     * distribution. The header must contain the prefix <code>aws-cf-cd-</code>.</p>
     */
    inline const Aws::String& GetHeader() const { return m_header; }
    inline bool HeaderHasBeenSet() const { return m_headerHasBeenSet; }
    template<typename HeaderT = Aws::String>
    void SetHeader(HeaderT&& value) { m_headerHasBeenSet = true; m_header = std::forward<HeaderT>(value); }
    template<typename HeaderT = Aws::String>
    ContinuousDeploymentSingleHeaderConfig& WithHeader(HeaderT&& value) { SetHeader(std::forward<HeaderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request header value.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    ContinuousDeploymentSingleHeaderConfig& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_header;
    bool m_headerHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
