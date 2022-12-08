/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/ContinuousDeploymentSingleWeightConfig.h>
#include <aws/cloudfront/model/ContinuousDeploymentSingleHeaderConfig.h>
#include <aws/cloudfront/model/ContinuousDeploymentPolicyType.h>
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
   * <p>The traffic configuration of your continuous deployment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/TrafficConfig">AWS
   * API Reference</a></p>
   */
  class TrafficConfig
  {
  public:
    AWS_CLOUDFRONT_API TrafficConfig();
    AWS_CLOUDFRONT_API TrafficConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API TrafficConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Contains the percentage of traffic to send to the staging distribution.</p>
     */
    inline const ContinuousDeploymentSingleWeightConfig& GetSingleWeightConfig() const{ return m_singleWeightConfig; }

    /**
     * <p>Contains the percentage of traffic to send to the staging distribution.</p>
     */
    inline bool SingleWeightConfigHasBeenSet() const { return m_singleWeightConfigHasBeenSet; }

    /**
     * <p>Contains the percentage of traffic to send to the staging distribution.</p>
     */
    inline void SetSingleWeightConfig(const ContinuousDeploymentSingleWeightConfig& value) { m_singleWeightConfigHasBeenSet = true; m_singleWeightConfig = value; }

    /**
     * <p>Contains the percentage of traffic to send to the staging distribution.</p>
     */
    inline void SetSingleWeightConfig(ContinuousDeploymentSingleWeightConfig&& value) { m_singleWeightConfigHasBeenSet = true; m_singleWeightConfig = std::move(value); }

    /**
     * <p>Contains the percentage of traffic to send to the staging distribution.</p>
     */
    inline TrafficConfig& WithSingleWeightConfig(const ContinuousDeploymentSingleWeightConfig& value) { SetSingleWeightConfig(value); return *this;}

    /**
     * <p>Contains the percentage of traffic to send to the staging distribution.</p>
     */
    inline TrafficConfig& WithSingleWeightConfig(ContinuousDeploymentSingleWeightConfig&& value) { SetSingleWeightConfig(std::move(value)); return *this;}


    /**
     * <p>Determines which HTTP requests are sent to the staging distribution.</p>
     */
    inline const ContinuousDeploymentSingleHeaderConfig& GetSingleHeaderConfig() const{ return m_singleHeaderConfig; }

    /**
     * <p>Determines which HTTP requests are sent to the staging distribution.</p>
     */
    inline bool SingleHeaderConfigHasBeenSet() const { return m_singleHeaderConfigHasBeenSet; }

    /**
     * <p>Determines which HTTP requests are sent to the staging distribution.</p>
     */
    inline void SetSingleHeaderConfig(const ContinuousDeploymentSingleHeaderConfig& value) { m_singleHeaderConfigHasBeenSet = true; m_singleHeaderConfig = value; }

    /**
     * <p>Determines which HTTP requests are sent to the staging distribution.</p>
     */
    inline void SetSingleHeaderConfig(ContinuousDeploymentSingleHeaderConfig&& value) { m_singleHeaderConfigHasBeenSet = true; m_singleHeaderConfig = std::move(value); }

    /**
     * <p>Determines which HTTP requests are sent to the staging distribution.</p>
     */
    inline TrafficConfig& WithSingleHeaderConfig(const ContinuousDeploymentSingleHeaderConfig& value) { SetSingleHeaderConfig(value); return *this;}

    /**
     * <p>Determines which HTTP requests are sent to the staging distribution.</p>
     */
    inline TrafficConfig& WithSingleHeaderConfig(ContinuousDeploymentSingleHeaderConfig&& value) { SetSingleHeaderConfig(std::move(value)); return *this;}


    /**
     * <p>The type of traffic configuration.</p>
     */
    inline const ContinuousDeploymentPolicyType& GetType() const{ return m_type; }

    /**
     * <p>The type of traffic configuration.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of traffic configuration.</p>
     */
    inline void SetType(const ContinuousDeploymentPolicyType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of traffic configuration.</p>
     */
    inline void SetType(ContinuousDeploymentPolicyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of traffic configuration.</p>
     */
    inline TrafficConfig& WithType(const ContinuousDeploymentPolicyType& value) { SetType(value); return *this;}

    /**
     * <p>The type of traffic configuration.</p>
     */
    inline TrafficConfig& WithType(ContinuousDeploymentPolicyType&& value) { SetType(std::move(value)); return *this;}

  private:

    ContinuousDeploymentSingleWeightConfig m_singleWeightConfig;
    bool m_singleWeightConfigHasBeenSet = false;

    ContinuousDeploymentSingleHeaderConfig m_singleHeaderConfig;
    bool m_singleHeaderConfigHasBeenSet = false;

    ContinuousDeploymentPolicyType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
