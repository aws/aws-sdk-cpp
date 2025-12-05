/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/DownlinkAwsGroundStationAgentEndpoint.h>
#include <aws/groundstation/model/UplinkAwsGroundStationAgentEndpoint.h>

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
 * <p>Endpoint definition used for creating a dataflow endpoint</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/CreateEndpointDetails">AWS
 * API Reference</a></p>
 */
class CreateEndpointDetails {
 public:
  AWS_GROUNDSTATION_API CreateEndpointDetails() = default;
  AWS_GROUNDSTATION_API CreateEndpointDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API CreateEndpointDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Definition for an uplink agent endpoint</p>
   */
  inline const UplinkAwsGroundStationAgentEndpoint& GetUplinkAwsGroundStationAgentEndpoint() const {
    return m_uplinkAwsGroundStationAgentEndpoint;
  }
  inline bool UplinkAwsGroundStationAgentEndpointHasBeenSet() const { return m_uplinkAwsGroundStationAgentEndpointHasBeenSet; }
  template <typename UplinkAwsGroundStationAgentEndpointT = UplinkAwsGroundStationAgentEndpoint>
  void SetUplinkAwsGroundStationAgentEndpoint(UplinkAwsGroundStationAgentEndpointT&& value) {
    m_uplinkAwsGroundStationAgentEndpointHasBeenSet = true;
    m_uplinkAwsGroundStationAgentEndpoint = std::forward<UplinkAwsGroundStationAgentEndpointT>(value);
  }
  template <typename UplinkAwsGroundStationAgentEndpointT = UplinkAwsGroundStationAgentEndpoint>
  CreateEndpointDetails& WithUplinkAwsGroundStationAgentEndpoint(UplinkAwsGroundStationAgentEndpointT&& value) {
    SetUplinkAwsGroundStationAgentEndpoint(std::forward<UplinkAwsGroundStationAgentEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Definition for a downlink agent endpoint</p>
   */
  inline const DownlinkAwsGroundStationAgentEndpoint& GetDownlinkAwsGroundStationAgentEndpoint() const {
    return m_downlinkAwsGroundStationAgentEndpoint;
  }
  inline bool DownlinkAwsGroundStationAgentEndpointHasBeenSet() const { return m_downlinkAwsGroundStationAgentEndpointHasBeenSet; }
  template <typename DownlinkAwsGroundStationAgentEndpointT = DownlinkAwsGroundStationAgentEndpoint>
  void SetDownlinkAwsGroundStationAgentEndpoint(DownlinkAwsGroundStationAgentEndpointT&& value) {
    m_downlinkAwsGroundStationAgentEndpointHasBeenSet = true;
    m_downlinkAwsGroundStationAgentEndpoint = std::forward<DownlinkAwsGroundStationAgentEndpointT>(value);
  }
  template <typename DownlinkAwsGroundStationAgentEndpointT = DownlinkAwsGroundStationAgentEndpoint>
  CreateEndpointDetails& WithDownlinkAwsGroundStationAgentEndpoint(DownlinkAwsGroundStationAgentEndpointT&& value) {
    SetDownlinkAwsGroundStationAgentEndpoint(std::forward<DownlinkAwsGroundStationAgentEndpointT>(value));
    return *this;
  }
  ///@}
 private:
  UplinkAwsGroundStationAgentEndpoint m_uplinkAwsGroundStationAgentEndpoint;

  DownlinkAwsGroundStationAgentEndpoint m_downlinkAwsGroundStationAgentEndpoint;
  bool m_uplinkAwsGroundStationAgentEndpointHasBeenSet = false;
  bool m_downlinkAwsGroundStationAgentEndpointHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
