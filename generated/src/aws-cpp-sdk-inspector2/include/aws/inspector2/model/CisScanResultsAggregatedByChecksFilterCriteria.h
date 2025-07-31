/**
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
    AWS_INSPECTOR2_API CisScanResultsAggregatedByChecksFilterCriteria() = default;
    AWS_INSPECTOR2_API CisScanResultsAggregatedByChecksFilterCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CisScanResultsAggregatedByChecksFilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    CisScanResultsAggregatedByChecksFilterCriteria& WithAccountIdFilters(AccountIdFiltersT&& value) { SetAccountIdFilters(std::forward<AccountIdFiltersT>(value)); return *this;}
    template<typename AccountIdFiltersT = CisStringFilter>
    CisScanResultsAggregatedByChecksFilterCriteria& AddAccountIdFilters(AccountIdFiltersT&& value) { m_accountIdFiltersHasBeenSet = true; m_accountIdFilters.emplace_back(std::forward<AccountIdFiltersT>(value)); return *this; }
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
    CisScanResultsAggregatedByChecksFilterCriteria& WithCheckIdFilters(CheckIdFiltersT&& value) { SetCheckIdFilters(std::forward<CheckIdFiltersT>(value)); return *this;}
    template<typename CheckIdFiltersT = CisStringFilter>
    CisScanResultsAggregatedByChecksFilterCriteria& AddCheckIdFilters(CheckIdFiltersT&& value) { m_checkIdFiltersHasBeenSet = true; m_checkIdFilters.emplace_back(std::forward<CheckIdFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The criteria's title filters.</p>
     */
    inline const Aws::Vector<CisStringFilter>& GetTitleFilters() const { return m_titleFilters; }
    inline bool TitleFiltersHasBeenSet() const { return m_titleFiltersHasBeenSet; }
    template<typename TitleFiltersT = Aws::Vector<CisStringFilter>>
    void SetTitleFilters(TitleFiltersT&& value) { m_titleFiltersHasBeenSet = true; m_titleFilters = std::forward<TitleFiltersT>(value); }
    template<typename TitleFiltersT = Aws::Vector<CisStringFilter>>
    CisScanResultsAggregatedByChecksFilterCriteria& WithTitleFilters(TitleFiltersT&& value) { SetTitleFilters(std::forward<TitleFiltersT>(value)); return *this;}
    template<typename TitleFiltersT = CisStringFilter>
    CisScanResultsAggregatedByChecksFilterCriteria& AddTitleFilters(TitleFiltersT&& value) { m_titleFiltersHasBeenSet = true; m_titleFilters.emplace_back(std::forward<TitleFiltersT>(value)); return *this; }
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
    CisScanResultsAggregatedByChecksFilterCriteria& WithPlatformFilters(PlatformFiltersT&& value) { SetPlatformFilters(std::forward<PlatformFiltersT>(value)); return *this;}
    template<typename PlatformFiltersT = CisStringFilter>
    CisScanResultsAggregatedByChecksFilterCriteria& AddPlatformFilters(PlatformFiltersT&& value) { m_platformFiltersHasBeenSet = true; m_platformFilters.emplace_back(std::forward<PlatformFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The criteria's failed resources filters.</p>
     */
    inline const Aws::Vector<CisNumberFilter>& GetFailedResourcesFilters() const { return m_failedResourcesFilters; }
    inline bool FailedResourcesFiltersHasBeenSet() const { return m_failedResourcesFiltersHasBeenSet; }
    template<typename FailedResourcesFiltersT = Aws::Vector<CisNumberFilter>>
    void SetFailedResourcesFilters(FailedResourcesFiltersT&& value) { m_failedResourcesFiltersHasBeenSet = true; m_failedResourcesFilters = std::forward<FailedResourcesFiltersT>(value); }
    template<typename FailedResourcesFiltersT = Aws::Vector<CisNumberFilter>>
    CisScanResultsAggregatedByChecksFilterCriteria& WithFailedResourcesFilters(FailedResourcesFiltersT&& value) { SetFailedResourcesFilters(std::forward<FailedResourcesFiltersT>(value)); return *this;}
    template<typename FailedResourcesFiltersT = CisNumberFilter>
    CisScanResultsAggregatedByChecksFilterCriteria& AddFailedResourcesFilters(FailedResourcesFiltersT&& value) { m_failedResourcesFiltersHasBeenSet = true; m_failedResourcesFilters.emplace_back(std::forward<FailedResourcesFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The criteria's security level filters.</p>
     */
    inline const Aws::Vector<CisSecurityLevelFilter>& GetSecurityLevelFilters() const { return m_securityLevelFilters; }
    inline bool SecurityLevelFiltersHasBeenSet() const { return m_securityLevelFiltersHasBeenSet; }
    template<typename SecurityLevelFiltersT = Aws::Vector<CisSecurityLevelFilter>>
    void SetSecurityLevelFilters(SecurityLevelFiltersT&& value) { m_securityLevelFiltersHasBeenSet = true; m_securityLevelFilters = std::forward<SecurityLevelFiltersT>(value); }
    template<typename SecurityLevelFiltersT = Aws::Vector<CisSecurityLevelFilter>>
    CisScanResultsAggregatedByChecksFilterCriteria& WithSecurityLevelFilters(SecurityLevelFiltersT&& value) { SetSecurityLevelFilters(std::forward<SecurityLevelFiltersT>(value)); return *this;}
    template<typename SecurityLevelFiltersT = CisSecurityLevelFilter>
    CisScanResultsAggregatedByChecksFilterCriteria& AddSecurityLevelFilters(SecurityLevelFiltersT&& value) { m_securityLevelFiltersHasBeenSet = true; m_securityLevelFilters.emplace_back(std::forward<SecurityLevelFiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CisStringFilter> m_accountIdFilters;
    bool m_accountIdFiltersHasBeenSet = false;

    Aws::Vector<CisStringFilter> m_checkIdFilters;
    bool m_checkIdFiltersHasBeenSet = false;

    Aws::Vector<CisStringFilter> m_titleFilters;
    bool m_titleFiltersHasBeenSet = false;

    Aws::Vector<CisStringFilter> m_platformFilters;
    bool m_platformFiltersHasBeenSet = false;

    Aws::Vector<CisNumberFilter> m_failedResourcesFilters;
    bool m_failedResourcesFiltersHasBeenSet = false;

    Aws::Vector<CisSecurityLevelFilter> m_securityLevelFilters;
    bool m_securityLevelFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
