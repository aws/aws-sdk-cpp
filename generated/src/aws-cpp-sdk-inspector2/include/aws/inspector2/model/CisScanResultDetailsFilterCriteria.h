﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector2/model/CisStringFilter.h>
#include <aws/inspector2/model/CisFindingStatusFilter.h>
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
    AWS_INSPECTOR2_API CisScanResultDetailsFilterCriteria();
    AWS_INSPECTOR2_API CisScanResultDetailsFilterCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API CisScanResultDetailsFilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The criteria's check ID filters.</p>
     */
    inline const Aws::Vector<CisStringFilter>& GetCheckIdFilters() const{ return m_checkIdFilters; }
    inline bool CheckIdFiltersHasBeenSet() const { return m_checkIdFiltersHasBeenSet; }
    inline void SetCheckIdFilters(const Aws::Vector<CisStringFilter>& value) { m_checkIdFiltersHasBeenSet = true; m_checkIdFilters = value; }
    inline void SetCheckIdFilters(Aws::Vector<CisStringFilter>&& value) { m_checkIdFiltersHasBeenSet = true; m_checkIdFilters = std::move(value); }
    inline CisScanResultDetailsFilterCriteria& WithCheckIdFilters(const Aws::Vector<CisStringFilter>& value) { SetCheckIdFilters(value); return *this;}
    inline CisScanResultDetailsFilterCriteria& WithCheckIdFilters(Aws::Vector<CisStringFilter>&& value) { SetCheckIdFilters(std::move(value)); return *this;}
    inline CisScanResultDetailsFilterCriteria& AddCheckIdFilters(const CisStringFilter& value) { m_checkIdFiltersHasBeenSet = true; m_checkIdFilters.push_back(value); return *this; }
    inline CisScanResultDetailsFilterCriteria& AddCheckIdFilters(CisStringFilter&& value) { m_checkIdFiltersHasBeenSet = true; m_checkIdFilters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The criteria's finding ARN filters.</p>
     */
    inline const Aws::Vector<CisStringFilter>& GetFindingArnFilters() const{ return m_findingArnFilters; }
    inline bool FindingArnFiltersHasBeenSet() const { return m_findingArnFiltersHasBeenSet; }
    inline void SetFindingArnFilters(const Aws::Vector<CisStringFilter>& value) { m_findingArnFiltersHasBeenSet = true; m_findingArnFilters = value; }
    inline void SetFindingArnFilters(Aws::Vector<CisStringFilter>&& value) { m_findingArnFiltersHasBeenSet = true; m_findingArnFilters = std::move(value); }
    inline CisScanResultDetailsFilterCriteria& WithFindingArnFilters(const Aws::Vector<CisStringFilter>& value) { SetFindingArnFilters(value); return *this;}
    inline CisScanResultDetailsFilterCriteria& WithFindingArnFilters(Aws::Vector<CisStringFilter>&& value) { SetFindingArnFilters(std::move(value)); return *this;}
    inline CisScanResultDetailsFilterCriteria& AddFindingArnFilters(const CisStringFilter& value) { m_findingArnFiltersHasBeenSet = true; m_findingArnFilters.push_back(value); return *this; }
    inline CisScanResultDetailsFilterCriteria& AddFindingArnFilters(CisStringFilter&& value) { m_findingArnFiltersHasBeenSet = true; m_findingArnFilters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The criteria's finding status filters.</p>
     */
    inline const Aws::Vector<CisFindingStatusFilter>& GetFindingStatusFilters() const{ return m_findingStatusFilters; }
    inline bool FindingStatusFiltersHasBeenSet() const { return m_findingStatusFiltersHasBeenSet; }
    inline void SetFindingStatusFilters(const Aws::Vector<CisFindingStatusFilter>& value) { m_findingStatusFiltersHasBeenSet = true; m_findingStatusFilters = value; }
    inline void SetFindingStatusFilters(Aws::Vector<CisFindingStatusFilter>&& value) { m_findingStatusFiltersHasBeenSet = true; m_findingStatusFilters = std::move(value); }
    inline CisScanResultDetailsFilterCriteria& WithFindingStatusFilters(const Aws::Vector<CisFindingStatusFilter>& value) { SetFindingStatusFilters(value); return *this;}
    inline CisScanResultDetailsFilterCriteria& WithFindingStatusFilters(Aws::Vector<CisFindingStatusFilter>&& value) { SetFindingStatusFilters(std::move(value)); return *this;}
    inline CisScanResultDetailsFilterCriteria& AddFindingStatusFilters(const CisFindingStatusFilter& value) { m_findingStatusFiltersHasBeenSet = true; m_findingStatusFilters.push_back(value); return *this; }
    inline CisScanResultDetailsFilterCriteria& AddFindingStatusFilters(CisFindingStatusFilter&& value) { m_findingStatusFiltersHasBeenSet = true; m_findingStatusFilters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The criteria's security level filters. . Security level refers to the
     * Benchmark levels that CIS assigns to a profile. </p>
     */
    inline const Aws::Vector<CisSecurityLevelFilter>& GetSecurityLevelFilters() const{ return m_securityLevelFilters; }
    inline bool SecurityLevelFiltersHasBeenSet() const { return m_securityLevelFiltersHasBeenSet; }
    inline void SetSecurityLevelFilters(const Aws::Vector<CisSecurityLevelFilter>& value) { m_securityLevelFiltersHasBeenSet = true; m_securityLevelFilters = value; }
    inline void SetSecurityLevelFilters(Aws::Vector<CisSecurityLevelFilter>&& value) { m_securityLevelFiltersHasBeenSet = true; m_securityLevelFilters = std::move(value); }
    inline CisScanResultDetailsFilterCriteria& WithSecurityLevelFilters(const Aws::Vector<CisSecurityLevelFilter>& value) { SetSecurityLevelFilters(value); return *this;}
    inline CisScanResultDetailsFilterCriteria& WithSecurityLevelFilters(Aws::Vector<CisSecurityLevelFilter>&& value) { SetSecurityLevelFilters(std::move(value)); return *this;}
    inline CisScanResultDetailsFilterCriteria& AddSecurityLevelFilters(const CisSecurityLevelFilter& value) { m_securityLevelFiltersHasBeenSet = true; m_securityLevelFilters.push_back(value); return *this; }
    inline CisScanResultDetailsFilterCriteria& AddSecurityLevelFilters(CisSecurityLevelFilter&& value) { m_securityLevelFiltersHasBeenSet = true; m_securityLevelFilters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The criteria's title filters.</p>
     */
    inline const Aws::Vector<CisStringFilter>& GetTitleFilters() const{ return m_titleFilters; }
    inline bool TitleFiltersHasBeenSet() const { return m_titleFiltersHasBeenSet; }
    inline void SetTitleFilters(const Aws::Vector<CisStringFilter>& value) { m_titleFiltersHasBeenSet = true; m_titleFilters = value; }
    inline void SetTitleFilters(Aws::Vector<CisStringFilter>&& value) { m_titleFiltersHasBeenSet = true; m_titleFilters = std::move(value); }
    inline CisScanResultDetailsFilterCriteria& WithTitleFilters(const Aws::Vector<CisStringFilter>& value) { SetTitleFilters(value); return *this;}
    inline CisScanResultDetailsFilterCriteria& WithTitleFilters(Aws::Vector<CisStringFilter>&& value) { SetTitleFilters(std::move(value)); return *this;}
    inline CisScanResultDetailsFilterCriteria& AddTitleFilters(const CisStringFilter& value) { m_titleFiltersHasBeenSet = true; m_titleFilters.push_back(value); return *this; }
    inline CisScanResultDetailsFilterCriteria& AddTitleFilters(CisStringFilter&& value) { m_titleFiltersHasBeenSet = true; m_titleFilters.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CisStringFilter> m_checkIdFilters;
    bool m_checkIdFiltersHasBeenSet = false;

    Aws::Vector<CisStringFilter> m_findingArnFilters;
    bool m_findingArnFiltersHasBeenSet = false;

    Aws::Vector<CisFindingStatusFilter> m_findingStatusFilters;
    bool m_findingStatusFiltersHasBeenSet = false;

    Aws::Vector<CisSecurityLevelFilter> m_securityLevelFilters;
    bool m_securityLevelFiltersHasBeenSet = false;

    Aws::Vector<CisStringFilter> m_titleFilters;
    bool m_titleFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
