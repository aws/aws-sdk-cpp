/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/CisNumberFilter.h>
#include <aws/inspector2/model/CisStringFilter.h>
#include <aws/inspector2/model/CisDateFilter.h>
#include <aws/inspector2/model/CisScanStatusFilter.h>
#include <aws/inspector2/model/TagFilter.h>
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
    AWS_INSPECTOR2_API ListCisScansFilterCriteria();
    AWS_INSPECTOR2_API ListCisScansFilterCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API ListCisScansFilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of failed checks filters.</p>
     */
    inline const Aws::Vector<CisNumberFilter>& GetFailedChecksFilters() const{ return m_failedChecksFilters; }

    /**
     * <p>The list of failed checks filters.</p>
     */
    inline bool FailedChecksFiltersHasBeenSet() const { return m_failedChecksFiltersHasBeenSet; }

    /**
     * <p>The list of failed checks filters.</p>
     */
    inline void SetFailedChecksFilters(const Aws::Vector<CisNumberFilter>& value) { m_failedChecksFiltersHasBeenSet = true; m_failedChecksFilters = value; }

    /**
     * <p>The list of failed checks filters.</p>
     */
    inline void SetFailedChecksFilters(Aws::Vector<CisNumberFilter>&& value) { m_failedChecksFiltersHasBeenSet = true; m_failedChecksFilters = std::move(value); }

    /**
     * <p>The list of failed checks filters.</p>
     */
    inline ListCisScansFilterCriteria& WithFailedChecksFilters(const Aws::Vector<CisNumberFilter>& value) { SetFailedChecksFilters(value); return *this;}

    /**
     * <p>The list of failed checks filters.</p>
     */
    inline ListCisScansFilterCriteria& WithFailedChecksFilters(Aws::Vector<CisNumberFilter>&& value) { SetFailedChecksFilters(std::move(value)); return *this;}

    /**
     * <p>The list of failed checks filters.</p>
     */
    inline ListCisScansFilterCriteria& AddFailedChecksFilters(const CisNumberFilter& value) { m_failedChecksFiltersHasBeenSet = true; m_failedChecksFilters.push_back(value); return *this; }

    /**
     * <p>The list of failed checks filters.</p>
     */
    inline ListCisScansFilterCriteria& AddFailedChecksFilters(CisNumberFilter&& value) { m_failedChecksFiltersHasBeenSet = true; m_failedChecksFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of scan ARN filters.</p>
     */
    inline const Aws::Vector<CisStringFilter>& GetScanArnFilters() const{ return m_scanArnFilters; }

    /**
     * <p>The list of scan ARN filters.</p>
     */
    inline bool ScanArnFiltersHasBeenSet() const { return m_scanArnFiltersHasBeenSet; }

    /**
     * <p>The list of scan ARN filters.</p>
     */
    inline void SetScanArnFilters(const Aws::Vector<CisStringFilter>& value) { m_scanArnFiltersHasBeenSet = true; m_scanArnFilters = value; }

    /**
     * <p>The list of scan ARN filters.</p>
     */
    inline void SetScanArnFilters(Aws::Vector<CisStringFilter>&& value) { m_scanArnFiltersHasBeenSet = true; m_scanArnFilters = std::move(value); }

    /**
     * <p>The list of scan ARN filters.</p>
     */
    inline ListCisScansFilterCriteria& WithScanArnFilters(const Aws::Vector<CisStringFilter>& value) { SetScanArnFilters(value); return *this;}

    /**
     * <p>The list of scan ARN filters.</p>
     */
    inline ListCisScansFilterCriteria& WithScanArnFilters(Aws::Vector<CisStringFilter>&& value) { SetScanArnFilters(std::move(value)); return *this;}

    /**
     * <p>The list of scan ARN filters.</p>
     */
    inline ListCisScansFilterCriteria& AddScanArnFilters(const CisStringFilter& value) { m_scanArnFiltersHasBeenSet = true; m_scanArnFilters.push_back(value); return *this; }

    /**
     * <p>The list of scan ARN filters.</p>
     */
    inline ListCisScansFilterCriteria& AddScanArnFilters(CisStringFilter&& value) { m_scanArnFiltersHasBeenSet = true; m_scanArnFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of scan at filters.</p>
     */
    inline const Aws::Vector<CisDateFilter>& GetScanAtFilters() const{ return m_scanAtFilters; }

    /**
     * <p>The list of scan at filters.</p>
     */
    inline bool ScanAtFiltersHasBeenSet() const { return m_scanAtFiltersHasBeenSet; }

    /**
     * <p>The list of scan at filters.</p>
     */
    inline void SetScanAtFilters(const Aws::Vector<CisDateFilter>& value) { m_scanAtFiltersHasBeenSet = true; m_scanAtFilters = value; }

    /**
     * <p>The list of scan at filters.</p>
     */
    inline void SetScanAtFilters(Aws::Vector<CisDateFilter>&& value) { m_scanAtFiltersHasBeenSet = true; m_scanAtFilters = std::move(value); }

    /**
     * <p>The list of scan at filters.</p>
     */
    inline ListCisScansFilterCriteria& WithScanAtFilters(const Aws::Vector<CisDateFilter>& value) { SetScanAtFilters(value); return *this;}

    /**
     * <p>The list of scan at filters.</p>
     */
    inline ListCisScansFilterCriteria& WithScanAtFilters(Aws::Vector<CisDateFilter>&& value) { SetScanAtFilters(std::move(value)); return *this;}

    /**
     * <p>The list of scan at filters.</p>
     */
    inline ListCisScansFilterCriteria& AddScanAtFilters(const CisDateFilter& value) { m_scanAtFiltersHasBeenSet = true; m_scanAtFilters.push_back(value); return *this; }

    /**
     * <p>The list of scan at filters.</p>
     */
    inline ListCisScansFilterCriteria& AddScanAtFilters(CisDateFilter&& value) { m_scanAtFiltersHasBeenSet = true; m_scanAtFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of scan configuration ARN filters.</p>
     */
    inline const Aws::Vector<CisStringFilter>& GetScanConfigurationArnFilters() const{ return m_scanConfigurationArnFilters; }

    /**
     * <p>The list of scan configuration ARN filters.</p>
     */
    inline bool ScanConfigurationArnFiltersHasBeenSet() const { return m_scanConfigurationArnFiltersHasBeenSet; }

    /**
     * <p>The list of scan configuration ARN filters.</p>
     */
    inline void SetScanConfigurationArnFilters(const Aws::Vector<CisStringFilter>& value) { m_scanConfigurationArnFiltersHasBeenSet = true; m_scanConfigurationArnFilters = value; }

    /**
     * <p>The list of scan configuration ARN filters.</p>
     */
    inline void SetScanConfigurationArnFilters(Aws::Vector<CisStringFilter>&& value) { m_scanConfigurationArnFiltersHasBeenSet = true; m_scanConfigurationArnFilters = std::move(value); }

    /**
     * <p>The list of scan configuration ARN filters.</p>
     */
    inline ListCisScansFilterCriteria& WithScanConfigurationArnFilters(const Aws::Vector<CisStringFilter>& value) { SetScanConfigurationArnFilters(value); return *this;}

    /**
     * <p>The list of scan configuration ARN filters.</p>
     */
    inline ListCisScansFilterCriteria& WithScanConfigurationArnFilters(Aws::Vector<CisStringFilter>&& value) { SetScanConfigurationArnFilters(std::move(value)); return *this;}

    /**
     * <p>The list of scan configuration ARN filters.</p>
     */
    inline ListCisScansFilterCriteria& AddScanConfigurationArnFilters(const CisStringFilter& value) { m_scanConfigurationArnFiltersHasBeenSet = true; m_scanConfigurationArnFilters.push_back(value); return *this; }

    /**
     * <p>The list of scan configuration ARN filters.</p>
     */
    inline ListCisScansFilterCriteria& AddScanConfigurationArnFilters(CisStringFilter&& value) { m_scanConfigurationArnFiltersHasBeenSet = true; m_scanConfigurationArnFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of scan name filters.</p>
     */
    inline const Aws::Vector<CisStringFilter>& GetScanNameFilters() const{ return m_scanNameFilters; }

    /**
     * <p>The list of scan name filters.</p>
     */
    inline bool ScanNameFiltersHasBeenSet() const { return m_scanNameFiltersHasBeenSet; }

    /**
     * <p>The list of scan name filters.</p>
     */
    inline void SetScanNameFilters(const Aws::Vector<CisStringFilter>& value) { m_scanNameFiltersHasBeenSet = true; m_scanNameFilters = value; }

    /**
     * <p>The list of scan name filters.</p>
     */
    inline void SetScanNameFilters(Aws::Vector<CisStringFilter>&& value) { m_scanNameFiltersHasBeenSet = true; m_scanNameFilters = std::move(value); }

    /**
     * <p>The list of scan name filters.</p>
     */
    inline ListCisScansFilterCriteria& WithScanNameFilters(const Aws::Vector<CisStringFilter>& value) { SetScanNameFilters(value); return *this;}

    /**
     * <p>The list of scan name filters.</p>
     */
    inline ListCisScansFilterCriteria& WithScanNameFilters(Aws::Vector<CisStringFilter>&& value) { SetScanNameFilters(std::move(value)); return *this;}

    /**
     * <p>The list of scan name filters.</p>
     */
    inline ListCisScansFilterCriteria& AddScanNameFilters(const CisStringFilter& value) { m_scanNameFiltersHasBeenSet = true; m_scanNameFilters.push_back(value); return *this; }

    /**
     * <p>The list of scan name filters.</p>
     */
    inline ListCisScansFilterCriteria& AddScanNameFilters(CisStringFilter&& value) { m_scanNameFiltersHasBeenSet = true; m_scanNameFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of scan status filters.</p>
     */
    inline const Aws::Vector<CisScanStatusFilter>& GetScanStatusFilters() const{ return m_scanStatusFilters; }

    /**
     * <p>The list of scan status filters.</p>
     */
    inline bool ScanStatusFiltersHasBeenSet() const { return m_scanStatusFiltersHasBeenSet; }

    /**
     * <p>The list of scan status filters.</p>
     */
    inline void SetScanStatusFilters(const Aws::Vector<CisScanStatusFilter>& value) { m_scanStatusFiltersHasBeenSet = true; m_scanStatusFilters = value; }

    /**
     * <p>The list of scan status filters.</p>
     */
    inline void SetScanStatusFilters(Aws::Vector<CisScanStatusFilter>&& value) { m_scanStatusFiltersHasBeenSet = true; m_scanStatusFilters = std::move(value); }

    /**
     * <p>The list of scan status filters.</p>
     */
    inline ListCisScansFilterCriteria& WithScanStatusFilters(const Aws::Vector<CisScanStatusFilter>& value) { SetScanStatusFilters(value); return *this;}

    /**
     * <p>The list of scan status filters.</p>
     */
    inline ListCisScansFilterCriteria& WithScanStatusFilters(Aws::Vector<CisScanStatusFilter>&& value) { SetScanStatusFilters(std::move(value)); return *this;}

    /**
     * <p>The list of scan status filters.</p>
     */
    inline ListCisScansFilterCriteria& AddScanStatusFilters(const CisScanStatusFilter& value) { m_scanStatusFiltersHasBeenSet = true; m_scanStatusFilters.push_back(value); return *this; }

    /**
     * <p>The list of scan status filters.</p>
     */
    inline ListCisScansFilterCriteria& AddScanStatusFilters(CisScanStatusFilter&& value) { m_scanStatusFiltersHasBeenSet = true; m_scanStatusFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of scheduled by filters.</p>
     */
    inline const Aws::Vector<CisStringFilter>& GetScheduledByFilters() const{ return m_scheduledByFilters; }

    /**
     * <p>The list of scheduled by filters.</p>
     */
    inline bool ScheduledByFiltersHasBeenSet() const { return m_scheduledByFiltersHasBeenSet; }

    /**
     * <p>The list of scheduled by filters.</p>
     */
    inline void SetScheduledByFilters(const Aws::Vector<CisStringFilter>& value) { m_scheduledByFiltersHasBeenSet = true; m_scheduledByFilters = value; }

    /**
     * <p>The list of scheduled by filters.</p>
     */
    inline void SetScheduledByFilters(Aws::Vector<CisStringFilter>&& value) { m_scheduledByFiltersHasBeenSet = true; m_scheduledByFilters = std::move(value); }

    /**
     * <p>The list of scheduled by filters.</p>
     */
    inline ListCisScansFilterCriteria& WithScheduledByFilters(const Aws::Vector<CisStringFilter>& value) { SetScheduledByFilters(value); return *this;}

    /**
     * <p>The list of scheduled by filters.</p>
     */
    inline ListCisScansFilterCriteria& WithScheduledByFilters(Aws::Vector<CisStringFilter>&& value) { SetScheduledByFilters(std::move(value)); return *this;}

    /**
     * <p>The list of scheduled by filters.</p>
     */
    inline ListCisScansFilterCriteria& AddScheduledByFilters(const CisStringFilter& value) { m_scheduledByFiltersHasBeenSet = true; m_scheduledByFilters.push_back(value); return *this; }

    /**
     * <p>The list of scheduled by filters.</p>
     */
    inline ListCisScansFilterCriteria& AddScheduledByFilters(CisStringFilter&& value) { m_scheduledByFiltersHasBeenSet = true; m_scheduledByFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of target account ID filters.</p>
     */
    inline const Aws::Vector<CisStringFilter>& GetTargetAccountIdFilters() const{ return m_targetAccountIdFilters; }

    /**
     * <p>The list of target account ID filters.</p>
     */
    inline bool TargetAccountIdFiltersHasBeenSet() const { return m_targetAccountIdFiltersHasBeenSet; }

    /**
     * <p>The list of target account ID filters.</p>
     */
    inline void SetTargetAccountIdFilters(const Aws::Vector<CisStringFilter>& value) { m_targetAccountIdFiltersHasBeenSet = true; m_targetAccountIdFilters = value; }

    /**
     * <p>The list of target account ID filters.</p>
     */
    inline void SetTargetAccountIdFilters(Aws::Vector<CisStringFilter>&& value) { m_targetAccountIdFiltersHasBeenSet = true; m_targetAccountIdFilters = std::move(value); }

    /**
     * <p>The list of target account ID filters.</p>
     */
    inline ListCisScansFilterCriteria& WithTargetAccountIdFilters(const Aws::Vector<CisStringFilter>& value) { SetTargetAccountIdFilters(value); return *this;}

    /**
     * <p>The list of target account ID filters.</p>
     */
    inline ListCisScansFilterCriteria& WithTargetAccountIdFilters(Aws::Vector<CisStringFilter>&& value) { SetTargetAccountIdFilters(std::move(value)); return *this;}

    /**
     * <p>The list of target account ID filters.</p>
     */
    inline ListCisScansFilterCriteria& AddTargetAccountIdFilters(const CisStringFilter& value) { m_targetAccountIdFiltersHasBeenSet = true; m_targetAccountIdFilters.push_back(value); return *this; }

    /**
     * <p>The list of target account ID filters.</p>
     */
    inline ListCisScansFilterCriteria& AddTargetAccountIdFilters(CisStringFilter&& value) { m_targetAccountIdFiltersHasBeenSet = true; m_targetAccountIdFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of target resource ID filters.</p>
     */
    inline const Aws::Vector<CisStringFilter>& GetTargetResourceIdFilters() const{ return m_targetResourceIdFilters; }

    /**
     * <p>The list of target resource ID filters.</p>
     */
    inline bool TargetResourceIdFiltersHasBeenSet() const { return m_targetResourceIdFiltersHasBeenSet; }

    /**
     * <p>The list of target resource ID filters.</p>
     */
    inline void SetTargetResourceIdFilters(const Aws::Vector<CisStringFilter>& value) { m_targetResourceIdFiltersHasBeenSet = true; m_targetResourceIdFilters = value; }

    /**
     * <p>The list of target resource ID filters.</p>
     */
    inline void SetTargetResourceIdFilters(Aws::Vector<CisStringFilter>&& value) { m_targetResourceIdFiltersHasBeenSet = true; m_targetResourceIdFilters = std::move(value); }

    /**
     * <p>The list of target resource ID filters.</p>
     */
    inline ListCisScansFilterCriteria& WithTargetResourceIdFilters(const Aws::Vector<CisStringFilter>& value) { SetTargetResourceIdFilters(value); return *this;}

    /**
     * <p>The list of target resource ID filters.</p>
     */
    inline ListCisScansFilterCriteria& WithTargetResourceIdFilters(Aws::Vector<CisStringFilter>&& value) { SetTargetResourceIdFilters(std::move(value)); return *this;}

    /**
     * <p>The list of target resource ID filters.</p>
     */
    inline ListCisScansFilterCriteria& AddTargetResourceIdFilters(const CisStringFilter& value) { m_targetResourceIdFiltersHasBeenSet = true; m_targetResourceIdFilters.push_back(value); return *this; }

    /**
     * <p>The list of target resource ID filters.</p>
     */
    inline ListCisScansFilterCriteria& AddTargetResourceIdFilters(CisStringFilter&& value) { m_targetResourceIdFiltersHasBeenSet = true; m_targetResourceIdFilters.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of target resource tag filters.</p>
     */
    inline const Aws::Vector<TagFilter>& GetTargetResourceTagFilters() const{ return m_targetResourceTagFilters; }

    /**
     * <p>The list of target resource tag filters.</p>
     */
    inline bool TargetResourceTagFiltersHasBeenSet() const { return m_targetResourceTagFiltersHasBeenSet; }

    /**
     * <p>The list of target resource tag filters.</p>
     */
    inline void SetTargetResourceTagFilters(const Aws::Vector<TagFilter>& value) { m_targetResourceTagFiltersHasBeenSet = true; m_targetResourceTagFilters = value; }

    /**
     * <p>The list of target resource tag filters.</p>
     */
    inline void SetTargetResourceTagFilters(Aws::Vector<TagFilter>&& value) { m_targetResourceTagFiltersHasBeenSet = true; m_targetResourceTagFilters = std::move(value); }

    /**
     * <p>The list of target resource tag filters.</p>
     */
    inline ListCisScansFilterCriteria& WithTargetResourceTagFilters(const Aws::Vector<TagFilter>& value) { SetTargetResourceTagFilters(value); return *this;}

    /**
     * <p>The list of target resource tag filters.</p>
     */
    inline ListCisScansFilterCriteria& WithTargetResourceTagFilters(Aws::Vector<TagFilter>&& value) { SetTargetResourceTagFilters(std::move(value)); return *this;}

    /**
     * <p>The list of target resource tag filters.</p>
     */
    inline ListCisScansFilterCriteria& AddTargetResourceTagFilters(const TagFilter& value) { m_targetResourceTagFiltersHasBeenSet = true; m_targetResourceTagFilters.push_back(value); return *this; }

    /**
     * <p>The list of target resource tag filters.</p>
     */
    inline ListCisScansFilterCriteria& AddTargetResourceTagFilters(TagFilter&& value) { m_targetResourceTagFiltersHasBeenSet = true; m_targetResourceTagFilters.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CisNumberFilter> m_failedChecksFilters;
    bool m_failedChecksFiltersHasBeenSet = false;

    Aws::Vector<CisStringFilter> m_scanArnFilters;
    bool m_scanArnFiltersHasBeenSet = false;

    Aws::Vector<CisDateFilter> m_scanAtFilters;
    bool m_scanAtFiltersHasBeenSet = false;

    Aws::Vector<CisStringFilter> m_scanConfigurationArnFilters;
    bool m_scanConfigurationArnFiltersHasBeenSet = false;

    Aws::Vector<CisStringFilter> m_scanNameFilters;
    bool m_scanNameFiltersHasBeenSet = false;

    Aws::Vector<CisScanStatusFilter> m_scanStatusFilters;
    bool m_scanStatusFiltersHasBeenSet = false;

    Aws::Vector<CisStringFilter> m_scheduledByFilters;
    bool m_scheduledByFiltersHasBeenSet = false;

    Aws::Vector<CisStringFilter> m_targetAccountIdFilters;
    bool m_targetAccountIdFiltersHasBeenSet = false;

    Aws::Vector<CisStringFilter> m_targetResourceIdFilters;
    bool m_targetResourceIdFiltersHasBeenSet = false;

    Aws::Vector<TagFilter> m_targetResourceTagFilters;
    bool m_targetResourceTagFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
