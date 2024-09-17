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
    AWS_GUARDDUTY_API FindingStatistics();
    AWS_GUARDDUTY_API FindingStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API FindingStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents a list of map of accounts with a findings count associated with
     * each account.</p>
     */
    inline const Aws::Vector<AccountStatistics>& GetGroupedByAccount() const{ return m_groupedByAccount; }
    inline bool GroupedByAccountHasBeenSet() const { return m_groupedByAccountHasBeenSet; }
    inline void SetGroupedByAccount(const Aws::Vector<AccountStatistics>& value) { m_groupedByAccountHasBeenSet = true; m_groupedByAccount = value; }
    inline void SetGroupedByAccount(Aws::Vector<AccountStatistics>&& value) { m_groupedByAccountHasBeenSet = true; m_groupedByAccount = std::move(value); }
    inline FindingStatistics& WithGroupedByAccount(const Aws::Vector<AccountStatistics>& value) { SetGroupedByAccount(value); return *this;}
    inline FindingStatistics& WithGroupedByAccount(Aws::Vector<AccountStatistics>&& value) { SetGroupedByAccount(std::move(value)); return *this;}
    inline FindingStatistics& AddGroupedByAccount(const AccountStatistics& value) { m_groupedByAccountHasBeenSet = true; m_groupedByAccount.push_back(value); return *this; }
    inline FindingStatistics& AddGroupedByAccount(AccountStatistics&& value) { m_groupedByAccountHasBeenSet = true; m_groupedByAccount.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents a list of map of dates with a count of total findings generated on
     * each date per severity level.</p>
     */
    inline const Aws::Vector<DateStatistics>& GetGroupedByDate() const{ return m_groupedByDate; }
    inline bool GroupedByDateHasBeenSet() const { return m_groupedByDateHasBeenSet; }
    inline void SetGroupedByDate(const Aws::Vector<DateStatistics>& value) { m_groupedByDateHasBeenSet = true; m_groupedByDate = value; }
    inline void SetGroupedByDate(Aws::Vector<DateStatistics>&& value) { m_groupedByDateHasBeenSet = true; m_groupedByDate = std::move(value); }
    inline FindingStatistics& WithGroupedByDate(const Aws::Vector<DateStatistics>& value) { SetGroupedByDate(value); return *this;}
    inline FindingStatistics& WithGroupedByDate(Aws::Vector<DateStatistics>&& value) { SetGroupedByDate(std::move(value)); return *this;}
    inline FindingStatistics& AddGroupedByDate(const DateStatistics& value) { m_groupedByDateHasBeenSet = true; m_groupedByDate.push_back(value); return *this; }
    inline FindingStatistics& AddGroupedByDate(DateStatistics&& value) { m_groupedByDateHasBeenSet = true; m_groupedByDate.push_back(std::move(value)); return *this; }
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
    inline const Aws::Vector<FindingTypeStatistics>& GetGroupedByFindingType() const{ return m_groupedByFindingType; }
    inline bool GroupedByFindingTypeHasBeenSet() const { return m_groupedByFindingTypeHasBeenSet; }
    inline void SetGroupedByFindingType(const Aws::Vector<FindingTypeStatistics>& value) { m_groupedByFindingTypeHasBeenSet = true; m_groupedByFindingType = value; }
    inline void SetGroupedByFindingType(Aws::Vector<FindingTypeStatistics>&& value) { m_groupedByFindingTypeHasBeenSet = true; m_groupedByFindingType = std::move(value); }
    inline FindingStatistics& WithGroupedByFindingType(const Aws::Vector<FindingTypeStatistics>& value) { SetGroupedByFindingType(value); return *this;}
    inline FindingStatistics& WithGroupedByFindingType(Aws::Vector<FindingTypeStatistics>&& value) { SetGroupedByFindingType(std::move(value)); return *this;}
    inline FindingStatistics& AddGroupedByFindingType(const FindingTypeStatistics& value) { m_groupedByFindingTypeHasBeenSet = true; m_groupedByFindingType.push_back(value); return *this; }
    inline FindingStatistics& AddGroupedByFindingType(FindingTypeStatistics&& value) { m_groupedByFindingTypeHasBeenSet = true; m_groupedByFindingType.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents a list of map of top resources with a count of total findings.</p>
     */
    inline const Aws::Vector<ResourceStatistics>& GetGroupedByResource() const{ return m_groupedByResource; }
    inline bool GroupedByResourceHasBeenSet() const { return m_groupedByResourceHasBeenSet; }
    inline void SetGroupedByResource(const Aws::Vector<ResourceStatistics>& value) { m_groupedByResourceHasBeenSet = true; m_groupedByResource = value; }
    inline void SetGroupedByResource(Aws::Vector<ResourceStatistics>&& value) { m_groupedByResourceHasBeenSet = true; m_groupedByResource = std::move(value); }
    inline FindingStatistics& WithGroupedByResource(const Aws::Vector<ResourceStatistics>& value) { SetGroupedByResource(value); return *this;}
    inline FindingStatistics& WithGroupedByResource(Aws::Vector<ResourceStatistics>&& value) { SetGroupedByResource(std::move(value)); return *this;}
    inline FindingStatistics& AddGroupedByResource(const ResourceStatistics& value) { m_groupedByResourceHasBeenSet = true; m_groupedByResource.push_back(value); return *this; }
    inline FindingStatistics& AddGroupedByResource(ResourceStatistics&& value) { m_groupedByResourceHasBeenSet = true; m_groupedByResource.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents a list of map of total findings for each severity level.</p>
     */
    inline const Aws::Vector<SeverityStatistics>& GetGroupedBySeverity() const{ return m_groupedBySeverity; }
    inline bool GroupedBySeverityHasBeenSet() const { return m_groupedBySeverityHasBeenSet; }
    inline void SetGroupedBySeverity(const Aws::Vector<SeverityStatistics>& value) { m_groupedBySeverityHasBeenSet = true; m_groupedBySeverity = value; }
    inline void SetGroupedBySeverity(Aws::Vector<SeverityStatistics>&& value) { m_groupedBySeverityHasBeenSet = true; m_groupedBySeverity = std::move(value); }
    inline FindingStatistics& WithGroupedBySeverity(const Aws::Vector<SeverityStatistics>& value) { SetGroupedBySeverity(value); return *this;}
    inline FindingStatistics& WithGroupedBySeverity(Aws::Vector<SeverityStatistics>&& value) { SetGroupedBySeverity(std::move(value)); return *this;}
    inline FindingStatistics& AddGroupedBySeverity(const SeverityStatistics& value) { m_groupedBySeverityHasBeenSet = true; m_groupedBySeverity.push_back(value); return *this; }
    inline FindingStatistics& AddGroupedBySeverity(SeverityStatistics&& value) { m_groupedBySeverityHasBeenSet = true; m_groupedBySeverity.push_back(std::move(value)); return *this; }
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
