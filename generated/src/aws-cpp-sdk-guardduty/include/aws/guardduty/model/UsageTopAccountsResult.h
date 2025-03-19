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
    AWS_GUARDDUTY_API UsageTopAccountsResult() = default;
    AWS_GUARDDUTY_API UsageTopAccountsResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API UsageTopAccountsResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Features by which you can generate the usage statistics.</p> <p>
     * <code>RDS_LOGIN_EVENTS</code> is currently not supported with
     * <code>topAccountsByFeature</code>.</p>
     */
    inline UsageFeature GetFeature() const { return m_feature; }
    inline bool FeatureHasBeenSet() const { return m_featureHasBeenSet; }
    inline void SetFeature(UsageFeature value) { m_featureHasBeenSet = true; m_feature = value; }
    inline UsageTopAccountsResult& WithFeature(UsageFeature value) { SetFeature(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The accounts that contributed to the total usage cost.</p>
     */
    inline const Aws::Vector<UsageTopAccountResult>& GetAccounts() const { return m_accounts; }
    inline bool AccountsHasBeenSet() const { return m_accountsHasBeenSet; }
    template<typename AccountsT = Aws::Vector<UsageTopAccountResult>>
    void SetAccounts(AccountsT&& value) { m_accountsHasBeenSet = true; m_accounts = std::forward<AccountsT>(value); }
    template<typename AccountsT = Aws::Vector<UsageTopAccountResult>>
    UsageTopAccountsResult& WithAccounts(AccountsT&& value) { SetAccounts(std::forward<AccountsT>(value)); return *this;}
    template<typename AccountsT = UsageTopAccountResult>
    UsageTopAccountsResult& AddAccounts(AccountsT&& value) { m_accountsHasBeenSet = true; m_accounts.emplace_back(std::forward<AccountsT>(value)); return *this; }
    ///@}
  private:

    UsageFeature m_feature{UsageFeature::NOT_SET};
    bool m_featureHasBeenSet = false;

    Aws::Vector<UsageTopAccountResult> m_accounts;
    bool m_accountsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
