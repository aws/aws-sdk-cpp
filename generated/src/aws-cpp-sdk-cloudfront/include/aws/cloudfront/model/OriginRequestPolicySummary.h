/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/OriginRequestPolicyType.h>
#include <aws/cloudfront/model/OriginRequestPolicy.h>
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
   * <p>Contains an origin request policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/OriginRequestPolicySummary">AWS
   * API Reference</a></p>
   */
  class OriginRequestPolicySummary
  {
  public:
    AWS_CLOUDFRONT_API OriginRequestPolicySummary() = default;
    AWS_CLOUDFRONT_API OriginRequestPolicySummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API OriginRequestPolicySummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The type of origin request policy, either <code>managed</code> (created by
     * Amazon Web Services) or <code>custom</code> (created in this Amazon Web Services
     * account).</p>
     */
    inline OriginRequestPolicyType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(OriginRequestPolicyType value) { m_typeHasBeenSet = true; m_type = value; }
    inline OriginRequestPolicySummary& WithType(OriginRequestPolicyType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The origin request policy.</p>
     */
    inline const OriginRequestPolicy& GetOriginRequestPolicy() const { return m_originRequestPolicy; }
    inline bool OriginRequestPolicyHasBeenSet() const { return m_originRequestPolicyHasBeenSet; }
    template<typename OriginRequestPolicyT = OriginRequestPolicy>
    void SetOriginRequestPolicy(OriginRequestPolicyT&& value) { m_originRequestPolicyHasBeenSet = true; m_originRequestPolicy = std::forward<OriginRequestPolicyT>(value); }
    template<typename OriginRequestPolicyT = OriginRequestPolicy>
    OriginRequestPolicySummary& WithOriginRequestPolicy(OriginRequestPolicyT&& value) { SetOriginRequestPolicy(std::forward<OriginRequestPolicyT>(value)); return *this;}
    ///@}
  private:

    OriginRequestPolicyType m_type{OriginRequestPolicyType::NOT_SET};
    bool m_typeHasBeenSet = false;

    OriginRequestPolicy m_originRequestPolicy;
    bool m_originRequestPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
