/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/UsageFeature.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/UsageTopAccountResult.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Information about the usage statistics, calculated by top accounts by
   * feature.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/UsageTopAccountsResult">AWS
   * API Reference</a></p>
   */
  class UsageTopAccountsResult
  {
  public:
    AWS_GUARDDUTY_API UsageTopAccountsResult();
    AWS_GUARDDUTY_API UsageTopAccountsResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API UsageTopAccountsResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Features by which you can generate the usage statistics.</p> <p>
     * <code>RDS_LOGIN_EVENTS</code> is currently not supported with
     * <code>topAccountsByFeature</code>.</p>
     */
    inline const UsageFeature& GetFeature() const{ return m_feature; }

    /**
     * <p>Features by which you can generate the usage statistics.</p> <p>
     * <code>RDS_LOGIN_EVENTS</code> is currently not supported with
     * <code>topAccountsByFeature</code>.</p>
     */
    inline bool FeatureHasBeenSet() const { return m_featureHasBeenSet; }

    /**
     * <p>Features by which you can generate the usage statistics.</p> <p>
     * <code>RDS_LOGIN_EVENTS</code> is currently not supported with
     * <code>topAccountsByFeature</code>.</p>
     */
    inline void SetFeature(const UsageFeature& value) { m_featureHasBeenSet = true; m_feature = value; }

    /**
     * <p>Features by which you can generate the usage statistics.</p> <p>
     * <code>RDS_LOGIN_EVENTS</code> is currently not supported with
     * <code>topAccountsByFeature</code>.</p>
     */
    inline void SetFeature(UsageFeature&& value) { m_featureHasBeenSet = true; m_feature = std::move(value); }

    /**
     * <p>Features by which you can generate the usage statistics.</p> <p>
     * <code>RDS_LOGIN_EVENTS</code> is currently not supported with
     * <code>topAccountsByFeature</code>.</p>
     */
    inline UsageTopAccountsResult& WithFeature(const UsageFeature& value) { SetFeature(value); return *this;}

    /**
     * <p>Features by which you can generate the usage statistics.</p> <p>
     * <code>RDS_LOGIN_EVENTS</code> is currently not supported with
     * <code>topAccountsByFeature</code>.</p>
     */
    inline UsageTopAccountsResult& WithFeature(UsageFeature&& value) { SetFeature(std::move(value)); return *this;}


    /**
     * <p>The accounts that contributed to the total usage cost.</p>
     */
    inline const Aws::Vector<UsageTopAccountResult>& GetAccounts() const{ return m_accounts; }

    /**
     * <p>The accounts that contributed to the total usage cost.</p>
     */
    inline bool AccountsHasBeenSet() const { return m_accountsHasBeenSet; }

    /**
     * <p>The accounts that contributed to the total usage cost.</p>
     */
    inline void SetAccounts(const Aws::Vector<UsageTopAccountResult>& value) { m_accountsHasBeenSet = true; m_accounts = value; }

    /**
     * <p>The accounts that contributed to the total usage cost.</p>
     */
    inline void SetAccounts(Aws::Vector<UsageTopAccountResult>&& value) { m_accountsHasBeenSet = true; m_accounts = std::move(value); }

    /**
     * <p>The accounts that contributed to the total usage cost.</p>
     */
    inline UsageTopAccountsResult& WithAccounts(const Aws::Vector<UsageTopAccountResult>& value) { SetAccounts(value); return *this;}

    /**
     * <p>The accounts that contributed to the total usage cost.</p>
     */
    inline UsageTopAccountsResult& WithAccounts(Aws::Vector<UsageTopAccountResult>&& value) { SetAccounts(std::move(value)); return *this;}

    /**
     * <p>The accounts that contributed to the total usage cost.</p>
     */
    inline UsageTopAccountsResult& AddAccounts(const UsageTopAccountResult& value) { m_accountsHasBeenSet = true; m_accounts.push_back(value); return *this; }

    /**
     * <p>The accounts that contributed to the total usage cost.</p>
     */
    inline UsageTopAccountsResult& AddAccounts(UsageTopAccountResult&& value) { m_accountsHasBeenSet = true; m_accounts.push_back(std::move(value)); return *this; }

  private:

    UsageFeature m_feature;
    bool m_featureHasBeenSet = false;

    Aws::Vector<UsageTopAccountResult> m_accounts;
    bool m_accountsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
