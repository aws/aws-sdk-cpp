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
    AWS_GUARDDUTY_API OrganizationStatistics() = default;
    AWS_GUARDDUTY_API OrganizationStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API OrganizationStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Total number of accounts in your Amazon Web Services organization.</p>
     */
    inline int GetTotalAccountsCount() const { return m_totalAccountsCount; }
    inline bool TotalAccountsCountHasBeenSet() const { return m_totalAccountsCountHasBeenSet; }
    inline void SetTotalAccountsCount(int value) { m_totalAccountsCountHasBeenSet = true; m_totalAccountsCount = value; }
    inline OrganizationStatistics& WithTotalAccountsCount(int value) { SetTotalAccountsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total number of accounts in your Amazon Web Services organization that are
     * associated with GuardDuty.</p>
     */
    inline int GetMemberAccountsCount() const { return m_memberAccountsCount; }
    inline bool MemberAccountsCountHasBeenSet() const { return m_memberAccountsCountHasBeenSet; }
    inline void SetMemberAccountsCount(int value) { m_memberAccountsCountHasBeenSet = true; m_memberAccountsCount = value; }
    inline OrganizationStatistics& WithMemberAccountsCount(int value) { SetMemberAccountsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total number of active accounts in your Amazon Web Services organization that
     * are associated with GuardDuty.</p>
     */
    inline int GetActiveAccountsCount() const { return m_activeAccountsCount; }
    inline bool ActiveAccountsCountHasBeenSet() const { return m_activeAccountsCountHasBeenSet; }
    inline void SetActiveAccountsCount(int value) { m_activeAccountsCountHasBeenSet = true; m_activeAccountsCount = value; }
    inline OrganizationStatistics& WithActiveAccountsCount(int value) { SetActiveAccountsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total number of accounts that have enabled GuardDuty.</p>
     */
    inline int GetEnabledAccountsCount() const { return m_enabledAccountsCount; }
    inline bool EnabledAccountsCountHasBeenSet() const { return m_enabledAccountsCountHasBeenSet; }
    inline void SetEnabledAccountsCount(int value) { m_enabledAccountsCountHasBeenSet = true; m_enabledAccountsCount = value; }
    inline OrganizationStatistics& WithEnabledAccountsCount(int value) { SetEnabledAccountsCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Retrieves the coverage statistics for each feature.</p>
     */
    inline const Aws::Vector<OrganizationFeatureStatistics>& GetCountByFeature() const { return m_countByFeature; }
    inline bool CountByFeatureHasBeenSet() const { return m_countByFeatureHasBeenSet; }
    template<typename CountByFeatureT = Aws::Vector<OrganizationFeatureStatistics>>
    void SetCountByFeature(CountByFeatureT&& value) { m_countByFeatureHasBeenSet = true; m_countByFeature = std::forward<CountByFeatureT>(value); }
    template<typename CountByFeatureT = Aws::Vector<OrganizationFeatureStatistics>>
    OrganizationStatistics& WithCountByFeature(CountByFeatureT&& value) { SetCountByFeature(std::forward<CountByFeatureT>(value)); return *this;}
    template<typename CountByFeatureT = OrganizationFeatureStatistics>
    OrganizationStatistics& AddCountByFeature(CountByFeatureT&& value) { m_countByFeatureHasBeenSet = true; m_countByFeature.emplace_back(std::forward<CountByFeatureT>(value)); return *this; }
    ///@}
  private:

    int m_totalAccountsCount{0};
    bool m_totalAccountsCountHasBeenSet = false;

    int m_memberAccountsCount{0};
    bool m_memberAccountsCountHasBeenSet = false;

    int m_activeAccountsCount{0};
    bool m_activeAccountsCountHasBeenSet = false;

    int m_enabledAccountsCount{0};
    bool m_enabledAccountsCountHasBeenSet = false;

    Aws::Vector<OrganizationFeatureStatistics> m_countByFeature;
    bool m_countByFeatureHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
