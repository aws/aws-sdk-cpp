/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class StartSavingsPlansPurchaseRecommendationGenerationResult
  {
  public:
    AWS_COSTEXPLORER_API StartSavingsPlansPurchaseRecommendationGenerationResult() = default;
    AWS_COSTEXPLORER_API StartSavingsPlansPurchaseRecommendationGenerationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API StartSavingsPlansPurchaseRecommendationGenerationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID for this specific recommendation.</p>
     */
    inline const Aws::String& GetRecommendationId() const { return m_recommendationId; }
    template<typename RecommendationIdT = Aws::String>
    void SetRecommendationId(RecommendationIdT&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::forward<RecommendationIdT>(value); }
    template<typename RecommendationIdT = Aws::String>
    StartSavingsPlansPurchaseRecommendationGenerationResult& WithRecommendationId(RecommendationIdT&& value) { SetRecommendationId(std::forward<RecommendationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the recommendation generation.</p>
     */
    inline const Aws::String& GetGenerationStartedTime() const { return m_generationStartedTime; }
    template<typename GenerationStartedTimeT = Aws::String>
    void SetGenerationStartedTime(GenerationStartedTimeT&& value) { m_generationStartedTimeHasBeenSet = true; m_generationStartedTime = std::forward<GenerationStartedTimeT>(value); }
    template<typename GenerationStartedTimeT = Aws::String>
    StartSavingsPlansPurchaseRecommendationGenerationResult& WithGenerationStartedTime(GenerationStartedTimeT&& value) { SetGenerationStartedTime(std::forward<GenerationStartedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated time for when the recommendation generation will complete.</p>
     */
    inline const Aws::String& GetEstimatedCompletionTime() const { return m_estimatedCompletionTime; }
    template<typename EstimatedCompletionTimeT = Aws::String>
    void SetEstimatedCompletionTime(EstimatedCompletionTimeT&& value) { m_estimatedCompletionTimeHasBeenSet = true; m_estimatedCompletionTime = std::forward<EstimatedCompletionTimeT>(value); }
    template<typename EstimatedCompletionTimeT = Aws::String>
    StartSavingsPlansPurchaseRecommendationGenerationResult& WithEstimatedCompletionTime(EstimatedCompletionTimeT&& value) { SetEstimatedCompletionTime(std::forward<EstimatedCompletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartSavingsPlansPurchaseRecommendationGenerationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet = false;

    Aws::String m_generationStartedTime;
    bool m_generationStartedTimeHasBeenSet = false;

    Aws::String m_estimatedCompletionTime;
    bool m_estimatedCompletionTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
