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
    AWS_COSTEXPLORER_API StartSavingsPlansPurchaseRecommendationGenerationResult();
    AWS_COSTEXPLORER_API StartSavingsPlansPurchaseRecommendationGenerationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API StartSavingsPlansPurchaseRecommendationGenerationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID for this specific recommendation.</p>
     */
    inline const Aws::String& GetRecommendationId() const{ return m_recommendationId; }
    inline void SetRecommendationId(const Aws::String& value) { m_recommendationId = value; }
    inline void SetRecommendationId(Aws::String&& value) { m_recommendationId = std::move(value); }
    inline void SetRecommendationId(const char* value) { m_recommendationId.assign(value); }
    inline StartSavingsPlansPurchaseRecommendationGenerationResult& WithRecommendationId(const Aws::String& value) { SetRecommendationId(value); return *this;}
    inline StartSavingsPlansPurchaseRecommendationGenerationResult& WithRecommendationId(Aws::String&& value) { SetRecommendationId(std::move(value)); return *this;}
    inline StartSavingsPlansPurchaseRecommendationGenerationResult& WithRecommendationId(const char* value) { SetRecommendationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time of the recommendation generation.</p>
     */
    inline const Aws::String& GetGenerationStartedTime() const{ return m_generationStartedTime; }
    inline void SetGenerationStartedTime(const Aws::String& value) { m_generationStartedTime = value; }
    inline void SetGenerationStartedTime(Aws::String&& value) { m_generationStartedTime = std::move(value); }
    inline void SetGenerationStartedTime(const char* value) { m_generationStartedTime.assign(value); }
    inline StartSavingsPlansPurchaseRecommendationGenerationResult& WithGenerationStartedTime(const Aws::String& value) { SetGenerationStartedTime(value); return *this;}
    inline StartSavingsPlansPurchaseRecommendationGenerationResult& WithGenerationStartedTime(Aws::String&& value) { SetGenerationStartedTime(std::move(value)); return *this;}
    inline StartSavingsPlansPurchaseRecommendationGenerationResult& WithGenerationStartedTime(const char* value) { SetGenerationStartedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated time for when the recommendation generation will complete.</p>
     */
    inline const Aws::String& GetEstimatedCompletionTime() const{ return m_estimatedCompletionTime; }
    inline void SetEstimatedCompletionTime(const Aws::String& value) { m_estimatedCompletionTime = value; }
    inline void SetEstimatedCompletionTime(Aws::String&& value) { m_estimatedCompletionTime = std::move(value); }
    inline void SetEstimatedCompletionTime(const char* value) { m_estimatedCompletionTime.assign(value); }
    inline StartSavingsPlansPurchaseRecommendationGenerationResult& WithEstimatedCompletionTime(const Aws::String& value) { SetEstimatedCompletionTime(value); return *this;}
    inline StartSavingsPlansPurchaseRecommendationGenerationResult& WithEstimatedCompletionTime(Aws::String&& value) { SetEstimatedCompletionTime(std::move(value)); return *this;}
    inline StartSavingsPlansPurchaseRecommendationGenerationResult& WithEstimatedCompletionTime(const char* value) { SetEstimatedCompletionTime(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartSavingsPlansPurchaseRecommendationGenerationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartSavingsPlansPurchaseRecommendationGenerationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartSavingsPlansPurchaseRecommendationGenerationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_recommendationId;

    Aws::String m_generationStartedTime;

    Aws::String m_estimatedCompletionTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
