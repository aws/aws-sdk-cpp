/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/PolicyType.h>
#include <aws/logs/model/Scope.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>A structure that contains information about one CloudWatch Logs account
   * policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/AccountPolicy">AWS
   * API Reference</a></p>
   */
  class AccountPolicy
  {
  public:
    AWS_CLOUDWATCHLOGS_API AccountPolicy();
    AWS_CLOUDWATCHLOGS_API AccountPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API AccountPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the account policy.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the account policy.</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>The name of the account policy.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the account policy.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>The name of the account policy.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The name of the account policy.</p>
     */
    inline AccountPolicy& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the account policy.</p>
     */
    inline AccountPolicy& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>The name of the account policy.</p>
     */
    inline AccountPolicy& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>The policy document for this account policy.</p> <p>The JSON specified in
     * <code>policyDocument</code> can be up to 30,720 characters.</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }

    /**
     * <p>The policy document for this account policy.</p> <p>The JSON specified in
     * <code>policyDocument</code> can be up to 30,720 characters.</p>
     */
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }

    /**
     * <p>The policy document for this account policy.</p> <p>The JSON specified in
     * <code>policyDocument</code> can be up to 30,720 characters.</p>
     */
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }

    /**
     * <p>The policy document for this account policy.</p> <p>The JSON specified in
     * <code>policyDocument</code> can be up to 30,720 characters.</p>
     */
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::move(value); }

    /**
     * <p>The policy document for this account policy.</p> <p>The JSON specified in
     * <code>policyDocument</code> can be up to 30,720 characters.</p>
     */
    inline void SetPolicyDocument(const char* value) { m_policyDocumentHasBeenSet = true; m_policyDocument.assign(value); }

    /**
     * <p>The policy document for this account policy.</p> <p>The JSON specified in
     * <code>policyDocument</code> can be up to 30,720 characters.</p>
     */
    inline AccountPolicy& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>The policy document for this account policy.</p> <p>The JSON specified in
     * <code>policyDocument</code> can be up to 30,720 characters.</p>
     */
    inline AccountPolicy& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}

    /**
     * <p>The policy document for this account policy.</p> <p>The JSON specified in
     * <code>policyDocument</code> can be up to 30,720 characters.</p>
     */
    inline AccountPolicy& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}


    /**
     * <p>The date and time that this policy was most recently updated.</p>
     */
    inline long long GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The date and time that this policy was most recently updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The date and time that this policy was most recently updated.</p>
     */
    inline void SetLastUpdatedTime(long long value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The date and time that this policy was most recently updated.</p>
     */
    inline AccountPolicy& WithLastUpdatedTime(long long value) { SetLastUpdatedTime(value); return *this;}


    /**
     * <p>The type of policy for this account policy.</p>
     */
    inline const PolicyType& GetPolicyType() const{ return m_policyType; }

    /**
     * <p>The type of policy for this account policy.</p>
     */
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }

    /**
     * <p>The type of policy for this account policy.</p>
     */
    inline void SetPolicyType(const PolicyType& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }

    /**
     * <p>The type of policy for this account policy.</p>
     */
    inline void SetPolicyType(PolicyType&& value) { m_policyTypeHasBeenSet = true; m_policyType = std::move(value); }

    /**
     * <p>The type of policy for this account policy.</p>
     */
    inline AccountPolicy& WithPolicyType(const PolicyType& value) { SetPolicyType(value); return *this;}

    /**
     * <p>The type of policy for this account policy.</p>
     */
    inline AccountPolicy& WithPolicyType(PolicyType&& value) { SetPolicyType(std::move(value)); return *this;}


    /**
     * <p>The scope of the account policy.</p>
     */
    inline const Scope& GetScope() const{ return m_scope; }

    /**
     * <p>The scope of the account policy.</p>
     */
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }

    /**
     * <p>The scope of the account policy.</p>
     */
    inline void SetScope(const Scope& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>The scope of the account policy.</p>
     */
    inline void SetScope(Scope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p>The scope of the account policy.</p>
     */
    inline AccountPolicy& WithScope(const Scope& value) { SetScope(value); return *this;}

    /**
     * <p>The scope of the account policy.</p>
     */
    inline AccountPolicy& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}


    /**
     * <p>The log group selection criteria for this subscription filter policy.</p>
     */
    inline const Aws::String& GetSelectionCriteria() const{ return m_selectionCriteria; }

    /**
     * <p>The log group selection criteria for this subscription filter policy.</p>
     */
    inline bool SelectionCriteriaHasBeenSet() const { return m_selectionCriteriaHasBeenSet; }

    /**
     * <p>The log group selection criteria for this subscription filter policy.</p>
     */
    inline void SetSelectionCriteria(const Aws::String& value) { m_selectionCriteriaHasBeenSet = true; m_selectionCriteria = value; }

    /**
     * <p>The log group selection criteria for this subscription filter policy.</p>
     */
    inline void SetSelectionCriteria(Aws::String&& value) { m_selectionCriteriaHasBeenSet = true; m_selectionCriteria = std::move(value); }

    /**
     * <p>The log group selection criteria for this subscription filter policy.</p>
     */
    inline void SetSelectionCriteria(const char* value) { m_selectionCriteriaHasBeenSet = true; m_selectionCriteria.assign(value); }

    /**
     * <p>The log group selection criteria for this subscription filter policy.</p>
     */
    inline AccountPolicy& WithSelectionCriteria(const Aws::String& value) { SetSelectionCriteria(value); return *this;}

    /**
     * <p>The log group selection criteria for this subscription filter policy.</p>
     */
    inline AccountPolicy& WithSelectionCriteria(Aws::String&& value) { SetSelectionCriteria(std::move(value)); return *this;}

    /**
     * <p>The log group selection criteria for this subscription filter policy.</p>
     */
    inline AccountPolicy& WithSelectionCriteria(const char* value) { SetSelectionCriteria(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID that the policy applies to.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID that the policy applies to.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID that the policy applies to.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID that the policy applies to.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID that the policy applies to.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID that the policy applies to.</p>
     */
    inline AccountPolicy& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID that the policy applies to.</p>
     */
    inline AccountPolicy& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID that the policy applies to.</p>
     */
    inline AccountPolicy& WithAccountId(const char* value) { SetAccountId(value); return *this;}

  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet = false;

    long long m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    PolicyType m_policyType;
    bool m_policyTypeHasBeenSet = false;

    Scope m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::String m_selectionCriteria;
    bool m_selectionCriteriaHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
