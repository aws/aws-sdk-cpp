/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/elasticloadbalancingv2/model/TargetDescription.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/TargetHealth.h>
#include <aws/elasticloadbalancingv2/model/AnomalyDetection.h>
#include <aws/elasticloadbalancingv2/model/AdministrativeOverride.h>
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
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>Information about the health of a target.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/TargetHealthDescription">AWS
   * API Reference</a></p>
   */
  class TargetHealthDescription
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API TargetHealthDescription() = default;
    AWS_ELASTICLOADBALANCINGV2_API TargetHealthDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API TargetHealthDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The description of the target.</p>
     */
    inline const TargetDescription& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = TargetDescription>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = TargetDescription>
    TargetHealthDescription& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port to use to connect with the target.</p>
     */
    inline const Aws::String& GetHealthCheckPort() const { return m_healthCheckPort; }
    inline bool HealthCheckPortHasBeenSet() const { return m_healthCheckPortHasBeenSet; }
    template<typename HealthCheckPortT = Aws::String>
    void SetHealthCheckPort(HealthCheckPortT&& value) { m_healthCheckPortHasBeenSet = true; m_healthCheckPort = std::forward<HealthCheckPortT>(value); }
    template<typename HealthCheckPortT = Aws::String>
    TargetHealthDescription& WithHealthCheckPort(HealthCheckPortT&& value) { SetHealthCheckPort(std::forward<HealthCheckPortT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The health information for the target.</p>
     */
    inline const TargetHealth& GetTargetHealth() const { return m_targetHealth; }
    inline bool TargetHealthHasBeenSet() const { return m_targetHealthHasBeenSet; }
    template<typename TargetHealthT = TargetHealth>
    void SetTargetHealth(TargetHealthT&& value) { m_targetHealthHasBeenSet = true; m_targetHealth = std::forward<TargetHealthT>(value); }
    template<typename TargetHealthT = TargetHealth>
    TargetHealthDescription& WithTargetHealth(TargetHealthT&& value) { SetTargetHealth(std::forward<TargetHealthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The anomaly detection result for the target.</p> <p>If no anomalies were
     * detected, the result is <code>normal</code>.</p> <p>If anomalies were detected,
     * the result is <code>anomalous</code>.</p>
     */
    inline const AnomalyDetection& GetAnomalyDetection() const { return m_anomalyDetection; }
    inline bool AnomalyDetectionHasBeenSet() const { return m_anomalyDetectionHasBeenSet; }
    template<typename AnomalyDetectionT = AnomalyDetection>
    void SetAnomalyDetection(AnomalyDetectionT&& value) { m_anomalyDetectionHasBeenSet = true; m_anomalyDetection = std::forward<AnomalyDetectionT>(value); }
    template<typename AnomalyDetectionT = AnomalyDetection>
    TargetHealthDescription& WithAnomalyDetection(AnomalyDetectionT&& value) { SetAnomalyDetection(std::forward<AnomalyDetectionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The administrative override information for the target.</p>
     */
    inline const AdministrativeOverride& GetAdministrativeOverride() const { return m_administrativeOverride; }
    inline bool AdministrativeOverrideHasBeenSet() const { return m_administrativeOverrideHasBeenSet; }
    template<typename AdministrativeOverrideT = AdministrativeOverride>
    void SetAdministrativeOverride(AdministrativeOverrideT&& value) { m_administrativeOverrideHasBeenSet = true; m_administrativeOverride = std::forward<AdministrativeOverrideT>(value); }
    template<typename AdministrativeOverrideT = AdministrativeOverride>
    TargetHealthDescription& WithAdministrativeOverride(AdministrativeOverrideT&& value) { SetAdministrativeOverride(std::forward<AdministrativeOverrideT>(value)); return *this;}
    ///@}
  private:

    TargetDescription m_target;
    bool m_targetHasBeenSet = false;

    Aws::String m_healthCheckPort;
    bool m_healthCheckPortHasBeenSet = false;

    TargetHealth m_targetHealth;
    bool m_targetHealthHasBeenSet = false;

    AnomalyDetection m_anomalyDetection;
    bool m_anomalyDetectionHasBeenSet = false;

    AdministrativeOverride m_administrativeOverride;
    bool m_administrativeOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
