/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/CisFindingStatusFilter.h>
#include <aws/inspector2/model/CisStringFilter.h>
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
   * <p>The CIS scan result details filter criteria.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/CisScanResultDetailsFilterCriteria">AWS
   * API Reference</a></p>
   */
  class CisScanResultDetailsFilterCriteria
  {
  public:
    AWS_INSPECTOR2_API CisScanResultDetailsFilterCriteria() = default;
    AWS_INSPECTOR2_API CisScanResultDetailsFilterCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CisScanResultDetailsFilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The criteria's finding status filters.</p>
     */
    inline const Aws::Vector<CisFindingStatusFilter>& GetFindingStatusFilters() const { return m_findingStatusFilters; }
    inline bool FindingStatusFiltersHasBeenSet() const { return m_findingStatusFiltersHasBeenSet; }
    template<typename FindingStatusFiltersT = Aws::Vector<CisFindingStatusFilter>>
    void SetFindingStatusFilters(FindingStatusFiltersT&& value) { m_findingStatusFiltersHasBeenSet = true; m_findingStatusFilters = std::forward<FindingStatusFiltersT>(value); }
    template<typename FindingStatusFiltersT = Aws::Vector<CisFindingStatusFilter>>
    CisScanResultDetailsFilterCriteria& WithFindingStatusFilters(FindingStatusFiltersT&& value) { SetFindingStatusFilters(std::forward<FindingStatusFiltersT>(value)); return *this;}
    template<typename FindingStatusFiltersT = CisFindingStatusFilter>
    CisScanResultDetailsFilterCriteria& AddFindingStatusFilters(FindingStatusFiltersT&& value) { m_findingStatusFiltersHasBeenSet = true; m_findingStatusFilters.emplace_back(std::forward<FindingStatusFiltersT>(value)); return *this; }
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
    CisScanResultDetailsFilterCriteria& WithCheckIdFilters(CheckIdFiltersT&& value) { SetCheckIdFilters(std::forward<CheckIdFiltersT>(value)); return *this;}
    template<typename CheckIdFiltersT = CisStringFilter>
    CisScanResultDetailsFilterCriteria& AddCheckIdFilters(CheckIdFiltersT&& value) { m_checkIdFiltersHasBeenSet = true; m_checkIdFilters.emplace_back(std::forward<CheckIdFiltersT>(value)); return *this; }
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
    CisScanResultDetailsFilterCriteria& WithTitleFilters(TitleFiltersT&& value) { SetTitleFilters(std::forward<TitleFiltersT>(value)); return *this;}
    template<typename TitleFiltersT = CisStringFilter>
    CisScanResultDetailsFilterCriteria& AddTitleFilters(TitleFiltersT&& value) { m_titleFiltersHasBeenSet = true; m_titleFilters.emplace_back(std::forward<TitleFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The criteria's security level filters. . Security level refers to the
     * Benchmark levels that CIS assigns to a profile. </p>
     */
    inline const Aws::Vector<CisSecurityLevelFilter>& GetSecurityLevelFilters() const { return m_securityLevelFilters; }
    inline bool SecurityLevelFiltersHasBeenSet() const { return m_securityLevelFiltersHasBeenSet; }
    template<typename SecurityLevelFiltersT = Aws::Vector<CisSecurityLevelFilter>>
    void SetSecurityLevelFilters(SecurityLevelFiltersT&& value) { m_securityLevelFiltersHasBeenSet = true; m_securityLevelFilters = std::forward<SecurityLevelFiltersT>(value); }
    template<typename SecurityLevelFiltersT = Aws::Vector<CisSecurityLevelFilter>>
    CisScanResultDetailsFilterCriteria& WithSecurityLevelFilters(SecurityLevelFiltersT&& value) { SetSecurityLevelFilters(std::forward<SecurityLevelFiltersT>(value)); return *this;}
    template<typename SecurityLevelFiltersT = CisSecurityLevelFilter>
    CisScanResultDetailsFilterCriteria& AddSecurityLevelFilters(SecurityLevelFiltersT&& value) { m_securityLevelFiltersHasBeenSet = true; m_securityLevelFilters.emplace_back(std::forward<SecurityLevelFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The criteria's finding ARN filters.</p>
     */
    inline const Aws::Vector<CisStringFilter>& GetFindingArnFilters() const { return m_findingArnFilters; }
    inline bool FindingArnFiltersHasBeenSet() const { return m_findingArnFiltersHasBeenSet; }
    template<typename FindingArnFiltersT = Aws::Vector<CisStringFilter>>
    void SetFindingArnFilters(FindingArnFiltersT&& value) { m_findingArnFiltersHasBeenSet = true; m_findingArnFilters = std::forward<FindingArnFiltersT>(value); }
    template<typename FindingArnFiltersT = Aws::Vector<CisStringFilter>>
    CisScanResultDetailsFilterCriteria& WithFindingArnFilters(FindingArnFiltersT&& value) { SetFindingArnFilters(std::forward<FindingArnFiltersT>(value)); return *this;}
    template<typename FindingArnFiltersT = CisStringFilter>
    CisScanResultDetailsFilterCriteria& AddFindingArnFilters(FindingArnFiltersT&& value) { m_findingArnFiltersHasBeenSet = true; m_findingArnFilters.emplace_back(std::forward<FindingArnFiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CisFindingStatusFilter> m_findingStatusFilters;
    bool m_findingStatusFiltersHasBeenSet = false;

    Aws::Vector<CisStringFilter> m_checkIdFilters;
    bool m_checkIdFiltersHasBeenSet = false;

    Aws::Vector<CisStringFilter> m_titleFilters;
    bool m_titleFiltersHasBeenSet = false;

    Aws::Vector<CisSecurityLevelFilter> m_securityLevelFilters;
    bool m_securityLevelFiltersHasBeenSet = false;

    Aws::Vector<CisStringFilter> m_findingArnFilters;
    bool m_findingArnFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
