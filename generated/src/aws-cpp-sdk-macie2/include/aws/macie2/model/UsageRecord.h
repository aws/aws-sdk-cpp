/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie2/model/UsageByAccount.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides quota and aggregated usage data for an Amazon Macie
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/UsageRecord">AWS
   * API Reference</a></p>
   */
  class UsageRecord
  {
  public:
    AWS_MACIE2_API UsageRecord() = default;
    AWS_MACIE2_API UsageRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API UsageRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the Amazon Web Services account that the data
     * applies to.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    UsageRecord& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the free trial
     * of automated sensitive data discovery started for the account. This value is
     * null if automated sensitive data discovery hasn't been enabled for the
     * account.</p>
     */
    inline const Aws::Utils::DateTime& GetAutomatedDiscoveryFreeTrialStartDate() const { return m_automatedDiscoveryFreeTrialStartDate; }
    inline bool AutomatedDiscoveryFreeTrialStartDateHasBeenSet() const { return m_automatedDiscoveryFreeTrialStartDateHasBeenSet; }
    template<typename AutomatedDiscoveryFreeTrialStartDateT = Aws::Utils::DateTime>
    void SetAutomatedDiscoveryFreeTrialStartDate(AutomatedDiscoveryFreeTrialStartDateT&& value) { m_automatedDiscoveryFreeTrialStartDateHasBeenSet = true; m_automatedDiscoveryFreeTrialStartDate = std::forward<AutomatedDiscoveryFreeTrialStartDateT>(value); }
    template<typename AutomatedDiscoveryFreeTrialStartDateT = Aws::Utils::DateTime>
    UsageRecord& WithAutomatedDiscoveryFreeTrialStartDate(AutomatedDiscoveryFreeTrialStartDateT&& value) { SetAutomatedDiscoveryFreeTrialStartDate(std::forward<AutomatedDiscoveryFreeTrialStartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the Amazon Macie
     * free trial started for the account.</p>
     */
    inline const Aws::Utils::DateTime& GetFreeTrialStartDate() const { return m_freeTrialStartDate; }
    inline bool FreeTrialStartDateHasBeenSet() const { return m_freeTrialStartDateHasBeenSet; }
    template<typename FreeTrialStartDateT = Aws::Utils::DateTime>
    void SetFreeTrialStartDate(FreeTrialStartDateT&& value) { m_freeTrialStartDateHasBeenSet = true; m_freeTrialStartDate = std::forward<FreeTrialStartDateT>(value); }
    template<typename FreeTrialStartDateT = Aws::Utils::DateTime>
    UsageRecord& WithFreeTrialStartDate(FreeTrialStartDateT&& value) { SetFreeTrialStartDate(std::forward<FreeTrialStartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects that contains usage data and quotas for the account. Each
     * object contains the data for a specific usage metric and the corresponding
     * quota.</p>
     */
    inline const Aws::Vector<UsageByAccount>& GetUsage() const { return m_usage; }
    inline bool UsageHasBeenSet() const { return m_usageHasBeenSet; }
    template<typename UsageT = Aws::Vector<UsageByAccount>>
    void SetUsage(UsageT&& value) { m_usageHasBeenSet = true; m_usage = std::forward<UsageT>(value); }
    template<typename UsageT = Aws::Vector<UsageByAccount>>
    UsageRecord& WithUsage(UsageT&& value) { SetUsage(std::forward<UsageT>(value)); return *this;}
    template<typename UsageT = UsageByAccount>
    UsageRecord& AddUsage(UsageT&& value) { m_usageHasBeenSet = true; m_usage.emplace_back(std::forward<UsageT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Utils::DateTime m_automatedDiscoveryFreeTrialStartDate{};
    bool m_automatedDiscoveryFreeTrialStartDateHasBeenSet = false;

    Aws::Utils::DateTime m_freeTrialStartDate{};
    bool m_freeTrialStartDateHasBeenSet = false;

    Aws::Vector<UsageByAccount> m_usage;
    bool m_usageHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
