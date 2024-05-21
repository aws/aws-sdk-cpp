/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mailmanager/model/AcceptAction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_MAILMANAGER_API GetTrafficPolicyResult();
    AWS_MAILMANAGER_API GetTrafficPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API GetTrafficPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The timestamp of when the traffic policy was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The timestamp of when the traffic policy was created.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }

    /**
     * <p>The timestamp of when the traffic policy was created.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }

    /**
     * <p>The timestamp of when the traffic policy was created.</p>
     */
    inline GetTrafficPolicyResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The timestamp of when the traffic policy was created.</p>
     */
    inline GetTrafficPolicyResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The default action of the traffic policy.</p>
     */
    inline const AcceptAction& GetDefaultAction() const{ return m_defaultAction; }

    /**
     * <p>The default action of the traffic policy.</p>
     */
    inline void SetDefaultAction(const AcceptAction& value) { m_defaultAction = value; }

    /**
     * <p>The default action of the traffic policy.</p>
     */
    inline void SetDefaultAction(AcceptAction&& value) { m_defaultAction = std::move(value); }

    /**
     * <p>The default action of the traffic policy.</p>
     */
    inline GetTrafficPolicyResult& WithDefaultAction(const AcceptAction& value) { SetDefaultAction(value); return *this;}

    /**
     * <p>The default action of the traffic policy.</p>
     */
    inline GetTrafficPolicyResult& WithDefaultAction(AcceptAction&& value) { SetDefaultAction(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the traffic policy was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }

    /**
     * <p>The timestamp of when the traffic policy was last updated.</p>
     */
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestamp = value; }

    /**
     * <p>The timestamp of when the traffic policy was last updated.</p>
     */
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestamp = std::move(value); }

    /**
     * <p>The timestamp of when the traffic policy was last updated.</p>
     */
    inline GetTrafficPolicyResult& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}

    /**
     * <p>The timestamp of when the traffic policy was last updated.</p>
     */
    inline GetTrafficPolicyResult& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The maximum message size in bytes of email which is allowed in by this
     * traffic policy—anything larger will be blocked.</p>
     */
    inline int GetMaxMessageSizeBytes() const{ return m_maxMessageSizeBytes; }

    /**
     * <p>The maximum message size in bytes of email which is allowed in by this
     * traffic policy—anything larger will be blocked.</p>
     */
    inline void SetMaxMessageSizeBytes(int value) { m_maxMessageSizeBytes = value; }

    /**
     * <p>The maximum message size in bytes of email which is allowed in by this
     * traffic policy—anything larger will be blocked.</p>
     */
    inline GetTrafficPolicyResult& WithMaxMessageSizeBytes(int value) { SetMaxMessageSizeBytes(value); return *this;}


    /**
     * <p>The list of conditions which are in the traffic policy resource.</p>
     */
    inline const Aws::Vector<PolicyStatement>& GetPolicyStatements() const{ return m_policyStatements; }

    /**
     * <p>The list of conditions which are in the traffic policy resource.</p>
     */
    inline void SetPolicyStatements(const Aws::Vector<PolicyStatement>& value) { m_policyStatements = value; }

    /**
     * <p>The list of conditions which are in the traffic policy resource.</p>
     */
    inline void SetPolicyStatements(Aws::Vector<PolicyStatement>&& value) { m_policyStatements = std::move(value); }

    /**
     * <p>The list of conditions which are in the traffic policy resource.</p>
     */
    inline GetTrafficPolicyResult& WithPolicyStatements(const Aws::Vector<PolicyStatement>& value) { SetPolicyStatements(value); return *this;}

    /**
     * <p>The list of conditions which are in the traffic policy resource.</p>
     */
    inline GetTrafficPolicyResult& WithPolicyStatements(Aws::Vector<PolicyStatement>&& value) { SetPolicyStatements(std::move(value)); return *this;}

    /**
     * <p>The list of conditions which are in the traffic policy resource.</p>
     */
    inline GetTrafficPolicyResult& AddPolicyStatements(const PolicyStatement& value) { m_policyStatements.push_back(value); return *this; }

    /**
     * <p>The list of conditions which are in the traffic policy resource.</p>
     */
    inline GetTrafficPolicyResult& AddPolicyStatements(PolicyStatement&& value) { m_policyStatements.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the traffic policy resource.</p>
     */
    inline const Aws::String& GetTrafficPolicyArn() const{ return m_trafficPolicyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the traffic policy resource.</p>
     */
    inline void SetTrafficPolicyArn(const Aws::String& value) { m_trafficPolicyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the traffic policy resource.</p>
     */
    inline void SetTrafficPolicyArn(Aws::String&& value) { m_trafficPolicyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the traffic policy resource.</p>
     */
    inline void SetTrafficPolicyArn(const char* value) { m_trafficPolicyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the traffic policy resource.</p>
     */
    inline GetTrafficPolicyResult& WithTrafficPolicyArn(const Aws::String& value) { SetTrafficPolicyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the traffic policy resource.</p>
     */
    inline GetTrafficPolicyResult& WithTrafficPolicyArn(Aws::String&& value) { SetTrafficPolicyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the traffic policy resource.</p>
     */
    inline GetTrafficPolicyResult& WithTrafficPolicyArn(const char* value) { SetTrafficPolicyArn(value); return *this;}


    /**
     * <p>The identifier of the traffic policy resource.</p>
     */
    inline const Aws::String& GetTrafficPolicyId() const{ return m_trafficPolicyId; }

    /**
     * <p>The identifier of the traffic policy resource.</p>
     */
    inline void SetTrafficPolicyId(const Aws::String& value) { m_trafficPolicyId = value; }

    /**
     * <p>The identifier of the traffic policy resource.</p>
     */
    inline void SetTrafficPolicyId(Aws::String&& value) { m_trafficPolicyId = std::move(value); }

    /**
     * <p>The identifier of the traffic policy resource.</p>
     */
    inline void SetTrafficPolicyId(const char* value) { m_trafficPolicyId.assign(value); }

    /**
     * <p>The identifier of the traffic policy resource.</p>
     */
    inline GetTrafficPolicyResult& WithTrafficPolicyId(const Aws::String& value) { SetTrafficPolicyId(value); return *this;}

    /**
     * <p>The identifier of the traffic policy resource.</p>
     */
    inline GetTrafficPolicyResult& WithTrafficPolicyId(Aws::String&& value) { SetTrafficPolicyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the traffic policy resource.</p>
     */
    inline GetTrafficPolicyResult& WithTrafficPolicyId(const char* value) { SetTrafficPolicyId(value); return *this;}


    /**
     * <p>A user-friendly name for the traffic policy resource.</p>
     */
    inline const Aws::String& GetTrafficPolicyName() const{ return m_trafficPolicyName; }

    /**
     * <p>A user-friendly name for the traffic policy resource.</p>
     */
    inline void SetTrafficPolicyName(const Aws::String& value) { m_trafficPolicyName = value; }

    /**
     * <p>A user-friendly name for the traffic policy resource.</p>
     */
    inline void SetTrafficPolicyName(Aws::String&& value) { m_trafficPolicyName = std::move(value); }

    /**
     * <p>A user-friendly name for the traffic policy resource.</p>
     */
    inline void SetTrafficPolicyName(const char* value) { m_trafficPolicyName.assign(value); }

    /**
     * <p>A user-friendly name for the traffic policy resource.</p>
     */
    inline GetTrafficPolicyResult& WithTrafficPolicyName(const Aws::String& value) { SetTrafficPolicyName(value); return *this;}

    /**
     * <p>A user-friendly name for the traffic policy resource.</p>
     */
    inline GetTrafficPolicyResult& WithTrafficPolicyName(Aws::String&& value) { SetTrafficPolicyName(std::move(value)); return *this;}

    /**
     * <p>A user-friendly name for the traffic policy resource.</p>
     */
    inline GetTrafficPolicyResult& WithTrafficPolicyName(const char* value) { SetTrafficPolicyName(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetTrafficPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetTrafficPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetTrafficPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdTimestamp;

    AcceptAction m_defaultAction;

    Aws::Utils::DateTime m_lastUpdatedTimestamp;

    int m_maxMessageSizeBytes;

    Aws::Vector<PolicyStatement> m_policyStatements;

    Aws::String m_trafficPolicyArn;

    Aws::String m_trafficPolicyId;

    Aws::String m_trafficPolicyName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
