/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mailmanager/model/IngressPointAuthConfiguration.h>
#include <aws/mailmanager/model/IngressPointStatus.h>
#include <aws/mailmanager/model/IngressPointType.h>
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
    AWS_MAILMANAGER_API GetIngressPointResult();
    AWS_MAILMANAGER_API GetIngressPointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API GetIngressPointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The DNS A Record that identifies your ingress endpoint. Configure your DNS
     * Mail Exchange (MX) record with this value to route emails to Mail Manager. </p>
     */
    inline const Aws::String& GetARecord() const{ return m_aRecord; }
    inline void SetARecord(const Aws::String& value) { m_aRecord = value; }
    inline void SetARecord(Aws::String&& value) { m_aRecord = std::move(value); }
    inline void SetARecord(const char* value) { m_aRecord.assign(value); }
    inline GetIngressPointResult& WithARecord(const Aws::String& value) { SetARecord(value); return *this;}
    inline GetIngressPointResult& WithARecord(Aws::String&& value) { SetARecord(std::move(value)); return *this;}
    inline GetIngressPointResult& WithARecord(const char* value) { SetARecord(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the ingress endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }
    inline GetIngressPointResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline GetIngressPointResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the ingress endpoint resource.</p>
     */
    inline const Aws::String& GetIngressPointArn() const{ return m_ingressPointArn; }
    inline void SetIngressPointArn(const Aws::String& value) { m_ingressPointArn = value; }
    inline void SetIngressPointArn(Aws::String&& value) { m_ingressPointArn = std::move(value); }
    inline void SetIngressPointArn(const char* value) { m_ingressPointArn.assign(value); }
    inline GetIngressPointResult& WithIngressPointArn(const Aws::String& value) { SetIngressPointArn(value); return *this;}
    inline GetIngressPointResult& WithIngressPointArn(Aws::String&& value) { SetIngressPointArn(std::move(value)); return *this;}
    inline GetIngressPointResult& WithIngressPointArn(const char* value) { SetIngressPointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication configuration of the ingress endpoint resource.</p>
     */
    inline const IngressPointAuthConfiguration& GetIngressPointAuthConfiguration() const{ return m_ingressPointAuthConfiguration; }
    inline void SetIngressPointAuthConfiguration(const IngressPointAuthConfiguration& value) { m_ingressPointAuthConfiguration = value; }
    inline void SetIngressPointAuthConfiguration(IngressPointAuthConfiguration&& value) { m_ingressPointAuthConfiguration = std::move(value); }
    inline GetIngressPointResult& WithIngressPointAuthConfiguration(const IngressPointAuthConfiguration& value) { SetIngressPointAuthConfiguration(value); return *this;}
    inline GetIngressPointResult& WithIngressPointAuthConfiguration(IngressPointAuthConfiguration&& value) { SetIngressPointAuthConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of an ingress endpoint resource.</p>
     */
    inline const Aws::String& GetIngressPointId() const{ return m_ingressPointId; }
    inline void SetIngressPointId(const Aws::String& value) { m_ingressPointId = value; }
    inline void SetIngressPointId(Aws::String&& value) { m_ingressPointId = std::move(value); }
    inline void SetIngressPointId(const char* value) { m_ingressPointId.assign(value); }
    inline GetIngressPointResult& WithIngressPointId(const Aws::String& value) { SetIngressPointId(value); return *this;}
    inline GetIngressPointResult& WithIngressPointId(Aws::String&& value) { SetIngressPointId(std::move(value)); return *this;}
    inline GetIngressPointResult& WithIngressPointId(const char* value) { SetIngressPointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user friendly name for the ingress endpoint.</p>
     */
    inline const Aws::String& GetIngressPointName() const{ return m_ingressPointName; }
    inline void SetIngressPointName(const Aws::String& value) { m_ingressPointName = value; }
    inline void SetIngressPointName(Aws::String&& value) { m_ingressPointName = std::move(value); }
    inline void SetIngressPointName(const char* value) { m_ingressPointName.assign(value); }
    inline GetIngressPointResult& WithIngressPointName(const Aws::String& value) { SetIngressPointName(value); return *this;}
    inline GetIngressPointResult& WithIngressPointName(Aws::String&& value) { SetIngressPointName(std::move(value)); return *this;}
    inline GetIngressPointResult& WithIngressPointName(const char* value) { SetIngressPointName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the ingress endpoint was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestamp = value; }
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestamp = std::move(value); }
    inline GetIngressPointResult& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}
    inline GetIngressPointResult& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a rule set resource associated with the ingress
     * endpoint.</p>
     */
    inline const Aws::String& GetRuleSetId() const{ return m_ruleSetId; }
    inline void SetRuleSetId(const Aws::String& value) { m_ruleSetId = value; }
    inline void SetRuleSetId(Aws::String&& value) { m_ruleSetId = std::move(value); }
    inline void SetRuleSetId(const char* value) { m_ruleSetId.assign(value); }
    inline GetIngressPointResult& WithRuleSetId(const Aws::String& value) { SetRuleSetId(value); return *this;}
    inline GetIngressPointResult& WithRuleSetId(Aws::String&& value) { SetRuleSetId(std::move(value)); return *this;}
    inline GetIngressPointResult& WithRuleSetId(const char* value) { SetRuleSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the ingress endpoint resource.</p>
     */
    inline const IngressPointStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const IngressPointStatus& value) { m_status = value; }
    inline void SetStatus(IngressPointStatus&& value) { m_status = std::move(value); }
    inline GetIngressPointResult& WithStatus(const IngressPointStatus& value) { SetStatus(value); return *this;}
    inline GetIngressPointResult& WithStatus(IngressPointStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the traffic policy resource associated with the ingress
     * endpoint.</p>
     */
    inline const Aws::String& GetTrafficPolicyId() const{ return m_trafficPolicyId; }
    inline void SetTrafficPolicyId(const Aws::String& value) { m_trafficPolicyId = value; }
    inline void SetTrafficPolicyId(Aws::String&& value) { m_trafficPolicyId = std::move(value); }
    inline void SetTrafficPolicyId(const char* value) { m_trafficPolicyId.assign(value); }
    inline GetIngressPointResult& WithTrafficPolicyId(const Aws::String& value) { SetTrafficPolicyId(value); return *this;}
    inline GetIngressPointResult& WithTrafficPolicyId(Aws::String&& value) { SetTrafficPolicyId(std::move(value)); return *this;}
    inline GetIngressPointResult& WithTrafficPolicyId(const char* value) { SetTrafficPolicyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of ingress endpoint.</p>
     */
    inline const IngressPointType& GetType() const{ return m_type; }
    inline void SetType(const IngressPointType& value) { m_type = value; }
    inline void SetType(IngressPointType&& value) { m_type = std::move(value); }
    inline GetIngressPointResult& WithType(const IngressPointType& value) { SetType(value); return *this;}
    inline GetIngressPointResult& WithType(IngressPointType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetIngressPointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetIngressPointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetIngressPointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_aRecord;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::String m_ingressPointArn;

    IngressPointAuthConfiguration m_ingressPointAuthConfiguration;

    Aws::String m_ingressPointId;

    Aws::String m_ingressPointName;

    Aws::Utils::DateTime m_lastUpdatedTimestamp;

    Aws::String m_ruleSetId;

    IngressPointStatus m_status;

    Aws::String m_trafficPolicyId;

    IngressPointType m_type;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
