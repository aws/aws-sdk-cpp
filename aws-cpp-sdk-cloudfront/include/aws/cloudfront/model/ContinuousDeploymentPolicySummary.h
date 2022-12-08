/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/ContinuousDeploymentPolicy.h>
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
   * <p>A summary of the information about your continuous deployment
   * policies.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ContinuousDeploymentPolicySummary">AWS
   * API Reference</a></p>
   */
  class ContinuousDeploymentPolicySummary
  {
  public:
    AWS_CLOUDFRONT_API ContinuousDeploymentPolicySummary();
    AWS_CLOUDFRONT_API ContinuousDeploymentPolicySummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ContinuousDeploymentPolicySummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The continuous deployment policy.</p>
     */
    inline const ContinuousDeploymentPolicy& GetContinuousDeploymentPolicy() const{ return m_continuousDeploymentPolicy; }

    /**
     * <p>The continuous deployment policy.</p>
     */
    inline bool ContinuousDeploymentPolicyHasBeenSet() const { return m_continuousDeploymentPolicyHasBeenSet; }

    /**
     * <p>The continuous deployment policy.</p>
     */
    inline void SetContinuousDeploymentPolicy(const ContinuousDeploymentPolicy& value) { m_continuousDeploymentPolicyHasBeenSet = true; m_continuousDeploymentPolicy = value; }

    /**
     * <p>The continuous deployment policy.</p>
     */
    inline void SetContinuousDeploymentPolicy(ContinuousDeploymentPolicy&& value) { m_continuousDeploymentPolicyHasBeenSet = true; m_continuousDeploymentPolicy = std::move(value); }

    /**
     * <p>The continuous deployment policy.</p>
     */
    inline ContinuousDeploymentPolicySummary& WithContinuousDeploymentPolicy(const ContinuousDeploymentPolicy& value) { SetContinuousDeploymentPolicy(value); return *this;}

    /**
     * <p>The continuous deployment policy.</p>
     */
    inline ContinuousDeploymentPolicySummary& WithContinuousDeploymentPolicy(ContinuousDeploymentPolicy&& value) { SetContinuousDeploymentPolicy(std::move(value)); return *this;}

  private:

    ContinuousDeploymentPolicy m_continuousDeploymentPolicy;
    bool m_continuousDeploymentPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
