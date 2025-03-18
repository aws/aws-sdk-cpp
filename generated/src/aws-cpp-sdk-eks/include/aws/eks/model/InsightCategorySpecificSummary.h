/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/DeprecationDetail.h>
#include <aws/eks/model/AddonCompatibilityDetail.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>Summary information that relates to the category of the insight. Currently
   * only returned with certain insights having category
   * <code>UPGRADE_READINESS</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/InsightCategorySpecificSummary">AWS
   * API Reference</a></p>
   */
  class InsightCategorySpecificSummary
  {
  public:
    AWS_EKS_API InsightCategorySpecificSummary() = default;
    AWS_EKS_API InsightCategorySpecificSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API InsightCategorySpecificSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The summary information about deprecated resource usage for an insight check
     * in the <code>UPGRADE_READINESS</code> category.</p>
     */
    inline const Aws::Vector<DeprecationDetail>& GetDeprecationDetails() const { return m_deprecationDetails; }
    inline bool DeprecationDetailsHasBeenSet() const { return m_deprecationDetailsHasBeenSet; }
    template<typename DeprecationDetailsT = Aws::Vector<DeprecationDetail>>
    void SetDeprecationDetails(DeprecationDetailsT&& value) { m_deprecationDetailsHasBeenSet = true; m_deprecationDetails = std::forward<DeprecationDetailsT>(value); }
    template<typename DeprecationDetailsT = Aws::Vector<DeprecationDetail>>
    InsightCategorySpecificSummary& WithDeprecationDetails(DeprecationDetailsT&& value) { SetDeprecationDetails(std::forward<DeprecationDetailsT>(value)); return *this;}
    template<typename DeprecationDetailsT = DeprecationDetail>
    InsightCategorySpecificSummary& AddDeprecationDetails(DeprecationDetailsT&& value) { m_deprecationDetailsHasBeenSet = true; m_deprecationDetails.emplace_back(std::forward<DeprecationDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>AddonCompatibilityDetail</code> objects for Amazon EKS
     * add-ons.</p>
     */
    inline const Aws::Vector<AddonCompatibilityDetail>& GetAddonCompatibilityDetails() const { return m_addonCompatibilityDetails; }
    inline bool AddonCompatibilityDetailsHasBeenSet() const { return m_addonCompatibilityDetailsHasBeenSet; }
    template<typename AddonCompatibilityDetailsT = Aws::Vector<AddonCompatibilityDetail>>
    void SetAddonCompatibilityDetails(AddonCompatibilityDetailsT&& value) { m_addonCompatibilityDetailsHasBeenSet = true; m_addonCompatibilityDetails = std::forward<AddonCompatibilityDetailsT>(value); }
    template<typename AddonCompatibilityDetailsT = Aws::Vector<AddonCompatibilityDetail>>
    InsightCategorySpecificSummary& WithAddonCompatibilityDetails(AddonCompatibilityDetailsT&& value) { SetAddonCompatibilityDetails(std::forward<AddonCompatibilityDetailsT>(value)); return *this;}
    template<typename AddonCompatibilityDetailsT = AddonCompatibilityDetail>
    InsightCategorySpecificSummary& AddAddonCompatibilityDetails(AddonCompatibilityDetailsT&& value) { m_addonCompatibilityDetailsHasBeenSet = true; m_addonCompatibilityDetails.emplace_back(std::forward<AddonCompatibilityDetailsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<DeprecationDetail> m_deprecationDetails;
    bool m_deprecationDetailsHasBeenSet = false;

    Aws::Vector<AddonCompatibilityDetail> m_addonCompatibilityDetails;
    bool m_addonCompatibilityDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
