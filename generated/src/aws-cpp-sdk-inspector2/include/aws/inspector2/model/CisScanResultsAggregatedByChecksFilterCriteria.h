﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/CisStringFilter.h>
#include <aws/inspector2/model/CisNumberFilter.h>
#include <aws/inspector2/model/CisSecurityLevelFilter.h>
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
   * <p>The scan results aggregated by checks filter criteria.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CisScanResultsAggregatedByChecksFilterCriteria">AWS
   * API Reference</a></p>
   */
  class CisScanResultsAggregatedByChecksFilterCriteria
  {
  public:
    AWS_INSPECTOR2_API CisScanResultsAggregatedByChecksFilterCriteria();
    AWS_INSPECTOR2_API CisScanResultsAggregatedByChecksFilterCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CisScanResultsAggregatedByChecksFilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The criteria's account ID filters.</p>
     */
    inline const Aws::Vector<CisStringFilter>& GetAccountIdFilters() const{ return m_accountIdFilters; }
    inline bool AccountIdFiltersHasBeenSet() const { return m_accountIdFiltersHasBeenSet; }
    inline void SetAccountIdFilters(const Aws::Vector<CisStringFilter>& value) { m_accountIdFiltersHasBeenSet = true; m_accountIdFilters = value; }
    inline void SetAccountIdFilters(Aws::Vector<CisStringFilter>&& value) { m_accountIdFiltersHasBeenSet = true; m_accountIdFilters = std::move(value); }
    inline CisScanResultsAggregatedByChecksFilterCriteria& WithAccountIdFilters(const Aws::Vector<CisStringFilter>& value) { SetAccountIdFilters(value); return *this;}
    inline CisScanResultsAggregatedByChecksFilterCriteria& WithAccountIdFilters(Aws::Vector<CisStringFilter>&& value) { SetAccountIdFilters(std::move(value)); return *this;}
    inline CisScanResultsAggregatedByChecksFilterCriteria& AddAccountIdFilters(const CisStringFilter& value) { m_accountIdFiltersHasBeenSet = true; m_accountIdFilters.push_back(value); return *this; }
    inline CisScanResultsAggregatedByChecksFilterCriteria& AddAccountIdFilters(CisStringFilter&& value) { m_accountIdFiltersHasBeenSet = true; m_accountIdFilters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The criteria's check ID filters.</p>
     */
    inline const Aws::Vector<CisStringFilter>& GetCheckIdFilters() const{ return m_checkIdFilters; }
    inline bool CheckIdFiltersHasBeenSet() const { return m_checkIdFiltersHasBeenSet; }
    inline void SetCheckIdFilters(const Aws::Vector<CisStringFilter>& value) { m_checkIdFiltersHasBeenSet = true; m_checkIdFilters = value; }
    inline void SetCheckIdFilters(Aws::Vector<CisStringFilter>&& value) { m_checkIdFiltersHasBeenSet = true; m_checkIdFilters = std::move(value); }
    inline CisScanResultsAggregatedByChecksFilterCriteria& WithCheckIdFilters(const Aws::Vector<CisStringFilter>& value) { SetCheckIdFilters(value); return *this;}
    inline CisScanResultsAggregatedByChecksFilterCriteria& WithCheckIdFilters(Aws::Vector<CisStringFilter>&& value) { SetCheckIdFilters(std::move(value)); return *this;}
    inline CisScanResultsAggregatedByChecksFilterCriteria& AddCheckIdFilters(const CisStringFilter& value) { m_checkIdFiltersHasBeenSet = true; m_checkIdFilters.push_back(value); return *this; }
    inline CisScanResultsAggregatedByChecksFilterCriteria& AddCheckIdFilters(CisStringFilter&& value) { m_checkIdFiltersHasBeenSet = true; m_checkIdFilters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The criteria's failed resources filters.</p>
     */
    inline const Aws::Vector<CisNumberFilter>& GetFailedResourcesFilters() const{ return m_failedResourcesFilters; }
    inline bool FailedResourcesFiltersHasBeenSet() const { return m_failedResourcesFiltersHasBeenSet; }
    inline void SetFailedResourcesFilters(const Aws::Vector<CisNumberFilter>& value) { m_failedResourcesFiltersHasBeenSet = true; m_failedResourcesFilters = value; }
    inline void SetFailedResourcesFilters(Aws::Vector<CisNumberFilter>&& value) { m_failedResourcesFiltersHasBeenSet = true; m_failedResourcesFilters = std::move(value); }
    inline CisScanResultsAggregatedByChecksFilterCriteria& WithFailedResourcesFilters(const Aws::Vector<CisNumberFilter>& value) { SetFailedResourcesFilters(value); return *this;}
    inline CisScanResultsAggregatedByChecksFilterCriteria& WithFailedResourcesFilters(Aws::Vector<CisNumberFilter>&& value) { SetFailedResourcesFilters(std::move(value)); return *this;}
    inline CisScanResultsAggregatedByChecksFilterCriteria& AddFailedResourcesFilters(const CisNumberFilter& value) { m_failedResourcesFiltersHasBeenSet = true; m_failedResourcesFilters.push_back(value); return *this; }
    inline CisScanResultsAggregatedByChecksFilterCriteria& AddFailedResourcesFilters(CisNumberFilter&& value) { m_failedResourcesFiltersHasBeenSet = true; m_failedResourcesFilters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The criteria's platform filters.</p>
     */
    inline const Aws::Vector<CisStringFilter>& GetPlatformFilters() const{ return m_platformFilters; }
    inline bool PlatformFiltersHasBeenSet() const { return m_platformFiltersHasBeenSet; }
    inline void SetPlatformFilters(const Aws::Vector<CisStringFilter>& value) { m_platformFiltersHasBeenSet = true; m_platformFilters = value; }
    inline void SetPlatformFilters(Aws::Vector<CisStringFilter>&& value) { m_platformFiltersHasBeenSet = true; m_platformFilters = std::move(value); }
    inline CisScanResultsAggregatedByChecksFilterCriteria& WithPlatformFilters(const Aws::Vector<CisStringFilter>& value) { SetPlatformFilters(value); return *this;}
    inline CisScanResultsAggregatedByChecksFilterCriteria& WithPlatformFilters(Aws::Vector<CisStringFilter>&& value) { SetPlatformFilters(std::move(value)); return *this;}
    inline CisScanResultsAggregatedByChecksFilterCriteria& AddPlatformFilters(const CisStringFilter& value) { m_platformFiltersHasBeenSet = true; m_platformFilters.push_back(value); return *this; }
    inline CisScanResultsAggregatedByChecksFilterCriteria& AddPlatformFilters(CisStringFilter&& value) { m_platformFiltersHasBeenSet = true; m_platformFilters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The criteria's security level filters.</p>
     */
    inline const Aws::Vector<CisSecurityLevelFilter>& GetSecurityLevelFilters() const{ return m_securityLevelFilters; }
    inline bool SecurityLevelFiltersHasBeenSet() const { return m_securityLevelFiltersHasBeenSet; }
    inline void SetSecurityLevelFilters(const Aws::Vector<CisSecurityLevelFilter>& value) { m_securityLevelFiltersHasBeenSet = true; m_securityLevelFilters = value; }
    inline void SetSecurityLevelFilters(Aws::Vector<CisSecurityLevelFilter>&& value) { m_securityLevelFiltersHasBeenSet = true; m_securityLevelFilters = std::move(value); }
    inline CisScanResultsAggregatedByChecksFilterCriteria& WithSecurityLevelFilters(const Aws::Vector<CisSecurityLevelFilter>& value) { SetSecurityLevelFilters(value); return *this;}
    inline CisScanResultsAggregatedByChecksFilterCriteria& WithSecurityLevelFilters(Aws::Vector<CisSecurityLevelFilter>&& value) { SetSecurityLevelFilters(std::move(value)); return *this;}
    inline CisScanResultsAggregatedByChecksFilterCriteria& AddSecurityLevelFilters(const CisSecurityLevelFilter& value) { m_securityLevelFiltersHasBeenSet = true; m_securityLevelFilters.push_back(value); return *this; }
    inline CisScanResultsAggregatedByChecksFilterCriteria& AddSecurityLevelFilters(CisSecurityLevelFilter&& value) { m_securityLevelFiltersHasBeenSet = true; m_securityLevelFilters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The criteria's title filters.</p>
     */
    inline const Aws::Vector<CisStringFilter>& GetTitleFilters() const{ return m_titleFilters; }
    inline bool TitleFiltersHasBeenSet() const { return m_titleFiltersHasBeenSet; }
    inline void SetTitleFilters(const Aws::Vector<CisStringFilter>& value) { m_titleFiltersHasBeenSet = true; m_titleFilters = value; }
    inline void SetTitleFilters(Aws::Vector<CisStringFilter>&& value) { m_titleFiltersHasBeenSet = true; m_titleFilters = std::move(value); }
    inline CisScanResultsAggregatedByChecksFilterCriteria& WithTitleFilters(const Aws::Vector<CisStringFilter>& value) { SetTitleFilters(value); return *this;}
    inline CisScanResultsAggregatedByChecksFilterCriteria& WithTitleFilters(Aws::Vector<CisStringFilter>&& value) { SetTitleFilters(std::move(value)); return *this;}
    inline CisScanResultsAggregatedByChecksFilterCriteria& AddTitleFilters(const CisStringFilter& value) { m_titleFiltersHasBeenSet = true; m_titleFilters.push_back(value); return *this; }
    inline CisScanResultsAggregatedByChecksFilterCriteria& AddTitleFilters(CisStringFilter&& value) { m_titleFiltersHasBeenSet = true; m_titleFilters.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CisStringFilter> m_accountIdFilters;
    bool m_accountIdFiltersHasBeenSet = false;

    Aws::Vector<CisStringFilter> m_checkIdFilters;
    bool m_checkIdFiltersHasBeenSet = false;

    Aws::Vector<CisNumberFilter> m_failedResourcesFilters;
    bool m_failedResourcesFiltersHasBeenSet = false;

    Aws::Vector<CisStringFilter> m_platformFilters;
    bool m_platformFiltersHasBeenSet = false;

    Aws::Vector<CisSecurityLevelFilter> m_securityLevelFilters;
    bool m_securityLevelFiltersHasBeenSet = false;

    Aws::Vector<CisStringFilter> m_titleFilters;
    bool m_titleFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
