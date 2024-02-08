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


    /**
     * <p>Use this parameter to limit the returned policies to only the policies that
     * match the policy type that you specify.</p>
     */
    inline const PolicyType& GetPolicyType() const{ return m_policyType; }

    /**
     * <p>Use this parameter to limit the returned policies to only the policies that
     * match the policy type that you specify.</p>
     */
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }

    /**
     * <p>Use this parameter to limit the returned policies to only the policies that
     * match the policy type that you specify.</p>
     */
    inline void SetPolicyType(const PolicyType& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }

    /**
     * <p>Use this parameter to limit the returned policies to only the policies that
     * match the policy type that you specify.</p>
     */
    inline void SetPolicyType(PolicyType&& value) { m_policyTypeHasBeenSet = true; m_policyType = std::move(value); }

    /**
     * <p>Use this parameter to limit the returned policies to only the policies that
     * match the policy type that you specify.</p>
     */
    inline DescribeAccountPoliciesRequest& WithPolicyType(const PolicyType& value) { SetPolicyType(value); return *this;}

    /**
     * <p>Use this parameter to limit the returned policies to only the policies that
     * match the policy type that you specify.</p>
     */
    inline DescribeAccountPoliciesRequest& WithPolicyType(PolicyType&& value) { SetPolicyType(std::move(value)); return *this;}


    /**
     * <p>Use this parameter to limit the returned policies to only the policy with the
     * name that you specify.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>Use this parameter to limit the returned policies to only the policy with the
     * name that you specify.</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>Use this parameter to limit the returned policies to only the policy with the
     * name that you specify.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>Use this parameter to limit the returned policies to only the policy with the
     * name that you specify.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>Use this parameter to limit the returned policies to only the policy with the
     * name that you specify.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>Use this parameter to limit the returned policies to only the policy with the
     * name that you specify.</p>
     */
    inline DescribeAccountPoliciesRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>Use this parameter to limit the returned policies to only the policy with the
     * name that you specify.</p>
     */
    inline DescribeAccountPoliciesRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>Use this parameter to limit the returned policies to only the policy with the
     * name that you specify.</p>
     */
    inline DescribeAccountPoliciesRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


    /**
     * <p>If you are using an account that is set up as a monitoring account for
     * CloudWatch unified cross-account observability, you can use this to specify the
     * account ID of a source account. If you do, the operation returns the account
     * policy for the specified account. Currently, you can specify only one account ID
     * in this parameter.</p> <p>If you omit this parameter, only the policy in the
     * current account is returned.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIdentifiers() const{ return m_accountIdentifiers; }

    /**
     * <p>If you are using an account that is set up as a monitoring account for
     * CloudWatch unified cross-account observability, you can use this to specify the
     * account ID of a source account. If you do, the operation returns the account
     * policy for the specified account. Currently, you can specify only one account ID
     * in this parameter.</p> <p>If you omit this parameter, only the policy in the
     * current account is returned.</p>
     */
    inline bool AccountIdentifiersHasBeenSet() const { return m_accountIdentifiersHasBeenSet; }

    /**
     * <p>If you are using an account that is set up as a monitoring account for
     * CloudWatch unified cross-account observability, you can use this to specify the
     * account ID of a source account. If you do, the operation returns the account
     * policy for the specified account. Currently, you can specify only one account ID
     * in this parameter.</p> <p>If you omit this parameter, only the policy in the
     * current account is returned.</p>
     */
    inline void SetAccountIdentifiers(const Aws::Vector<Aws::String>& value) { m_accountIdentifiersHasBeenSet = true; m_accountIdentifiers = value; }

    /**
     * <p>If you are using an account that is set up as a monitoring account for
     * CloudWatch unified cross-account observability, you can use this to specify the
     * account ID of a source account. If you do, the operation returns the account
     * policy for the specified account. Currently, you can specify only one account ID
     * in this parameter.</p> <p>If you omit this parameter, only the policy in the
     * current account is returned.</p>
     */
    inline void SetAccountIdentifiers(Aws::Vector<Aws::String>&& value) { m_accountIdentifiersHasBeenSet = true; m_accountIdentifiers = std::move(value); }

    /**
     * <p>If you are using an account that is set up as a monitoring account for
     * CloudWatch unified cross-account observability, you can use this to specify the
     * account ID of a source account. If you do, the operation returns the account
     * policy for the specified account. Currently, you can specify only one account ID
     * in this parameter.</p> <p>If you omit this parameter, only the policy in the
     * current account is returned.</p>
     */
    inline DescribeAccountPoliciesRequest& WithAccountIdentifiers(const Aws::Vector<Aws::String>& value) { SetAccountIdentifiers(value); return *this;}

    /**
     * <p>If you are using an account that is set up as a monitoring account for
     * CloudWatch unified cross-account observability, you can use this to specify the
     * account ID of a source account. If you do, the operation returns the account
     * policy for the specified account. Currently, you can specify only one account ID
     * in this parameter.</p> <p>If you omit this parameter, only the policy in the
     * current account is returned.</p>
     */
    inline DescribeAccountPoliciesRequest& WithAccountIdentifiers(Aws::Vector<Aws::String>&& value) { SetAccountIdentifiers(std::move(value)); return *this;}

    /**
     * <p>If you are using an account that is set up as a monitoring account for
     * CloudWatch unified cross-account observability, you can use this to specify the
     * account ID of a source account. If you do, the operation returns the account
     * policy for the specified account. Currently, you can specify only one account ID
     * in this parameter.</p> <p>If you omit this parameter, only the policy in the
     * current account is returned.</p>
     */
    inline DescribeAccountPoliciesRequest& AddAccountIdentifiers(const Aws::String& value) { m_accountIdentifiersHasBeenSet = true; m_accountIdentifiers.push_back(value); return *this; }

    /**
     * <p>If you are using an account that is set up as a monitoring account for
     * CloudWatch unified cross-account observability, you can use this to specify the
     * account ID of a source account. If you do, the operation returns the account
     * policy for the specified account. Currently, you can specify only one account ID
     * in this parameter.</p> <p>If you omit this parameter, only the policy in the
     * current account is returned.</p>
     */
    inline DescribeAccountPoliciesRequest& AddAccountIdentifiers(Aws::String&& value) { m_accountIdentifiersHasBeenSet = true; m_accountIdentifiers.push_back(std::move(value)); return *this; }

    /**
     * <p>If you are using an account that is set up as a monitoring account for
     * CloudWatch unified cross-account observability, you can use this to specify the
     * account ID of a source account. If you do, the operation returns the account
     * policy for the specified account. Currently, you can specify only one account ID
     * in this parameter.</p> <p>If you omit this parameter, only the policy in the
     * current account is returned.</p>
     */
    inline DescribeAccountPoliciesRequest& AddAccountIdentifiers(const char* value) { m_accountIdentifiersHasBeenSet = true; m_accountIdentifiers.push_back(value); return *this; }

  private:

    PolicyType m_policyType;
    bool m_policyTypeHasBeenSet = false;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_accountIdentifiers;
    bool m_accountIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
