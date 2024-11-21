/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/logs/model/PolicyType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class DescribeAccountPoliciesRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API DescribeAccountPoliciesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAccountPolicies"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Use this parameter to limit the returned policies to only the policies that
     * match the policy type that you specify.</p>
     */
    inline const PolicyType& GetPolicyType() const{ return m_policyType; }
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }
    inline void SetPolicyType(const PolicyType& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }
    inline void SetPolicyType(PolicyType&& value) { m_policyTypeHasBeenSet = true; m_policyType = std::move(value); }
    inline DescribeAccountPoliciesRequest& WithPolicyType(const PolicyType& value) { SetPolicyType(value); return *this;}
    inline DescribeAccountPoliciesRequest& WithPolicyType(PolicyType&& value) { SetPolicyType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter to limit the returned policies to only the policy with the
     * name that you specify.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }
    inline DescribeAccountPoliciesRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}
    inline DescribeAccountPoliciesRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}
    inline DescribeAccountPoliciesRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you are using an account that is set up as a monitoring account for
     * CloudWatch unified cross-account observability, you can use this to specify the
     * account ID of a source account. If you do, the operation returns the account
     * policy for the specified account. Currently, you can specify only one account ID
     * in this parameter.</p> <p>If you omit this parameter, only the policy in the
     * current account is returned.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIdentifiers() const{ return m_accountIdentifiers; }
    inline bool AccountIdentifiersHasBeenSet() const { return m_accountIdentifiersHasBeenSet; }
    inline void SetAccountIdentifiers(const Aws::Vector<Aws::String>& value) { m_accountIdentifiersHasBeenSet = true; m_accountIdentifiers = value; }
    inline void SetAccountIdentifiers(Aws::Vector<Aws::String>&& value) { m_accountIdentifiersHasBeenSet = true; m_accountIdentifiers = std::move(value); }
    inline DescribeAccountPoliciesRequest& WithAccountIdentifiers(const Aws::Vector<Aws::String>& value) { SetAccountIdentifiers(value); return *this;}
    inline DescribeAccountPoliciesRequest& WithAccountIdentifiers(Aws::Vector<Aws::String>&& value) { SetAccountIdentifiers(std::move(value)); return *this;}
    inline DescribeAccountPoliciesRequest& AddAccountIdentifiers(const Aws::String& value) { m_accountIdentifiersHasBeenSet = true; m_accountIdentifiers.push_back(value); return *this; }
    inline DescribeAccountPoliciesRequest& AddAccountIdentifiers(Aws::String&& value) { m_accountIdentifiersHasBeenSet = true; m_accountIdentifiers.push_back(std::move(value)); return *this; }
    inline DescribeAccountPoliciesRequest& AddAccountIdentifiers(const char* value) { m_accountIdentifiersHasBeenSet = true; m_accountIdentifiers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeAccountPoliciesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeAccountPoliciesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeAccountPoliciesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    PolicyType m_policyType;
    bool m_policyTypeHasBeenSet = false;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_accountIdentifiers;
    bool m_accountIdentifiersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
