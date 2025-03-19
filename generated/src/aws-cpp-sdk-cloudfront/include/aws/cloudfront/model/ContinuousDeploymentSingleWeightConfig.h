/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/SessionStickinessConfig.h>
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
   * <p>Contains the percentage of traffic to send to a staging
   * distribution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ContinuousDeploymentSingleWeightConfig">AWS
   * API Reference</a></p>
   */
  class ContinuousDeploymentSingleWeightConfig
  {
  public:
    AWS_CLOUDFRONT_API ContinuousDeploymentSingleWeightConfig() = default;
    AWS_CLOUDFRONT_API ContinuousDeploymentSingleWeightConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ContinuousDeploymentSingleWeightConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The percentage of traffic to send to a staging distribution, expressed as a
     * decimal number between 0 and 0.15. For example, a value of 0.10 means 10% of
     * traffic is sent to the staging distribution.</p>
     */
    inline double GetWeight() const { return m_weight; }
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }
    inline void SetWeight(double value) { m_weightHasBeenSet = true; m_weight = value; }
    inline ContinuousDeploymentSingleWeightConfig& WithWeight(double value) { SetWeight(value); return *this;}
    ///@}

    ///@{
    
    inline const SessionStickinessConfig& GetSessionStickinessConfig() const { return m_sessionStickinessConfig; }
    inline bool SessionStickinessConfigHasBeenSet() const { return m_sessionStickinessConfigHasBeenSet; }
    template<typename SessionStickinessConfigT = SessionStickinessConfig>
    void SetSessionStickinessConfig(SessionStickinessConfigT&& value) { m_sessionStickinessConfigHasBeenSet = true; m_sessionStickinessConfig = std::forward<SessionStickinessConfigT>(value); }
    template<typename SessionStickinessConfigT = SessionStickinessConfig>
    ContinuousDeploymentSingleWeightConfig& WithSessionStickinessConfig(SessionStickinessConfigT&& value) { SetSessionStickinessConfig(std::forward<SessionStickinessConfigT>(value)); return *this;}
    ///@}
  private:

    double m_weight{0.0};
    bool m_weightHasBeenSet = false;

    SessionStickinessConfig m_sessionStickinessConfig;
    bool m_sessionStickinessConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
