/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/StagingDistributionDnsNames.h>
#include <aws/cloudfront/model/TrafficConfig.h>
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
   * <p>Contains the configuration for a continuous deployment policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ContinuousDeploymentPolicyConfig">AWS
   * API Reference</a></p>
   */
  class ContinuousDeploymentPolicyConfig
  {
  public:
    AWS_CLOUDFRONT_API ContinuousDeploymentPolicyConfig() = default;
    AWS_CLOUDFRONT_API ContinuousDeploymentPolicyConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ContinuousDeploymentPolicyConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The CloudFront domain name of the staging distribution. For example:
     * <code>d111111abcdef8.cloudfront.net</code>.</p>
     */
    inline const StagingDistributionDnsNames& GetStagingDistributionDnsNames() const { return m_stagingDistributionDnsNames; }
    inline bool StagingDistributionDnsNamesHasBeenSet() const { return m_stagingDistributionDnsNamesHasBeenSet; }
    template<typename StagingDistributionDnsNamesT = StagingDistributionDnsNames>
    void SetStagingDistributionDnsNames(StagingDistributionDnsNamesT&& value) { m_stagingDistributionDnsNamesHasBeenSet = true; m_stagingDistributionDnsNames = std::forward<StagingDistributionDnsNamesT>(value); }
    template<typename StagingDistributionDnsNamesT = StagingDistributionDnsNames>
    ContinuousDeploymentPolicyConfig& WithStagingDistributionDnsNames(StagingDistributionDnsNamesT&& value) { SetStagingDistributionDnsNames(std::forward<StagingDistributionDnsNamesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean that indicates whether this continuous deployment policy is enabled
     * (in effect). When this value is <code>true</code>, this policy is enabled and in
     * effect. When this value is <code>false</code>, this policy is not enabled and
     * has no effect.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline ContinuousDeploymentPolicyConfig& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the parameters for routing production traffic from your primary to
     * staging distributions.</p>
     */
    inline const TrafficConfig& GetTrafficConfig() const { return m_trafficConfig; }
    inline bool TrafficConfigHasBeenSet() const { return m_trafficConfigHasBeenSet; }
    template<typename TrafficConfigT = TrafficConfig>
    void SetTrafficConfig(TrafficConfigT&& value) { m_trafficConfigHasBeenSet = true; m_trafficConfig = std::forward<TrafficConfigT>(value); }
    template<typename TrafficConfigT = TrafficConfig>
    ContinuousDeploymentPolicyConfig& WithTrafficConfig(TrafficConfigT&& value) { SetTrafficConfig(std::forward<TrafficConfigT>(value)); return *this;}
    ///@}
  private:

    StagingDistributionDnsNames m_stagingDistributionDnsNames;
    bool m_stagingDistributionDnsNamesHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    TrafficConfig m_trafficConfig;
    bool m_trafficConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
