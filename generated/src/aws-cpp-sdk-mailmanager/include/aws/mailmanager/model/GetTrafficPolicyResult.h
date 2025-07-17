/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mailmanager/model/AcceptAction.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mailmanager/model/PolicyStatement.h>
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
  class GetTrafficPolicyResult
  {
  public:
    AWS_MAILMANAGER_API GetTrafficPolicyResult() = default;
    AWS_MAILMANAGER_API GetTrafficPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API GetTrafficPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A user-friendly name for the traffic policy resource.</p>
     */
    inline const Aws::String& GetTrafficPolicyName() const { return m_trafficPolicyName; }
    template<typename TrafficPolicyNameT = Aws::String>
    void SetTrafficPolicyName(TrafficPolicyNameT&& value) { m_trafficPolicyNameHasBeenSet = true; m_trafficPolicyName = std::forward<TrafficPolicyNameT>(value); }
    template<typename TrafficPolicyNameT = Aws::String>
    GetTrafficPolicyResult& WithTrafficPolicyName(TrafficPolicyNameT&& value) { SetTrafficPolicyName(std::forward<TrafficPolicyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the traffic policy resource.</p>
     */
    inline const Aws::String& GetTrafficPolicyId() const { return m_trafficPolicyId; }
    template<typename TrafficPolicyIdT = Aws::String>
    void SetTrafficPolicyId(TrafficPolicyIdT&& value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId = std::forward<TrafficPolicyIdT>(value); }
    template<typename TrafficPolicyIdT = Aws::String>
    GetTrafficPolicyResult& WithTrafficPolicyId(TrafficPolicyIdT&& value) { SetTrafficPolicyId(std::forward<TrafficPolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the traffic policy resource.</p>
     */
    inline const Aws::String& GetTrafficPolicyArn() const { return m_trafficPolicyArn; }
    template<typename TrafficPolicyArnT = Aws::String>
    void SetTrafficPolicyArn(TrafficPolicyArnT&& value) { m_trafficPolicyArnHasBeenSet = true; m_trafficPolicyArn = std::forward<TrafficPolicyArnT>(value); }
    template<typename TrafficPolicyArnT = Aws::String>
    GetTrafficPolicyResult& WithTrafficPolicyArn(TrafficPolicyArnT&& value) { SetTrafficPolicyArn(std::forward<TrafficPolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of conditions which are in the traffic policy resource.</p>
     */
    inline const Aws::Vector<PolicyStatement>& GetPolicyStatements() const { return m_policyStatements; }
    template<typename PolicyStatementsT = Aws::Vector<PolicyStatement>>
    void SetPolicyStatements(PolicyStatementsT&& value) { m_policyStatementsHasBeenSet = true; m_policyStatements = std::forward<PolicyStatementsT>(value); }
    template<typename PolicyStatementsT = Aws::Vector<PolicyStatement>>
    GetTrafficPolicyResult& WithPolicyStatements(PolicyStatementsT&& value) { SetPolicyStatements(std::forward<PolicyStatementsT>(value)); return *this;}
    template<typename PolicyStatementsT = PolicyStatement>
    GetTrafficPolicyResult& AddPolicyStatements(PolicyStatementsT&& value) { m_policyStatementsHasBeenSet = true; m_policyStatements.emplace_back(std::forward<PolicyStatementsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum message size in bytes of email which is allowed in by this
     * traffic policy—anything larger will be blocked.</p>
     */
    inline int GetMaxMessageSizeBytes() const { return m_maxMessageSizeBytes; }
    inline void SetMaxMessageSizeBytes(int value) { m_maxMessageSizeBytesHasBeenSet = true; m_maxMessageSizeBytes = value; }
    inline GetTrafficPolicyResult& WithMaxMessageSizeBytes(int value) { SetMaxMessageSizeBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default action of the traffic policy.</p>
     */
    inline AcceptAction GetDefaultAction() const { return m_defaultAction; }
    inline void SetDefaultAction(AcceptAction value) { m_defaultActionHasBeenSet = true; m_defaultAction = value; }
    inline GetTrafficPolicyResult& WithDefaultAction(AcceptAction value) { SetDefaultAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the traffic policy was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    GetTrafficPolicyResult& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the traffic policy was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const { return m_lastUpdatedTimestamp; }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    void SetLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::forward<LastUpdatedTimestampT>(value); }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    GetTrafficPolicyResult& WithLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { SetLastUpdatedTimestamp(std::forward<LastUpdatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTrafficPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trafficPolicyName;
    bool m_trafficPolicyNameHasBeenSet = false;

    Aws::String m_trafficPolicyId;
    bool m_trafficPolicyIdHasBeenSet = false;

    Aws::String m_trafficPolicyArn;
    bool m_trafficPolicyArnHasBeenSet = false;

    Aws::Vector<PolicyStatement> m_policyStatements;
    bool m_policyStatementsHasBeenSet = false;

    int m_maxMessageSizeBytes{0};
    bool m_maxMessageSizeBytesHasBeenSet = false;

    AcceptAction m_defaultAction{AcceptAction::NOT_SET};
    bool m_defaultActionHasBeenSet = false;

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
