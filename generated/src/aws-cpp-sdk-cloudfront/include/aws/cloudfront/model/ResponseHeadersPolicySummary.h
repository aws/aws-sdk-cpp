/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/ResponseHeadersPolicyType.h>
#include <aws/cloudfront/model/ResponseHeadersPolicy.h>
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
   * <p>Contains a response headers policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ResponseHeadersPolicySummary">AWS
   * API Reference</a></p>
   */
  class ResponseHeadersPolicySummary
  {
  public:
    AWS_CLOUDFRONT_API ResponseHeadersPolicySummary() = default;
    AWS_CLOUDFRONT_API ResponseHeadersPolicySummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ResponseHeadersPolicySummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The type of response headers policy, either <code>managed</code> (created by
     * Amazon Web Services) or <code>custom</code> (created in this Amazon Web Services
     * account).</p>
     */
    inline ResponseHeadersPolicyType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ResponseHeadersPolicyType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ResponseHeadersPolicySummary& WithType(ResponseHeadersPolicyType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response headers policy.</p>
     */
    inline const ResponseHeadersPolicy& GetResponseHeadersPolicy() const { return m_responseHeadersPolicy; }
    inline bool ResponseHeadersPolicyHasBeenSet() const { return m_responseHeadersPolicyHasBeenSet; }
    template<typename ResponseHeadersPolicyT = ResponseHeadersPolicy>
    void SetResponseHeadersPolicy(ResponseHeadersPolicyT&& value) { m_responseHeadersPolicyHasBeenSet = true; m_responseHeadersPolicy = std::forward<ResponseHeadersPolicyT>(value); }
    template<typename ResponseHeadersPolicyT = ResponseHeadersPolicy>
    ResponseHeadersPolicySummary& WithResponseHeadersPolicy(ResponseHeadersPolicyT&& value) { SetResponseHeadersPolicy(std::forward<ResponseHeadersPolicyT>(value)); return *this;}
    ///@}
  private:

    ResponseHeadersPolicyType m_type{ResponseHeadersPolicyType::NOT_SET};
    bool m_typeHasBeenSet = false;

    ResponseHeadersPolicy m_responseHeadersPolicy;
    bool m_responseHeadersPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
