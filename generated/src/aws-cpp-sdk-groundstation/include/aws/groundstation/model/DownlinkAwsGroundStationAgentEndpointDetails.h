/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/AgentStatus.h>
#include <aws/groundstation/model/AuditResults.h>
#include <aws/groundstation/model/DownlinkDataflowDetails.h>

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
 * <p>Details for a downlink agent endpoint</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DownlinkAwsGroundStationAgentEndpointDetails">AWS
 * API Reference</a></p>
 */
class DownlinkAwsGroundStationAgentEndpointDetails {
 public:
  AWS_GROUNDSTATION_API DownlinkAwsGroundStationAgentEndpointDetails() = default;
  AWS_GROUNDSTATION_API DownlinkAwsGroundStationAgentEndpointDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API DownlinkAwsGroundStationAgentEndpointDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Downlink dataflow endpoint name</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  DownlinkAwsGroundStationAgentEndpointDetails& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Dataflow details for the downlink endpoint</p>
   */
  inline const DownlinkDataflowDetails& GetDataflowDetails() const { return m_dataflowDetails; }
  inline bool DataflowDetailsHasBeenSet() const { return m_dataflowDetailsHasBeenSet; }
  template <typename DataflowDetailsT = DownlinkDataflowDetails>
  void SetDataflowDetails(DataflowDetailsT&& value) {
    m_dataflowDetailsHasBeenSet = true;
    m_dataflowDetails = std::forward<DataflowDetailsT>(value);
  }
  template <typename DataflowDetailsT = DownlinkDataflowDetails>
  DownlinkAwsGroundStationAgentEndpointDetails& WithDataflowDetails(DataflowDetailsT&& value) {
    SetDataflowDetails(std::forward<DataflowDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Status of the agent associated with the downlink dataflow endpoint</p>
   */
  inline AgentStatus GetAgentStatus() const { return m_agentStatus; }
  inline bool AgentStatusHasBeenSet() const { return m_agentStatusHasBeenSet; }
  inline void SetAgentStatus(AgentStatus value) {
    m_agentStatusHasBeenSet = true;
    m_agentStatus = value;
  }
  inline DownlinkAwsGroundStationAgentEndpointDetails& WithAgentStatus(AgentStatus value) {
    SetAgentStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Health audit results for the downlink dataflow endpoint</p>
   */
  inline AuditResults GetAuditResults() const { return m_auditResults; }
  inline bool AuditResultsHasBeenSet() const { return m_auditResultsHasBeenSet; }
  inline void SetAuditResults(AuditResults value) {
    m_auditResultsHasBeenSet = true;
    m_auditResults = value;
  }
  inline DownlinkAwsGroundStationAgentEndpointDetails& WithAuditResults(AuditResults value) {
    SetAuditResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  DownlinkDataflowDetails m_dataflowDetails;

  AgentStatus m_agentStatus{AgentStatus::NOT_SET};

  AuditResults m_auditResults{AuditResults::NOT_SET};
  bool m_nameHasBeenSet = false;
  bool m_dataflowDetailsHasBeenSet = false;
  bool m_agentStatusHasBeenSet = false;
  bool m_auditResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
