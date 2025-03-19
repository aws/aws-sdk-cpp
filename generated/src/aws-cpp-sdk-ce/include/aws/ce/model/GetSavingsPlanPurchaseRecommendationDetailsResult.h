/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/RecommendationDetailData.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CostExplorer
{
namespace Model
{
  class GetSavingsPlanPurchaseRecommendationDetailsResult
  {
  public:
    AWS_COSTEXPLORER_API GetSavingsPlanPurchaseRecommendationDetailsResult() = default;
    AWS_COSTEXPLORER_API GetSavingsPlanPurchaseRecommendationDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetSavingsPlanPurchaseRecommendationDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID that is associated with the Savings Plan recommendation.</p>
     */
    inline const Aws::String& GetRecommendationDetailId() const { return m_recommendationDetailId; }
    template<typename RecommendationDetailIdT = Aws::String>
    void SetRecommendationDetailId(RecommendationDetailIdT&& value) { m_recommendationDetailIdHasBeenSet = true; m_recommendationDetailId = std::forward<RecommendationDetailIdT>(value); }
    template<typename RecommendationDetailIdT = Aws::String>
    GetSavingsPlanPurchaseRecommendationDetailsResult& WithRecommendationDetailId(RecommendationDetailIdT&& value) { SetRecommendationDetailId(std::forward<RecommendationDetailIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains detailed information about a specific Savings Plan
     * recommendation.</p>
     */
    inline const RecommendationDetailData& GetRecommendationDetailData() const { return m_recommendationDetailData; }
    template<typename RecommendationDetailDataT = RecommendationDetailData>
    void SetRecommendationDetailData(RecommendationDetailDataT&& value) { m_recommendationDetailDataHasBeenSet = true; m_recommendationDetailData = std::forward<RecommendationDetailDataT>(value); }
    template<typename RecommendationDetailDataT = RecommendationDetailData>
    GetSavingsPlanPurchaseRecommendationDetailsResult& WithRecommendationDetailData(RecommendationDetailDataT&& value) { SetRecommendationDetailData(std::forward<RecommendationDetailDataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSavingsPlanPurchaseRecommendationDetailsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_recommendationDetailId;
    bool m_recommendationDetailIdHasBeenSet = false;

    RecommendationDetailData m_recommendationDetailData;
    bool m_recommendationDetailDataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
