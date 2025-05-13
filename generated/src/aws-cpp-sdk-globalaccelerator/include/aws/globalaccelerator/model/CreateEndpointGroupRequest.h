/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/GlobalAcceleratorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/globalaccelerator/model/HealthCheckProtocol.h>
#include <aws/globalaccelerator/model/EndpointConfiguration.h>
#include <aws/globalaccelerator/model/PortOverride.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

  /**
   */
  class CreateEndpointGroupRequest : public GlobalAcceleratorRequest
  {
  public:
    AWS_GLOBALACCELERATOR_API CreateEndpointGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEndpointGroup"; }

    AWS_GLOBALACCELERATOR_API Aws::String SerializePayload() const override;

    AWS_GLOBALACCELERATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the listener.</p>
     */
    inline const Aws::String& GetListenerArn() const { return m_listenerArn; }
    inline bool ListenerArnHasBeenSet() const { return m_listenerArnHasBeenSet; }
    template<typename ListenerArnT = Aws::String>
    void SetListenerArn(ListenerArnT&& value) { m_listenerArnHasBeenSet = true; m_listenerArn = std::forward<ListenerArnT>(value); }
    template<typename ListenerArnT = Aws::String>
    CreateEndpointGroupRequest& WithListenerArn(ListenerArnT&& value) { SetListenerArn(std::forward<ListenerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the endpoint group is located. A
     * listener can have only one endpoint group in a specific Region.</p>
     */
    inline const Aws::String& GetEndpointGroupRegion() const { return m_endpointGroupRegion; }
    inline bool EndpointGroupRegionHasBeenSet() const { return m_endpointGroupRegionHasBeenSet; }
    template<typename EndpointGroupRegionT = Aws::String>
    void SetEndpointGroupRegion(EndpointGroupRegionT&& value) { m_endpointGroupRegionHasBeenSet = true; m_endpointGroupRegion = std::forward<EndpointGroupRegionT>(value); }
    template<typename EndpointGroupRegionT = Aws::String>
    CreateEndpointGroupRequest& WithEndpointGroupRegion(EndpointGroupRegionT&& value) { SetEndpointGroupRegion(std::forward<EndpointGroupRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of endpoint objects.</p>
     */
    inline const Aws::Vector<EndpointConfiguration>& GetEndpointConfigurations() const { return m_endpointConfigurations; }
    inline bool EndpointConfigurationsHasBeenSet() const { return m_endpointConfigurationsHasBeenSet; }
    template<typename EndpointConfigurationsT = Aws::Vector<EndpointConfiguration>>
    void SetEndpointConfigurations(EndpointConfigurationsT&& value) { m_endpointConfigurationsHasBeenSet = true; m_endpointConfigurations = std::forward<EndpointConfigurationsT>(value); }
    template<typename EndpointConfigurationsT = Aws::Vector<EndpointConfiguration>>
    CreateEndpointGroupRequest& WithEndpointConfigurations(EndpointConfigurationsT&& value) { SetEndpointConfigurations(std::forward<EndpointConfigurationsT>(value)); return *this;}
    template<typename EndpointConfigurationsT = EndpointConfiguration>
    CreateEndpointGroupRequest& AddEndpointConfigurations(EndpointConfigurationsT&& value) { m_endpointConfigurationsHasBeenSet = true; m_endpointConfigurations.emplace_back(std::forward<EndpointConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The percentage of traffic to send to an Amazon Web Services Region.
     * Additional traffic is distributed to other endpoint groups for this listener.
     * </p> <p>Use this action to increase (dial up) or decrease (dial down) traffic to
     * a specific Region. The percentage is applied to the traffic that would otherwise
     * have been routed to the Region based on optimal routing.</p> <p>The default
     * value is 100.</p>
     */
    inline double GetTrafficDialPercentage() const { return m_trafficDialPercentage; }
    inline bool TrafficDialPercentageHasBeenSet() const { return m_trafficDialPercentageHasBeenSet; }
    inline void SetTrafficDialPercentage(double value) { m_trafficDialPercentageHasBeenSet = true; m_trafficDialPercentage = value; }
    inline CreateEndpointGroupRequest& WithTrafficDialPercentage(double value) { SetTrafficDialPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port that Global Accelerator uses to check the health of endpoints that
     * are part of this endpoint group. The default port is the listener port that this
     * endpoint group is associated with. If listener port is a list of ports, Global
     * Accelerator uses the first port in the list.</p>
     */
    inline int GetHealthCheckPort() const { return m_healthCheckPort; }
    inline bool HealthCheckPortHasBeenSet() const { return m_healthCheckPortHasBeenSet; }
    inline void SetHealthCheckPort(int value) { m_healthCheckPortHasBeenSet = true; m_healthCheckPort = value; }
    inline CreateEndpointGroupRequest& WithHealthCheckPort(int value) { SetHealthCheckPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol that Global Accelerator uses to check the health of endpoints
     * that are part of this endpoint group. The default value is TCP.</p>
     */
    inline HealthCheckProtocol GetHealthCheckProtocol() const { return m_healthCheckProtocol; }
    inline bool HealthCheckProtocolHasBeenSet() const { return m_healthCheckProtocolHasBeenSet; }
    inline void SetHealthCheckProtocol(HealthCheckProtocol value) { m_healthCheckProtocolHasBeenSet = true; m_healthCheckProtocol = value; }
    inline CreateEndpointGroupRequest& WithHealthCheckProtocol(HealthCheckProtocol value) { SetHealthCheckProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the protocol is HTTP/S, then this specifies the path that is the
     * destination for health check targets. The default value is slash (/).</p>
     */
    inline const Aws::String& GetHealthCheckPath() const { return m_healthCheckPath; }
    inline bool HealthCheckPathHasBeenSet() const { return m_healthCheckPathHasBeenSet; }
    template<typename HealthCheckPathT = Aws::String>
    void SetHealthCheckPath(HealthCheckPathT&& value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath = std::forward<HealthCheckPathT>(value); }
    template<typename HealthCheckPathT = Aws::String>
    CreateEndpointGroupRequest& WithHealthCheckPath(HealthCheckPathT&& value) { SetHealthCheckPath(std::forward<HealthCheckPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time—10 seconds or 30 seconds—between each health check for an endpoint.
     * The default value is 30.</p>
     */
    inline int GetHealthCheckIntervalSeconds() const { return m_healthCheckIntervalSeconds; }
    inline bool HealthCheckIntervalSecondsHasBeenSet() const { return m_healthCheckIntervalSecondsHasBeenSet; }
    inline void SetHealthCheckIntervalSeconds(int value) { m_healthCheckIntervalSecondsHasBeenSet = true; m_healthCheckIntervalSeconds = value; }
    inline CreateEndpointGroupRequest& WithHealthCheckIntervalSeconds(int value) { SetHealthCheckIntervalSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of consecutive health checks required to set the state of a
     * healthy endpoint to unhealthy, or to set an unhealthy endpoint to healthy. The
     * default value is 3.</p>
     */
    inline int GetThresholdCount() const { return m_thresholdCount; }
    inline bool ThresholdCountHasBeenSet() const { return m_thresholdCountHasBeenSet; }
    inline void SetThresholdCount(int value) { m_thresholdCountHasBeenSet = true; m_thresholdCount = value; }
    inline CreateEndpointGroupRequest& WithThresholdCount(int value) { SetThresholdCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency—that is, the uniqueness—of the request.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const { return m_idempotencyToken; }
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
    template<typename IdempotencyTokenT = Aws::String>
    void SetIdempotencyToken(IdempotencyTokenT&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::forward<IdempotencyTokenT>(value); }
    template<typename IdempotencyTokenT = Aws::String>
    CreateEndpointGroupRequest& WithIdempotencyToken(IdempotencyTokenT&& value) { SetIdempotencyToken(std::forward<IdempotencyTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Override specific listener ports used to route traffic to endpoints that are
     * part of this endpoint group. For example, you can create a port override in
     * which the listener receives user traffic on ports 80 and 443, but your
     * accelerator routes that traffic to ports 1080 and 1443, respectively, on the
     * endpoints.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/about-endpoint-groups-port-override.html">
     * Overriding listener ports</a> in the <i>Global Accelerator Developer
     * Guide</i>.</p>
     */
    inline const Aws::Vector<PortOverride>& GetPortOverrides() const { return m_portOverrides; }
    inline bool PortOverridesHasBeenSet() const { return m_portOverridesHasBeenSet; }
    template<typename PortOverridesT = Aws::Vector<PortOverride>>
    void SetPortOverrides(PortOverridesT&& value) { m_portOverridesHasBeenSet = true; m_portOverrides = std::forward<PortOverridesT>(value); }
    template<typename PortOverridesT = Aws::Vector<PortOverride>>
    CreateEndpointGroupRequest& WithPortOverrides(PortOverridesT&& value) { SetPortOverrides(std::forward<PortOverridesT>(value)); return *this;}
    template<typename PortOverridesT = PortOverride>
    CreateEndpointGroupRequest& AddPortOverrides(PortOverridesT&& value) { m_portOverridesHasBeenSet = true; m_portOverrides.emplace_back(std::forward<PortOverridesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_listenerArn;
    bool m_listenerArnHasBeenSet = false;

    Aws::String m_endpointGroupRegion;
    bool m_endpointGroupRegionHasBeenSet = false;

    Aws::Vector<EndpointConfiguration> m_endpointConfigurations;
    bool m_endpointConfigurationsHasBeenSet = false;

    double m_trafficDialPercentage{0.0};
    bool m_trafficDialPercentageHasBeenSet = false;

    int m_healthCheckPort{0};
    bool m_healthCheckPortHasBeenSet = false;

    HealthCheckProtocol m_healthCheckProtocol{HealthCheckProtocol::NOT_SET};
    bool m_healthCheckProtocolHasBeenSet = false;

    Aws::String m_healthCheckPath;
    bool m_healthCheckPathHasBeenSet = false;

    int m_healthCheckIntervalSeconds{0};
    bool m_healthCheckIntervalSecondsHasBeenSet = false;

    int m_thresholdCount{0};
    bool m_thresholdCountHasBeenSet = false;

    Aws::String m_idempotencyToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_idempotencyTokenHasBeenSet = true;

    Aws::Vector<PortOverride> m_portOverrides;
    bool m_portOverridesHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
