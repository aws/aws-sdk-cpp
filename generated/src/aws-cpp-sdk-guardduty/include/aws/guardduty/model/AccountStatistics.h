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
    AWS_GUARDDUTY_API AccountStatistics();
    AWS_GUARDDUTY_API AccountStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API AccountStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline AccountStatistics& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline AccountStatistics& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline AccountStatistics& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the finding for this account was last generated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastGeneratedAt() const{ return m_lastGeneratedAt; }
    inline bool LastGeneratedAtHasBeenSet() const { return m_lastGeneratedAtHasBeenSet; }
    inline void SetLastGeneratedAt(const Aws::Utils::DateTime& value) { m_lastGeneratedAtHasBeenSet = true; m_lastGeneratedAt = value; }
    inline void SetLastGeneratedAt(Aws::Utils::DateTime&& value) { m_lastGeneratedAtHasBeenSet = true; m_lastGeneratedAt = std::move(value); }
    inline AccountStatistics& WithLastGeneratedAt(const Aws::Utils::DateTime& value) { SetLastGeneratedAt(value); return *this;}
    inline AccountStatistics& WithLastGeneratedAt(Aws::Utils::DateTime&& value) { SetLastGeneratedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of findings associated with an account.</p>
     */
    inline int GetTotalFindings() const{ return m_totalFindings; }
    inline bool TotalFindingsHasBeenSet() const { return m_totalFindingsHasBeenSet; }
    inline void SetTotalFindings(int value) { m_totalFindingsHasBeenSet = true; m_totalFindings = value; }
    inline AccountStatistics& WithTotalFindings(int value) { SetTotalFindings(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastGeneratedAt;
    bool m_lastGeneratedAtHasBeenSet = false;

    int m_totalFindings;
    bool m_totalFindingsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
