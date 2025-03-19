/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Represents a list of map of accounts with the number of findings associated
   * with each account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/AccountStatistics">AWS
   * API Reference</a></p>
   */
  class AccountStatistics
  {
  public:
    AWS_GUARDDUTY_API AccountStatistics() = default;
    AWS_GUARDDUTY_API AccountStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API AccountStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    AccountStatistics& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the finding for this account was last generated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastGeneratedAt() const { return m_lastGeneratedAt; }
    inline bool LastGeneratedAtHasBeenSet() const { return m_lastGeneratedAtHasBeenSet; }
    template<typename LastGeneratedAtT = Aws::Utils::DateTime>
    void SetLastGeneratedAt(LastGeneratedAtT&& value) { m_lastGeneratedAtHasBeenSet = true; m_lastGeneratedAt = std::forward<LastGeneratedAtT>(value); }
    template<typename LastGeneratedAtT = Aws::Utils::DateTime>
    AccountStatistics& WithLastGeneratedAt(LastGeneratedAtT&& value) { SetLastGeneratedAt(std::forward<LastGeneratedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of findings associated with an account.</p>
     */
    inline int GetTotalFindings() const { return m_totalFindings; }
    inline bool TotalFindingsHasBeenSet() const { return m_totalFindingsHasBeenSet; }
    inline void SetTotalFindings(int value) { m_totalFindingsHasBeenSet = true; m_totalFindings = value; }
    inline AccountStatistics& WithTotalFindings(int value) { SetTotalFindings(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastGeneratedAt{};
    bool m_lastGeneratedAtHasBeenSet = false;

    int m_totalFindings{0};
    bool m_totalFindingsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
