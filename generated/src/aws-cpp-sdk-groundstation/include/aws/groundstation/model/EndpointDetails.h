/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/AwsGroundStationAgentEndpoint.h>
#include <aws/groundstation/model/DataflowEndpoint.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/groundstation/model/CapabilityHealth.h>
#include <aws/groundstation/model/SecurityDetails.h>
#include <aws/groundstation/model/CapabilityHealthReason.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>Information about the endpoint details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/EndpointDetails">AWS
   * API Reference</a></p>
   */
  class EndpointDetails
  {
  public:
    AWS_GROUNDSTATION_API EndpointDetails();
    AWS_GROUNDSTATION_API EndpointDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API EndpointDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An agent endpoint.</p>
     */
    inline const AwsGroundStationAgentEndpoint& GetAwsGroundStationAgentEndpoint() const{ return m_awsGroundStationAgentEndpoint; }

    /**
     * <p>An agent endpoint.</p>
     */
    inline bool AwsGroundStationAgentEndpointHasBeenSet() const { return m_awsGroundStationAgentEndpointHasBeenSet; }

    /**
     * <p>An agent endpoint.</p>
     */
    inline void SetAwsGroundStationAgentEndpoint(const AwsGroundStationAgentEndpoint& value) { m_awsGroundStationAgentEndpointHasBeenSet = true; m_awsGroundStationAgentEndpoint = value; }

    /**
     * <p>An agent endpoint.</p>
     */
    inline void SetAwsGroundStationAgentEndpoint(AwsGroundStationAgentEndpoint&& value) { m_awsGroundStationAgentEndpointHasBeenSet = true; m_awsGroundStationAgentEndpoint = std::move(value); }

    /**
     * <p>An agent endpoint.</p>
     */
    inline EndpointDetails& WithAwsGroundStationAgentEndpoint(const AwsGroundStationAgentEndpoint& value) { SetAwsGroundStationAgentEndpoint(value); return *this;}

    /**
     * <p>An agent endpoint.</p>
     */
    inline EndpointDetails& WithAwsGroundStationAgentEndpoint(AwsGroundStationAgentEndpoint&& value) { SetAwsGroundStationAgentEndpoint(std::move(value)); return *this;}


    /**
     * <p>A dataflow endpoint.</p>
     */
    inline const DataflowEndpoint& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>A dataflow endpoint.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>A dataflow endpoint.</p>
     */
    inline void SetEndpoint(const DataflowEndpoint& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>A dataflow endpoint.</p>
     */
    inline void SetEndpoint(DataflowEndpoint&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>A dataflow endpoint.</p>
     */
    inline EndpointDetails& WithEndpoint(const DataflowEndpoint& value) { SetEndpoint(value); return *this;}

    /**
     * <p>A dataflow endpoint.</p>
     */
    inline EndpointDetails& WithEndpoint(DataflowEndpoint&& value) { SetEndpoint(std::move(value)); return *this;}


    /**
     * <p>Health reasons for a dataflow endpoint. This field is ignored when calling
     * <code>CreateDataflowEndpointGroup</code>.</p>
     */
    inline const Aws::Vector<CapabilityHealthReason>& GetHealthReasons() const{ return m_healthReasons; }

    /**
     * <p>Health reasons for a dataflow endpoint. This field is ignored when calling
     * <code>CreateDataflowEndpointGroup</code>.</p>
     */
    inline bool HealthReasonsHasBeenSet() const { return m_healthReasonsHasBeenSet; }

    /**
     * <p>Health reasons for a dataflow endpoint. This field is ignored when calling
     * <code>CreateDataflowEndpointGroup</code>.</p>
     */
    inline void SetHealthReasons(const Aws::Vector<CapabilityHealthReason>& value) { m_healthReasonsHasBeenSet = true; m_healthReasons = value; }

    /**
     * <p>Health reasons for a dataflow endpoint. This field is ignored when calling
     * <code>CreateDataflowEndpointGroup</code>.</p>
     */
    inline void SetHealthReasons(Aws::Vector<CapabilityHealthReason>&& value) { m_healthReasonsHasBeenSet = true; m_healthReasons = std::move(value); }

    /**
     * <p>Health reasons for a dataflow endpoint. This field is ignored when calling
     * <code>CreateDataflowEndpointGroup</code>.</p>
     */
    inline EndpointDetails& WithHealthReasons(const Aws::Vector<CapabilityHealthReason>& value) { SetHealthReasons(value); return *this;}

    /**
     * <p>Health reasons for a dataflow endpoint. This field is ignored when calling
     * <code>CreateDataflowEndpointGroup</code>.</p>
     */
    inline EndpointDetails& WithHealthReasons(Aws::Vector<CapabilityHealthReason>&& value) { SetHealthReasons(std::move(value)); return *this;}

    /**
     * <p>Health reasons for a dataflow endpoint. This field is ignored when calling
     * <code>CreateDataflowEndpointGroup</code>.</p>
     */
    inline EndpointDetails& AddHealthReasons(const CapabilityHealthReason& value) { m_healthReasonsHasBeenSet = true; m_healthReasons.push_back(value); return *this; }

    /**
     * <p>Health reasons for a dataflow endpoint. This field is ignored when calling
     * <code>CreateDataflowEndpointGroup</code>.</p>
     */
    inline EndpointDetails& AddHealthReasons(CapabilityHealthReason&& value) { m_healthReasonsHasBeenSet = true; m_healthReasons.push_back(std::move(value)); return *this; }


    /**
     * <p>A dataflow endpoint health status. This field is ignored when calling
     * <code>CreateDataflowEndpointGroup</code>.</p>
     */
    inline const CapabilityHealth& GetHealthStatus() const{ return m_healthStatus; }

    /**
     * <p>A dataflow endpoint health status. This field is ignored when calling
     * <code>CreateDataflowEndpointGroup</code>.</p>
     */
    inline bool HealthStatusHasBeenSet() const { return m_healthStatusHasBeenSet; }

    /**
     * <p>A dataflow endpoint health status. This field is ignored when calling
     * <code>CreateDataflowEndpointGroup</code>.</p>
     */
    inline void SetHealthStatus(const CapabilityHealth& value) { m_healthStatusHasBeenSet = true; m_healthStatus = value; }

    /**
     * <p>A dataflow endpoint health status. This field is ignored when calling
     * <code>CreateDataflowEndpointGroup</code>.</p>
     */
    inline void SetHealthStatus(CapabilityHealth&& value) { m_healthStatusHasBeenSet = true; m_healthStatus = std::move(value); }

    /**
     * <p>A dataflow endpoint health status. This field is ignored when calling
     * <code>CreateDataflowEndpointGroup</code>.</p>
     */
    inline EndpointDetails& WithHealthStatus(const CapabilityHealth& value) { SetHealthStatus(value); return *this;}

    /**
     * <p>A dataflow endpoint health status. This field is ignored when calling
     * <code>CreateDataflowEndpointGroup</code>.</p>
     */
    inline EndpointDetails& WithHealthStatus(CapabilityHealth&& value) { SetHealthStatus(std::move(value)); return *this;}


    /**
     * <p>Endpoint security details including a list of subnets, a list of security
     * groups and a role to connect streams to instances.</p>
     */
    inline const SecurityDetails& GetSecurityDetails() const{ return m_securityDetails; }

    /**
     * <p>Endpoint security details including a list of subnets, a list of security
     * groups and a role to connect streams to instances.</p>
     */
    inline bool SecurityDetailsHasBeenSet() const { return m_securityDetailsHasBeenSet; }

    /**
     * <p>Endpoint security details including a list of subnets, a list of security
     * groups and a role to connect streams to instances.</p>
     */
    inline void SetSecurityDetails(const SecurityDetails& value) { m_securityDetailsHasBeenSet = true; m_securityDetails = value; }

    /**
     * <p>Endpoint security details including a list of subnets, a list of security
     * groups and a role to connect streams to instances.</p>
     */
    inline void SetSecurityDetails(SecurityDetails&& value) { m_securityDetailsHasBeenSet = true; m_securityDetails = std::move(value); }

    /**
     * <p>Endpoint security details including a list of subnets, a list of security
     * groups and a role to connect streams to instances.</p>
     */
    inline EndpointDetails& WithSecurityDetails(const SecurityDetails& value) { SetSecurityDetails(value); return *this;}

    /**
     * <p>Endpoint security details including a list of subnets, a list of security
     * groups and a role to connect streams to instances.</p>
     */
    inline EndpointDetails& WithSecurityDetails(SecurityDetails&& value) { SetSecurityDetails(std::move(value)); return *this;}

  private:

    AwsGroundStationAgentEndpoint m_awsGroundStationAgentEndpoint;
    bool m_awsGroundStationAgentEndpointHasBeenSet = false;

    DataflowEndpoint m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::Vector<CapabilityHealthReason> m_healthReasons;
    bool m_healthReasonsHasBeenSet = false;

    CapabilityHealth m_healthStatus;
    bool m_healthStatusHasBeenSet = false;

    SecurityDetails m_securityDetails;
    bool m_securityDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
