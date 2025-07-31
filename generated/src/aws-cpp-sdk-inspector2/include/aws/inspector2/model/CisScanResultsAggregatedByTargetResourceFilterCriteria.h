/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/CisStringFilter.h>
#include <aws/inspector2/model/CisResultStatusFilter.h>
#include <aws/inspector2/model/TagFilter.h>
#include <aws/inspector2/model/CisTargetStatusFilter.h>
#include <aws/inspector2/model/CisTargetStatusReasonFilter.h>
#include <aws/inspector2/model/CisNumberFilter.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>The scan results aggregated by target resource filter criteria.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CisScanResultsAggregatedByTargetResourceFilterCriteria">AWS
   * API Reference</a></p>
   */
  class CisScanResultsAggregatedByTargetResourceFilterCriteria
  {
  public:
    AWS_INSPECTOR2_API CisScanResultsAggregatedByTargetResourceFilterCriteria() = default;
    AWS_INSPECTOR2_API CisScanResultsAggregatedByTargetResourceFilterCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CisScanResultsAggregatedByTargetResourceFilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The criteria's account ID filters.</p>
     */
    inline const Aws::Vector<CisStringFilter>& GetAccountIdFilters() const { return m_accountIdFilters; }
    inline bool AccountIdFiltersHasBeenSet() const { return m_accountIdFiltersHasBeenSet; }
    template<typename AccountIdFiltersT = Aws::Vector<CisStringFilter>>
    void SetAccountIdFilters(AccountIdFiltersT&& value) { m_accountIdFiltersHasBeenSet = true; m_accountIdFilters = std::forward<AccountIdFiltersT>(value); }
    template<typename AccountIdFiltersT = Aws::Vector<CisStringFilter>>
    CisScanResultsAggregatedByTargetResourceFilterCriteria& WithAccountIdFilters(AccountIdFiltersT&& value) { SetAccountIdFilters(std::forward<AccountIdFiltersT>(value)); return *this;}
    template<typename AccountIdFiltersT = CisStringFilter>
    CisScanResultsAggregatedByTargetResourceFilterCriteria& AddAccountIdFilters(AccountIdFiltersT&& value) { m_accountIdFiltersHasBeenSet = true; m_accountIdFilters.emplace_back(std::forward<AccountIdFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The criteria's status filter.</p>
     */
    inline const Aws::Vector<CisResultStatusFilter>& GetStatusFilters() const { return m_statusFilters; }
    inline bool StatusFiltersHasBeenSet() const { return m_statusFiltersHasBeenSet; }
    template<typename StatusFiltersT = Aws::Vector<CisResultStatusFilter>>
    void SetStatusFilters(StatusFiltersT&& value) { m_statusFiltersHasBeenSet = true; m_statusFilters = std::forward<StatusFiltersT>(value); }
    template<typename StatusFiltersT = Aws::Vector<CisResultStatusFilter>>
    CisScanResultsAggregatedByTargetResourceFilterCriteria& WithStatusFilters(StatusFiltersT&& value) { SetStatusFilters(std::forward<StatusFiltersT>(value)); return *this;}
    template<typename StatusFiltersT = CisResultStatusFilter>
    CisScanResultsAggregatedByTargetResourceFilterCriteria& AddStatusFilters(StatusFiltersT&& value) { m_statusFiltersHasBeenSet = true; m_statusFilters.emplace_back(std::forward<StatusFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The criteria's check ID filters.</p>
     */
    inline const Aws::Vector<CisStringFilter>& GetCheckIdFilters() const { return m_checkIdFilters; }
    inline bool CheckIdFiltersHasBeenSet() const { return m_checkIdFiltersHasBeenSet; }
    template<typename CheckIdFiltersT = Aws::Vector<CisStringFilter>>
    void SetCheckIdFilters(CheckIdFiltersT&& value) { m_checkIdFiltersHasBeenSet = true; m_checkIdFilters = std::forward<CheckIdFiltersT>(value); }
    template<typename CheckIdFiltersT = Aws::Vector<CisStringFilter>>
    CisScanResultsAggregatedByTargetResourceFilterCriteria& WithCheckIdFilters(CheckIdFiltersT&& value) { SetCheckIdFilters(std::forward<CheckIdFiltersT>(value)); return *this;}
    template<typename CheckIdFiltersT = CisStringFilter>
    CisScanResultsAggregatedByTargetResourceFilterCriteria& AddCheckIdFilters(CheckIdFiltersT&& value) { m_checkIdFiltersHasBeenSet = true; m_checkIdFilters.emplace_back(std::forward<CheckIdFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The criteria's target resource ID filters.</p>
     */
    inline const Aws::Vector<CisStringFilter>& GetTargetResourceIdFilters() const { return m_targetResourceIdFilters; }
    inline bool TargetResourceIdFiltersHasBeenSet() const { return m_targetResourceIdFiltersHasBeenSet; }
    template<typename TargetResourceIdFiltersT = Aws::Vector<CisStringFilter>>
    void SetTargetResourceIdFilters(TargetResourceIdFiltersT&& value) { m_targetResourceIdFiltersHasBeenSet = true; m_targetResourceIdFilters = std::forward<TargetResourceIdFiltersT>(value); }
    template<typename TargetResourceIdFiltersT = Aws::Vector<CisStringFilter>>
    CisScanResultsAggregatedByTargetResourceFilterCriteria& WithTargetResourceIdFilters(TargetResourceIdFiltersT&& value) { SetTargetResourceIdFilters(std::forward<TargetResourceIdFiltersT>(value)); return *this;}
    template<typename TargetResourceIdFiltersT = CisStringFilter>
    CisScanResultsAggregatedByTargetResourceFilterCriteria& AddTargetResourceIdFilters(TargetResourceIdFiltersT&& value) { m_targetResourceIdFiltersHasBeenSet = true; m_targetResourceIdFilters.emplace_back(std::forward<TargetResourceIdFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The criteria's target resource tag filters.</p>
     */
    inline const Aws::Vector<TagFilter>& GetTargetResourceTagFilters() const { return m_targetResourceTagFilters; }
    inline bool TargetResourceTagFiltersHasBeenSet() const { return m_targetResourceTagFiltersHasBeenSet; }
    template<typename TargetResourceTagFiltersT = Aws::Vector<TagFilter>>
    void SetTargetResourceTagFilters(TargetResourceTagFiltersT&& value) { m_targetResourceTagFiltersHasBeenSet = true; m_targetResourceTagFilters = std::forward<TargetResourceTagFiltersT>(value); }
    template<typename TargetResourceTagFiltersT = Aws::Vector<TagFilter>>
    CisScanResultsAggregatedByTargetResourceFilterCriteria& WithTargetResourceTagFilters(TargetResourceTagFiltersT&& value) { SetTargetResourceTagFilters(std::forward<TargetResourceTagFiltersT>(value)); return *this;}
    template<typename TargetResourceTagFiltersT = TagFilter>
    CisScanResultsAggregatedByTargetResourceFilterCriteria& AddTargetResourceTagFilters(TargetResourceTagFiltersT&& value) { m_targetResourceTagFiltersHasBeenSet = true; m_targetResourceTagFilters.emplace_back(std::forward<TargetResourceTagFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The criteria's platform filters.</p>
     */
    inline const Aws::Vector<CisStringFilter>& GetPlatformFilters() const { return m_platformFilters; }
    inline bool PlatformFiltersHasBeenSet() const { return m_platformFiltersHasBeenSet; }
    template<typename PlatformFiltersT = Aws::Vector<CisStringFilter>>
    void SetPlatformFilters(PlatformFiltersT&& value) { m_platformFiltersHasBeenSet = true; m_platformFilters = std::forward<PlatformFiltersT>(value); }
    template<typename PlatformFiltersT = Aws::Vector<CisStringFilter>>
    CisScanResultsAggregatedByTargetResourceFilterCriteria& WithPlatformFilters(PlatformFiltersT&& value) { SetPlatformFilters(std::forward<PlatformFiltersT>(value)); return *this;}
    template<typename PlatformFiltersT = CisStringFilter>
    CisScanResultsAggregatedByTargetResourceFilterCriteria& AddPlatformFilters(PlatformFiltersT&& value) { m_platformFiltersHasBeenSet = true; m_platformFilters.emplace_back(std::forward<PlatformFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The criteria's target status filters.</p>
     */
    inline const Aws::Vector<CisTargetStatusFilter>& GetTargetStatusFilters() const { return m_targetStatusFilters; }
    inline bool TargetStatusFiltersHasBeenSet() const { return m_targetStatusFiltersHasBeenSet; }
    template<typename TargetStatusFiltersT = Aws::Vector<CisTargetStatusFilter>>
    void SetTargetStatusFilters(TargetStatusFiltersT&& value) { m_targetStatusFiltersHasBeenSet = true; m_targetStatusFilters = std::forward<TargetStatusFiltersT>(value); }
    template<typename TargetStatusFiltersT = Aws::Vector<CisTargetStatusFilter>>
    CisScanResultsAggregatedByTargetResourceFilterCriteria& WithTargetStatusFilters(TargetStatusFiltersT&& value) { SetTargetStatusFilters(std::forward<TargetStatusFiltersT>(value)); return *this;}
    template<typename TargetStatusFiltersT = CisTargetStatusFilter>
    CisScanResultsAggregatedByTargetResourceFilterCriteria& AddTargetStatusFilters(TargetStatusFiltersT&& value) { m_targetStatusFiltersHasBeenSet = true; m_targetStatusFilters.emplace_back(std::forward<TargetStatusFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The criteria's target status reason filters.</p>
     */
    inline const Aws::Vector<CisTargetStatusReasonFilter>& GetTargetStatusReasonFilters() const { return m_targetStatusReasonFilters; }
    inline bool TargetStatusReasonFiltersHasBeenSet() const { return m_targetStatusReasonFiltersHasBeenSet; }
    template<typename TargetStatusReasonFiltersT = Aws::Vector<CisTargetStatusReasonFilter>>
    void SetTargetStatusReasonFilters(TargetStatusReasonFiltersT&& value) { m_targetStatusReasonFiltersHasBeenSet = true; m_targetStatusReasonFilters = std::forward<TargetStatusReasonFiltersT>(value); }
    template<typename TargetStatusReasonFiltersT = Aws::Vector<CisTargetStatusReasonFilter>>
    CisScanResultsAggregatedByTargetResourceFilterCriteria& WithTargetStatusReasonFilters(TargetStatusReasonFiltersT&& value) { SetTargetStatusReasonFilters(std::forward<TargetStatusReasonFiltersT>(value)); return *this;}
    template<typename TargetStatusReasonFiltersT = CisTargetStatusReasonFilter>
    CisScanResultsAggregatedByTargetResourceFilterCriteria& AddTargetStatusReasonFilters(TargetStatusReasonFiltersT&& value) { m_targetStatusReasonFiltersHasBeenSet = true; m_targetStatusReasonFilters.emplace_back(std::forward<TargetStatusReasonFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The criteria's failed checks filters.</p>
     */
    inline const Aws::Vector<CisNumberFilter>& GetFailedChecksFilters() const { return m_failedChecksFilters; }
    inline bool FailedChecksFiltersHasBeenSet() const { return m_failedChecksFiltersHasBeenSet; }
    template<typename FailedChecksFiltersT = Aws::Vector<CisNumberFilter>>
    void SetFailedChecksFilters(FailedChecksFiltersT&& value) { m_failedChecksFiltersHasBeenSet = true; m_failedChecksFilters = std::forward<FailedChecksFiltersT>(value); }
    template<typename FailedChecksFiltersT = Aws::Vector<CisNumberFilter>>
    CisScanResultsAggregatedByTargetResourceFilterCriteria& WithFailedChecksFilters(FailedChecksFiltersT&& value) { SetFailedChecksFilters(std::forward<FailedChecksFiltersT>(value)); return *this;}
    template<typename FailedChecksFiltersT = CisNumberFilter>
    CisScanResultsAggregatedByTargetResourceFilterCriteria& AddFailedChecksFilters(FailedChecksFiltersT&& value) { m_failedChecksFiltersHasBeenSet = true; m_failedChecksFilters.emplace_back(std::forward<FailedChecksFiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CisStringFilter> m_accountIdFilters;
    bool m_accountIdFiltersHasBeenSet = false;

    Aws::Vector<CisResultStatusFilter> m_statusFilters;
    bool m_statusFiltersHasBeenSet = false;

    Aws::Vector<CisStringFilter> m_checkIdFilters;
    bool m_checkIdFiltersHasBeenSet = false;

    Aws::Vector<CisStringFilter> m_targetResourceIdFilters;
    bool m_targetResourceIdFiltersHasBeenSet = false;

    Aws::Vector<TagFilter> m_targetResourceTagFilters;
    bool m_targetResourceTagFiltersHasBeenSet = false;

    Aws::Vector<CisStringFilter> m_platformFilters;
    bool m_platformFiltersHasBeenSet = false;

    Aws::Vector<CisTargetStatusFilter> m_targetStatusFilters;
    bool m_targetStatusFiltersHasBeenSet = false;

    Aws::Vector<CisTargetStatusReasonFilter> m_targetStatusReasonFilters;
    bool m_targetStatusReasonFiltersHasBeenSet = false;

    Aws::Vector<CisNumberFilter> m_failedChecksFilters;
    bool m_failedChecksFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
