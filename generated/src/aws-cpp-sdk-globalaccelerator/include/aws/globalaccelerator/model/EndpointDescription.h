/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class EndpointDescription
  {
  public:
    AWS_GLOBALACCELERATOR_API EndpointDescription();
    AWS_GLOBALACCELERATOR_API EndpointDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API EndpointDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An ID for the endpoint. If the endpoint is a Network Load Balancer or
     * Application Load Balancer, this is the Amazon Resource Name (ARN) of the
     * resource. If the endpoint is an Elastic IP address, this is the Elastic IP
     * address allocation ID. For Amazon EC2 instances, this is the EC2 instance ID.
     * </p> <p>An Application Load Balancer can be either internal or
     * internet-facing.</p>
     */
    inline const Aws::String& GetEndpointId() const{ return m_endpointId; }
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }
    inline void SetEndpointId(const Aws::String& value) { m_endpointIdHasBeenSet = true; m_endpointId = value; }
    inline void SetEndpointId(Aws::String&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::move(value); }
    inline void SetEndpointId(const char* value) { m_endpointIdHasBeenSet = true; m_endpointId.assign(value); }
    inline EndpointDescription& WithEndpointId(const Aws::String& value) { SetEndpointId(value); return *this;}
    inline EndpointDescription& WithEndpointId(Aws::String&& value) { SetEndpointId(std::move(value)); return *this;}
    inline EndpointDescription& WithEndpointId(const char* value) { SetEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The weight associated with the endpoint. When you add weights to endpoints,
     * you configure Global Accelerator to route traffic based on proportions that you
     * specify. For example, you might specify endpoint weights of 4, 5, 5, and 6
     * (sum=20). The result is that 4/20 of your traffic, on average, is routed to the
     * first endpoint, 5/20 is routed both to the second and third endpoints, and 6/20
     * is routed to the last endpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/about-endpoints-endpoint-weights.html">Endpoint
     * weights</a> in the <i>Global Accelerator Developer Guide</i>. </p>
     */
    inline int GetWeight() const{ return m_weight; }
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }
    inline void SetWeight(int value) { m_weightHasBeenSet = true; m_weight = value; }
    inline EndpointDescription& WithWeight(int value) { SetWeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The health status of the endpoint.</p>
     */
    inline const HealthState& GetHealthState() const{ return m_healthState; }
    inline bool HealthStateHasBeenSet() const { return m_healthStateHasBeenSet; }
    inline void SetHealthState(const HealthState& value) { m_healthStateHasBeenSet = true; m_healthState = value; }
    inline void SetHealthState(HealthState&& value) { m_healthStateHasBeenSet = true; m_healthState = std::move(value); }
    inline EndpointDescription& WithHealthState(const HealthState& value) { SetHealthState(value); return *this;}
    inline EndpointDescription& WithHealthState(HealthState&& value) { SetHealthState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a null result.</p>
     */
    inline const Aws::String& GetHealthReason() const{ return m_healthReason; }
    inline bool HealthReasonHasBeenSet() const { return m_healthReasonHasBeenSet; }
    inline void SetHealthReason(const Aws::String& value) { m_healthReasonHasBeenSet = true; m_healthReason = value; }
    inline void SetHealthReason(Aws::String&& value) { m_healthReasonHasBeenSet = true; m_healthReason = std::move(value); }
    inline void SetHealthReason(const char* value) { m_healthReasonHasBeenSet = true; m_healthReason.assign(value); }
    inline EndpointDescription& WithHealthReason(const Aws::String& value) { SetHealthReason(value); return *this;}
    inline EndpointDescription& WithHealthReason(Aws::String&& value) { SetHealthReason(std::move(value)); return *this;}
    inline EndpointDescription& WithHealthReason(const char* value) { SetHealthReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether client IP address preservation is enabled for an endpoint.
     * The value is true or false. The default value is true for Application Load
     * Balancers endpoints. </p> <p>If the value is set to true, the client's IP
     * address is preserved in the <code>X-Forwarded-For</code> request header as
     * traffic travels to applications on the endpoint fronted by the accelerator.</p>
     * <p>Client IP address preservation is supported, in specific Amazon Web Services
     * Regions, for endpoints that are Application Load Balancers, Amazon EC2
     * instances, and Network Load Balancers with security groups. IMPORTANT: You
     * cannot use client IP address preservation with Network Load Balancers with TLS
     * listeners.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/preserve-client-ip-address.html">
     * Preserve client IP addresses in Global Accelerator</a> in the <i>Global
     * Accelerator Developer Guide</i>.</p>
     */
    inline bool GetClientIPPreservationEnabled() const{ return m_clientIPPreservationEnabled; }
    inline bool ClientIPPreservationEnabledHasBeenSet() const { return m_clientIPPreservationEnabledHasBeenSet; }
    inline void SetClientIPPreservationEnabled(bool value) { m_clientIPPreservationEnabledHasBeenSet = true; m_clientIPPreservationEnabled = value; }
    inline EndpointDescription& WithClientIPPreservationEnabled(bool value) { SetClientIPPreservationEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet = false;

    int m_weight;
    bool m_weightHasBeenSet = false;

    HealthState m_healthState;
    bool m_healthStateHasBeenSet = false;

    Aws::String m_healthReason;
    bool m_healthReasonHasBeenSet = false;

    bool m_clientIPPreservationEnabled;
    bool m_clientIPPreservationEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
