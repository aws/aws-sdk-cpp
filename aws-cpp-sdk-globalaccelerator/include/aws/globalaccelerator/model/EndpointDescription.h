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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/model/HealthState.h>
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
   * <p>A complex type for an endpoint. Each endpoint group can include one or more
   * endpoints, such as load balancers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/EndpointDescription">AWS
   * API Reference</a></p>
   */
  class AWS_GLOBALACCELERATOR_API EndpointDescription
  {
  public:
    EndpointDescription();
    EndpointDescription(Aws::Utils::Json::JsonView jsonValue);
    EndpointDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An ID for the endpoint. If the endpoint is a Network Load Balancer or
     * Application Load Balancer, this is the Amazon Resource Name (ARN) of the
     * resource. If the endpoint is an Elastic IP address, this is the Elastic IP
     * address allocation ID.</p>
     */
    inline const Aws::String& GetEndpointId() const{ return m_endpointId; }

    /**
     * <p>An ID for the endpoint. If the endpoint is a Network Load Balancer or
     * Application Load Balancer, this is the Amazon Resource Name (ARN) of the
     * resource. If the endpoint is an Elastic IP address, this is the Elastic IP
     * address allocation ID.</p>
     */
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }

    /**
     * <p>An ID for the endpoint. If the endpoint is a Network Load Balancer or
     * Application Load Balancer, this is the Amazon Resource Name (ARN) of the
     * resource. If the endpoint is an Elastic IP address, this is the Elastic IP
     * address allocation ID.</p>
     */
    inline void SetEndpointId(const Aws::String& value) { m_endpointIdHasBeenSet = true; m_endpointId = value; }

    /**
     * <p>An ID for the endpoint. If the endpoint is a Network Load Balancer or
     * Application Load Balancer, this is the Amazon Resource Name (ARN) of the
     * resource. If the endpoint is an Elastic IP address, this is the Elastic IP
     * address allocation ID.</p>
     */
    inline void SetEndpointId(Aws::String&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::move(value); }

    /**
     * <p>An ID for the endpoint. If the endpoint is a Network Load Balancer or
     * Application Load Balancer, this is the Amazon Resource Name (ARN) of the
     * resource. If the endpoint is an Elastic IP address, this is the Elastic IP
     * address allocation ID.</p>
     */
    inline void SetEndpointId(const char* value) { m_endpointIdHasBeenSet = true; m_endpointId.assign(value); }

    /**
     * <p>An ID for the endpoint. If the endpoint is a Network Load Balancer or
     * Application Load Balancer, this is the Amazon Resource Name (ARN) of the
     * resource. If the endpoint is an Elastic IP address, this is the Elastic IP
     * address allocation ID.</p>
     */
    inline EndpointDescription& WithEndpointId(const Aws::String& value) { SetEndpointId(value); return *this;}

    /**
     * <p>An ID for the endpoint. If the endpoint is a Network Load Balancer or
     * Application Load Balancer, this is the Amazon Resource Name (ARN) of the
     * resource. If the endpoint is an Elastic IP address, this is the Elastic IP
     * address allocation ID.</p>
     */
    inline EndpointDescription& WithEndpointId(Aws::String&& value) { SetEndpointId(std::move(value)); return *this;}

    /**
     * <p>An ID for the endpoint. If the endpoint is a Network Load Balancer or
     * Application Load Balancer, this is the Amazon Resource Name (ARN) of the
     * resource. If the endpoint is an Elastic IP address, this is the Elastic IP
     * address allocation ID.</p>
     */
    inline EndpointDescription& WithEndpointId(const char* value) { SetEndpointId(value); return *this;}


    /**
     * <p>The weight associated with the endpoint. When you add weights to endpoints,
     * you configure AWS Global Accelerator to route traffic based on proportions that
     * you specify. For example, you might specify endpoint weights of 4, 5, 5, and 6
     * (sum=20). The result is that 4/20 of your traffic, on average, is routed to the
     * first endpoint, 5/20 is routed both to the second and third endpoints, and 6/20
     * is routed to the last endpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/about-endpoints-endpoint-weights.html">Endpoint
     * Weights</a> in the <i>AWS Global Accelerator Developer Guide</i>. </p>
     */
    inline int GetWeight() const{ return m_weight; }

    /**
     * <p>The weight associated with the endpoint. When you add weights to endpoints,
     * you configure AWS Global Accelerator to route traffic based on proportions that
     * you specify. For example, you might specify endpoint weights of 4, 5, 5, and 6
     * (sum=20). The result is that 4/20 of your traffic, on average, is routed to the
     * first endpoint, 5/20 is routed both to the second and third endpoints, and 6/20
     * is routed to the last endpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/about-endpoints-endpoint-weights.html">Endpoint
     * Weights</a> in the <i>AWS Global Accelerator Developer Guide</i>. </p>
     */
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }

    /**
     * <p>The weight associated with the endpoint. When you add weights to endpoints,
     * you configure AWS Global Accelerator to route traffic based on proportions that
     * you specify. For example, you might specify endpoint weights of 4, 5, 5, and 6
     * (sum=20). The result is that 4/20 of your traffic, on average, is routed to the
     * first endpoint, 5/20 is routed both to the second and third endpoints, and 6/20
     * is routed to the last endpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/about-endpoints-endpoint-weights.html">Endpoint
     * Weights</a> in the <i>AWS Global Accelerator Developer Guide</i>. </p>
     */
    inline void SetWeight(int value) { m_weightHasBeenSet = true; m_weight = value; }

    /**
     * <p>The weight associated with the endpoint. When you add weights to endpoints,
     * you configure AWS Global Accelerator to route traffic based on proportions that
     * you specify. For example, you might specify endpoint weights of 4, 5, 5, and 6
     * (sum=20). The result is that 4/20 of your traffic, on average, is routed to the
     * first endpoint, 5/20 is routed both to the second and third endpoints, and 6/20
     * is routed to the last endpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/about-endpoints-endpoint-weights.html">Endpoint
     * Weights</a> in the <i>AWS Global Accelerator Developer Guide</i>. </p>
     */
    inline EndpointDescription& WithWeight(int value) { SetWeight(value); return *this;}


    /**
     * <p>The health status of the endpoint.</p>
     */
    inline const HealthState& GetHealthState() const{ return m_healthState; }

    /**
     * <p>The health status of the endpoint.</p>
     */
    inline bool HealthStateHasBeenSet() const { return m_healthStateHasBeenSet; }

    /**
     * <p>The health status of the endpoint.</p>
     */
    inline void SetHealthState(const HealthState& value) { m_healthStateHasBeenSet = true; m_healthState = value; }

    /**
     * <p>The health status of the endpoint.</p>
     */
    inline void SetHealthState(HealthState&& value) { m_healthStateHasBeenSet = true; m_healthState = std::move(value); }

    /**
     * <p>The health status of the endpoint.</p>
     */
    inline EndpointDescription& WithHealthState(const HealthState& value) { SetHealthState(value); return *this;}

    /**
     * <p>The health status of the endpoint.</p>
     */
    inline EndpointDescription& WithHealthState(HealthState&& value) { SetHealthState(std::move(value)); return *this;}


    /**
     * <p>The reason code associated with why the endpoint is not healthy. If the
     * endpoint state is healthy, a reason code is not provided.</p> <p>If the endpoint
     * state is <b>unhealthy</b>, the reason code can be one of the following
     * values:</p> <ul> <li> <p> <b>Timeout</b>: The health check requests to the
     * endpoint are timing out before returning a status.</p> </li> <li> <p>
     * <b>Failed</b>: The health check failed, for example because the endpoint
     * response was invalid (malformed).</p> </li> </ul> <p>If the endpoint state is
     * <b>initial</b>, the reason code can be one of the following values:</p> <ul>
     * <li> <p> <b>ProvisioningInProgress</b>: The endpoint is in the process of being
     * provisioned.</p> </li> <li> <p> <b>InitialHealthChecking</b>: Global Accelerator
     * is still setting up the minimum number of health checks for the endpoint that
     * are required to determine its health status.</p> </li> </ul>
     */
    inline const Aws::String& GetHealthReason() const{ return m_healthReason; }

    /**
     * <p>The reason code associated with why the endpoint is not healthy. If the
     * endpoint state is healthy, a reason code is not provided.</p> <p>If the endpoint
     * state is <b>unhealthy</b>, the reason code can be one of the following
     * values:</p> <ul> <li> <p> <b>Timeout</b>: The health check requests to the
     * endpoint are timing out before returning a status.</p> </li> <li> <p>
     * <b>Failed</b>: The health check failed, for example because the endpoint
     * response was invalid (malformed).</p> </li> </ul> <p>If the endpoint state is
     * <b>initial</b>, the reason code can be one of the following values:</p> <ul>
     * <li> <p> <b>ProvisioningInProgress</b>: The endpoint is in the process of being
     * provisioned.</p> </li> <li> <p> <b>InitialHealthChecking</b>: Global Accelerator
     * is still setting up the minimum number of health checks for the endpoint that
     * are required to determine its health status.</p> </li> </ul>
     */
    inline bool HealthReasonHasBeenSet() const { return m_healthReasonHasBeenSet; }

    /**
     * <p>The reason code associated with why the endpoint is not healthy. If the
     * endpoint state is healthy, a reason code is not provided.</p> <p>If the endpoint
     * state is <b>unhealthy</b>, the reason code can be one of the following
     * values:</p> <ul> <li> <p> <b>Timeout</b>: The health check requests to the
     * endpoint are timing out before returning a status.</p> </li> <li> <p>
     * <b>Failed</b>: The health check failed, for example because the endpoint
     * response was invalid (malformed).</p> </li> </ul> <p>If the endpoint state is
     * <b>initial</b>, the reason code can be one of the following values:</p> <ul>
     * <li> <p> <b>ProvisioningInProgress</b>: The endpoint is in the process of being
     * provisioned.</p> </li> <li> <p> <b>InitialHealthChecking</b>: Global Accelerator
     * is still setting up the minimum number of health checks for the endpoint that
     * are required to determine its health status.</p> </li> </ul>
     */
    inline void SetHealthReason(const Aws::String& value) { m_healthReasonHasBeenSet = true; m_healthReason = value; }

    /**
     * <p>The reason code associated with why the endpoint is not healthy. If the
     * endpoint state is healthy, a reason code is not provided.</p> <p>If the endpoint
     * state is <b>unhealthy</b>, the reason code can be one of the following
     * values:</p> <ul> <li> <p> <b>Timeout</b>: The health check requests to the
     * endpoint are timing out before returning a status.</p> </li> <li> <p>
     * <b>Failed</b>: The health check failed, for example because the endpoint
     * response was invalid (malformed).</p> </li> </ul> <p>If the endpoint state is
     * <b>initial</b>, the reason code can be one of the following values:</p> <ul>
     * <li> <p> <b>ProvisioningInProgress</b>: The endpoint is in the process of being
     * provisioned.</p> </li> <li> <p> <b>InitialHealthChecking</b>: Global Accelerator
     * is still setting up the minimum number of health checks for the endpoint that
     * are required to determine its health status.</p> </li> </ul>
     */
    inline void SetHealthReason(Aws::String&& value) { m_healthReasonHasBeenSet = true; m_healthReason = std::move(value); }

    /**
     * <p>The reason code associated with why the endpoint is not healthy. If the
     * endpoint state is healthy, a reason code is not provided.</p> <p>If the endpoint
     * state is <b>unhealthy</b>, the reason code can be one of the following
     * values:</p> <ul> <li> <p> <b>Timeout</b>: The health check requests to the
     * endpoint are timing out before returning a status.</p> </li> <li> <p>
     * <b>Failed</b>: The health check failed, for example because the endpoint
     * response was invalid (malformed).</p> </li> </ul> <p>If the endpoint state is
     * <b>initial</b>, the reason code can be one of the following values:</p> <ul>
     * <li> <p> <b>ProvisioningInProgress</b>: The endpoint is in the process of being
     * provisioned.</p> </li> <li> <p> <b>InitialHealthChecking</b>: Global Accelerator
     * is still setting up the minimum number of health checks for the endpoint that
     * are required to determine its health status.</p> </li> </ul>
     */
    inline void SetHealthReason(const char* value) { m_healthReasonHasBeenSet = true; m_healthReason.assign(value); }

    /**
     * <p>The reason code associated with why the endpoint is not healthy. If the
     * endpoint state is healthy, a reason code is not provided.</p> <p>If the endpoint
     * state is <b>unhealthy</b>, the reason code can be one of the following
     * values:</p> <ul> <li> <p> <b>Timeout</b>: The health check requests to the
     * endpoint are timing out before returning a status.</p> </li> <li> <p>
     * <b>Failed</b>: The health check failed, for example because the endpoint
     * response was invalid (malformed).</p> </li> </ul> <p>If the endpoint state is
     * <b>initial</b>, the reason code can be one of the following values:</p> <ul>
     * <li> <p> <b>ProvisioningInProgress</b>: The endpoint is in the process of being
     * provisioned.</p> </li> <li> <p> <b>InitialHealthChecking</b>: Global Accelerator
     * is still setting up the minimum number of health checks for the endpoint that
     * are required to determine its health status.</p> </li> </ul>
     */
    inline EndpointDescription& WithHealthReason(const Aws::String& value) { SetHealthReason(value); return *this;}

    /**
     * <p>The reason code associated with why the endpoint is not healthy. If the
     * endpoint state is healthy, a reason code is not provided.</p> <p>If the endpoint
     * state is <b>unhealthy</b>, the reason code can be one of the following
     * values:</p> <ul> <li> <p> <b>Timeout</b>: The health check requests to the
     * endpoint are timing out before returning a status.</p> </li> <li> <p>
     * <b>Failed</b>: The health check failed, for example because the endpoint
     * response was invalid (malformed).</p> </li> </ul> <p>If the endpoint state is
     * <b>initial</b>, the reason code can be one of the following values:</p> <ul>
     * <li> <p> <b>ProvisioningInProgress</b>: The endpoint is in the process of being
     * provisioned.</p> </li> <li> <p> <b>InitialHealthChecking</b>: Global Accelerator
     * is still setting up the minimum number of health checks for the endpoint that
     * are required to determine its health status.</p> </li> </ul>
     */
    inline EndpointDescription& WithHealthReason(Aws::String&& value) { SetHealthReason(std::move(value)); return *this;}

    /**
     * <p>The reason code associated with why the endpoint is not healthy. If the
     * endpoint state is healthy, a reason code is not provided.</p> <p>If the endpoint
     * state is <b>unhealthy</b>, the reason code can be one of the following
     * values:</p> <ul> <li> <p> <b>Timeout</b>: The health check requests to the
     * endpoint are timing out before returning a status.</p> </li> <li> <p>
     * <b>Failed</b>: The health check failed, for example because the endpoint
     * response was invalid (malformed).</p> </li> </ul> <p>If the endpoint state is
     * <b>initial</b>, the reason code can be one of the following values:</p> <ul>
     * <li> <p> <b>ProvisioningInProgress</b>: The endpoint is in the process of being
     * provisioned.</p> </li> <li> <p> <b>InitialHealthChecking</b>: Global Accelerator
     * is still setting up the minimum number of health checks for the endpoint that
     * are required to determine its health status.</p> </li> </ul>
     */
    inline EndpointDescription& WithHealthReason(const char* value) { SetHealthReason(value); return *this;}

  private:

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet;

    int m_weight;
    bool m_weightHasBeenSet;

    HealthState m_healthState;
    bool m_healthStateHasBeenSet;

    Aws::String m_healthReason;
    bool m_healthReasonHasBeenSet;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
