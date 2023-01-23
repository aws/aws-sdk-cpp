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
    AWS_CLOUDFRONT_API OriginRequestPolicySummary();
    AWS_CLOUDFRONT_API OriginRequestPolicySummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API OriginRequestPolicySummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The type of origin request policy, either <code>managed</code> (created by
     * Amazon Web Services) or <code>custom</code> (created in this Amazon Web Services
     * account).</p>
     */
    inline const OriginRequestPolicyType& GetType() const{ return m_type; }

    /**
     * <p>The type of origin request policy, either <code>managed</code> (created by
     * Amazon Web Services) or <code>custom</code> (created in this Amazon Web Services
     * account).</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of origin request policy, either <code>managed</code> (created by
     * Amazon Web Services) or <code>custom</code> (created in this Amazon Web Services
     * account).</p>
     */
    inline void SetType(const OriginRequestPolicyType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of origin request policy, either <code>managed</code> (created by
     * Amazon Web Services) or <code>custom</code> (created in this Amazon Web Services
     * account).</p>
     */
    inline void SetType(OriginRequestPolicyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of origin request policy, either <code>managed</code> (created by
     * Amazon Web Services) or <code>custom</code> (created in this Amazon Web Services
     * account).</p>
     */
    inline OriginRequestPolicySummary& WithType(const OriginRequestPolicyType& value) { SetType(value); return *this;}

    /**
     * <p>The type of origin request policy, either <code>managed</code> (created by
     * Amazon Web Services) or <code>custom</code> (created in this Amazon Web Services
     * account).</p>
     */
    inline OriginRequestPolicySummary& WithType(OriginRequestPolicyType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The origin request policy.</p>
     */
    inline const OriginRequestPolicy& GetOriginRequestPolicy() const{ return m_originRequestPolicy; }

    /**
     * <p>The origin request policy.</p>
     */
    inline bool OriginRequestPolicyHasBeenSet() const { return m_originRequestPolicyHasBeenSet; }

    /**
     * <p>The origin request policy.</p>
     */
    inline void SetOriginRequestPolicy(const OriginRequestPolicy& value) { m_originRequestPolicyHasBeenSet = true; m_originRequestPolicy = value; }

    /**
     * <p>The origin request policy.</p>
     */
    inline void SetOriginRequestPolicy(OriginRequestPolicy&& value) { m_originRequestPolicyHasBeenSet = true; m_originRequestPolicy = std::move(value); }

    /**
     * <p>The origin request policy.</p>
     */
    inline OriginRequestPolicySummary& WithOriginRequestPolicy(const OriginRequestPolicy& value) { SetOriginRequestPolicy(value); return *this;}

    /**
     * <p>The origin request policy.</p>
     */
    inline OriginRequestPolicySummary& WithOriginRequestPolicy(OriginRequestPolicy&& value) { SetOriginRequestPolicy(std::move(value)); return *this;}

  private:

    OriginRequestPolicyType m_type;
    bool m_typeHasBeenSet = false;

    OriginRequestPolicy m_originRequestPolicy;
    bool m_originRequestPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
