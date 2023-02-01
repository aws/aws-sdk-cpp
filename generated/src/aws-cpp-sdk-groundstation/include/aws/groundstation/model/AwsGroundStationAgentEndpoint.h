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


    /**
     * <p>The status of AgentEndpoint.</p>
     */
    inline const AgentStatus& GetAgentStatus() const{ return m_agentStatus; }

    /**
     * <p>The status of AgentEndpoint.</p>
     */
    inline bool AgentStatusHasBeenSet() const { return m_agentStatusHasBeenSet; }

    /**
     * <p>The status of AgentEndpoint.</p>
     */
    inline void SetAgentStatus(const AgentStatus& value) { m_agentStatusHasBeenSet = true; m_agentStatus = value; }

    /**
     * <p>The status of AgentEndpoint.</p>
     */
    inline void SetAgentStatus(AgentStatus&& value) { m_agentStatusHasBeenSet = true; m_agentStatus = std::move(value); }

    /**
     * <p>The status of AgentEndpoint.</p>
     */
    inline AwsGroundStationAgentEndpoint& WithAgentStatus(const AgentStatus& value) { SetAgentStatus(value); return *this;}

    /**
     * <p>The status of AgentEndpoint.</p>
     */
    inline AwsGroundStationAgentEndpoint& WithAgentStatus(AgentStatus&& value) { SetAgentStatus(std::move(value)); return *this;}


    /**
     * <p>The results of the audit.</p>
     */
    inline const AuditResults& GetAuditResults() const{ return m_auditResults; }

    /**
     * <p>The results of the audit.</p>
     */
    inline bool AuditResultsHasBeenSet() const { return m_auditResultsHasBeenSet; }

    /**
     * <p>The results of the audit.</p>
     */
    inline void SetAuditResults(const AuditResults& value) { m_auditResultsHasBeenSet = true; m_auditResults = value; }

    /**
     * <p>The results of the audit.</p>
     */
    inline void SetAuditResults(AuditResults&& value) { m_auditResultsHasBeenSet = true; m_auditResults = std::move(value); }

    /**
     * <p>The results of the audit.</p>
     */
    inline AwsGroundStationAgentEndpoint& WithAuditResults(const AuditResults& value) { SetAuditResults(value); return *this;}

    /**
     * <p>The results of the audit.</p>
     */
    inline AwsGroundStationAgentEndpoint& WithAuditResults(AuditResults&& value) { SetAuditResults(std::move(value)); return *this;}


    /**
     * <p>The egress address of AgentEndpoint.</p>
     */
    inline const ConnectionDetails& GetEgressAddress() const{ return m_egressAddress; }

    /**
     * <p>The egress address of AgentEndpoint.</p>
     */
    inline bool EgressAddressHasBeenSet() const { return m_egressAddressHasBeenSet; }

    /**
     * <p>The egress address of AgentEndpoint.</p>
     */
    inline void SetEgressAddress(const ConnectionDetails& value) { m_egressAddressHasBeenSet = true; m_egressAddress = value; }

    /**
     * <p>The egress address of AgentEndpoint.</p>
     */
    inline void SetEgressAddress(ConnectionDetails&& value) { m_egressAddressHasBeenSet = true; m_egressAddress = std::move(value); }

    /**
     * <p>The egress address of AgentEndpoint.</p>
     */
    inline AwsGroundStationAgentEndpoint& WithEgressAddress(const ConnectionDetails& value) { SetEgressAddress(value); return *this;}

    /**
     * <p>The egress address of AgentEndpoint.</p>
     */
    inline AwsGroundStationAgentEndpoint& WithEgressAddress(ConnectionDetails&& value) { SetEgressAddress(std::move(value)); return *this;}


    /**
     * <p>The ingress address of AgentEndpoint.</p>
     */
    inline const RangedConnectionDetails& GetIngressAddress() const{ return m_ingressAddress; }

    /**
     * <p>The ingress address of AgentEndpoint.</p>
     */
    inline bool IngressAddressHasBeenSet() const { return m_ingressAddressHasBeenSet; }

    /**
     * <p>The ingress address of AgentEndpoint.</p>
     */
    inline void SetIngressAddress(const RangedConnectionDetails& value) { m_ingressAddressHasBeenSet = true; m_ingressAddress = value; }

    /**
     * <p>The ingress address of AgentEndpoint.</p>
     */
    inline void SetIngressAddress(RangedConnectionDetails&& value) { m_ingressAddressHasBeenSet = true; m_ingressAddress = std::move(value); }

    /**
     * <p>The ingress address of AgentEndpoint.</p>
     */
    inline AwsGroundStationAgentEndpoint& WithIngressAddress(const RangedConnectionDetails& value) { SetIngressAddress(value); return *this;}

    /**
     * <p>The ingress address of AgentEndpoint.</p>
     */
    inline AwsGroundStationAgentEndpoint& WithIngressAddress(RangedConnectionDetails&& value) { SetIngressAddress(std::move(value)); return *this;}


    /**
     * <p>Name string associated with AgentEndpoint. Used as a human-readable
     * identifier for AgentEndpoint.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name string associated with AgentEndpoint. Used as a human-readable
     * identifier for AgentEndpoint.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name string associated with AgentEndpoint. Used as a human-readable
     * identifier for AgentEndpoint.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name string associated with AgentEndpoint. Used as a human-readable
     * identifier for AgentEndpoint.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name string associated with AgentEndpoint. Used as a human-readable
     * identifier for AgentEndpoint.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name string associated with AgentEndpoint. Used as a human-readable
     * identifier for AgentEndpoint.</p>
     */
    inline AwsGroundStationAgentEndpoint& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name string associated with AgentEndpoint. Used as a human-readable
     * identifier for AgentEndpoint.</p>
     */
    inline AwsGroundStationAgentEndpoint& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name string associated with AgentEndpoint. Used as a human-readable
     * identifier for AgentEndpoint.</p>
     */
    inline AwsGroundStationAgentEndpoint& WithName(const char* value) { SetName(value); return *this;}

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
