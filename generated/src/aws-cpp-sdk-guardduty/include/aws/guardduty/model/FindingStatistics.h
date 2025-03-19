/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/AccountStatistics.h>
#include <aws/guardduty/model/DateStatistics.h>
#include <aws/guardduty/model/FindingTypeStatistics.h>
#include <aws/guardduty/model/ResourceStatistics.h>
#include <aws/guardduty/model/SeverityStatistics.h>
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
   * <p>Contains information about finding statistics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/FindingStatistics">AWS
   * API Reference</a></p>
   */
  class FindingStatistics
  {
  public:
    AWS_GUARDDUTY_API FindingStatistics() = default;
    AWS_GUARDDUTY_API FindingStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API FindingStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents a list of map of accounts with a findings count associated with
     * each account.</p>
     */
    inline const Aws::Vector<AccountStatistics>& GetGroupedByAccount() const { return m_groupedByAccount; }
    inline bool GroupedByAccountHasBeenSet() const { return m_groupedByAccountHasBeenSet; }
    template<typename GroupedByAccountT = Aws::Vector<AccountStatistics>>
    void SetGroupedByAccount(GroupedByAccountT&& value) { m_groupedByAccountHasBeenSet = true; m_groupedByAccount = std::forward<GroupedByAccountT>(value); }
    template<typename GroupedByAccountT = Aws::Vector<AccountStatistics>>
    FindingStatistics& WithGroupedByAccount(GroupedByAccountT&& value) { SetGroupedByAccount(std::forward<GroupedByAccountT>(value)); return *this;}
    template<typename GroupedByAccountT = AccountStatistics>
    FindingStatistics& AddGroupedByAccount(GroupedByAccountT&& value) { m_groupedByAccountHasBeenSet = true; m_groupedByAccount.emplace_back(std::forward<GroupedByAccountT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents a list of map of dates with a count of total findings generated on
     * each date per severity level.</p>
     */
    inline const Aws::Vector<DateStatistics>& GetGroupedByDate() const { return m_groupedByDate; }
    inline bool GroupedByDateHasBeenSet() const { return m_groupedByDateHasBeenSet; }
    template<typename GroupedByDateT = Aws::Vector<DateStatistics>>
    void SetGroupedByDate(GroupedByDateT&& value) { m_groupedByDateHasBeenSet = true; m_groupedByDate = std::forward<GroupedByDateT>(value); }
    template<typename GroupedByDateT = Aws::Vector<DateStatistics>>
    FindingStatistics& WithGroupedByDate(GroupedByDateT&& value) { SetGroupedByDate(std::forward<GroupedByDateT>(value)); return *this;}
    template<typename GroupedByDateT = DateStatistics>
    FindingStatistics& AddGroupedByDate(GroupedByDateT&& value) { m_groupedByDateHasBeenSet = true; m_groupedByDate.emplace_back(std::forward<GroupedByDateT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents a list of map of finding types with a count of total findings
     * generated for each type. </p> <p>Based on the <code>orderBy</code> parameter,
     * this request returns either the most occurring finding types or the least
     * occurring finding types. If the <code>orderBy</code> parameter is
     * <code>ASC</code>, this will represent the least occurring finding types in your
     * account; otherwise, this will represent the most occurring finding types. The
     * default value of <code>orderBy</code> is <code>DESC</code>.</p>
     */
    inline const Aws::Vector<FindingTypeStatistics>& GetGroupedByFindingType() const { return m_groupedByFindingType; }
    inline bool GroupedByFindingTypeHasBeenSet() const { return m_groupedByFindingTypeHasBeenSet; }
    template<typename GroupedByFindingTypeT = Aws::Vector<FindingTypeStatistics>>
    void SetGroupedByFindingType(GroupedByFindingTypeT&& value) { m_groupedByFindingTypeHasBeenSet = true; m_groupedByFindingType = std::forward<GroupedByFindingTypeT>(value); }
    template<typename GroupedByFindingTypeT = Aws::Vector<FindingTypeStatistics>>
    FindingStatistics& WithGroupedByFindingType(GroupedByFindingTypeT&& value) { SetGroupedByFindingType(std::forward<GroupedByFindingTypeT>(value)); return *this;}
    template<typename GroupedByFindingTypeT = FindingTypeStatistics>
    FindingStatistics& AddGroupedByFindingType(GroupedByFindingTypeT&& value) { m_groupedByFindingTypeHasBeenSet = true; m_groupedByFindingType.emplace_back(std::forward<GroupedByFindingTypeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents a list of map of top resources with a count of total findings.</p>
     */
    inline const Aws::Vector<ResourceStatistics>& GetGroupedByResource() const { return m_groupedByResource; }
    inline bool GroupedByResourceHasBeenSet() const { return m_groupedByResourceHasBeenSet; }
    template<typename GroupedByResourceT = Aws::Vector<ResourceStatistics>>
    void SetGroupedByResource(GroupedByResourceT&& value) { m_groupedByResourceHasBeenSet = true; m_groupedByResource = std::forward<GroupedByResourceT>(value); }
    template<typename GroupedByResourceT = Aws::Vector<ResourceStatistics>>
    FindingStatistics& WithGroupedByResource(GroupedByResourceT&& value) { SetGroupedByResource(std::forward<GroupedByResourceT>(value)); return *this;}
    template<typename GroupedByResourceT = ResourceStatistics>
    FindingStatistics& AddGroupedByResource(GroupedByResourceT&& value) { m_groupedByResourceHasBeenSet = true; m_groupedByResource.emplace_back(std::forward<GroupedByResourceT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents a list of map of total findings for each severity level.</p>
     */
    inline const Aws::Vector<SeverityStatistics>& GetGroupedBySeverity() const { return m_groupedBySeverity; }
    inline bool GroupedBySeverityHasBeenSet() const { return m_groupedBySeverityHasBeenSet; }
    template<typename GroupedBySeverityT = Aws::Vector<SeverityStatistics>>
    void SetGroupedBySeverity(GroupedBySeverityT&& value) { m_groupedBySeverityHasBeenSet = true; m_groupedBySeverity = std::forward<GroupedBySeverityT>(value); }
    template<typename GroupedBySeverityT = Aws::Vector<SeverityStatistics>>
    FindingStatistics& WithGroupedBySeverity(GroupedBySeverityT&& value) { SetGroupedBySeverity(std::forward<GroupedBySeverityT>(value)); return *this;}
    template<typename GroupedBySeverityT = SeverityStatistics>
    FindingStatistics& AddGroupedBySeverity(GroupedBySeverityT&& value) { m_groupedBySeverityHasBeenSet = true; m_groupedBySeverity.emplace_back(std::forward<GroupedBySeverityT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AccountStatistics> m_groupedByAccount;
    bool m_groupedByAccountHasBeenSet = false;

    Aws::Vector<DateStatistics> m_groupedByDate;
    bool m_groupedByDateHasBeenSet = false;

    Aws::Vector<FindingTypeStatistics> m_groupedByFindingType;
    bool m_groupedByFindingTypeHasBeenSet = false;

    Aws::Vector<ResourceStatistics> m_groupedByResource;
    bool m_groupedByResourceHasBeenSet = false;

    Aws::Vector<SeverityStatistics> m_groupedBySeverity;
    bool m_groupedBySeverityHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
