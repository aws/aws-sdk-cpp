/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/CisStringFilter.h>
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
   * <p>A list of CIS scan configurations filter criteria.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ListCisScanConfigurationsFilterCriteria">AWS
   * API Reference</a></p>
   */
  class ListCisScanConfigurationsFilterCriteria
  {
  public:
    AWS_INSPECTOR2_API ListCisScanConfigurationsFilterCriteria() = default;
    AWS_INSPECTOR2_API ListCisScanConfigurationsFilterCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API ListCisScanConfigurationsFilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    ListCisScanConfigurationsFilterCriteria& WithScanNameFilters(ScanNameFiltersT&& value) { SetScanNameFilters(std::forward<ScanNameFiltersT>(value)); return *this;}
    template<typename ScanNameFiltersT = CisStringFilter>
    ListCisScanConfigurationsFilterCriteria& AddScanNameFilters(ScanNameFiltersT&& value) { m_scanNameFiltersHasBeenSet = true; m_scanNameFilters.emplace_back(std::forward<ScanNameFiltersT>(value)); return *this; }
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
    ListCisScanConfigurationsFilterCriteria& WithTargetResourceTagFilters(TargetResourceTagFiltersT&& value) { SetTargetResourceTagFilters(std::forward<TargetResourceTagFiltersT>(value)); return *this;}
    template<typename TargetResourceTagFiltersT = TagFilter>
    ListCisScanConfigurationsFilterCriteria& AddTargetResourceTagFilters(TargetResourceTagFiltersT&& value) { m_targetResourceTagFiltersHasBeenSet = true; m_targetResourceTagFilters.emplace_back(std::forward<TargetResourceTagFiltersT>(value)); return *this; }
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
    ListCisScanConfigurationsFilterCriteria& WithScanConfigurationArnFilters(ScanConfigurationArnFiltersT&& value) { SetScanConfigurationArnFilters(std::forward<ScanConfigurationArnFiltersT>(value)); return *this;}
    template<typename ScanConfigurationArnFiltersT = CisStringFilter>
    ListCisScanConfigurationsFilterCriteria& AddScanConfigurationArnFilters(ScanConfigurationArnFiltersT&& value) { m_scanConfigurationArnFiltersHasBeenSet = true; m_scanConfigurationArnFilters.emplace_back(std::forward<ScanConfigurationArnFiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CisStringFilter> m_scanNameFilters;
    bool m_scanNameFiltersHasBeenSet = false;

    Aws::Vector<TagFilter> m_targetResourceTagFilters;
    bool m_targetResourceTagFiltersHasBeenSet = false;

    Aws::Vector<CisStringFilter> m_scanConfigurationArnFilters;
    bool m_scanConfigurationArnFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
