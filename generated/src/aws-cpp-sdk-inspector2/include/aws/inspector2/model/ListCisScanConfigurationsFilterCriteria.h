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
    AWS_INSPECTOR2_API ListCisScanConfigurationsFilterCriteria();
    AWS_INSPECTOR2_API ListCisScanConfigurationsFilterCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API ListCisScanConfigurationsFilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of scan configuration ARN filters.</p>
     */
    inline const Aws::Vector<CisStringFilter>& GetScanConfigurationArnFilters() const{ return m_scanConfigurationArnFilters; }
    inline bool ScanConfigurationArnFiltersHasBeenSet() const { return m_scanConfigurationArnFiltersHasBeenSet; }
    inline void SetScanConfigurationArnFilters(const Aws::Vector<CisStringFilter>& value) { m_scanConfigurationArnFiltersHasBeenSet = true; m_scanConfigurationArnFilters = value; }
    inline void SetScanConfigurationArnFilters(Aws::Vector<CisStringFilter>&& value) { m_scanConfigurationArnFiltersHasBeenSet = true; m_scanConfigurationArnFilters = std::move(value); }
    inline ListCisScanConfigurationsFilterCriteria& WithScanConfigurationArnFilters(const Aws::Vector<CisStringFilter>& value) { SetScanConfigurationArnFilters(value); return *this;}
    inline ListCisScanConfigurationsFilterCriteria& WithScanConfigurationArnFilters(Aws::Vector<CisStringFilter>&& value) { SetScanConfigurationArnFilters(std::move(value)); return *this;}
    inline ListCisScanConfigurationsFilterCriteria& AddScanConfigurationArnFilters(const CisStringFilter& value) { m_scanConfigurationArnFiltersHasBeenSet = true; m_scanConfigurationArnFilters.push_back(value); return *this; }
    inline ListCisScanConfigurationsFilterCriteria& AddScanConfigurationArnFilters(CisStringFilter&& value) { m_scanConfigurationArnFiltersHasBeenSet = true; m_scanConfigurationArnFilters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of scan name filters.</p>
     */
    inline const Aws::Vector<CisStringFilter>& GetScanNameFilters() const{ return m_scanNameFilters; }
    inline bool ScanNameFiltersHasBeenSet() const { return m_scanNameFiltersHasBeenSet; }
    inline void SetScanNameFilters(const Aws::Vector<CisStringFilter>& value) { m_scanNameFiltersHasBeenSet = true; m_scanNameFilters = value; }
    inline void SetScanNameFilters(Aws::Vector<CisStringFilter>&& value) { m_scanNameFiltersHasBeenSet = true; m_scanNameFilters = std::move(value); }
    inline ListCisScanConfigurationsFilterCriteria& WithScanNameFilters(const Aws::Vector<CisStringFilter>& value) { SetScanNameFilters(value); return *this;}
    inline ListCisScanConfigurationsFilterCriteria& WithScanNameFilters(Aws::Vector<CisStringFilter>&& value) { SetScanNameFilters(std::move(value)); return *this;}
    inline ListCisScanConfigurationsFilterCriteria& AddScanNameFilters(const CisStringFilter& value) { m_scanNameFiltersHasBeenSet = true; m_scanNameFilters.push_back(value); return *this; }
    inline ListCisScanConfigurationsFilterCriteria& AddScanNameFilters(CisStringFilter&& value) { m_scanNameFiltersHasBeenSet = true; m_scanNameFilters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of target resource tag filters.</p>
     */
    inline const Aws::Vector<TagFilter>& GetTargetResourceTagFilters() const{ return m_targetResourceTagFilters; }
    inline bool TargetResourceTagFiltersHasBeenSet() const { return m_targetResourceTagFiltersHasBeenSet; }
    inline void SetTargetResourceTagFilters(const Aws::Vector<TagFilter>& value) { m_targetResourceTagFiltersHasBeenSet = true; m_targetResourceTagFilters = value; }
    inline void SetTargetResourceTagFilters(Aws::Vector<TagFilter>&& value) { m_targetResourceTagFiltersHasBeenSet = true; m_targetResourceTagFilters = std::move(value); }
    inline ListCisScanConfigurationsFilterCriteria& WithTargetResourceTagFilters(const Aws::Vector<TagFilter>& value) { SetTargetResourceTagFilters(value); return *this;}
    inline ListCisScanConfigurationsFilterCriteria& WithTargetResourceTagFilters(Aws::Vector<TagFilter>&& value) { SetTargetResourceTagFilters(std::move(value)); return *this;}
    inline ListCisScanConfigurationsFilterCriteria& AddTargetResourceTagFilters(const TagFilter& value) { m_targetResourceTagFiltersHasBeenSet = true; m_targetResourceTagFilters.push_back(value); return *this; }
    inline ListCisScanConfigurationsFilterCriteria& AddTargetResourceTagFilters(TagFilter&& value) { m_targetResourceTagFiltersHasBeenSet = true; m_targetResourceTagFilters.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CisStringFilter> m_scanConfigurationArnFilters;
    bool m_scanConfigurationArnFiltersHasBeenSet = false;

    Aws::Vector<CisStringFilter> m_scanNameFilters;
    bool m_scanNameFiltersHasBeenSet = false;

    Aws::Vector<TagFilter> m_targetResourceTagFilters;
    bool m_targetResourceTagFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
