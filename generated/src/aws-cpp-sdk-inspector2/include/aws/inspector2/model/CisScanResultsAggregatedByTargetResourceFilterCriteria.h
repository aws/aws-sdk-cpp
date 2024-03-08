/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/CisStringFilter.h>
#include <aws/inspector2/model/CisNumberFilter.h>
#include <aws/inspector2/model/CisResultStatusFilter.h>
#include <aws/inspector2/model/TagFilter.h>
#include <aws/inspector2/model/CisTargetStatusFilter.h>
#include <aws/inspector2/model/CisTargetStatusReasonFilter.h>
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
    AWS_INSPECTOR2_API CisScanResultsAggregatedByTargetResourceFilterCriteria();
    AWS_INSPECTOR2_API CisScanResultsAggregatedByTargetResourceFilterCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CisScanResultsAggregatedByTargetResourceFilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The criteria's account ID filters.</p>
     */
    inline const Aws::Vector<CisStringFilter>& GetAccountIdFilters() const{ return m_accountIdFilters; }

    /**
     * <p>The criteria's account ID filters.</p>
     */
    inline bool AccountIdFiltersHasBeenSet() const { return m_accountIdFiltersHasBeenSet; }

    /**
     * <p>The criteria's account ID filters.</p>
     */
    inline void SetAccountIdFilters(const Aws::Vector<CisStringFilter>& value) { m_accountIdFiltersHasBeenSet = true; m_accountIdFilters = value; }

    /**
     * <p>The criteria's account ID filters.</p>
     */
    inline void SetAccountIdFilters(Aws::Vector<CisStringFilter>&& value) { m_accountIdFiltersHasBeenSet = true; m_accountIdFilters = std::move(value); }

    /**
     * <p>The criteria's account ID filters.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& WithAccountIdFilters(const Aws::Vector<CisStringFilter>& value) { SetAccountIdFilters(value); return *this;}

    /**
     * <p>The criteria's account ID filters.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& WithAccountIdFilters(Aws::Vector<CisStringFilter>&& value) { SetAccountIdFilters(std::move(value)); return *this;}

    /**
     * <p>The criteria's account ID filters.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& AddAccountIdFilters(const CisStringFilter& value) { m_accountIdFiltersHasBeenSet = true; m_accountIdFilters.push_back(value); return *this; }

    /**
     * <p>The criteria's account ID filters.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& AddAccountIdFilters(CisStringFilter&& value) { m_accountIdFiltersHasBeenSet = true; m_accountIdFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>The criteria's check ID filters.</p>
     */
    inline const Aws::Vector<CisStringFilter>& GetCheckIdFilters() const{ return m_checkIdFilters; }

    /**
     * <p>The criteria's check ID filters.</p>
     */
    inline bool CheckIdFiltersHasBeenSet() const { return m_checkIdFiltersHasBeenSet; }

    /**
     * <p>The criteria's check ID filters.</p>
     */
    inline void SetCheckIdFilters(const Aws::Vector<CisStringFilter>& value) { m_checkIdFiltersHasBeenSet = true; m_checkIdFilters = value; }

    /**
     * <p>The criteria's check ID filters.</p>
     */
    inline void SetCheckIdFilters(Aws::Vector<CisStringFilter>&& value) { m_checkIdFiltersHasBeenSet = true; m_checkIdFilters = std::move(value); }

    /**
     * <p>The criteria's check ID filters.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& WithCheckIdFilters(const Aws::Vector<CisStringFilter>& value) { SetCheckIdFilters(value); return *this;}

    /**
     * <p>The criteria's check ID filters.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& WithCheckIdFilters(Aws::Vector<CisStringFilter>&& value) { SetCheckIdFilters(std::move(value)); return *this;}

    /**
     * <p>The criteria's check ID filters.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& AddCheckIdFilters(const CisStringFilter& value) { m_checkIdFiltersHasBeenSet = true; m_checkIdFilters.push_back(value); return *this; }

    /**
     * <p>The criteria's check ID filters.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& AddCheckIdFilters(CisStringFilter&& value) { m_checkIdFiltersHasBeenSet = true; m_checkIdFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>The criteria's failed checks filters.</p>
     */
    inline const Aws::Vector<CisNumberFilter>& GetFailedChecksFilters() const{ return m_failedChecksFilters; }

    /**
     * <p>The criteria's failed checks filters.</p>
     */
    inline bool FailedChecksFiltersHasBeenSet() const { return m_failedChecksFiltersHasBeenSet; }

    /**
     * <p>The criteria's failed checks filters.</p>
     */
    inline void SetFailedChecksFilters(const Aws::Vector<CisNumberFilter>& value) { m_failedChecksFiltersHasBeenSet = true; m_failedChecksFilters = value; }

    /**
     * <p>The criteria's failed checks filters.</p>
     */
    inline void SetFailedChecksFilters(Aws::Vector<CisNumberFilter>&& value) { m_failedChecksFiltersHasBeenSet = true; m_failedChecksFilters = std::move(value); }

    /**
     * <p>The criteria's failed checks filters.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& WithFailedChecksFilters(const Aws::Vector<CisNumberFilter>& value) { SetFailedChecksFilters(value); return *this;}

    /**
     * <p>The criteria's failed checks filters.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& WithFailedChecksFilters(Aws::Vector<CisNumberFilter>&& value) { SetFailedChecksFilters(std::move(value)); return *this;}

    /**
     * <p>The criteria's failed checks filters.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& AddFailedChecksFilters(const CisNumberFilter& value) { m_failedChecksFiltersHasBeenSet = true; m_failedChecksFilters.push_back(value); return *this; }

    /**
     * <p>The criteria's failed checks filters.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& AddFailedChecksFilters(CisNumberFilter&& value) { m_failedChecksFiltersHasBeenSet = true; m_failedChecksFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>The criteria's platform filters.</p>
     */
    inline const Aws::Vector<CisStringFilter>& GetPlatformFilters() const{ return m_platformFilters; }

    /**
     * <p>The criteria's platform filters.</p>
     */
    inline bool PlatformFiltersHasBeenSet() const { return m_platformFiltersHasBeenSet; }

    /**
     * <p>The criteria's platform filters.</p>
     */
    inline void SetPlatformFilters(const Aws::Vector<CisStringFilter>& value) { m_platformFiltersHasBeenSet = true; m_platformFilters = value; }

    /**
     * <p>The criteria's platform filters.</p>
     */
    inline void SetPlatformFilters(Aws::Vector<CisStringFilter>&& value) { m_platformFiltersHasBeenSet = true; m_platformFilters = std::move(value); }

    /**
     * <p>The criteria's platform filters.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& WithPlatformFilters(const Aws::Vector<CisStringFilter>& value) { SetPlatformFilters(value); return *this;}

    /**
     * <p>The criteria's platform filters.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& WithPlatformFilters(Aws::Vector<CisStringFilter>&& value) { SetPlatformFilters(std::move(value)); return *this;}

    /**
     * <p>The criteria's platform filters.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& AddPlatformFilters(const CisStringFilter& value) { m_platformFiltersHasBeenSet = true; m_platformFilters.push_back(value); return *this; }

    /**
     * <p>The criteria's platform filters.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& AddPlatformFilters(CisStringFilter&& value) { m_platformFiltersHasBeenSet = true; m_platformFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>The criteria's status filter.</p>
     */
    inline const Aws::Vector<CisResultStatusFilter>& GetStatusFilters() const{ return m_statusFilters; }

    /**
     * <p>The criteria's status filter.</p>
     */
    inline bool StatusFiltersHasBeenSet() const { return m_statusFiltersHasBeenSet; }

    /**
     * <p>The criteria's status filter.</p>
     */
    inline void SetStatusFilters(const Aws::Vector<CisResultStatusFilter>& value) { m_statusFiltersHasBeenSet = true; m_statusFilters = value; }

    /**
     * <p>The criteria's status filter.</p>
     */
    inline void SetStatusFilters(Aws::Vector<CisResultStatusFilter>&& value) { m_statusFiltersHasBeenSet = true; m_statusFilters = std::move(value); }

    /**
     * <p>The criteria's status filter.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& WithStatusFilters(const Aws::Vector<CisResultStatusFilter>& value) { SetStatusFilters(value); return *this;}

    /**
     * <p>The criteria's status filter.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& WithStatusFilters(Aws::Vector<CisResultStatusFilter>&& value) { SetStatusFilters(std::move(value)); return *this;}

    /**
     * <p>The criteria's status filter.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& AddStatusFilters(const CisResultStatusFilter& value) { m_statusFiltersHasBeenSet = true; m_statusFilters.push_back(value); return *this; }

    /**
     * <p>The criteria's status filter.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& AddStatusFilters(CisResultStatusFilter&& value) { m_statusFiltersHasBeenSet = true; m_statusFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>The criteria's target resource ID filters.</p>
     */
    inline const Aws::Vector<CisStringFilter>& GetTargetResourceIdFilters() const{ return m_targetResourceIdFilters; }

    /**
     * <p>The criteria's target resource ID filters.</p>
     */
    inline bool TargetResourceIdFiltersHasBeenSet() const { return m_targetResourceIdFiltersHasBeenSet; }

    /**
     * <p>The criteria's target resource ID filters.</p>
     */
    inline void SetTargetResourceIdFilters(const Aws::Vector<CisStringFilter>& value) { m_targetResourceIdFiltersHasBeenSet = true; m_targetResourceIdFilters = value; }

    /**
     * <p>The criteria's target resource ID filters.</p>
     */
    inline void SetTargetResourceIdFilters(Aws::Vector<CisStringFilter>&& value) { m_targetResourceIdFiltersHasBeenSet = true; m_targetResourceIdFilters = std::move(value); }

    /**
     * <p>The criteria's target resource ID filters.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& WithTargetResourceIdFilters(const Aws::Vector<CisStringFilter>& value) { SetTargetResourceIdFilters(value); return *this;}

    /**
     * <p>The criteria's target resource ID filters.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& WithTargetResourceIdFilters(Aws::Vector<CisStringFilter>&& value) { SetTargetResourceIdFilters(std::move(value)); return *this;}

    /**
     * <p>The criteria's target resource ID filters.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& AddTargetResourceIdFilters(const CisStringFilter& value) { m_targetResourceIdFiltersHasBeenSet = true; m_targetResourceIdFilters.push_back(value); return *this; }

    /**
     * <p>The criteria's target resource ID filters.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& AddTargetResourceIdFilters(CisStringFilter&& value) { m_targetResourceIdFiltersHasBeenSet = true; m_targetResourceIdFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>The criteria's target resource tag filters.</p>
     */
    inline const Aws::Vector<TagFilter>& GetTargetResourceTagFilters() const{ return m_targetResourceTagFilters; }

    /**
     * <p>The criteria's target resource tag filters.</p>
     */
    inline bool TargetResourceTagFiltersHasBeenSet() const { return m_targetResourceTagFiltersHasBeenSet; }

    /**
     * <p>The criteria's target resource tag filters.</p>
     */
    inline void SetTargetResourceTagFilters(const Aws::Vector<TagFilter>& value) { m_targetResourceTagFiltersHasBeenSet = true; m_targetResourceTagFilters = value; }

    /**
     * <p>The criteria's target resource tag filters.</p>
     */
    inline void SetTargetResourceTagFilters(Aws::Vector<TagFilter>&& value) { m_targetResourceTagFiltersHasBeenSet = true; m_targetResourceTagFilters = std::move(value); }

    /**
     * <p>The criteria's target resource tag filters.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& WithTargetResourceTagFilters(const Aws::Vector<TagFilter>& value) { SetTargetResourceTagFilters(value); return *this;}

    /**
     * <p>The criteria's target resource tag filters.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& WithTargetResourceTagFilters(Aws::Vector<TagFilter>&& value) { SetTargetResourceTagFilters(std::move(value)); return *this;}

    /**
     * <p>The criteria's target resource tag filters.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& AddTargetResourceTagFilters(const TagFilter& value) { m_targetResourceTagFiltersHasBeenSet = true; m_targetResourceTagFilters.push_back(value); return *this; }

    /**
     * <p>The criteria's target resource tag filters.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& AddTargetResourceTagFilters(TagFilter&& value) { m_targetResourceTagFiltersHasBeenSet = true; m_targetResourceTagFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>The criteria's target status filters.</p>
     */
    inline const Aws::Vector<CisTargetStatusFilter>& GetTargetStatusFilters() const{ return m_targetStatusFilters; }

    /**
     * <p>The criteria's target status filters.</p>
     */
    inline bool TargetStatusFiltersHasBeenSet() const { return m_targetStatusFiltersHasBeenSet; }

    /**
     * <p>The criteria's target status filters.</p>
     */
    inline void SetTargetStatusFilters(const Aws::Vector<CisTargetStatusFilter>& value) { m_targetStatusFiltersHasBeenSet = true; m_targetStatusFilters = value; }

    /**
     * <p>The criteria's target status filters.</p>
     */
    inline void SetTargetStatusFilters(Aws::Vector<CisTargetStatusFilter>&& value) { m_targetStatusFiltersHasBeenSet = true; m_targetStatusFilters = std::move(value); }

    /**
     * <p>The criteria's target status filters.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& WithTargetStatusFilters(const Aws::Vector<CisTargetStatusFilter>& value) { SetTargetStatusFilters(value); return *this;}

    /**
     * <p>The criteria's target status filters.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& WithTargetStatusFilters(Aws::Vector<CisTargetStatusFilter>&& value) { SetTargetStatusFilters(std::move(value)); return *this;}

    /**
     * <p>The criteria's target status filters.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& AddTargetStatusFilters(const CisTargetStatusFilter& value) { m_targetStatusFiltersHasBeenSet = true; m_targetStatusFilters.push_back(value); return *this; }

    /**
     * <p>The criteria's target status filters.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& AddTargetStatusFilters(CisTargetStatusFilter&& value) { m_targetStatusFiltersHasBeenSet = true; m_targetStatusFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>The criteria's target status reason filters.</p>
     */
    inline const Aws::Vector<CisTargetStatusReasonFilter>& GetTargetStatusReasonFilters() const{ return m_targetStatusReasonFilters; }

    /**
     * <p>The criteria's target status reason filters.</p>
     */
    inline bool TargetStatusReasonFiltersHasBeenSet() const { return m_targetStatusReasonFiltersHasBeenSet; }

    /**
     * <p>The criteria's target status reason filters.</p>
     */
    inline void SetTargetStatusReasonFilters(const Aws::Vector<CisTargetStatusReasonFilter>& value) { m_targetStatusReasonFiltersHasBeenSet = true; m_targetStatusReasonFilters = value; }

    /**
     * <p>The criteria's target status reason filters.</p>
     */
    inline void SetTargetStatusReasonFilters(Aws::Vector<CisTargetStatusReasonFilter>&& value) { m_targetStatusReasonFiltersHasBeenSet = true; m_targetStatusReasonFilters = std::move(value); }

    /**
     * <p>The criteria's target status reason filters.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& WithTargetStatusReasonFilters(const Aws::Vector<CisTargetStatusReasonFilter>& value) { SetTargetStatusReasonFilters(value); return *this;}

    /**
     * <p>The criteria's target status reason filters.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& WithTargetStatusReasonFilters(Aws::Vector<CisTargetStatusReasonFilter>&& value) { SetTargetStatusReasonFilters(std::move(value)); return *this;}

    /**
     * <p>The criteria's target status reason filters.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& AddTargetStatusReasonFilters(const CisTargetStatusReasonFilter& value) { m_targetStatusReasonFiltersHasBeenSet = true; m_targetStatusReasonFilters.push_back(value); return *this; }

    /**
     * <p>The criteria's target status reason filters.</p>
     */
    inline CisScanResultsAggregatedByTargetResourceFilterCriteria& AddTargetStatusReasonFilters(CisTargetStatusReasonFilter&& value) { m_targetStatusReasonFiltersHasBeenSet = true; m_targetStatusReasonFilters.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CisStringFilter> m_accountIdFilters;
    bool m_accountIdFiltersHasBeenSet = false;

    Aws::Vector<CisStringFilter> m_checkIdFilters;
    bool m_checkIdFiltersHasBeenSet = false;

    Aws::Vector<CisNumberFilter> m_failedChecksFilters;
    bool m_failedChecksFiltersHasBeenSet = false;

    Aws::Vector<CisStringFilter> m_platformFilters;
    bool m_platformFiltersHasBeenSet = false;

    Aws::Vector<CisResultStatusFilter> m_statusFilters;
    bool m_statusFiltersHasBeenSet = false;

    Aws::Vector<CisStringFilter> m_targetResourceIdFilters;
    bool m_targetResourceIdFiltersHasBeenSet = false;

    Aws::Vector<TagFilter> m_targetResourceTagFilters;
    bool m_targetResourceTagFiltersHasBeenSet = false;

    Aws::Vector<CisTargetStatusFilter> m_targetStatusFilters;
    bool m_targetStatusFiltersHasBeenSet = false;

    Aws::Vector<CisTargetStatusReasonFilter> m_targetStatusReasonFilters;
    bool m_targetStatusReasonFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
