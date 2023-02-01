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
   * <p>Metadata about your Savings Plans Purchase Recommendations.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/SavingsPlansPurchaseRecommendationMetadata">AWS
   * API Reference</a></p>
   */
  class SavingsPlansPurchaseRecommendationMetadata
  {
  public:
    AWS_COSTEXPLORER_API SavingsPlansPurchaseRecommendationMetadata();
    AWS_COSTEXPLORER_API SavingsPlansPurchaseRecommendationMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API SavingsPlansPurchaseRecommendationMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the recommendation set.</p>
     */
    inline const Aws::String& GetRecommendationId() const{ return m_recommendationId; }

    /**
     * <p>The unique identifier for the recommendation set.</p>
     */
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }

    /**
     * <p>The unique identifier for the recommendation set.</p>
     */
    inline void SetRecommendationId(const Aws::String& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = value; }

    /**
     * <p>The unique identifier for the recommendation set.</p>
     */
    inline void SetRecommendationId(Aws::String&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::move(value); }

    /**
     * <p>The unique identifier for the recommendation set.</p>
     */
    inline void SetRecommendationId(const char* value) { m_recommendationIdHasBeenSet = true; m_recommendationId.assign(value); }

    /**
     * <p>The unique identifier for the recommendation set.</p>
     */
    inline SavingsPlansPurchaseRecommendationMetadata& WithRecommendationId(const Aws::String& value) { SetRecommendationId(value); return *this;}

    /**
     * <p>The unique identifier for the recommendation set.</p>
     */
    inline SavingsPlansPurchaseRecommendationMetadata& WithRecommendationId(Aws::String&& value) { SetRecommendationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the recommendation set.</p>
     */
    inline SavingsPlansPurchaseRecommendationMetadata& WithRecommendationId(const char* value) { SetRecommendationId(value); return *this;}


    /**
     * <p>The timestamp that shows when the recommendations were generated.</p>
     */
    inline const Aws::String& GetGenerationTimestamp() const{ return m_generationTimestamp; }

    /**
     * <p>The timestamp that shows when the recommendations were generated.</p>
     */
    inline bool GenerationTimestampHasBeenSet() const { return m_generationTimestampHasBeenSet; }

    /**
     * <p>The timestamp that shows when the recommendations were generated.</p>
     */
    inline void SetGenerationTimestamp(const Aws::String& value) { m_generationTimestampHasBeenSet = true; m_generationTimestamp = value; }

    /**
     * <p>The timestamp that shows when the recommendations were generated.</p>
     */
    inline void SetGenerationTimestamp(Aws::String&& value) { m_generationTimestampHasBeenSet = true; m_generationTimestamp = std::move(value); }

    /**
     * <p>The timestamp that shows when the recommendations were generated.</p>
     */
    inline void SetGenerationTimestamp(const char* value) { m_generationTimestampHasBeenSet = true; m_generationTimestamp.assign(value); }

    /**
     * <p>The timestamp that shows when the recommendations were generated.</p>
     */
    inline SavingsPlansPurchaseRecommendationMetadata& WithGenerationTimestamp(const Aws::String& value) { SetGenerationTimestamp(value); return *this;}

    /**
     * <p>The timestamp that shows when the recommendations were generated.</p>
     */
    inline SavingsPlansPurchaseRecommendationMetadata& WithGenerationTimestamp(Aws::String&& value) { SetGenerationTimestamp(std::move(value)); return *this;}

    /**
     * <p>The timestamp that shows when the recommendations were generated.</p>
     */
    inline SavingsPlansPurchaseRecommendationMetadata& WithGenerationTimestamp(const char* value) { SetGenerationTimestamp(value); return *this;}


    /**
     * <p>Additional metadata that might be applicable to the recommendation.</p>
     */
    inline const Aws::String& GetAdditionalMetadata() const{ return m_additionalMetadata; }

    /**
     * <p>Additional metadata that might be applicable to the recommendation.</p>
     */
    inline bool AdditionalMetadataHasBeenSet() const { return m_additionalMetadataHasBeenSet; }

    /**
     * <p>Additional metadata that might be applicable to the recommendation.</p>
     */
    inline void SetAdditionalMetadata(const Aws::String& value) { m_additionalMetadataHasBeenSet = true; m_additionalMetadata = value; }

    /**
     * <p>Additional metadata that might be applicable to the recommendation.</p>
     */
    inline void SetAdditionalMetadata(Aws::String&& value) { m_additionalMetadataHasBeenSet = true; m_additionalMetadata = std::move(value); }

    /**
     * <p>Additional metadata that might be applicable to the recommendation.</p>
     */
    inline void SetAdditionalMetadata(const char* value) { m_additionalMetadataHasBeenSet = true; m_additionalMetadata.assign(value); }

    /**
     * <p>Additional metadata that might be applicable to the recommendation.</p>
     */
    inline SavingsPlansPurchaseRecommendationMetadata& WithAdditionalMetadata(const Aws::String& value) { SetAdditionalMetadata(value); return *this;}

    /**
     * <p>Additional metadata that might be applicable to the recommendation.</p>
     */
    inline SavingsPlansPurchaseRecommendationMetadata& WithAdditionalMetadata(Aws::String&& value) { SetAdditionalMetadata(std::move(value)); return *this;}

    /**
     * <p>Additional metadata that might be applicable to the recommendation.</p>
     */
    inline SavingsPlansPurchaseRecommendationMetadata& WithAdditionalMetadata(const char* value) { SetAdditionalMetadata(value); return *this;}

  private:

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet = false;

    Aws::String m_generationTimestamp;
    bool m_generationTimestampHasBeenSet = false;

    Aws::String m_additionalMetadata;
    bool m_additionalMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
