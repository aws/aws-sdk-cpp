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
    AWS_CLOUDFRONT_API ContinuousDeploymentSingleWeightConfig();
    AWS_CLOUDFRONT_API ContinuousDeploymentSingleWeightConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ContinuousDeploymentSingleWeightConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The percentage of traffic to send to a staging distribution, expressed as a
     * decimal number between 0 and .15.</p>
     */
    inline double GetWeight() const{ return m_weight; }

    /**
     * <p>The percentage of traffic to send to a staging distribution, expressed as a
     * decimal number between 0 and .15.</p>
     */
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }

    /**
     * <p>The percentage of traffic to send to a staging distribution, expressed as a
     * decimal number between 0 and .15.</p>
     */
    inline void SetWeight(double value) { m_weightHasBeenSet = true; m_weight = value; }

    /**
     * <p>The percentage of traffic to send to a staging distribution, expressed as a
     * decimal number between 0 and .15.</p>
     */
    inline ContinuousDeploymentSingleWeightConfig& WithWeight(double value) { SetWeight(value); return *this;}


    
    inline const SessionStickinessConfig& GetSessionStickinessConfig() const{ return m_sessionStickinessConfig; }

    
    inline bool SessionStickinessConfigHasBeenSet() const { return m_sessionStickinessConfigHasBeenSet; }

    
    inline void SetSessionStickinessConfig(const SessionStickinessConfig& value) { m_sessionStickinessConfigHasBeenSet = true; m_sessionStickinessConfig = value; }

    
    inline void SetSessionStickinessConfig(SessionStickinessConfig&& value) { m_sessionStickinessConfigHasBeenSet = true; m_sessionStickinessConfig = std::move(value); }

    
    inline ContinuousDeploymentSingleWeightConfig& WithSessionStickinessConfig(const SessionStickinessConfig& value) { SetSessionStickinessConfig(value); return *this;}

    
    inline ContinuousDeploymentSingleWeightConfig& WithSessionStickinessConfig(SessionStickinessConfig&& value) { SetSessionStickinessConfig(std::move(value)); return *this;}

  private:

    double m_weight;
    bool m_weightHasBeenSet = false;

    SessionStickinessConfig m_sessionStickinessConfig;
    bool m_sessionStickinessConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
