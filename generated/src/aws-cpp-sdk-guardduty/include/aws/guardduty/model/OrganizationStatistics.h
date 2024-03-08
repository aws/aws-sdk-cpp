/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/OrganizationFeatureStatistics.h>
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
   * <p>Information about the coverage statistics of the features for the entire
   * Amazon Web Services organization.</p> <p>When you create a new Amazon Web
   * Services organization, it might take up to 24 hours to generate the statistics
   * summary for this organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/OrganizationStatistics">AWS
   * API Reference</a></p>
   */
  class OrganizationStatistics
  {
  public:
    AWS_GUARDDUTY_API OrganizationStatistics();
    AWS_GUARDDUTY_API OrganizationStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API OrganizationStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Total number of accounts in your Amazon Web Services organization.</p>
     */
    inline int GetTotalAccountsCount() const{ return m_totalAccountsCount; }

    /**
     * <p>Total number of accounts in your Amazon Web Services organization.</p>
     */
    inline bool TotalAccountsCountHasBeenSet() const { return m_totalAccountsCountHasBeenSet; }

    /**
     * <p>Total number of accounts in your Amazon Web Services organization.</p>
     */
    inline void SetTotalAccountsCount(int value) { m_totalAccountsCountHasBeenSet = true; m_totalAccountsCount = value; }

    /**
     * <p>Total number of accounts in your Amazon Web Services organization.</p>
     */
    inline OrganizationStatistics& WithTotalAccountsCount(int value) { SetTotalAccountsCount(value); return *this;}


    /**
     * <p>Total number of accounts in your Amazon Web Services organization that are
     * associated with GuardDuty.</p>
     */
    inline int GetMemberAccountsCount() const{ return m_memberAccountsCount; }

    /**
     * <p>Total number of accounts in your Amazon Web Services organization that are
     * associated with GuardDuty.</p>
     */
    inline bool MemberAccountsCountHasBeenSet() const { return m_memberAccountsCountHasBeenSet; }

    /**
     * <p>Total number of accounts in your Amazon Web Services organization that are
     * associated with GuardDuty.</p>
     */
    inline void SetMemberAccountsCount(int value) { m_memberAccountsCountHasBeenSet = true; m_memberAccountsCount = value; }

    /**
     * <p>Total number of accounts in your Amazon Web Services organization that are
     * associated with GuardDuty.</p>
     */
    inline OrganizationStatistics& WithMemberAccountsCount(int value) { SetMemberAccountsCount(value); return *this;}


    /**
     * <p>Total number of active accounts in your Amazon Web Services organization that
     * are associated with GuardDuty.</p>
     */
    inline int GetActiveAccountsCount() const{ return m_activeAccountsCount; }

    /**
     * <p>Total number of active accounts in your Amazon Web Services organization that
     * are associated with GuardDuty.</p>
     */
    inline bool ActiveAccountsCountHasBeenSet() const { return m_activeAccountsCountHasBeenSet; }

    /**
     * <p>Total number of active accounts in your Amazon Web Services organization that
     * are associated with GuardDuty.</p>
     */
    inline void SetActiveAccountsCount(int value) { m_activeAccountsCountHasBeenSet = true; m_activeAccountsCount = value; }

    /**
     * <p>Total number of active accounts in your Amazon Web Services organization that
     * are associated with GuardDuty.</p>
     */
    inline OrganizationStatistics& WithActiveAccountsCount(int value) { SetActiveAccountsCount(value); return *this;}


    /**
     * <p>Total number of accounts that have enabled GuardDuty.</p>
     */
    inline int GetEnabledAccountsCount() const{ return m_enabledAccountsCount; }

    /**
     * <p>Total number of accounts that have enabled GuardDuty.</p>
     */
    inline bool EnabledAccountsCountHasBeenSet() const { return m_enabledAccountsCountHasBeenSet; }

    /**
     * <p>Total number of accounts that have enabled GuardDuty.</p>
     */
    inline void SetEnabledAccountsCount(int value) { m_enabledAccountsCountHasBeenSet = true; m_enabledAccountsCount = value; }

    /**
     * <p>Total number of accounts that have enabled GuardDuty.</p>
     */
    inline OrganizationStatistics& WithEnabledAccountsCount(int value) { SetEnabledAccountsCount(value); return *this;}


    /**
     * <p>Retrieves the coverage statistics for each feature.</p>
     */
    inline const Aws::Vector<OrganizationFeatureStatistics>& GetCountByFeature() const{ return m_countByFeature; }

    /**
     * <p>Retrieves the coverage statistics for each feature.</p>
     */
    inline bool CountByFeatureHasBeenSet() const { return m_countByFeatureHasBeenSet; }

    /**
     * <p>Retrieves the coverage statistics for each feature.</p>
     */
    inline void SetCountByFeature(const Aws::Vector<OrganizationFeatureStatistics>& value) { m_countByFeatureHasBeenSet = true; m_countByFeature = value; }

    /**
     * <p>Retrieves the coverage statistics for each feature.</p>
     */
    inline void SetCountByFeature(Aws::Vector<OrganizationFeatureStatistics>&& value) { m_countByFeatureHasBeenSet = true; m_countByFeature = std::move(value); }

    /**
     * <p>Retrieves the coverage statistics for each feature.</p>
     */
    inline OrganizationStatistics& WithCountByFeature(const Aws::Vector<OrganizationFeatureStatistics>& value) { SetCountByFeature(value); return *this;}

    /**
     * <p>Retrieves the coverage statistics for each feature.</p>
     */
    inline OrganizationStatistics& WithCountByFeature(Aws::Vector<OrganizationFeatureStatistics>&& value) { SetCountByFeature(std::move(value)); return *this;}

    /**
     * <p>Retrieves the coverage statistics for each feature.</p>
     */
    inline OrganizationStatistics& AddCountByFeature(const OrganizationFeatureStatistics& value) { m_countByFeatureHasBeenSet = true; m_countByFeature.push_back(value); return *this; }

    /**
     * <p>Retrieves the coverage statistics for each feature.</p>
     */
    inline OrganizationStatistics& AddCountByFeature(OrganizationFeatureStatistics&& value) { m_countByFeatureHasBeenSet = true; m_countByFeature.push_back(std::move(value)); return *this; }

  private:

    int m_totalAccountsCount;
    bool m_totalAccountsCountHasBeenSet = false;

    int m_memberAccountsCount;
    bool m_memberAccountsCountHasBeenSet = false;

    int m_activeAccountsCount;
    bool m_activeAccountsCountHasBeenSet = false;

    int m_enabledAccountsCount;
    bool m_enabledAccountsCountHasBeenSet = false;

    Aws::Vector<OrganizationFeatureStatistics> m_countByFeature;
    bool m_countByFeatureHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
