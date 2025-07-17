/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/IngressPointStatus.h>
#include <aws/mailmanager/model/IngressPointType.h>
#include <aws/mailmanager/model/IngressPointAuthConfiguration.h>
#include <aws/mailmanager/model/NetworkConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MailManager
{
namespace Model
{
  class GetIngressPointResult
  {
  public:
    AWS_MAILMANAGER_API GetIngressPointResult() = default;
    AWS_MAILMANAGER_API GetIngressPointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API GetIngressPointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of an ingress endpoint resource.</p>
     */
    inline const Aws::String& GetIngressPointId() const { return m_ingressPointId; }
    template<typename IngressPointIdT = Aws::String>
    void SetIngressPointId(IngressPointIdT&& value) { m_ingressPointIdHasBeenSet = true; m_ingressPointId = std::forward<IngressPointIdT>(value); }
    template<typename IngressPointIdT = Aws::String>
    GetIngressPointResult& WithIngressPointId(IngressPointIdT&& value) { SetIngressPointId(std::forward<IngressPointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user friendly name for the ingress endpoint.</p>
     */
    inline const Aws::String& GetIngressPointName() const { return m_ingressPointName; }
    template<typename IngressPointNameT = Aws::String>
    void SetIngressPointName(IngressPointNameT&& value) { m_ingressPointNameHasBeenSet = true; m_ingressPointName = std::forward<IngressPointNameT>(value); }
    template<typename IngressPointNameT = Aws::String>
    GetIngressPointResult& WithIngressPointName(IngressPointNameT&& value) { SetIngressPointName(std::forward<IngressPointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the ingress endpoint resource.</p>
     */
    inline const Aws::String& GetIngressPointArn() const { return m_ingressPointArn; }
    template<typename IngressPointArnT = Aws::String>
    void SetIngressPointArn(IngressPointArnT&& value) { m_ingressPointArnHasBeenSet = true; m_ingressPointArn = std::forward<IngressPointArnT>(value); }
    template<typename IngressPointArnT = Aws::String>
    GetIngressPointResult& WithIngressPointArn(IngressPointArnT&& value) { SetIngressPointArn(std::forward<IngressPointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the ingress endpoint resource.</p>
     */
    inline IngressPointStatus GetStatus() const { return m_status; }
    inline void SetStatus(IngressPointStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetIngressPointResult& WithStatus(IngressPointStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of ingress endpoint.</p>
     */
    inline IngressPointType GetType() const { return m_type; }
    inline void SetType(IngressPointType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GetIngressPointResult& WithType(IngressPointType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The DNS A Record that identifies your ingress endpoint. Configure your DNS
     * Mail Exchange (MX) record with this value to route emails to Mail Manager. </p>
     */
    inline const Aws::String& GetARecord() const { return m_aRecord; }
    template<typename ARecordT = Aws::String>
    void SetARecord(ARecordT&& value) { m_aRecordHasBeenSet = true; m_aRecord = std::forward<ARecordT>(value); }
    template<typename ARecordT = Aws::String>
    GetIngressPointResult& WithARecord(ARecordT&& value) { SetARecord(std::forward<ARecordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a rule set resource associated with the ingress
     * endpoint.</p>
     */
    inline const Aws::String& GetRuleSetId() const { return m_ruleSetId; }
    template<typename RuleSetIdT = Aws::String>
    void SetRuleSetId(RuleSetIdT&& value) { m_ruleSetIdHasBeenSet = true; m_ruleSetId = std::forward<RuleSetIdT>(value); }
    template<typename RuleSetIdT = Aws::String>
    GetIngressPointResult& WithRuleSetId(RuleSetIdT&& value) { SetRuleSetId(std::forward<RuleSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the traffic policy resource associated with the ingress
     * endpoint.</p>
     */
    inline const Aws::String& GetTrafficPolicyId() const { return m_trafficPolicyId; }
    template<typename TrafficPolicyIdT = Aws::String>
    void SetTrafficPolicyId(TrafficPolicyIdT&& value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId = std::forward<TrafficPolicyIdT>(value); }
    template<typename TrafficPolicyIdT = Aws::String>
    GetIngressPointResult& WithTrafficPolicyId(TrafficPolicyIdT&& value) { SetTrafficPolicyId(std::forward<TrafficPolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication configuration of the ingress endpoint resource.</p>
     */
    inline const IngressPointAuthConfiguration& GetIngressPointAuthConfiguration() const { return m_ingressPointAuthConfiguration; }
    template<typename IngressPointAuthConfigurationT = IngressPointAuthConfiguration>
    void SetIngressPointAuthConfiguration(IngressPointAuthConfigurationT&& value) { m_ingressPointAuthConfigurationHasBeenSet = true; m_ingressPointAuthConfiguration = std::forward<IngressPointAuthConfigurationT>(value); }
    template<typename IngressPointAuthConfigurationT = IngressPointAuthConfiguration>
    GetIngressPointResult& WithIngressPointAuthConfiguration(IngressPointAuthConfigurationT&& value) { SetIngressPointAuthConfiguration(std::forward<IngressPointAuthConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network configuration for the ingress point.</p>
     */
    inline const NetworkConfiguration& GetNetworkConfiguration() const { return m_networkConfiguration; }
    template<typename NetworkConfigurationT = NetworkConfiguration>
    void SetNetworkConfiguration(NetworkConfigurationT&& value) { m_networkConfigurationHasBeenSet = true; m_networkConfiguration = std::forward<NetworkConfigurationT>(value); }
    template<typename NetworkConfigurationT = NetworkConfiguration>
    GetIngressPointResult& WithNetworkConfiguration(NetworkConfigurationT&& value) { SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the ingress endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    GetIngressPointResult& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the ingress endpoint was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const { return m_lastUpdatedTimestamp; }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    void SetLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::forward<LastUpdatedTimestampT>(value); }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    GetIngressPointResult& WithLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { SetLastUpdatedTimestamp(std::forward<LastUpdatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetIngressPointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ingressPointId;
    bool m_ingressPointIdHasBeenSet = false;

    Aws::String m_ingressPointName;
    bool m_ingressPointNameHasBeenSet = false;

    Aws::String m_ingressPointArn;
    bool m_ingressPointArnHasBeenSet = false;

    IngressPointStatus m_status{IngressPointStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    IngressPointType m_type{IngressPointType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_aRecord;
    bool m_aRecordHasBeenSet = false;

    Aws::String m_ruleSetId;
    bool m_ruleSetIdHasBeenSet = false;

    Aws::String m_trafficPolicyId;
    bool m_trafficPolicyIdHasBeenSet = false;

    IngressPointAuthConfiguration m_ingressPointAuthConfiguration;
    bool m_ingressPointAuthConfigurationHasBeenSet = false;

    NetworkConfiguration m_networkConfiguration;
    bool m_networkConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp{};
    bool m_lastUpdatedTimestampHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
