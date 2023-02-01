/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/globalaccelerator/model/HealthCheckProtocol.h>
#include <aws/globalaccelerator/model/EndpointDescription.h>
#include <aws/globalaccelerator/model/PortOverride.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace GlobalAccelerator
{
namespace Model
{

  /**
   * <p>A complex type for the endpoint group. An Amazon Web Services Region can have
   * only one endpoint group for a specific listener. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/EndpointGroup">AWS
   * API Reference</a></p>
   */
  class EndpointGroup
  {
  public:
    AWS_GLOBALACCELERATOR_API EndpointGroup();
    AWS_GLOBALACCELERATOR_API EndpointGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API EndpointGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline const Aws::String& GetEndpointGroupArn() const{ return m_endpointGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline bool EndpointGroupArnHasBeenSet() const { return m_endpointGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline void SetEndpointGroupArn(const Aws::String& value) { m_endpointGroupArnHasBeenSet = true; m_endpointGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline void SetEndpointGroupArn(Aws::String&& value) { m_endpointGroupArnHasBeenSet = true; m_endpointGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline void SetEndpointGroupArn(const char* value) { m_endpointGroupArnHasBeenSet = true; m_endpointGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline EndpointGroup& WithEndpointGroupArn(const Aws::String& value) { SetEndpointGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline EndpointGroup& WithEndpointGroupArn(Aws::String&& value) { SetEndpointGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline EndpointGroup& WithEndpointGroupArn(const char* value) { SetEndpointGroupArn(value); return *this;}


    /**
     * <p>The Amazon Web Services Region where the endpoint group is located.</p>
     */
    inline const Aws::String& GetEndpointGroupRegion() const{ return m_endpointGroupRegion; }

    /**
     * <p>The Amazon Web Services Region where the endpoint group is located.</p>
     */
    inline bool EndpointGroupRegionHasBeenSet() const { return m_endpointGroupRegionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region where the endpoint group is located.</p>
     */
    inline void SetEndpointGroupRegion(const Aws::String& value) { m_endpointGroupRegionHasBeenSet = true; m_endpointGroupRegion = value; }

    /**
     * <p>The Amazon Web Services Region where the endpoint group is located.</p>
     */
    inline void SetEndpointGroupRegion(Aws::String&& value) { m_endpointGroupRegionHasBeenSet = true; m_endpointGroupRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services Region where the endpoint group is located.</p>
     */
    inline void SetEndpointGroupRegion(const char* value) { m_endpointGroupRegionHasBeenSet = true; m_endpointGroupRegion.assign(value); }

    /**
     * <p>The Amazon Web Services Region where the endpoint group is located.</p>
     */
    inline EndpointGroup& WithEndpointGroupRegion(const Aws::String& value) { SetEndpointGroupRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region where the endpoint group is located.</p>
     */
    inline EndpointGroup& WithEndpointGroupRegion(Aws::String&& value) { SetEndpointGroupRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region where the endpoint group is located.</p>
     */
    inline EndpointGroup& WithEndpointGroupRegion(const char* value) { SetEndpointGroupRegion(value); return *this;}


    /**
     * <p>The list of endpoint objects.</p>
     */
    inline const Aws::Vector<EndpointDescription>& GetEndpointDescriptions() const{ return m_endpointDescriptions; }

    /**
     * <p>The list of endpoint objects.</p>
     */
    inline bool EndpointDescriptionsHasBeenSet() const { return m_endpointDescriptionsHasBeenSet; }

    /**
     * <p>The list of endpoint objects.</p>
     */
    inline void SetEndpointDescriptions(const Aws::Vector<EndpointDescription>& value) { m_endpointDescriptionsHasBeenSet = true; m_endpointDescriptions = value; }

    /**
     * <p>The list of endpoint objects.</p>
     */
    inline void SetEndpointDescriptions(Aws::Vector<EndpointDescription>&& value) { m_endpointDescriptionsHasBeenSet = true; m_endpointDescriptions = std::move(value); }

    /**
     * <p>The list of endpoint objects.</p>
     */
    inline EndpointGroup& WithEndpointDescriptions(const Aws::Vector<EndpointDescription>& value) { SetEndpointDescriptions(value); return *this;}

    /**
     * <p>The list of endpoint objects.</p>
     */
    inline EndpointGroup& WithEndpointDescriptions(Aws::Vector<EndpointDescription>&& value) { SetEndpointDescriptions(std::move(value)); return *this;}

    /**
     * <p>The list of endpoint objects.</p>
     */
    inline EndpointGroup& AddEndpointDescriptions(const EndpointDescription& value) { m_endpointDescriptionsHasBeenSet = true; m_endpointDescriptions.push_back(value); return *this; }

    /**
     * <p>The list of endpoint objects.</p>
     */
    inline EndpointGroup& AddEndpointDescriptions(EndpointDescription&& value) { m_endpointDescriptionsHasBeenSet = true; m_endpointDescriptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The percentage of traffic to send to an Amazon Web Services Region.
     * Additional traffic is distributed to other endpoint groups for this listener.
     * </p> <p>Use this action to increase (dial up) or decrease (dial down) traffic to
     * a specific Region. The percentage is applied to the traffic that would otherwise
     * have been routed to the Region based on optimal routing.</p> <p>The default
     * value is 100.</p>
     */
    inline double GetTrafficDialPercentage() const{ return m_trafficDialPercentage; }

    /**
     * <p>The percentage of traffic to send to an Amazon Web Services Region.
     * Additional traffic is distributed to other endpoint groups for this listener.
     * </p> <p>Use this action to increase (dial up) or decrease (dial down) traffic to
     * a specific Region. The percentage is applied to the traffic that would otherwise
     * have been routed to the Region based on optimal routing.</p> <p>The default
     * value is 100.</p>
     */
    inline bool TrafficDialPercentageHasBeenSet() const { return m_trafficDialPercentageHasBeenSet; }

    /**
     * <p>The percentage of traffic to send to an Amazon Web Services Region.
     * Additional traffic is distributed to other endpoint groups for this listener.
     * </p> <p>Use this action to increase (dial up) or decrease (dial down) traffic to
     * a specific Region. The percentage is applied to the traffic that would otherwise
     * have been routed to the Region based on optimal routing.</p> <p>The default
     * value is 100.</p>
     */
    inline void SetTrafficDialPercentage(double value) { m_trafficDialPercentageHasBeenSet = true; m_trafficDialPercentage = value; }

    /**
     * <p>The percentage of traffic to send to an Amazon Web Services Region.
     * Additional traffic is distributed to other endpoint groups for this listener.
     * </p> <p>Use this action to increase (dial up) or decrease (dial down) traffic to
     * a specific Region. The percentage is applied to the traffic that would otherwise
     * have been routed to the Region based on optimal routing.</p> <p>The default
     * value is 100.</p>
     */
    inline EndpointGroup& WithTrafficDialPercentage(double value) { SetTrafficDialPercentage(value); return *this;}


    /**
     * <p>The port that Global Accelerator uses to perform health checks on endpoints
     * that are part of this endpoint group. </p> <p>The default port is the port for
     * the listener that this endpoint group is associated with. If the listener port
     * is a list, Global Accelerator uses the first specified port in the list of
     * ports.</p>
     */
    inline int GetHealthCheckPort() const{ return m_healthCheckPort; }

    /**
     * <p>The port that Global Accelerator uses to perform health checks on endpoints
     * that are part of this endpoint group. </p> <p>The default port is the port for
     * the listener that this endpoint group is associated with. If the listener port
     * is a list, Global Accelerator uses the first specified port in the list of
     * ports.</p>
     */
    inline bool HealthCheckPortHasBeenSet() const { return m_healthCheckPortHasBeenSet; }

    /**
     * <p>The port that Global Accelerator uses to perform health checks on endpoints
     * that are part of this endpoint group. </p> <p>The default port is the port for
     * the listener that this endpoint group is associated with. If the listener port
     * is a list, Global Accelerator uses the first specified port in the list of
     * ports.</p>
     */
    inline void SetHealthCheckPort(int value) { m_healthCheckPortHasBeenSet = true; m_healthCheckPort = value; }

    /**
     * <p>The port that Global Accelerator uses to perform health checks on endpoints
     * that are part of this endpoint group. </p> <p>The default port is the port for
     * the listener that this endpoint group is associated with. If the listener port
     * is a list, Global Accelerator uses the first specified port in the list of
     * ports.</p>
     */
    inline EndpointGroup& WithHealthCheckPort(int value) { SetHealthCheckPort(value); return *this;}


    /**
     * <p>The protocol that Global Accelerator uses to perform health checks on
     * endpoints that are part of this endpoint group. The default value is TCP.</p>
     */
    inline const HealthCheckProtocol& GetHealthCheckProtocol() const{ return m_healthCheckProtocol; }

    /**
     * <p>The protocol that Global Accelerator uses to perform health checks on
     * endpoints that are part of this endpoint group. The default value is TCP.</p>
     */
    inline bool HealthCheckProtocolHasBeenSet() const { return m_healthCheckProtocolHasBeenSet; }

    /**
     * <p>The protocol that Global Accelerator uses to perform health checks on
     * endpoints that are part of this endpoint group. The default value is TCP.</p>
     */
    inline void SetHealthCheckProtocol(const HealthCheckProtocol& value) { m_healthCheckProtocolHasBeenSet = true; m_healthCheckProtocol = value; }

    /**
     * <p>The protocol that Global Accelerator uses to perform health checks on
     * endpoints that are part of this endpoint group. The default value is TCP.</p>
     */
    inline void SetHealthCheckProtocol(HealthCheckProtocol&& value) { m_healthCheckProtocolHasBeenSet = true; m_healthCheckProtocol = std::move(value); }

    /**
     * <p>The protocol that Global Accelerator uses to perform health checks on
     * endpoints that are part of this endpoint group. The default value is TCP.</p>
     */
    inline EndpointGroup& WithHealthCheckProtocol(const HealthCheckProtocol& value) { SetHealthCheckProtocol(value); return *this;}

    /**
     * <p>The protocol that Global Accelerator uses to perform health checks on
     * endpoints that are part of this endpoint group. The default value is TCP.</p>
     */
    inline EndpointGroup& WithHealthCheckProtocol(HealthCheckProtocol&& value) { SetHealthCheckProtocol(std::move(value)); return *this;}


    /**
     * <p>If the protocol is HTTP/S, then this value provides the ping path that Global
     * Accelerator uses for the destination on the endpoints for health checks. The
     * default is slash (/).</p>
     */
    inline const Aws::String& GetHealthCheckPath() const{ return m_healthCheckPath; }

    /**
     * <p>If the protocol is HTTP/S, then this value provides the ping path that Global
     * Accelerator uses for the destination on the endpoints for health checks. The
     * default is slash (/).</p>
     */
    inline bool HealthCheckPathHasBeenSet() const { return m_healthCheckPathHasBeenSet; }

    /**
     * <p>If the protocol is HTTP/S, then this value provides the ping path that Global
     * Accelerator uses for the destination on the endpoints for health checks. The
     * default is slash (/).</p>
     */
    inline void SetHealthCheckPath(const Aws::String& value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath = value; }

    /**
     * <p>If the protocol is HTTP/S, then this value provides the ping path that Global
     * Accelerator uses for the destination on the endpoints for health checks. The
     * default is slash (/).</p>
     */
    inline void SetHealthCheckPath(Aws::String&& value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath = std::move(value); }

    /**
     * <p>If the protocol is HTTP/S, then this value provides the ping path that Global
     * Accelerator uses for the destination on the endpoints for health checks. The
     * default is slash (/).</p>
     */
    inline void SetHealthCheckPath(const char* value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath.assign(value); }

    /**
     * <p>If the protocol is HTTP/S, then this value provides the ping path that Global
     * Accelerator uses for the destination on the endpoints for health checks. The
     * default is slash (/).</p>
     */
    inline EndpointGroup& WithHealthCheckPath(const Aws::String& value) { SetHealthCheckPath(value); return *this;}

    /**
     * <p>If the protocol is HTTP/S, then this value provides the ping path that Global
     * Accelerator uses for the destination on the endpoints for health checks. The
     * default is slash (/).</p>
     */
    inline EndpointGroup& WithHealthCheckPath(Aws::String&& value) { SetHealthCheckPath(std::move(value)); return *this;}

    /**
     * <p>If the protocol is HTTP/S, then this value provides the ping path that Global
     * Accelerator uses for the destination on the endpoints for health checks. The
     * default is slash (/).</p>
     */
    inline EndpointGroup& WithHealthCheckPath(const char* value) { SetHealthCheckPath(value); return *this;}


    /**
     * <p>The time—10 seconds or 30 seconds—between health checks for each endpoint.
     * The default value is 30.</p>
     */
    inline int GetHealthCheckIntervalSeconds() const{ return m_healthCheckIntervalSeconds; }

    /**
     * <p>The time—10 seconds or 30 seconds—between health checks for each endpoint.
     * The default value is 30.</p>
     */
    inline bool HealthCheckIntervalSecondsHasBeenSet() const { return m_healthCheckIntervalSecondsHasBeenSet; }

    /**
     * <p>The time—10 seconds or 30 seconds—between health checks for each endpoint.
     * The default value is 30.</p>
     */
    inline void SetHealthCheckIntervalSeconds(int value) { m_healthCheckIntervalSecondsHasBeenSet = true; m_healthCheckIntervalSeconds = value; }

    /**
     * <p>The time—10 seconds or 30 seconds—between health checks for each endpoint.
     * The default value is 30.</p>
     */
    inline EndpointGroup& WithHealthCheckIntervalSeconds(int value) { SetHealthCheckIntervalSeconds(value); return *this;}


    /**
     * <p>The number of consecutive health checks required to set the state of a
     * healthy endpoint to unhealthy, or to set an unhealthy endpoint to healthy. The
     * default value is 3.</p>
     */
    inline int GetThresholdCount() const{ return m_thresholdCount; }

    /**
     * <p>The number of consecutive health checks required to set the state of a
     * healthy endpoint to unhealthy, or to set an unhealthy endpoint to healthy. The
     * default value is 3.</p>
     */
    inline bool ThresholdCountHasBeenSet() const { return m_thresholdCountHasBeenSet; }

    /**
     * <p>The number of consecutive health checks required to set the state of a
     * healthy endpoint to unhealthy, or to set an unhealthy endpoint to healthy. The
     * default value is 3.</p>
     */
    inline void SetThresholdCount(int value) { m_thresholdCountHasBeenSet = true; m_thresholdCount = value; }

    /**
     * <p>The number of consecutive health checks required to set the state of a
     * healthy endpoint to unhealthy, or to set an unhealthy endpoint to healthy. The
     * default value is 3.</p>
     */
    inline EndpointGroup& WithThresholdCount(int value) { SetThresholdCount(value); return *this;}


    /**
     * <p>Allows you to override the destination ports used to route traffic to an
     * endpoint. Using a port override lets you map a list of external destination
     * ports (that your users send traffic to) to a list of internal destination ports
     * that you want an application endpoint to receive traffic on. </p>
     */
    inline const Aws::Vector<PortOverride>& GetPortOverrides() const{ return m_portOverrides; }

    /**
     * <p>Allows you to override the destination ports used to route traffic to an
     * endpoint. Using a port override lets you map a list of external destination
     * ports (that your users send traffic to) to a list of internal destination ports
     * that you want an application endpoint to receive traffic on. </p>
     */
    inline bool PortOverridesHasBeenSet() const { return m_portOverridesHasBeenSet; }

    /**
     * <p>Allows you to override the destination ports used to route traffic to an
     * endpoint. Using a port override lets you map a list of external destination
     * ports (that your users send traffic to) to a list of internal destination ports
     * that you want an application endpoint to receive traffic on. </p>
     */
    inline void SetPortOverrides(const Aws::Vector<PortOverride>& value) { m_portOverridesHasBeenSet = true; m_portOverrides = value; }

    /**
     * <p>Allows you to override the destination ports used to route traffic to an
     * endpoint. Using a port override lets you map a list of external destination
     * ports (that your users send traffic to) to a list of internal destination ports
     * that you want an application endpoint to receive traffic on. </p>
     */
    inline void SetPortOverrides(Aws::Vector<PortOverride>&& value) { m_portOverridesHasBeenSet = true; m_portOverrides = std::move(value); }

    /**
     * <p>Allows you to override the destination ports used to route traffic to an
     * endpoint. Using a port override lets you map a list of external destination
     * ports (that your users send traffic to) to a list of internal destination ports
     * that you want an application endpoint to receive traffic on. </p>
     */
    inline EndpointGroup& WithPortOverrides(const Aws::Vector<PortOverride>& value) { SetPortOverrides(value); return *this;}

    /**
     * <p>Allows you to override the destination ports used to route traffic to an
     * endpoint. Using a port override lets you map a list of external destination
     * ports (that your users send traffic to) to a list of internal destination ports
     * that you want an application endpoint to receive traffic on. </p>
     */
    inline EndpointGroup& WithPortOverrides(Aws::Vector<PortOverride>&& value) { SetPortOverrides(std::move(value)); return *this;}

    /**
     * <p>Allows you to override the destination ports used to route traffic to an
     * endpoint. Using a port override lets you map a list of external destination
     * ports (that your users send traffic to) to a list of internal destination ports
     * that you want an application endpoint to receive traffic on. </p>
     */
    inline EndpointGroup& AddPortOverrides(const PortOverride& value) { m_portOverridesHasBeenSet = true; m_portOverrides.push_back(value); return *this; }

    /**
     * <p>Allows you to override the destination ports used to route traffic to an
     * endpoint. Using a port override lets you map a list of external destination
     * ports (that your users send traffic to) to a list of internal destination ports
     * that you want an application endpoint to receive traffic on. </p>
     */
    inline EndpointGroup& AddPortOverrides(PortOverride&& value) { m_portOverridesHasBeenSet = true; m_portOverrides.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_endpointGroupArn;
    bool m_endpointGroupArnHasBeenSet = false;

    Aws::String m_endpointGroupRegion;
    bool m_endpointGroupRegionHasBeenSet = false;

    Aws::Vector<EndpointDescription> m_endpointDescriptions;
    bool m_endpointDescriptionsHasBeenSet = false;

    double m_trafficDialPercentage;
    bool m_trafficDialPercentageHasBeenSet = false;

    int m_healthCheckPort;
    bool m_healthCheckPortHasBeenSet = false;

    HealthCheckProtocol m_healthCheckProtocol;
    bool m_healthCheckProtocolHasBeenSet = false;

    Aws::String m_healthCheckPath;
    bool m_healthCheckPathHasBeenSet = false;

    int m_healthCheckIntervalSeconds;
    bool m_healthCheckIntervalSecondsHasBeenSet = false;

    int m_thresholdCount;
    bool m_thresholdCountHasBeenSet = false;

    Aws::Vector<PortOverride> m_portOverrides;
    bool m_portOverridesHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
