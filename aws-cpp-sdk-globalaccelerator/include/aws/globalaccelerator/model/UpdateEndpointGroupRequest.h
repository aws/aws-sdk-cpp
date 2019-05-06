/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/GlobalAcceleratorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/globalaccelerator/model/HealthCheckProtocol.h>
#include <aws/globalaccelerator/model/EndpointConfiguration.h>
#include <utility>

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

  /**
   */
  class AWS_GLOBALACCELERATOR_API UpdateEndpointGroupRequest : public GlobalAcceleratorRequest
  {
  public:
    UpdateEndpointGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEndpointGroup"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline UpdateEndpointGroupRequest& WithEndpointGroupArn(const Aws::String& value) { SetEndpointGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline UpdateEndpointGroupRequest& WithEndpointGroupArn(Aws::String&& value) { SetEndpointGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint group.</p>
     */
    inline UpdateEndpointGroupRequest& WithEndpointGroupArn(const char* value) { SetEndpointGroupArn(value); return *this;}


    /**
     * <p>The list of endpoint objects.</p>
     */
    inline const Aws::Vector<EndpointConfiguration>& GetEndpointConfigurations() const{ return m_endpointConfigurations; }

    /**
     * <p>The list of endpoint objects.</p>
     */
    inline bool EndpointConfigurationsHasBeenSet() const { return m_endpointConfigurationsHasBeenSet; }

    /**
     * <p>The list of endpoint objects.</p>
     */
    inline void SetEndpointConfigurations(const Aws::Vector<EndpointConfiguration>& value) { m_endpointConfigurationsHasBeenSet = true; m_endpointConfigurations = value; }

    /**
     * <p>The list of endpoint objects.</p>
     */
    inline void SetEndpointConfigurations(Aws::Vector<EndpointConfiguration>&& value) { m_endpointConfigurationsHasBeenSet = true; m_endpointConfigurations = std::move(value); }

    /**
     * <p>The list of endpoint objects.</p>
     */
    inline UpdateEndpointGroupRequest& WithEndpointConfigurations(const Aws::Vector<EndpointConfiguration>& value) { SetEndpointConfigurations(value); return *this;}

    /**
     * <p>The list of endpoint objects.</p>
     */
    inline UpdateEndpointGroupRequest& WithEndpointConfigurations(Aws::Vector<EndpointConfiguration>&& value) { SetEndpointConfigurations(std::move(value)); return *this;}

    /**
     * <p>The list of endpoint objects.</p>
     */
    inline UpdateEndpointGroupRequest& AddEndpointConfigurations(const EndpointConfiguration& value) { m_endpointConfigurationsHasBeenSet = true; m_endpointConfigurations.push_back(value); return *this; }

    /**
     * <p>The list of endpoint objects.</p>
     */
    inline UpdateEndpointGroupRequest& AddEndpointConfigurations(EndpointConfiguration&& value) { m_endpointConfigurationsHasBeenSet = true; m_endpointConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>The percentage of traffic to send to an AWS Region. Additional traffic is
     * distributed to other endpoint groups for this listener. </p> <p>Use this action
     * to increase (dial up) or decrease (dial down) traffic to a specific Region. The
     * percentage is applied to the traffic that would otherwise have been routed to
     * the Region based on optimal routing.</p> <p>The default value is 100.</p>
     */
    inline double GetTrafficDialPercentage() const{ return m_trafficDialPercentage; }

    /**
     * <p>The percentage of traffic to send to an AWS Region. Additional traffic is
     * distributed to other endpoint groups for this listener. </p> <p>Use this action
     * to increase (dial up) or decrease (dial down) traffic to a specific Region. The
     * percentage is applied to the traffic that would otherwise have been routed to
     * the Region based on optimal routing.</p> <p>The default value is 100.</p>
     */
    inline bool TrafficDialPercentageHasBeenSet() const { return m_trafficDialPercentageHasBeenSet; }

    /**
     * <p>The percentage of traffic to send to an AWS Region. Additional traffic is
     * distributed to other endpoint groups for this listener. </p> <p>Use this action
     * to increase (dial up) or decrease (dial down) traffic to a specific Region. The
     * percentage is applied to the traffic that would otherwise have been routed to
     * the Region based on optimal routing.</p> <p>The default value is 100.</p>
     */
    inline void SetTrafficDialPercentage(double value) { m_trafficDialPercentageHasBeenSet = true; m_trafficDialPercentage = value; }

    /**
     * <p>The percentage of traffic to send to an AWS Region. Additional traffic is
     * distributed to other endpoint groups for this listener. </p> <p>Use this action
     * to increase (dial up) or decrease (dial down) traffic to a specific Region. The
     * percentage is applied to the traffic that would otherwise have been routed to
     * the Region based on optimal routing.</p> <p>The default value is 100.</p>
     */
    inline UpdateEndpointGroupRequest& WithTrafficDialPercentage(double value) { SetTrafficDialPercentage(value); return *this;}


    /**
     * <p>The port that AWS Global Accelerator uses to check the health of endpoints
     * that are part of this endpoint group. The default port is the listener port that
     * this endpoint group is associated with. If the listener port is a list of ports,
     * Global Accelerator uses the first port in the list.</p>
     */
    inline int GetHealthCheckPort() const{ return m_healthCheckPort; }

    /**
     * <p>The port that AWS Global Accelerator uses to check the health of endpoints
     * that are part of this endpoint group. The default port is the listener port that
     * this endpoint group is associated with. If the listener port is a list of ports,
     * Global Accelerator uses the first port in the list.</p>
     */
    inline bool HealthCheckPortHasBeenSet() const { return m_healthCheckPortHasBeenSet; }

    /**
     * <p>The port that AWS Global Accelerator uses to check the health of endpoints
     * that are part of this endpoint group. The default port is the listener port that
     * this endpoint group is associated with. If the listener port is a list of ports,
     * Global Accelerator uses the first port in the list.</p>
     */
    inline void SetHealthCheckPort(int value) { m_healthCheckPortHasBeenSet = true; m_healthCheckPort = value; }

    /**
     * <p>The port that AWS Global Accelerator uses to check the health of endpoints
     * that are part of this endpoint group. The default port is the listener port that
     * this endpoint group is associated with. If the listener port is a list of ports,
     * Global Accelerator uses the first port in the list.</p>
     */
    inline UpdateEndpointGroupRequest& WithHealthCheckPort(int value) { SetHealthCheckPort(value); return *this;}


    /**
     * <p>The protocol that AWS Global Accelerator uses to check the health of
     * endpoints that are part of this endpoint group. The default value is TCP.</p>
     */
    inline const HealthCheckProtocol& GetHealthCheckProtocol() const{ return m_healthCheckProtocol; }

    /**
     * <p>The protocol that AWS Global Accelerator uses to check the health of
     * endpoints that are part of this endpoint group. The default value is TCP.</p>
     */
    inline bool HealthCheckProtocolHasBeenSet() const { return m_healthCheckProtocolHasBeenSet; }

    /**
     * <p>The protocol that AWS Global Accelerator uses to check the health of
     * endpoints that are part of this endpoint group. The default value is TCP.</p>
     */
    inline void SetHealthCheckProtocol(const HealthCheckProtocol& value) { m_healthCheckProtocolHasBeenSet = true; m_healthCheckProtocol = value; }

    /**
     * <p>The protocol that AWS Global Accelerator uses to check the health of
     * endpoints that are part of this endpoint group. The default value is TCP.</p>
     */
    inline void SetHealthCheckProtocol(HealthCheckProtocol&& value) { m_healthCheckProtocolHasBeenSet = true; m_healthCheckProtocol = std::move(value); }

    /**
     * <p>The protocol that AWS Global Accelerator uses to check the health of
     * endpoints that are part of this endpoint group. The default value is TCP.</p>
     */
    inline UpdateEndpointGroupRequest& WithHealthCheckProtocol(const HealthCheckProtocol& value) { SetHealthCheckProtocol(value); return *this;}

    /**
     * <p>The protocol that AWS Global Accelerator uses to check the health of
     * endpoints that are part of this endpoint group. The default value is TCP.</p>
     */
    inline UpdateEndpointGroupRequest& WithHealthCheckProtocol(HealthCheckProtocol&& value) { SetHealthCheckProtocol(std::move(value)); return *this;}


    /**
     * <p>If the protocol is HTTP/S, then this specifies the path that is the
     * destination for health check targets. The default value is slash (/).</p>
     */
    inline const Aws::String& GetHealthCheckPath() const{ return m_healthCheckPath; }

    /**
     * <p>If the protocol is HTTP/S, then this specifies the path that is the
     * destination for health check targets. The default value is slash (/).</p>
     */
    inline bool HealthCheckPathHasBeenSet() const { return m_healthCheckPathHasBeenSet; }

    /**
     * <p>If the protocol is HTTP/S, then this specifies the path that is the
     * destination for health check targets. The default value is slash (/).</p>
     */
    inline void SetHealthCheckPath(const Aws::String& value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath = value; }

    /**
     * <p>If the protocol is HTTP/S, then this specifies the path that is the
     * destination for health check targets. The default value is slash (/).</p>
     */
    inline void SetHealthCheckPath(Aws::String&& value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath = std::move(value); }

    /**
     * <p>If the protocol is HTTP/S, then this specifies the path that is the
     * destination for health check targets. The default value is slash (/).</p>
     */
    inline void SetHealthCheckPath(const char* value) { m_healthCheckPathHasBeenSet = true; m_healthCheckPath.assign(value); }

    /**
     * <p>If the protocol is HTTP/S, then this specifies the path that is the
     * destination for health check targets. The default value is slash (/).</p>
     */
    inline UpdateEndpointGroupRequest& WithHealthCheckPath(const Aws::String& value) { SetHealthCheckPath(value); return *this;}

    /**
     * <p>If the protocol is HTTP/S, then this specifies the path that is the
     * destination for health check targets. The default value is slash (/).</p>
     */
    inline UpdateEndpointGroupRequest& WithHealthCheckPath(Aws::String&& value) { SetHealthCheckPath(std::move(value)); return *this;}

    /**
     * <p>If the protocol is HTTP/S, then this specifies the path that is the
     * destination for health check targets. The default value is slash (/).</p>
     */
    inline UpdateEndpointGroupRequest& WithHealthCheckPath(const char* value) { SetHealthCheckPath(value); return *this;}


    /**
     * <p>The time—10 seconds or 30 seconds—between each health check for an endpoint.
     * The default value is 30.</p>
     */
    inline int GetHealthCheckIntervalSeconds() const{ return m_healthCheckIntervalSeconds; }

    /**
     * <p>The time—10 seconds or 30 seconds—between each health check for an endpoint.
     * The default value is 30.</p>
     */
    inline bool HealthCheckIntervalSecondsHasBeenSet() const { return m_healthCheckIntervalSecondsHasBeenSet; }

    /**
     * <p>The time—10 seconds or 30 seconds—between each health check for an endpoint.
     * The default value is 30.</p>
     */
    inline void SetHealthCheckIntervalSeconds(int value) { m_healthCheckIntervalSecondsHasBeenSet = true; m_healthCheckIntervalSeconds = value; }

    /**
     * <p>The time—10 seconds or 30 seconds—between each health check for an endpoint.
     * The default value is 30.</p>
     */
    inline UpdateEndpointGroupRequest& WithHealthCheckIntervalSeconds(int value) { SetHealthCheckIntervalSeconds(value); return *this;}


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
    inline UpdateEndpointGroupRequest& WithThresholdCount(int value) { SetThresholdCount(value); return *this;}

  private:

    Aws::String m_endpointGroupArn;
    bool m_endpointGroupArnHasBeenSet;

    Aws::Vector<EndpointConfiguration> m_endpointConfigurations;
    bool m_endpointConfigurationsHasBeenSet;

    double m_trafficDialPercentage;
    bool m_trafficDialPercentageHasBeenSet;

    int m_healthCheckPort;
    bool m_healthCheckPortHasBeenSet;

    HealthCheckProtocol m_healthCheckProtocol;
    bool m_healthCheckProtocolHasBeenSet;

    Aws::String m_healthCheckPath;
    bool m_healthCheckPathHasBeenSet;

    int m_healthCheckIntervalSeconds;
    bool m_healthCheckIntervalSecondsHasBeenSet;

    int m_thresholdCount;
    bool m_thresholdCountHasBeenSet;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
