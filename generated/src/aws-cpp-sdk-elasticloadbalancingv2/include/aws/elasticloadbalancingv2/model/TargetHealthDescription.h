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
    AWS_ELASTICLOADBALANCINGV2_API TargetHealthDescription();
    AWS_ELASTICLOADBALANCINGV2_API TargetHealthDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API TargetHealthDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The description of the target.</p>
     */
    inline const TargetDescription& GetTarget() const{ return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(const TargetDescription& value) { m_targetHasBeenSet = true; m_target = value; }
    inline void SetTarget(TargetDescription&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }
    inline TargetHealthDescription& WithTarget(const TargetDescription& value) { SetTarget(value); return *this;}
    inline TargetHealthDescription& WithTarget(TargetDescription&& value) { SetTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port to use to connect with the target.</p>
     */
    inline const Aws::String& GetHealthCheckPort() const{ return m_healthCheckPort; }
    inline bool HealthCheckPortHasBeenSet() const { return m_healthCheckPortHasBeenSet; }
    inline void SetHealthCheckPort(const Aws::String& value) { m_healthCheckPortHasBeenSet = true; m_healthCheckPort = value; }
    inline void SetHealthCheckPort(Aws::String&& value) { m_healthCheckPortHasBeenSet = true; m_healthCheckPort = std::move(value); }
    inline void SetHealthCheckPort(const char* value) { m_healthCheckPortHasBeenSet = true; m_healthCheckPort.assign(value); }
    inline TargetHealthDescription& WithHealthCheckPort(const Aws::String& value) { SetHealthCheckPort(value); return *this;}
    inline TargetHealthDescription& WithHealthCheckPort(Aws::String&& value) { SetHealthCheckPort(std::move(value)); return *this;}
    inline TargetHealthDescription& WithHealthCheckPort(const char* value) { SetHealthCheckPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The health information for the target.</p>
     */
    inline const TargetHealth& GetTargetHealth() const{ return m_targetHealth; }
    inline bool TargetHealthHasBeenSet() const { return m_targetHealthHasBeenSet; }
    inline void SetTargetHealth(const TargetHealth& value) { m_targetHealthHasBeenSet = true; m_targetHealth = value; }
    inline void SetTargetHealth(TargetHealth&& value) { m_targetHealthHasBeenSet = true; m_targetHealth = std::move(value); }
    inline TargetHealthDescription& WithTargetHealth(const TargetHealth& value) { SetTargetHealth(value); return *this;}
    inline TargetHealthDescription& WithTargetHealth(TargetHealth&& value) { SetTargetHealth(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The anomaly detection result for the target.</p> <p>If no anomalies were
     * detected, the result is <code>normal</code>.</p> <p>If anomalies were detected,
     * the result is <code>anomalous</code>.</p>
     */
    inline const AnomalyDetection& GetAnomalyDetection() const{ return m_anomalyDetection; }
    inline bool AnomalyDetectionHasBeenSet() const { return m_anomalyDetectionHasBeenSet; }
    inline void SetAnomalyDetection(const AnomalyDetection& value) { m_anomalyDetectionHasBeenSet = true; m_anomalyDetection = value; }
    inline void SetAnomalyDetection(AnomalyDetection&& value) { m_anomalyDetectionHasBeenSet = true; m_anomalyDetection = std::move(value); }
    inline TargetHealthDescription& WithAnomalyDetection(const AnomalyDetection& value) { SetAnomalyDetection(value); return *this;}
    inline TargetHealthDescription& WithAnomalyDetection(AnomalyDetection&& value) { SetAnomalyDetection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The administrative override information for the target.</p>
     */
    inline const AdministrativeOverride& GetAdministrativeOverride() const{ return m_administrativeOverride; }
    inline bool AdministrativeOverrideHasBeenSet() const { return m_administrativeOverrideHasBeenSet; }
    inline void SetAdministrativeOverride(const AdministrativeOverride& value) { m_administrativeOverrideHasBeenSet = true; m_administrativeOverride = value; }
    inline void SetAdministrativeOverride(AdministrativeOverride&& value) { m_administrativeOverrideHasBeenSet = true; m_administrativeOverride = std::move(value); }
    inline TargetHealthDescription& WithAdministrativeOverride(const AdministrativeOverride& value) { SetAdministrativeOverride(value); return *this;}
    inline TargetHealthDescription& WithAdministrativeOverride(AdministrativeOverride&& value) { SetAdministrativeOverride(std::move(value)); return *this;}
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
