/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/AccountInsightHealth.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> Returns the number of open reactive insights, the number of open proactive
   * insights, and the number of metrics analyzed in your Amazon Web Services
   * account. Use these numbers to gauge the health of operations in your Amazon Web
   * Services account. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/AccountHealth">AWS
   * API Reference</a></p>
   */
  class AccountHealth
  {
  public:
    AWS_DEVOPSGURU_API AccountHealth() = default;
    AWS_DEVOPSGURU_API AccountHealth(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API AccountHealth& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account. </p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    AccountHealth& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the health of the Amazon Web Services resources in your
     * account, including the number of open proactive, open reactive insights, and the
     * Mean Time to Recover (MTTR) of closed insights. </p>
     */
    inline const AccountInsightHealth& GetInsight() const { return m_insight; }
    inline bool InsightHasBeenSet() const { return m_insightHasBeenSet; }
    template<typename InsightT = AccountInsightHealth>
    void SetInsight(InsightT&& value) { m_insightHasBeenSet = true; m_insight = std::forward<InsightT>(value); }
    template<typename InsightT = AccountInsightHealth>
    AccountHealth& WithInsight(InsightT&& value) { SetInsight(std::forward<InsightT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    AccountInsightHealth m_insight;
    bool m_insightHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
