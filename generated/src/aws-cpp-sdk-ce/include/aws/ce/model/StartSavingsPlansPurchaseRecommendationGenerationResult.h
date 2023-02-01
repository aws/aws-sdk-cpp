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


    /**
     * <p>The ID for this specific recommendation.</p>
     */
    inline const Aws::String& GetRecommendationId() const{ return m_recommendationId; }

    /**
     * <p>The ID for this specific recommendation.</p>
     */
    inline void SetRecommendationId(const Aws::String& value) { m_recommendationId = value; }

    /**
     * <p>The ID for this specific recommendation.</p>
     */
    inline void SetRecommendationId(Aws::String&& value) { m_recommendationId = std::move(value); }

    /**
     * <p>The ID for this specific recommendation.</p>
     */
    inline void SetRecommendationId(const char* value) { m_recommendationId.assign(value); }

    /**
     * <p>The ID for this specific recommendation.</p>
     */
    inline StartSavingsPlansPurchaseRecommendationGenerationResult& WithRecommendationId(const Aws::String& value) { SetRecommendationId(value); return *this;}

    /**
     * <p>The ID for this specific recommendation.</p>
     */
    inline StartSavingsPlansPurchaseRecommendationGenerationResult& WithRecommendationId(Aws::String&& value) { SetRecommendationId(std::move(value)); return *this;}

    /**
     * <p>The ID for this specific recommendation.</p>
     */
    inline StartSavingsPlansPurchaseRecommendationGenerationResult& WithRecommendationId(const char* value) { SetRecommendationId(value); return *this;}


    /**
     * <p>The start time of the recommendation generation.</p>
     */
    inline const Aws::String& GetGenerationStartedTime() const{ return m_generationStartedTime; }

    /**
     * <p>The start time of the recommendation generation.</p>
     */
    inline void SetGenerationStartedTime(const Aws::String& value) { m_generationStartedTime = value; }

    /**
     * <p>The start time of the recommendation generation.</p>
     */
    inline void SetGenerationStartedTime(Aws::String&& value) { m_generationStartedTime = std::move(value); }

    /**
     * <p>The start time of the recommendation generation.</p>
     */
    inline void SetGenerationStartedTime(const char* value) { m_generationStartedTime.assign(value); }

    /**
     * <p>The start time of the recommendation generation.</p>
     */
    inline StartSavingsPlansPurchaseRecommendationGenerationResult& WithGenerationStartedTime(const Aws::String& value) { SetGenerationStartedTime(value); return *this;}

    /**
     * <p>The start time of the recommendation generation.</p>
     */
    inline StartSavingsPlansPurchaseRecommendationGenerationResult& WithGenerationStartedTime(Aws::String&& value) { SetGenerationStartedTime(std::move(value)); return *this;}

    /**
     * <p>The start time of the recommendation generation.</p>
     */
    inline StartSavingsPlansPurchaseRecommendationGenerationResult& WithGenerationStartedTime(const char* value) { SetGenerationStartedTime(value); return *this;}


    /**
     * <p>The estimated time for when the recommendation generation will complete.</p>
     */
    inline const Aws::String& GetEstimatedCompletionTime() const{ return m_estimatedCompletionTime; }

    /**
     * <p>The estimated time for when the recommendation generation will complete.</p>
     */
    inline void SetEstimatedCompletionTime(const Aws::String& value) { m_estimatedCompletionTime = value; }

    /**
     * <p>The estimated time for when the recommendation generation will complete.</p>
     */
    inline void SetEstimatedCompletionTime(Aws::String&& value) { m_estimatedCompletionTime = std::move(value); }

    /**
     * <p>The estimated time for when the recommendation generation will complete.</p>
     */
    inline void SetEstimatedCompletionTime(const char* value) { m_estimatedCompletionTime.assign(value); }

    /**
     * <p>The estimated time for when the recommendation generation will complete.</p>
     */
    inline StartSavingsPlansPurchaseRecommendationGenerationResult& WithEstimatedCompletionTime(const Aws::String& value) { SetEstimatedCompletionTime(value); return *this;}

    /**
     * <p>The estimated time for when the recommendation generation will complete.</p>
     */
    inline StartSavingsPlansPurchaseRecommendationGenerationResult& WithEstimatedCompletionTime(Aws::String&& value) { SetEstimatedCompletionTime(std::move(value)); return *this;}

    /**
     * <p>The estimated time for when the recommendation generation will complete.</p>
     */
    inline StartSavingsPlansPurchaseRecommendationGenerationResult& WithEstimatedCompletionTime(const char* value) { SetEstimatedCompletionTime(value); return *this;}

  private:

    Aws::String m_recommendationId;

    Aws::String m_generationStartedTime;

    Aws::String m_estimatedCompletionTime;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
