/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/CurrentInstance.h>
#include <aws/ce/model/RightsizingType.h>
#include <aws/ce/model/ModifyRecommendationDetail.h>
#include <aws/ce/model/TerminateRecommendationDetail.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/FindingReasonCode.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>Recommendations to rightsize resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/RightsizingRecommendation">AWS
   * API Reference</a></p>
   */
  class RightsizingRecommendation
  {
  public:
    AWS_COSTEXPLORER_API RightsizingRecommendation() = default;
    AWS_COSTEXPLORER_API RightsizingRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API RightsizingRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account that this recommendation is for.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    RightsizingRecommendation& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Context regarding the current instance.</p>
     */
    inline const CurrentInstance& GetCurrentInstance() const { return m_currentInstance; }
    inline bool CurrentInstanceHasBeenSet() const { return m_currentInstanceHasBeenSet; }
    template<typename CurrentInstanceT = CurrentInstance>
    void SetCurrentInstance(CurrentInstanceT&& value) { m_currentInstanceHasBeenSet = true; m_currentInstance = std::forward<CurrentInstanceT>(value); }
    template<typename CurrentInstanceT = CurrentInstance>
    RightsizingRecommendation& WithCurrentInstance(CurrentInstanceT&& value) { SetCurrentInstance(std::forward<CurrentInstanceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A recommendation to either terminate or modify the resource.</p>
     */
    inline RightsizingType GetRightsizingType() const { return m_rightsizingType; }
    inline bool RightsizingTypeHasBeenSet() const { return m_rightsizingTypeHasBeenSet; }
    inline void SetRightsizingType(RightsizingType value) { m_rightsizingTypeHasBeenSet = true; m_rightsizingType = value; }
    inline RightsizingRecommendation& WithRightsizingType(RightsizingType value) { SetRightsizingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details for the modification recommendations. </p>
     */
    inline const ModifyRecommendationDetail& GetModifyRecommendationDetail() const { return m_modifyRecommendationDetail; }
    inline bool ModifyRecommendationDetailHasBeenSet() const { return m_modifyRecommendationDetailHasBeenSet; }
    template<typename ModifyRecommendationDetailT = ModifyRecommendationDetail>
    void SetModifyRecommendationDetail(ModifyRecommendationDetailT&& value) { m_modifyRecommendationDetailHasBeenSet = true; m_modifyRecommendationDetail = std::forward<ModifyRecommendationDetailT>(value); }
    template<typename ModifyRecommendationDetailT = ModifyRecommendationDetail>
    RightsizingRecommendation& WithModifyRecommendationDetail(ModifyRecommendationDetailT&& value) { SetModifyRecommendationDetail(std::forward<ModifyRecommendationDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details for termination recommendations.</p>
     */
    inline const TerminateRecommendationDetail& GetTerminateRecommendationDetail() const { return m_terminateRecommendationDetail; }
    inline bool TerminateRecommendationDetailHasBeenSet() const { return m_terminateRecommendationDetailHasBeenSet; }
    template<typename TerminateRecommendationDetailT = TerminateRecommendationDetail>
    void SetTerminateRecommendationDetail(TerminateRecommendationDetailT&& value) { m_terminateRecommendationDetailHasBeenSet = true; m_terminateRecommendationDetail = std::forward<TerminateRecommendationDetailT>(value); }
    template<typename TerminateRecommendationDetailT = TerminateRecommendationDetail>
    RightsizingRecommendation& WithTerminateRecommendationDetail(TerminateRecommendationDetailT&& value) { SetTerminateRecommendationDetail(std::forward<TerminateRecommendationDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of possible reasons why the recommendation is generated, such as
     * under- or over-utilization of specific metrics (for example, CPU, Memory,
     * Network). </p>
     */
    inline const Aws::Vector<FindingReasonCode>& GetFindingReasonCodes() const { return m_findingReasonCodes; }
    inline bool FindingReasonCodesHasBeenSet() const { return m_findingReasonCodesHasBeenSet; }
    template<typename FindingReasonCodesT = Aws::Vector<FindingReasonCode>>
    void SetFindingReasonCodes(FindingReasonCodesT&& value) { m_findingReasonCodesHasBeenSet = true; m_findingReasonCodes = std::forward<FindingReasonCodesT>(value); }
    template<typename FindingReasonCodesT = Aws::Vector<FindingReasonCode>>
    RightsizingRecommendation& WithFindingReasonCodes(FindingReasonCodesT&& value) { SetFindingReasonCodes(std::forward<FindingReasonCodesT>(value)); return *this;}
    inline RightsizingRecommendation& AddFindingReasonCodes(FindingReasonCode value) { m_findingReasonCodesHasBeenSet = true; m_findingReasonCodes.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    CurrentInstance m_currentInstance;
    bool m_currentInstanceHasBeenSet = false;

    RightsizingType m_rightsizingType{RightsizingType::NOT_SET};
    bool m_rightsizingTypeHasBeenSet = false;

    ModifyRecommendationDetail m_modifyRecommendationDetail;
    bool m_modifyRecommendationDetailHasBeenSet = false;

    TerminateRecommendationDetail m_terminateRecommendationDetail;
    bool m_terminateRecommendationDetailHasBeenSet = false;

    Aws::Vector<FindingReasonCode> m_findingReasonCodes;
    bool m_findingReasonCodesHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
