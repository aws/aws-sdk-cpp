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
    AWS_CLOUDFRONT_API ResponseHeadersPolicySummary();
    AWS_CLOUDFRONT_API ResponseHeadersPolicySummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ResponseHeadersPolicySummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The type of response headers policy, either <code>managed</code> (created by
     * Amazon Web Services) or <code>custom</code> (created in this Amazon Web Services
     * account).</p>
     */
    inline const ResponseHeadersPolicyType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ResponseHeadersPolicyType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ResponseHeadersPolicyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ResponseHeadersPolicySummary& WithType(const ResponseHeadersPolicyType& value) { SetType(value); return *this;}
    inline ResponseHeadersPolicySummary& WithType(ResponseHeadersPolicyType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response headers policy.</p>
     */
    inline const ResponseHeadersPolicy& GetResponseHeadersPolicy() const{ return m_responseHeadersPolicy; }
    inline bool ResponseHeadersPolicyHasBeenSet() const { return m_responseHeadersPolicyHasBeenSet; }
    inline void SetResponseHeadersPolicy(const ResponseHeadersPolicy& value) { m_responseHeadersPolicyHasBeenSet = true; m_responseHeadersPolicy = value; }
    inline void SetResponseHeadersPolicy(ResponseHeadersPolicy&& value) { m_responseHeadersPolicyHasBeenSet = true; m_responseHeadersPolicy = std::move(value); }
    inline ResponseHeadersPolicySummary& WithResponseHeadersPolicy(const ResponseHeadersPolicy& value) { SetResponseHeadersPolicy(value); return *this;}
    inline ResponseHeadersPolicySummary& WithResponseHeadersPolicy(ResponseHeadersPolicy&& value) { SetResponseHeadersPolicy(std::move(value)); return *this;}
    ///@}
  private:

    ResponseHeadersPolicyType m_type;
    bool m_typeHasBeenSet = false;

    ResponseHeadersPolicy m_responseHeadersPolicy;
    bool m_responseHeadersPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
