/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/CisStringFilter.h>
#include <aws/inspector2/model/TagFilter.h>
#include <aws/inspector2/model/CisScanStatusFilter.h>
#include <aws/inspector2/model/CisDateFilter.h>
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
   * <p>A list of CIS scans filter criteria.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListCisScansFilterCriteria">AWS
   * API Reference</a></p>
   */
  class ListCisScansFilterCriteria
  {
  public:
    AWS_INSPECTOR2_API ListCisScansFilterCriteria() = default;
    AWS_INSPECTOR2_API ListCisScansFilterCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API ListCisScansFilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of scan name filters.</p>
     */
    inline const Aws::Vector<CisStringFilter>& GetScanNameFilters() const { return m_scanNameFilters; }
    inline bool ScanNameFiltersHasBeenSet() const { return m_scanNameFiltersHasBeenSet; }
    template<typename ScanNameFiltersT = Aws::Vector<CisStringFilter>>
    void SetScanNameFilters(ScanNameFiltersT&& value) { m_scanNameFiltersHasBeenSet = true; m_scanNameFilters = std::forward<ScanNameFiltersT>(value); }
    template<typename ScanNameFiltersT = Aws::Vector<CisStringFilter>>
    ListCisScansFilterCriteria& WithScanNameFilters(ScanNameFiltersT&& value) { SetScanNameFilters(std::forward<ScanNameFiltersT>(value)); return *this;}
    template<typename ScanNameFiltersT = CisStringFilter>
    ListCisScansFilterCriteria& AddScanNameFilters(ScanNameFiltersT&& value) { m_scanNameFiltersHasBeenSet = true; m_scanNameFilters.emplace_back(std::forward<ScanNameFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of target resource tag filters.</p>
     */
    inline const Aws::Vector<TagFilter>& GetTargetResourceTagFilters() const { return m_targetResourceTagFilters; }
    inline bool TargetResourceTagFiltersHasBeenSet() const { return m_targetResourceTagFiltersHasBeenSet; }
    template<typename TargetResourceTagFiltersT = Aws::Vector<TagFilter>>
    void SetTargetResourceTagFilters(TargetResourceTagFiltersT&& value) { m_targetResourceTagFiltersHasBeenSet = true; m_targetResourceTagFilters = std::forward<TargetResourceTagFiltersT>(value); }
    template<typename TargetResourceTagFiltersT = Aws::Vector<TagFilter>>
    ListCisScansFilterCriteria& WithTargetResourceTagFilters(TargetResourceTagFiltersT&& value) { SetTargetResourceTagFilters(std::forward<TargetResourceTagFiltersT>(value)); return *this;}
    template<typename TargetResourceTagFiltersT = TagFilter>
    ListCisScansFilterCriteria& AddTargetResourceTagFilters(TargetResourceTagFiltersT&& value) { m_targetResourceTagFiltersHasBeenSet = true; m_targetResourceTagFilters.emplace_back(std::forward<TargetResourceTagFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of target resource ID filters.</p>
     */
    inline const Aws::Vector<CisStringFilter>& GetTargetResourceIdFilters() const { return m_targetResourceIdFilters; }
    inline bool TargetResourceIdFiltersHasBeenSet() const { return m_targetResourceIdFiltersHasBeenSet; }
    template<typename TargetResourceIdFiltersT = Aws::Vector<CisStringFilter>>
    void SetTargetResourceIdFilters(TargetResourceIdFiltersT&& value) { m_targetResourceIdFiltersHasBeenSet = true; m_targetResourceIdFilters = std::forward<TargetResourceIdFiltersT>(value); }
    template<typename TargetResourceIdFiltersT = Aws::Vector<CisStringFilter>>
    ListCisScansFilterCriteria& WithTargetResourceIdFilters(TargetResourceIdFiltersT&& value) { SetTargetResourceIdFilters(std::forward<TargetResourceIdFiltersT>(value)); return *this;}
    template<typename TargetResourceIdFiltersT = CisStringFilter>
    ListCisScansFilterCriteria& AddTargetResourceIdFilters(TargetResourceIdFiltersT&& value) { m_targetResourceIdFiltersHasBeenSet = true; m_targetResourceIdFilters.emplace_back(std::forward<TargetResourceIdFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of scan status filters.</p>
     */
    inline const Aws::Vector<CisScanStatusFilter>& GetScanStatusFilters() const { return m_scanStatusFilters; }
    inline bool ScanStatusFiltersHasBeenSet() const { return m_scanStatusFiltersHasBeenSet; }
    template<typename ScanStatusFiltersT = Aws::Vector<CisScanStatusFilter>>
    void SetScanStatusFilters(ScanStatusFiltersT&& value) { m_scanStatusFiltersHasBeenSet = true; m_scanStatusFilters = std::forward<ScanStatusFiltersT>(value); }
    template<typename ScanStatusFiltersT = Aws::Vector<CisScanStatusFilter>>
    ListCisScansFilterCriteria& WithScanStatusFilters(ScanStatusFiltersT&& value) { SetScanStatusFilters(std::forward<ScanStatusFiltersT>(value)); return *this;}
    template<typename ScanStatusFiltersT = CisScanStatusFilter>
    ListCisScansFilterCriteria& AddScanStatusFilters(ScanStatusFiltersT&& value) { m_scanStatusFiltersHasBeenSet = true; m_scanStatusFilters.emplace_back(std::forward<ScanStatusFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of scan at filters.</p>
     */
    inline const Aws::Vector<CisDateFilter>& GetScanAtFilters() const { return m_scanAtFilters; }
    inline bool ScanAtFiltersHasBeenSet() const { return m_scanAtFiltersHasBeenSet; }
    template<typename ScanAtFiltersT = Aws::Vector<CisDateFilter>>
    void SetScanAtFilters(ScanAtFiltersT&& value) { m_scanAtFiltersHasBeenSet = true; m_scanAtFilters = std::forward<ScanAtFiltersT>(value); }
    template<typename ScanAtFiltersT = Aws::Vector<CisDateFilter>>
    ListCisScansFilterCriteria& WithScanAtFilters(ScanAtFiltersT&& value) { SetScanAtFilters(std::forward<ScanAtFiltersT>(value)); return *this;}
    template<typename ScanAtFiltersT = CisDateFilter>
    ListCisScansFilterCriteria& AddScanAtFilters(ScanAtFiltersT&& value) { m_scanAtFiltersHasBeenSet = true; m_scanAtFilters.emplace_back(std::forward<ScanAtFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of scan configuration ARN filters.</p>
     */
    inline const Aws::Vector<CisStringFilter>& GetScanConfigurationArnFilters() const { return m_scanConfigurationArnFilters; }
    inline bool ScanConfigurationArnFiltersHasBeenSet() const { return m_scanConfigurationArnFiltersHasBeenSet; }
    template<typename ScanConfigurationArnFiltersT = Aws::Vector<CisStringFilter>>
    void SetScanConfigurationArnFilters(ScanConfigurationArnFiltersT&& value) { m_scanConfigurationArnFiltersHasBeenSet = true; m_scanConfigurationArnFilters = std::forward<ScanConfigurationArnFiltersT>(value); }
    template<typename ScanConfigurationArnFiltersT = Aws::Vector<CisStringFilter>>
    ListCisScansFilterCriteria& WithScanConfigurationArnFilters(ScanConfigurationArnFiltersT&& value) { SetScanConfigurationArnFilters(std::forward<ScanConfigurationArnFiltersT>(value)); return *this;}
    template<typename ScanConfigurationArnFiltersT = CisStringFilter>
    ListCisScansFilterCriteria& AddScanConfigurationArnFilters(ScanConfigurationArnFiltersT&& value) { m_scanConfigurationArnFiltersHasBeenSet = true; m_scanConfigurationArnFilters.emplace_back(std::forward<ScanConfigurationArnFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of scan ARN filters.</p>
     */
    inline const Aws::Vector<CisStringFilter>& GetScanArnFilters() const { return m_scanArnFilters; }
    inline bool ScanArnFiltersHasBeenSet() const { return m_scanArnFiltersHasBeenSet; }
    template<typename ScanArnFiltersT = Aws::Vector<CisStringFilter>>
    void SetScanArnFilters(ScanArnFiltersT&& value) { m_scanArnFiltersHasBeenSet = true; m_scanArnFilters = std::forward<ScanArnFiltersT>(value); }
    template<typename ScanArnFiltersT = Aws::Vector<CisStringFilter>>
    ListCisScansFilterCriteria& WithScanArnFilters(ScanArnFiltersT&& value) { SetScanArnFilters(std::forward<ScanArnFiltersT>(value)); return *this;}
    template<typename ScanArnFiltersT = CisStringFilter>
    ListCisScansFilterCriteria& AddScanArnFilters(ScanArnFiltersT&& value) { m_scanArnFiltersHasBeenSet = true; m_scanArnFilters.emplace_back(std::forward<ScanArnFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of scheduled by filters.</p>
     */
    inline const Aws::Vector<CisStringFilter>& GetScheduledByFilters() const { return m_scheduledByFilters; }
    inline bool ScheduledByFiltersHasBeenSet() const { return m_scheduledByFiltersHasBeenSet; }
    template<typename ScheduledByFiltersT = Aws::Vector<CisStringFilter>>
    void SetScheduledByFilters(ScheduledByFiltersT&& value) { m_scheduledByFiltersHasBeenSet = true; m_scheduledByFilters = std::forward<ScheduledByFiltersT>(value); }
    template<typename ScheduledByFiltersT = Aws::Vector<CisStringFilter>>
    ListCisScansFilterCriteria& WithScheduledByFilters(ScheduledByFiltersT&& value) { SetScheduledByFilters(std::forward<ScheduledByFiltersT>(value)); return *this;}
    template<typename ScheduledByFiltersT = CisStringFilter>
    ListCisScansFilterCriteria& AddScheduledByFilters(ScheduledByFiltersT&& value) { m_scheduledByFiltersHasBeenSet = true; m_scheduledByFilters.emplace_back(std::forward<ScheduledByFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of failed checks filters.</p>
     */
    inline const Aws::Vector<CisNumberFilter>& GetFailedChecksFilters() const { return m_failedChecksFilters; }
    inline bool FailedChecksFiltersHasBeenSet() const { return m_failedChecksFiltersHasBeenSet; }
    template<typename FailedChecksFiltersT = Aws::Vector<CisNumberFilter>>
    void SetFailedChecksFilters(FailedChecksFiltersT&& value) { m_failedChecksFiltersHasBeenSet = true; m_failedChecksFilters = std::forward<FailedChecksFiltersT>(value); }
    template<typename FailedChecksFiltersT = Aws::Vector<CisNumberFilter>>
    ListCisScansFilterCriteria& WithFailedChecksFilters(FailedChecksFiltersT&& value) { SetFailedChecksFilters(std::forward<FailedChecksFiltersT>(value)); return *this;}
    template<typename FailedChecksFiltersT = CisNumberFilter>
    ListCisScansFilterCriteria& AddFailedChecksFilters(FailedChecksFiltersT&& value) { m_failedChecksFiltersHasBeenSet = true; m_failedChecksFilters.emplace_back(std::forward<FailedChecksFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of target account ID filters.</p>
     */
    inline const Aws::Vector<CisStringFilter>& GetTargetAccountIdFilters() const { return m_targetAccountIdFilters; }
    inline bool TargetAccountIdFiltersHasBeenSet() const { return m_targetAccountIdFiltersHasBeenSet; }
    template<typename TargetAccountIdFiltersT = Aws::Vector<CisStringFilter>>
    void SetTargetAccountIdFilters(TargetAccountIdFiltersT&& value) { m_targetAccountIdFiltersHasBeenSet = true; m_targetAccountIdFilters = std::forward<TargetAccountIdFiltersT>(value); }
    template<typename TargetAccountIdFiltersT = Aws::Vector<CisStringFilter>>
    ListCisScansFilterCriteria& WithTargetAccountIdFilters(TargetAccountIdFiltersT&& value) { SetTargetAccountIdFilters(std::forward<TargetAccountIdFiltersT>(value)); return *this;}
    template<typename TargetAccountIdFiltersT = CisStringFilter>
    ListCisScansFilterCriteria& AddTargetAccountIdFilters(TargetAccountIdFiltersT&& value) { m_targetAccountIdFiltersHasBeenSet = true; m_targetAccountIdFilters.emplace_back(std::forward<TargetAccountIdFiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CisStringFilter> m_scanNameFilters;
    bool m_scanNameFiltersHasBeenSet = false;

    Aws::Vector<TagFilter> m_targetResourceTagFilters;
    bool m_targetResourceTagFiltersHasBeenSet = false;

    Aws::Vector<CisStringFilter> m_targetResourceIdFilters;
    bool m_targetResourceIdFiltersHasBeenSet = false;

    Aws::Vector<CisScanStatusFilter> m_scanStatusFilters;
    bool m_scanStatusFiltersHasBeenSet = false;

    Aws::Vector<CisDateFilter> m_scanAtFilters;
    bool m_scanAtFiltersHasBeenSet = false;

    Aws::Vector<CisStringFilter> m_scanConfigurationArnFilters;
    bool m_scanConfigurationArnFiltersHasBeenSet = false;

    Aws::Vector<CisStringFilter> m_scanArnFilters;
    bool m_scanArnFiltersHasBeenSet = false;

    Aws::Vector<CisStringFilter> m_scheduledByFilters;
    bool m_scheduledByFiltersHasBeenSet = false;

    Aws::Vector<CisNumberFilter> m_failedChecksFilters;
    bool m_failedChecksFiltersHasBeenSet = false;

    Aws::Vector<CisStringFilter> m_targetAccountIdFilters;
    bool m_targetAccountIdFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
