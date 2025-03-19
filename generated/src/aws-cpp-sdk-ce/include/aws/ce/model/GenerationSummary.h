/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/GenerationStatus.h>
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
   * <p>The summary of the Savings Plans recommendation generation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/GenerationSummary">AWS
   * API Reference</a></p>
   */
  class GenerationSummary
  {
  public:
    AWS_COSTEXPLORER_API GenerationSummary() = default;
    AWS_COSTEXPLORER_API GenerationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API GenerationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the ID for this specific recommendation.</p>
     */
    inline const Aws::String& GetRecommendationId() const { return m_recommendationId; }
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }
    template<typename RecommendationIdT = Aws::String>
    void SetRecommendationId(RecommendationIdT&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::forward<RecommendationIdT>(value); }
    template<typename RecommendationIdT = Aws::String>
    GenerationSummary& WithRecommendationId(RecommendationIdT&& value) { SetRecommendationId(std::forward<RecommendationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the recommendation generation succeeded, is processing, or
     * failed.</p>
     */
    inline GenerationStatus GetGenerationStatus() const { return m_generationStatus; }
    inline bool GenerationStatusHasBeenSet() const { return m_generationStatusHasBeenSet; }
    inline void SetGenerationStatus(GenerationStatus value) { m_generationStatusHasBeenSet = true; m_generationStatus = value; }
    inline GenerationSummary& WithGenerationStatus(GenerationStatus value) { SetGenerationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the start time of the recommendation generation.</p>
     */
    inline const Aws::String& GetGenerationStartedTime() const { return m_generationStartedTime; }
    inline bool GenerationStartedTimeHasBeenSet() const { return m_generationStartedTimeHasBeenSet; }
    template<typename GenerationStartedTimeT = Aws::String>
    void SetGenerationStartedTime(GenerationStartedTimeT&& value) { m_generationStartedTimeHasBeenSet = true; m_generationStartedTime = std::forward<GenerationStartedTimeT>(value); }
    template<typename GenerationStartedTimeT = Aws::String>
    GenerationSummary& WithGenerationStartedTime(GenerationStartedTimeT&& value) { SetGenerationStartedTime(std::forward<GenerationStartedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the completion time of the recommendation generation.</p>
     */
    inline const Aws::String& GetGenerationCompletionTime() const { return m_generationCompletionTime; }
    inline bool GenerationCompletionTimeHasBeenSet() const { return m_generationCompletionTimeHasBeenSet; }
    template<typename GenerationCompletionTimeT = Aws::String>
    void SetGenerationCompletionTime(GenerationCompletionTimeT&& value) { m_generationCompletionTimeHasBeenSet = true; m_generationCompletionTime = std::forward<GenerationCompletionTimeT>(value); }
    template<typename GenerationCompletionTimeT = Aws::String>
    GenerationSummary& WithGenerationCompletionTime(GenerationCompletionTimeT&& value) { SetGenerationCompletionTime(std::forward<GenerationCompletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the estimated time for when the recommendation generation will
     * complete.</p>
     */
    inline const Aws::String& GetEstimatedCompletionTime() const { return m_estimatedCompletionTime; }
    inline bool EstimatedCompletionTimeHasBeenSet() const { return m_estimatedCompletionTimeHasBeenSet; }
    template<typename EstimatedCompletionTimeT = Aws::String>
    void SetEstimatedCompletionTime(EstimatedCompletionTimeT&& value) { m_estimatedCompletionTimeHasBeenSet = true; m_estimatedCompletionTime = std::forward<EstimatedCompletionTimeT>(value); }
    template<typename EstimatedCompletionTimeT = Aws::String>
    GenerationSummary& WithEstimatedCompletionTime(EstimatedCompletionTimeT&& value) { SetEstimatedCompletionTime(std::forward<EstimatedCompletionTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet = false;

    GenerationStatus m_generationStatus{GenerationStatus::NOT_SET};
    bool m_generationStatusHasBeenSet = false;

    Aws::String m_generationStartedTime;
    bool m_generationStartedTimeHasBeenSet = false;

    Aws::String m_generationCompletionTime;
    bool m_generationCompletionTimeHasBeenSet = false;

    Aws::String m_estimatedCompletionTime;
    bool m_estimatedCompletionTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
