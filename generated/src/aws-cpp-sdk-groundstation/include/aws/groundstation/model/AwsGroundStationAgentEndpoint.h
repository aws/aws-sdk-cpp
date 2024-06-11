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
    AWS_GROUNDSTATION_API AwsGroundStationAgentEndpoint();
    AWS_GROUNDSTATION_API AwsGroundStationAgentEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API AwsGroundStationAgentEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of AgentEndpoint.</p>
     */
    inline const AgentStatus& GetAgentStatus() const{ return m_agentStatus; }
    inline bool AgentStatusHasBeenSet() const { return m_agentStatusHasBeenSet; }
    inline void SetAgentStatus(const AgentStatus& value) { m_agentStatusHasBeenSet = true; m_agentStatus = value; }
    inline void SetAgentStatus(AgentStatus&& value) { m_agentStatusHasBeenSet = true; m_agentStatus = std::move(value); }
    inline AwsGroundStationAgentEndpoint& WithAgentStatus(const AgentStatus& value) { SetAgentStatus(value); return *this;}
    inline AwsGroundStationAgentEndpoint& WithAgentStatus(AgentStatus&& value) { SetAgentStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The results of the audit.</p>
     */
    inline const AuditResults& GetAuditResults() const{ return m_auditResults; }
    inline bool AuditResultsHasBeenSet() const { return m_auditResultsHasBeenSet; }
    inline void SetAuditResults(const AuditResults& value) { m_auditResultsHasBeenSet = true; m_auditResults = value; }
    inline void SetAuditResults(AuditResults&& value) { m_auditResultsHasBeenSet = true; m_auditResults = std::move(value); }
    inline AwsGroundStationAgentEndpoint& WithAuditResults(const AuditResults& value) { SetAuditResults(value); return *this;}
    inline AwsGroundStationAgentEndpoint& WithAuditResults(AuditResults&& value) { SetAuditResults(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The egress address of AgentEndpoint.</p>
     */
    inline const ConnectionDetails& GetEgressAddress() const{ return m_egressAddress; }
    inline bool EgressAddressHasBeenSet() const { return m_egressAddressHasBeenSet; }
    inline void SetEgressAddress(const ConnectionDetails& value) { m_egressAddressHasBeenSet = true; m_egressAddress = value; }
    inline void SetEgressAddress(ConnectionDetails&& value) { m_egressAddressHasBeenSet = true; m_egressAddress = std::move(value); }
    inline AwsGroundStationAgentEndpoint& WithEgressAddress(const ConnectionDetails& value) { SetEgressAddress(value); return *this;}
    inline AwsGroundStationAgentEndpoint& WithEgressAddress(ConnectionDetails&& value) { SetEgressAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ingress address of AgentEndpoint.</p>
     */
    inline const RangedConnectionDetails& GetIngressAddress() const{ return m_ingressAddress; }
    inline bool IngressAddressHasBeenSet() const { return m_ingressAddressHasBeenSet; }
    inline void SetIngressAddress(const RangedConnectionDetails& value) { m_ingressAddressHasBeenSet = true; m_ingressAddress = value; }
    inline void SetIngressAddress(RangedConnectionDetails&& value) { m_ingressAddressHasBeenSet = true; m_ingressAddress = std::move(value); }
    inline AwsGroundStationAgentEndpoint& WithIngressAddress(const RangedConnectionDetails& value) { SetIngressAddress(value); return *this;}
    inline AwsGroundStationAgentEndpoint& WithIngressAddress(RangedConnectionDetails&& value) { SetIngressAddress(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name string associated with AgentEndpoint. Used as a human-readable
     * identifier for AgentEndpoint.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AwsGroundStationAgentEndpoint& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AwsGroundStationAgentEndpoint& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AwsGroundStationAgentEndpoint& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    AgentStatus m_agentStatus;
    bool m_agentStatusHasBeenSet = false;

    AuditResults m_auditResults;
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
