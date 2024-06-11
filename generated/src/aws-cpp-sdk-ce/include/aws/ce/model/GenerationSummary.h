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
    AWS_COSTEXPLORER_API GenerationSummary();
    AWS_COSTEXPLORER_API GenerationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API GenerationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the ID for this specific recommendation.</p>
     */
    inline const Aws::String& GetRecommendationId() const{ return m_recommendationId; }
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }
    inline void SetRecommendationId(const Aws::String& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = value; }
    inline void SetRecommendationId(Aws::String&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::move(value); }
    inline void SetRecommendationId(const char* value) { m_recommendationIdHasBeenSet = true; m_recommendationId.assign(value); }
    inline GenerationSummary& WithRecommendationId(const Aws::String& value) { SetRecommendationId(value); return *this;}
    inline GenerationSummary& WithRecommendationId(Aws::String&& value) { SetRecommendationId(std::move(value)); return *this;}
    inline GenerationSummary& WithRecommendationId(const char* value) { SetRecommendationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the recommendation generation succeeded, is processing, or
     * failed.</p>
     */
    inline const GenerationStatus& GetGenerationStatus() const{ return m_generationStatus; }
    inline bool GenerationStatusHasBeenSet() const { return m_generationStatusHasBeenSet; }
    inline void SetGenerationStatus(const GenerationStatus& value) { m_generationStatusHasBeenSet = true; m_generationStatus = value; }
    inline void SetGenerationStatus(GenerationStatus&& value) { m_generationStatusHasBeenSet = true; m_generationStatus = std::move(value); }
    inline GenerationSummary& WithGenerationStatus(const GenerationStatus& value) { SetGenerationStatus(value); return *this;}
    inline GenerationSummary& WithGenerationStatus(GenerationStatus&& value) { SetGenerationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the start time of the recommendation generation.</p>
     */
    inline const Aws::String& GetGenerationStartedTime() const{ return m_generationStartedTime; }
    inline bool GenerationStartedTimeHasBeenSet() const { return m_generationStartedTimeHasBeenSet; }
    inline void SetGenerationStartedTime(const Aws::String& value) { m_generationStartedTimeHasBeenSet = true; m_generationStartedTime = value; }
    inline void SetGenerationStartedTime(Aws::String&& value) { m_generationStartedTimeHasBeenSet = true; m_generationStartedTime = std::move(value); }
    inline void SetGenerationStartedTime(const char* value) { m_generationStartedTimeHasBeenSet = true; m_generationStartedTime.assign(value); }
    inline GenerationSummary& WithGenerationStartedTime(const Aws::String& value) { SetGenerationStartedTime(value); return *this;}
    inline GenerationSummary& WithGenerationStartedTime(Aws::String&& value) { SetGenerationStartedTime(std::move(value)); return *this;}
    inline GenerationSummary& WithGenerationStartedTime(const char* value) { SetGenerationStartedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the completion time of the recommendation generation.</p>
     */
    inline const Aws::String& GetGenerationCompletionTime() const{ return m_generationCompletionTime; }
    inline bool GenerationCompletionTimeHasBeenSet() const { return m_generationCompletionTimeHasBeenSet; }
    inline void SetGenerationCompletionTime(const Aws::String& value) { m_generationCompletionTimeHasBeenSet = true; m_generationCompletionTime = value; }
    inline void SetGenerationCompletionTime(Aws::String&& value) { m_generationCompletionTimeHasBeenSet = true; m_generationCompletionTime = std::move(value); }
    inline void SetGenerationCompletionTime(const char* value) { m_generationCompletionTimeHasBeenSet = true; m_generationCompletionTime.assign(value); }
    inline GenerationSummary& WithGenerationCompletionTime(const Aws::String& value) { SetGenerationCompletionTime(value); return *this;}
    inline GenerationSummary& WithGenerationCompletionTime(Aws::String&& value) { SetGenerationCompletionTime(std::move(value)); return *this;}
    inline GenerationSummary& WithGenerationCompletionTime(const char* value) { SetGenerationCompletionTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the estimated time for when the recommendation generation will
     * complete.</p>
     */
    inline const Aws::String& GetEstimatedCompletionTime() const{ return m_estimatedCompletionTime; }
    inline bool EstimatedCompletionTimeHasBeenSet() const { return m_estimatedCompletionTimeHasBeenSet; }
    inline void SetEstimatedCompletionTime(const Aws::String& value) { m_estimatedCompletionTimeHasBeenSet = true; m_estimatedCompletionTime = value; }
    inline void SetEstimatedCompletionTime(Aws::String&& value) { m_estimatedCompletionTimeHasBeenSet = true; m_estimatedCompletionTime = std::move(value); }
    inline void SetEstimatedCompletionTime(const char* value) { m_estimatedCompletionTimeHasBeenSet = true; m_estimatedCompletionTime.assign(value); }
    inline GenerationSummary& WithEstimatedCompletionTime(const Aws::String& value) { SetEstimatedCompletionTime(value); return *this;}
    inline GenerationSummary& WithEstimatedCompletionTime(Aws::String&& value) { SetEstimatedCompletionTime(std::move(value)); return *this;}
    inline GenerationSummary& WithEstimatedCompletionTime(const char* value) { SetEstimatedCompletionTime(value); return *this;}
    ///@}
  private:

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet = false;

    GenerationStatus m_generationStatus;
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
