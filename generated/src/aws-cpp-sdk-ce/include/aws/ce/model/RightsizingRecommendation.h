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
    AWS_COSTEXPLORER_API RightsizingRecommendation();
    AWS_COSTEXPLORER_API RightsizingRecommendation(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API RightsizingRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account that this recommendation is for.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline RightsizingRecommendation& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline RightsizingRecommendation& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline RightsizingRecommendation& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Context regarding the current instance.</p>
     */
    inline const CurrentInstance& GetCurrentInstance() const{ return m_currentInstance; }
    inline bool CurrentInstanceHasBeenSet() const { return m_currentInstanceHasBeenSet; }
    inline void SetCurrentInstance(const CurrentInstance& value) { m_currentInstanceHasBeenSet = true; m_currentInstance = value; }
    inline void SetCurrentInstance(CurrentInstance&& value) { m_currentInstanceHasBeenSet = true; m_currentInstance = std::move(value); }
    inline RightsizingRecommendation& WithCurrentInstance(const CurrentInstance& value) { SetCurrentInstance(value); return *this;}
    inline RightsizingRecommendation& WithCurrentInstance(CurrentInstance&& value) { SetCurrentInstance(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A recommendation to either terminate or modify the resource.</p>
     */
    inline const RightsizingType& GetRightsizingType() const{ return m_rightsizingType; }
    inline bool RightsizingTypeHasBeenSet() const { return m_rightsizingTypeHasBeenSet; }
    inline void SetRightsizingType(const RightsizingType& value) { m_rightsizingTypeHasBeenSet = true; m_rightsizingType = value; }
    inline void SetRightsizingType(RightsizingType&& value) { m_rightsizingTypeHasBeenSet = true; m_rightsizingType = std::move(value); }
    inline RightsizingRecommendation& WithRightsizingType(const RightsizingType& value) { SetRightsizingType(value); return *this;}
    inline RightsizingRecommendation& WithRightsizingType(RightsizingType&& value) { SetRightsizingType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details for the modification recommendations. </p>
     */
    inline const ModifyRecommendationDetail& GetModifyRecommendationDetail() const{ return m_modifyRecommendationDetail; }
    inline bool ModifyRecommendationDetailHasBeenSet() const { return m_modifyRecommendationDetailHasBeenSet; }
    inline void SetModifyRecommendationDetail(const ModifyRecommendationDetail& value) { m_modifyRecommendationDetailHasBeenSet = true; m_modifyRecommendationDetail = value; }
    inline void SetModifyRecommendationDetail(ModifyRecommendationDetail&& value) { m_modifyRecommendationDetailHasBeenSet = true; m_modifyRecommendationDetail = std::move(value); }
    inline RightsizingRecommendation& WithModifyRecommendationDetail(const ModifyRecommendationDetail& value) { SetModifyRecommendationDetail(value); return *this;}
    inline RightsizingRecommendation& WithModifyRecommendationDetail(ModifyRecommendationDetail&& value) { SetModifyRecommendationDetail(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details for termination recommendations.</p>
     */
    inline const TerminateRecommendationDetail& GetTerminateRecommendationDetail() const{ return m_terminateRecommendationDetail; }
    inline bool TerminateRecommendationDetailHasBeenSet() const { return m_terminateRecommendationDetailHasBeenSet; }
    inline void SetTerminateRecommendationDetail(const TerminateRecommendationDetail& value) { m_terminateRecommendationDetailHasBeenSet = true; m_terminateRecommendationDetail = value; }
    inline void SetTerminateRecommendationDetail(TerminateRecommendationDetail&& value) { m_terminateRecommendationDetailHasBeenSet = true; m_terminateRecommendationDetail = std::move(value); }
    inline RightsizingRecommendation& WithTerminateRecommendationDetail(const TerminateRecommendationDetail& value) { SetTerminateRecommendationDetail(value); return *this;}
    inline RightsizingRecommendation& WithTerminateRecommendationDetail(TerminateRecommendationDetail&& value) { SetTerminateRecommendationDetail(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of possible reasons why the recommendation is generated, such as
     * under- or over-utilization of specific metrics (for example, CPU, Memory,
     * Network). </p>
     */
    inline const Aws::Vector<FindingReasonCode>& GetFindingReasonCodes() const{ return m_findingReasonCodes; }
    inline bool FindingReasonCodesHasBeenSet() const { return m_findingReasonCodesHasBeenSet; }
    inline void SetFindingReasonCodes(const Aws::Vector<FindingReasonCode>& value) { m_findingReasonCodesHasBeenSet = true; m_findingReasonCodes = value; }
    inline void SetFindingReasonCodes(Aws::Vector<FindingReasonCode>&& value) { m_findingReasonCodesHasBeenSet = true; m_findingReasonCodes = std::move(value); }
    inline RightsizingRecommendation& WithFindingReasonCodes(const Aws::Vector<FindingReasonCode>& value) { SetFindingReasonCodes(value); return *this;}
    inline RightsizingRecommendation& WithFindingReasonCodes(Aws::Vector<FindingReasonCode>&& value) { SetFindingReasonCodes(std::move(value)); return *this;}
    inline RightsizingRecommendation& AddFindingReasonCodes(const FindingReasonCode& value) { m_findingReasonCodesHasBeenSet = true; m_findingReasonCodes.push_back(value); return *this; }
    inline RightsizingRecommendation& AddFindingReasonCodes(FindingReasonCode&& value) { m_findingReasonCodesHasBeenSet = true; m_findingReasonCodes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    CurrentInstance m_currentInstance;
    bool m_currentInstanceHasBeenSet = false;

    RightsizingType m_rightsizingType;
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
