/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/AwsGroundStationAgentEndpoint.h>
#include <aws/groundstation/model/CapabilityHealth.h>
#include <aws/groundstation/model/CapabilityHealthReason.h>
#include <aws/groundstation/model/DataflowEndpoint.h>
#include <aws/groundstation/model/DownlinkAwsGroundStationAgentEndpointDetails.h>
#include <aws/groundstation/model/SecurityDetails.h>
#include <aws/groundstation/model/UplinkAwsGroundStationAgentEndpointDetails.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GroundStation {
namespace Model {

/**
 * <p>Information about the endpoint details.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/EndpointDetails">AWS
 * API Reference</a></p>
 */
class EndpointDetails {
 public:
  AWS_GROUNDSTATION_API EndpointDetails() = default;
  AWS_GROUNDSTATION_API EndpointDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API EndpointDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Endpoint security details including a list of subnets, a list of security
   * groups and a role to connect streams to instances.</p>
   */
  inline const SecurityDetails& GetSecurityDetails() const { return m_securityDetails; }
  inline bool SecurityDetailsHasBeenSet() const { return m_securityDetailsHasBeenSet; }
  template <typename SecurityDetailsT = SecurityDetails>
  void SetSecurityDetails(SecurityDetailsT&& value) {
    m_securityDetailsHasBeenSet = true;
    m_securityDetails = std::forward<SecurityDetailsT>(value);
  }
  template <typename SecurityDetailsT = SecurityDetails>
  EndpointDetails& WithSecurityDetails(SecurityDetailsT&& value) {
    SetSecurityDetails(std::forward<SecurityDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A dataflow endpoint.</p>
   */
  inline const DataflowEndpoint& GetEndpoint() const { return m_endpoint; }
  inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
  template <typename EndpointT = DataflowEndpoint>
  void SetEndpoint(EndpointT&& value) {
    m_endpointHasBeenSet = true;
    m_endpoint = std::forward<EndpointT>(value);
  }
  template <typename EndpointT = DataflowEndpoint>
  EndpointDetails& WithEndpoint(EndpointT&& value) {
    SetEndpoint(std::forward<EndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An agent endpoint.</p>
   */
  inline const AwsGroundStationAgentEndpoint& GetAwsGroundStationAgentEndpoint() const { return m_awsGroundStationAgentEndpoint; }
  inline bool AwsGroundStationAgentEndpointHasBeenSet() const { return m_awsGroundStationAgentEndpointHasBeenSet; }
  template <typename AwsGroundStationAgentEndpointT = AwsGroundStationAgentEndpoint>
  void SetAwsGroundStationAgentEndpoint(AwsGroundStationAgentEndpointT&& value) {
    m_awsGroundStationAgentEndpointHasBeenSet = true;
    m_awsGroundStationAgentEndpoint = std::forward<AwsGroundStationAgentEndpointT>(value);
  }
  template <typename AwsGroundStationAgentEndpointT = AwsGroundStationAgentEndpoint>
  EndpointDetails& WithAwsGroundStationAgentEndpoint(AwsGroundStationAgentEndpointT&& value) {
    SetAwsGroundStationAgentEndpoint(std::forward<AwsGroundStationAgentEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Definition for an uplink agent endpoint</p>
   */
  inline const UplinkAwsGroundStationAgentEndpointDetails& GetUplinkAwsGroundStationAgentEndpoint() const {
    return m_uplinkAwsGroundStationAgentEndpoint;
  }
  inline bool UplinkAwsGroundStationAgentEndpointHasBeenSet() const { return m_uplinkAwsGroundStationAgentEndpointHasBeenSet; }
  template <typename UplinkAwsGroundStationAgentEndpointT = UplinkAwsGroundStationAgentEndpointDetails>
  void SetUplinkAwsGroundStationAgentEndpoint(UplinkAwsGroundStationAgentEndpointT&& value) {
    m_uplinkAwsGroundStationAgentEndpointHasBeenSet = true;
    m_uplinkAwsGroundStationAgentEndpoint = std::forward<UplinkAwsGroundStationAgentEndpointT>(value);
  }
  template <typename UplinkAwsGroundStationAgentEndpointT = UplinkAwsGroundStationAgentEndpointDetails>
  EndpointDetails& WithUplinkAwsGroundStationAgentEndpoint(UplinkAwsGroundStationAgentEndpointT&& value) {
    SetUplinkAwsGroundStationAgentEndpoint(std::forward<UplinkAwsGroundStationAgentEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Definition for a downlink agent endpoint</p>
   */
  inline const DownlinkAwsGroundStationAgentEndpointDetails& GetDownlinkAwsGroundStationAgentEndpoint() const {
    return m_downlinkAwsGroundStationAgentEndpoint;
  }
  inline bool DownlinkAwsGroundStationAgentEndpointHasBeenSet() const { return m_downlinkAwsGroundStationAgentEndpointHasBeenSet; }
  template <typename DownlinkAwsGroundStationAgentEndpointT = DownlinkAwsGroundStationAgentEndpointDetails>
  void SetDownlinkAwsGroundStationAgentEndpoint(DownlinkAwsGroundStationAgentEndpointT&& value) {
    m_downlinkAwsGroundStationAgentEndpointHasBeenSet = true;
    m_downlinkAwsGroundStationAgentEndpoint = std::forward<DownlinkAwsGroundStationAgentEndpointT>(value);
  }
  template <typename DownlinkAwsGroundStationAgentEndpointT = DownlinkAwsGroundStationAgentEndpointDetails>
  EndpointDetails& WithDownlinkAwsGroundStationAgentEndpoint(DownlinkAwsGroundStationAgentEndpointT&& value) {
    SetDownlinkAwsGroundStationAgentEndpoint(std::forward<DownlinkAwsGroundStationAgentEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A dataflow endpoint health status. This field is ignored when calling
   * <code>CreateDataflowEndpointGroup</code>.</p>
   */
  inline CapabilityHealth GetHealthStatus() const { return m_healthStatus; }
  inline bool HealthStatusHasBeenSet() const { return m_healthStatusHasBeenSet; }
  inline void SetHealthStatus(CapabilityHealth value) {
    m_healthStatusHasBeenSet = true;
    m_healthStatus = value;
  }
  inline EndpointDetails& WithHealthStatus(CapabilityHealth value) {
    SetHealthStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Health reasons for a dataflow endpoint. This field is ignored when calling
   * <code>CreateDataflowEndpointGroup</code>.</p>
   */
  inline const Aws::Vector<CapabilityHealthReason>& GetHealthReasons() const { return m_healthReasons; }
  inline bool HealthReasonsHasBeenSet() const { return m_healthReasonsHasBeenSet; }
  template <typename HealthReasonsT = Aws::Vector<CapabilityHealthReason>>
  void SetHealthReasons(HealthReasonsT&& value) {
    m_healthReasonsHasBeenSet = true;
    m_healthReasons = std::forward<HealthReasonsT>(value);
  }
  template <typename HealthReasonsT = Aws::Vector<CapabilityHealthReason>>
  EndpointDetails& WithHealthReasons(HealthReasonsT&& value) {
    SetHealthReasons(std::forward<HealthReasonsT>(value));
    return *this;
  }
  inline EndpointDetails& AddHealthReasons(CapabilityHealthReason value) {
    m_healthReasonsHasBeenSet = true;
    m_healthReasons.push_back(value);
    return *this;
  }
  ///@}
 private:
  SecurityDetails m_securityDetails;

  DataflowEndpoint m_endpoint;

  AwsGroundStationAgentEndpoint m_awsGroundStationAgentEndpoint;

  UplinkAwsGroundStationAgentEndpointDetails m_uplinkAwsGroundStationAgentEndpoint;

  DownlinkAwsGroundStationAgentEndpointDetails m_downlinkAwsGroundStationAgentEndpoint;

  CapabilityHealth m_healthStatus{CapabilityHealth::NOT_SET};

  Aws::Vector<CapabilityHealthReason> m_healthReasons;
  bool m_securityDetailsHasBeenSet = false;
  bool m_endpointHasBeenSet = false;
  bool m_awsGroundStationAgentEndpointHasBeenSet = false;
  bool m_uplinkAwsGroundStationAgentEndpointHasBeenSet = false;
  bool m_downlinkAwsGroundStationAgentEndpointHasBeenSet = false;
  bool m_healthStatusHasBeenSet = false;
  bool m_healthReasonsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
