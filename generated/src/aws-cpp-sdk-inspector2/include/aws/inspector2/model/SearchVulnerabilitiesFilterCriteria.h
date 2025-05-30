﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Details on the criteria used to define the filter for a vulnerability search.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/SearchVulnerabilitiesFilterCriteria">AWS
   * API Reference</a></p>
   */
  class SearchVulnerabilitiesFilterCriteria
  {
  public:
    AWS_INSPECTOR2_API SearchVulnerabilitiesFilterCriteria() = default;
    AWS_INSPECTOR2_API SearchVulnerabilitiesFilterCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API SearchVulnerabilitiesFilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IDs for specific vulnerabilities.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVulnerabilityIds() const { return m_vulnerabilityIds; }
    inline bool VulnerabilityIdsHasBeenSet() const { return m_vulnerabilityIdsHasBeenSet; }
    template<typename VulnerabilityIdsT = Aws::Vector<Aws::String>>
    void SetVulnerabilityIds(VulnerabilityIdsT&& value) { m_vulnerabilityIdsHasBeenSet = true; m_vulnerabilityIds = std::forward<VulnerabilityIdsT>(value); }
    template<typename VulnerabilityIdsT = Aws::Vector<Aws::String>>
    SearchVulnerabilitiesFilterCriteria& WithVulnerabilityIds(VulnerabilityIdsT&& value) { SetVulnerabilityIds(std::forward<VulnerabilityIdsT>(value)); return *this;}
    template<typename VulnerabilityIdsT = Aws::String>
    SearchVulnerabilitiesFilterCriteria& AddVulnerabilityIds(VulnerabilityIdsT&& value) { m_vulnerabilityIdsHasBeenSet = true; m_vulnerabilityIds.emplace_back(std::forward<VulnerabilityIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_vulnerabilityIds;
    bool m_vulnerabilityIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
