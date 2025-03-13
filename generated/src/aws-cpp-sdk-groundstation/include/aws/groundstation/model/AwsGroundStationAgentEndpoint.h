/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/AgentStatus.h>
#include <aws/groundstation/model/AuditResults.h>
#include <aws/groundstation/model/ConnectionDetails.h>
#include <aws/groundstation/model/RangedConnectionDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Information about AwsGroundStationAgentEndpoint.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/AwsGroundStationAgentEndpoint">AWS
   * API Reference</a></p>
   */
  class AwsGroundStationAgentEndpoint
  {
  public:
    AWS_GROUNDSTATION_API AwsGroundStationAgentEndpoint() = default;
    AWS_GROUNDSTATION_API AwsGroundStationAgentEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API AwsGroundStationAgentEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of AgentEndpoint.</p>
     */
    inline AgentStatus GetAgentStatus() const { return m_agentStatus; }
    inline bool AgentStatusHasBeenSet() const { return m_agentStatusHasBeenSet; }
    inline void SetAgentStatus(AgentStatus value) { m_agentStatusHasBeenSet = true; m_agentStatus = value; }
    inline AwsGroundStationAgentEndpoint& WithAgentStatus(AgentStatus value) { SetAgentStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The results of the audit.</p>
     */
    inline AuditResults GetAuditResults() const { return m_auditResults; }
    inline bool AuditResultsHasBeenSet() const { return m_auditResultsHasBeenSet; }
    inline void SetAuditResults(AuditResults value) { m_auditResultsHasBeenSet = true; m_auditResults = value; }
    inline AwsGroundStationAgentEndpoint& WithAuditResults(AuditResults value) { SetAuditResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The egress address of AgentEndpoint.</p>
     */
    inline const ConnectionDetails& GetEgressAddress() const { return m_egressAddress; }
    inline bool EgressAddressHasBeenSet() const { return m_egressAddressHasBeenSet; }
    template<typename EgressAddressT = ConnectionDetails>
    void SetEgressAddress(EgressAddressT&& value) { m_egressAddressHasBeenSet = true; m_egressAddress = std::forward<EgressAddressT>(value); }
    template<typename EgressAddressT = ConnectionDetails>
    AwsGroundStationAgentEndpoint& WithEgressAddress(EgressAddressT&& value) { SetEgressAddress(std::forward<EgressAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ingress address of AgentEndpoint.</p>
     */
    inline const RangedConnectionDetails& GetIngressAddress() const { return m_ingressAddress; }
    inline bool IngressAddressHasBeenSet() const { return m_ingressAddressHasBeenSet; }
    template<typename IngressAddressT = RangedConnectionDetails>
    void SetIngressAddress(IngressAddressT&& value) { m_ingressAddressHasBeenSet = true; m_ingressAddress = std::forward<IngressAddressT>(value); }
    template<typename IngressAddressT = RangedConnectionDetails>
    AwsGroundStationAgentEndpoint& WithIngressAddress(IngressAddressT&& value) { SetIngressAddress(std::forward<IngressAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name string associated with AgentEndpoint. Used as a human-readable
     * identifier for AgentEndpoint.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AwsGroundStationAgentEndpoint& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    AgentStatus m_agentStatus{AgentStatus::NOT_SET};
    bool m_agentStatusHasBeenSet = false;

    AuditResults m_auditResults{AuditResults::NOT_SET};
    bool m_auditResultsHasBeenSet = false;

    ConnectionDetails m_egressAddress;
    bool m_egressAddressHasBeenSet = false;

    RangedConnectionDetails m_ingressAddress;
    bool m_ingressAddressHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
