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
    AWS_COSTEXPLORER_API GetSavingsPlanPurchaseRecommendationDetailsResult();
    AWS_COSTEXPLORER_API GetSavingsPlanPurchaseRecommendationDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetSavingsPlanPurchaseRecommendationDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID that is associated with the Savings Plan recommendation.</p>
     */
    inline const Aws::String& GetRecommendationDetailId() const{ return m_recommendationDetailId; }

    /**
     * <p>The ID that is associated with the Savings Plan recommendation.</p>
     */
    inline void SetRecommendationDetailId(const Aws::String& value) { m_recommendationDetailId = value; }

    /**
     * <p>The ID that is associated with the Savings Plan recommendation.</p>
     */
    inline void SetRecommendationDetailId(Aws::String&& value) { m_recommendationDetailId = std::move(value); }

    /**
     * <p>The ID that is associated with the Savings Plan recommendation.</p>
     */
    inline void SetRecommendationDetailId(const char* value) { m_recommendationDetailId.assign(value); }

    /**
     * <p>The ID that is associated with the Savings Plan recommendation.</p>
     */
    inline GetSavingsPlanPurchaseRecommendationDetailsResult& WithRecommendationDetailId(const Aws::String& value) { SetRecommendationDetailId(value); return *this;}

    /**
     * <p>The ID that is associated with the Savings Plan recommendation.</p>
     */
    inline GetSavingsPlanPurchaseRecommendationDetailsResult& WithRecommendationDetailId(Aws::String&& value) { SetRecommendationDetailId(std::move(value)); return *this;}

    /**
     * <p>The ID that is associated with the Savings Plan recommendation.</p>
     */
    inline GetSavingsPlanPurchaseRecommendationDetailsResult& WithRecommendationDetailId(const char* value) { SetRecommendationDetailId(value); return *this;}


    /**
     * <p>Contains detailed information about a specific Savings Plan
     * recommendation.</p>
     */
    inline const RecommendationDetailData& GetRecommendationDetailData() const{ return m_recommendationDetailData; }

    /**
     * <p>Contains detailed information about a specific Savings Plan
     * recommendation.</p>
     */
    inline void SetRecommendationDetailData(const RecommendationDetailData& value) { m_recommendationDetailData = value; }

    /**
     * <p>Contains detailed information about a specific Savings Plan
     * recommendation.</p>
     */
    inline void SetRecommendationDetailData(RecommendationDetailData&& value) { m_recommendationDetailData = std::move(value); }

    /**
     * <p>Contains detailed information about a specific Savings Plan
     * recommendation.</p>
     */
    inline GetSavingsPlanPurchaseRecommendationDetailsResult& WithRecommendationDetailData(const RecommendationDetailData& value) { SetRecommendationDetailData(value); return *this;}

    /**
     * <p>Contains detailed information about a specific Savings Plan
     * recommendation.</p>
     */
    inline GetSavingsPlanPurchaseRecommendationDetailsResult& WithRecommendationDetailData(RecommendationDetailData&& value) { SetRecommendationDetailData(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSavingsPlanPurchaseRecommendationDetailsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSavingsPlanPurchaseRecommendationDetailsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSavingsPlanPurchaseRecommendationDetailsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_recommendationDetailId;

    RecommendationDetailData m_recommendationDetailData;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
