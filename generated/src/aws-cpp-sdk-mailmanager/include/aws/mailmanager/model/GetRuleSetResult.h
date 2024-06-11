/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mailmanager/model/Rule.h>
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
  class GetRuleSetResult
  {
  public:
    AWS_MAILMANAGER_API GetRuleSetResult();
    AWS_MAILMANAGER_API GetRuleSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAILMANAGER_API GetRuleSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The date of when then rule set was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }
    inline GetRuleSetResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline GetRuleSetResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date of when the rule set was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationDate() const{ return m_lastModificationDate; }
    inline void SetLastModificationDate(const Aws::Utils::DateTime& value) { m_lastModificationDate = value; }
    inline void SetLastModificationDate(Aws::Utils::DateTime&& value) { m_lastModificationDate = std::move(value); }
    inline GetRuleSetResult& WithLastModificationDate(const Aws::Utils::DateTime& value) { SetLastModificationDate(value); return *this;}
    inline GetRuleSetResult& WithLastModificationDate(Aws::Utils::DateTime&& value) { SetLastModificationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the rule set resource.</p>
     */
    inline const Aws::String& GetRuleSetArn() const{ return m_ruleSetArn; }
    inline void SetRuleSetArn(const Aws::String& value) { m_ruleSetArn = value; }
    inline void SetRuleSetArn(Aws::String&& value) { m_ruleSetArn = std::move(value); }
    inline void SetRuleSetArn(const char* value) { m_ruleSetArn.assign(value); }
    inline GetRuleSetResult& WithRuleSetArn(const Aws::String& value) { SetRuleSetArn(value); return *this;}
    inline GetRuleSetResult& WithRuleSetArn(Aws::String&& value) { SetRuleSetArn(std::move(value)); return *this;}
    inline GetRuleSetResult& WithRuleSetArn(const char* value) { SetRuleSetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the rule set resource.</p>
     */
    inline const Aws::String& GetRuleSetId() const{ return m_ruleSetId; }
    inline void SetRuleSetId(const Aws::String& value) { m_ruleSetId = value; }
    inline void SetRuleSetId(Aws::String&& value) { m_ruleSetId = std::move(value); }
    inline void SetRuleSetId(const char* value) { m_ruleSetId.assign(value); }
    inline GetRuleSetResult& WithRuleSetId(const Aws::String& value) { SetRuleSetId(value); return *this;}
    inline GetRuleSetResult& WithRuleSetId(Aws::String&& value) { SetRuleSetId(std::move(value)); return *this;}
    inline GetRuleSetResult& WithRuleSetId(const char* value) { SetRuleSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A user-friendly name for the rule set resource.</p>
     */
    inline const Aws::String& GetRuleSetName() const{ return m_ruleSetName; }
    inline void SetRuleSetName(const Aws::String& value) { m_ruleSetName = value; }
    inline void SetRuleSetName(Aws::String&& value) { m_ruleSetName = std::move(value); }
    inline void SetRuleSetName(const char* value) { m_ruleSetName.assign(value); }
    inline GetRuleSetResult& WithRuleSetName(const Aws::String& value) { SetRuleSetName(value); return *this;}
    inline GetRuleSetResult& WithRuleSetName(Aws::String&& value) { SetRuleSetName(std::move(value)); return *this;}
    inline GetRuleSetResult& WithRuleSetName(const char* value) { SetRuleSetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rules contained in the rule set.</p>
     */
    inline const Aws::Vector<Rule>& GetRules() const{ return m_rules; }
    inline void SetRules(const Aws::Vector<Rule>& value) { m_rules = value; }
    inline void SetRules(Aws::Vector<Rule>&& value) { m_rules = std::move(value); }
    inline GetRuleSetResult& WithRules(const Aws::Vector<Rule>& value) { SetRules(value); return *this;}
    inline GetRuleSetResult& WithRules(Aws::Vector<Rule>&& value) { SetRules(std::move(value)); return *this;}
    inline GetRuleSetResult& AddRules(const Rule& value) { m_rules.push_back(value); return *this; }
    inline GetRuleSetResult& AddRules(Rule&& value) { m_rules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRuleSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRuleSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRuleSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdDate;

    Aws::Utils::DateTime m_lastModificationDate;

    Aws::String m_ruleSetArn;

    Aws::String m_ruleSetId;

    Aws::String m_ruleSetName;

    Aws::Vector<Rule> m_rules;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
