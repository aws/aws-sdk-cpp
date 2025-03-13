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
    AWS_COSTEXPLORER_API SavingsPlansPurchaseRecommendationMetadata() = default;
    AWS_COSTEXPLORER_API SavingsPlansPurchaseRecommendationMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API SavingsPlansPurchaseRecommendationMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the recommendation set.</p>
     */
    inline const Aws::String& GetRecommendationId() const { return m_recommendationId; }
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }
    template<typename RecommendationIdT = Aws::String>
    void SetRecommendationId(RecommendationIdT&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::forward<RecommendationIdT>(value); }
    template<typename RecommendationIdT = Aws::String>
    SavingsPlansPurchaseRecommendationMetadata& WithRecommendationId(RecommendationIdT&& value) { SetRecommendationId(std::forward<RecommendationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that shows when the recommendations were generated.</p>
     */
    inline const Aws::String& GetGenerationTimestamp() const { return m_generationTimestamp; }
    inline bool GenerationTimestampHasBeenSet() const { return m_generationTimestampHasBeenSet; }
    template<typename GenerationTimestampT = Aws::String>
    void SetGenerationTimestamp(GenerationTimestampT&& value) { m_generationTimestampHasBeenSet = true; m_generationTimestamp = std::forward<GenerationTimestampT>(value); }
    template<typename GenerationTimestampT = Aws::String>
    SavingsPlansPurchaseRecommendationMetadata& WithGenerationTimestamp(GenerationTimestampT&& value) { SetGenerationTimestamp(std::forward<GenerationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional metadata that might be applicable to the recommendation.</p>
     */
    inline const Aws::String& GetAdditionalMetadata() const { return m_additionalMetadata; }
    inline bool AdditionalMetadataHasBeenSet() const { return m_additionalMetadataHasBeenSet; }
    template<typename AdditionalMetadataT = Aws::String>
    void SetAdditionalMetadata(AdditionalMetadataT&& value) { m_additionalMetadataHasBeenSet = true; m_additionalMetadata = std::forward<AdditionalMetadataT>(value); }
    template<typename AdditionalMetadataT = Aws::String>
    SavingsPlansPurchaseRecommendationMetadata& WithAdditionalMetadata(AdditionalMetadataT&& value) { SetAdditionalMetadata(std::forward<AdditionalMetadataT>(value)); return *this;}
    ///@}
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
