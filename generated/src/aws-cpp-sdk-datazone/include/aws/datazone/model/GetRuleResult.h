/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/RuleAction.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/RuleDetail.h>
#include <aws/datazone/model/RuleType.h>
#include <aws/datazone/model/RuleScope.h>
#include <aws/datazone/model/RuleTarget.h>
#include <aws/datazone/model/RuleTargetType.h>
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
namespace DataZone
{
namespace Model
{
  class GetRuleResult
  {
  public:
    AWS_DATAZONE_API GetRuleResult();
    AWS_DATAZONE_API GetRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The action of the rule.</p>
     */
    inline const RuleAction& GetAction() const{ return m_action; }
    inline void SetAction(const RuleAction& value) { m_action = value; }
    inline void SetAction(RuleAction&& value) { m_action = std::move(value); }
    inline GetRuleResult& WithAction(const RuleAction& value) { SetAction(value); return *this;}
    inline GetRuleResult& WithAction(RuleAction&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the rule was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetRuleResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetRuleResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who created the rule.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline GetRuleResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline GetRuleResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline GetRuleResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the rule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetRuleResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetRuleResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetRuleResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detail of the rule.</p>
     */
    inline const RuleDetail& GetDetail() const{ return m_detail; }
    inline void SetDetail(const RuleDetail& value) { m_detail = value; }
    inline void SetDetail(RuleDetail&& value) { m_detail = std::move(value); }
    inline GetRuleResult& WithDetail(const RuleDetail& value) { SetDetail(value); return *this;}
    inline GetRuleResult& WithDetail(RuleDetail&& value) { SetDetail(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the rule.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline void SetIdentifier(const Aws::String& value) { m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifier.assign(value); }
    inline GetRuleResult& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline GetRuleResult& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline GetRuleResult& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the rule was last updated.</p>
     */
    inline const Aws::String& GetLastUpdatedBy() const{ return m_lastUpdatedBy; }
    inline void SetLastUpdatedBy(const Aws::String& value) { m_lastUpdatedBy = value; }
    inline void SetLastUpdatedBy(Aws::String&& value) { m_lastUpdatedBy = std::move(value); }
    inline void SetLastUpdatedBy(const char* value) { m_lastUpdatedBy.assign(value); }
    inline GetRuleResult& WithLastUpdatedBy(const Aws::String& value) { SetLastUpdatedBy(value); return *this;}
    inline GetRuleResult& WithLastUpdatedBy(Aws::String&& value) { SetLastUpdatedBy(std::move(value)); return *this;}
    inline GetRuleResult& WithLastUpdatedBy(const char* value) { SetLastUpdatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the rule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetRuleResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetRuleResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetRuleResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the rule.</p>
     */
    inline const Aws::String& GetRevision() const{ return m_revision; }
    inline void SetRevision(const Aws::String& value) { m_revision = value; }
    inline void SetRevision(Aws::String&& value) { m_revision = std::move(value); }
    inline void SetRevision(const char* value) { m_revision.assign(value); }
    inline GetRuleResult& WithRevision(const Aws::String& value) { SetRevision(value); return *this;}
    inline GetRuleResult& WithRevision(Aws::String&& value) { SetRevision(std::move(value)); return *this;}
    inline GetRuleResult& WithRevision(const char* value) { SetRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the rule.</p>
     */
    inline const RuleType& GetRuleType() const{ return m_ruleType; }
    inline void SetRuleType(const RuleType& value) { m_ruleType = value; }
    inline void SetRuleType(RuleType&& value) { m_ruleType = std::move(value); }
    inline GetRuleResult& WithRuleType(const RuleType& value) { SetRuleType(value); return *this;}
    inline GetRuleResult& WithRuleType(RuleType&& value) { SetRuleType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scope of the rule.</p>
     */
    inline const RuleScope& GetScope() const{ return m_scope; }
    inline void SetScope(const RuleScope& value) { m_scope = value; }
    inline void SetScope(RuleScope&& value) { m_scope = std::move(value); }
    inline GetRuleResult& WithScope(const RuleScope& value) { SetScope(value); return *this;}
    inline GetRuleResult& WithScope(RuleScope&& value) { SetScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target of the rule.</p>
     */
    inline const RuleTarget& GetTarget() const{ return m_target; }
    inline void SetTarget(const RuleTarget& value) { m_target = value; }
    inline void SetTarget(RuleTarget&& value) { m_target = std::move(value); }
    inline GetRuleResult& WithTarget(const RuleTarget& value) { SetTarget(value); return *this;}
    inline GetRuleResult& WithTarget(RuleTarget&& value) { SetTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target type of the rule.</p>
     */
    inline const RuleTargetType& GetTargetType() const{ return m_targetType; }
    inline void SetTargetType(const RuleTargetType& value) { m_targetType = value; }
    inline void SetTargetType(RuleTargetType&& value) { m_targetType = std::move(value); }
    inline GetRuleResult& WithTargetType(const RuleTargetType& value) { SetTargetType(value); return *this;}
    inline GetRuleResult& WithTargetType(RuleTargetType&& value) { SetTargetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the rule was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetRuleResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetRuleResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    RuleAction m_action;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_description;

    RuleDetail m_detail;

    Aws::String m_identifier;

    Aws::String m_lastUpdatedBy;

    Aws::String m_name;

    Aws::String m_revision;

    RuleType m_ruleType;

    RuleScope m_scope;

    RuleTarget m_target;

    RuleTargetType m_targetType;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
