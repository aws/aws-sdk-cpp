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
    AWS_EKS_API InsightCategorySpecificSummary();
    AWS_EKS_API InsightCategorySpecificSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API InsightCategorySpecificSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The summary information about deprecated resource usage for an insight check
     * in the <code>UPGRADE_READINESS</code> category.</p>
     */
    inline const Aws::Vector<DeprecationDetail>& GetDeprecationDetails() const{ return m_deprecationDetails; }
    inline bool DeprecationDetailsHasBeenSet() const { return m_deprecationDetailsHasBeenSet; }
    inline void SetDeprecationDetails(const Aws::Vector<DeprecationDetail>& value) { m_deprecationDetailsHasBeenSet = true; m_deprecationDetails = value; }
    inline void SetDeprecationDetails(Aws::Vector<DeprecationDetail>&& value) { m_deprecationDetailsHasBeenSet = true; m_deprecationDetails = std::move(value); }
    inline InsightCategorySpecificSummary& WithDeprecationDetails(const Aws::Vector<DeprecationDetail>& value) { SetDeprecationDetails(value); return *this;}
    inline InsightCategorySpecificSummary& WithDeprecationDetails(Aws::Vector<DeprecationDetail>&& value) { SetDeprecationDetails(std::move(value)); return *this;}
    inline InsightCategorySpecificSummary& AddDeprecationDetails(const DeprecationDetail& value) { m_deprecationDetailsHasBeenSet = true; m_deprecationDetails.push_back(value); return *this; }
    inline InsightCategorySpecificSummary& AddDeprecationDetails(DeprecationDetail&& value) { m_deprecationDetailsHasBeenSet = true; m_deprecationDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of AddonCompatibilityDetail objects for Amazon EKS add-ons.</p>
     */
    inline const Aws::Vector<AddonCompatibilityDetail>& GetAddonCompatibilityDetails() const{ return m_addonCompatibilityDetails; }
    inline bool AddonCompatibilityDetailsHasBeenSet() const { return m_addonCompatibilityDetailsHasBeenSet; }
    inline void SetAddonCompatibilityDetails(const Aws::Vector<AddonCompatibilityDetail>& value) { m_addonCompatibilityDetailsHasBeenSet = true; m_addonCompatibilityDetails = value; }
    inline void SetAddonCompatibilityDetails(Aws::Vector<AddonCompatibilityDetail>&& value) { m_addonCompatibilityDetailsHasBeenSet = true; m_addonCompatibilityDetails = std::move(value); }
    inline InsightCategorySpecificSummary& WithAddonCompatibilityDetails(const Aws::Vector<AddonCompatibilityDetail>& value) { SetAddonCompatibilityDetails(value); return *this;}
    inline InsightCategorySpecificSummary& WithAddonCompatibilityDetails(Aws::Vector<AddonCompatibilityDetail>&& value) { SetAddonCompatibilityDetails(std::move(value)); return *this;}
    inline InsightCategorySpecificSummary& AddAddonCompatibilityDetails(const AddonCompatibilityDetail& value) { m_addonCompatibilityDetailsHasBeenSet = true; m_addonCompatibilityDetails.push_back(value); return *this; }
    inline InsightCategorySpecificSummary& AddAddonCompatibilityDetails(AddonCompatibilityDetail&& value) { m_addonCompatibilityDetailsHasBeenSet = true; m_addonCompatibilityDetails.push_back(std::move(value)); return *this; }
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
