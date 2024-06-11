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
   * <p>Information about a recommendation, such as the timestamp for when Amazon Web
   * Services made a specific recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ReservationPurchaseRecommendationMetadata">AWS
   * API Reference</a></p>
   */
  class ReservationPurchaseRecommendationMetadata
  {
  public:
    AWS_COSTEXPLORER_API ReservationPurchaseRecommendationMetadata();
    AWS_COSTEXPLORER_API ReservationPurchaseRecommendationMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API ReservationPurchaseRecommendationMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID for the recommendation.</p>
     */
    inline const Aws::String& GetRecommendationId() const{ return m_recommendationId; }
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }
    inline void SetRecommendationId(const Aws::String& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = value; }
    inline void SetRecommendationId(Aws::String&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::move(value); }
    inline void SetRecommendationId(const char* value) { m_recommendationIdHasBeenSet = true; m_recommendationId.assign(value); }
    inline ReservationPurchaseRecommendationMetadata& WithRecommendationId(const Aws::String& value) { SetRecommendationId(value); return *this;}
    inline ReservationPurchaseRecommendationMetadata& WithRecommendationId(Aws::String&& value) { SetRecommendationId(std::move(value)); return *this;}
    inline ReservationPurchaseRecommendationMetadata& WithRecommendationId(const char* value) { SetRecommendationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when Amazon Web Services made the recommendation.</p>
     */
    inline const Aws::String& GetGenerationTimestamp() const{ return m_generationTimestamp; }
    inline bool GenerationTimestampHasBeenSet() const { return m_generationTimestampHasBeenSet; }
    inline void SetGenerationTimestamp(const Aws::String& value) { m_generationTimestampHasBeenSet = true; m_generationTimestamp = value; }
    inline void SetGenerationTimestamp(Aws::String&& value) { m_generationTimestampHasBeenSet = true; m_generationTimestamp = std::move(value); }
    inline void SetGenerationTimestamp(const char* value) { m_generationTimestampHasBeenSet = true; m_generationTimestamp.assign(value); }
    inline ReservationPurchaseRecommendationMetadata& WithGenerationTimestamp(const Aws::String& value) { SetGenerationTimestamp(value); return *this;}
    inline ReservationPurchaseRecommendationMetadata& WithGenerationTimestamp(Aws::String&& value) { SetGenerationTimestamp(std::move(value)); return *this;}
    inline ReservationPurchaseRecommendationMetadata& WithGenerationTimestamp(const char* value) { SetGenerationTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional metadata that might be applicable to the recommendation.</p>
     */
    inline const Aws::String& GetAdditionalMetadata() const{ return m_additionalMetadata; }
    inline bool AdditionalMetadataHasBeenSet() const { return m_additionalMetadataHasBeenSet; }
    inline void SetAdditionalMetadata(const Aws::String& value) { m_additionalMetadataHasBeenSet = true; m_additionalMetadata = value; }
    inline void SetAdditionalMetadata(Aws::String&& value) { m_additionalMetadataHasBeenSet = true; m_additionalMetadata = std::move(value); }
    inline void SetAdditionalMetadata(const char* value) { m_additionalMetadataHasBeenSet = true; m_additionalMetadata.assign(value); }
    inline ReservationPurchaseRecommendationMetadata& WithAdditionalMetadata(const Aws::String& value) { SetAdditionalMetadata(value); return *this;}
    inline ReservationPurchaseRecommendationMetadata& WithAdditionalMetadata(Aws::String&& value) { SetAdditionalMetadata(std::move(value)); return *this;}
    inline ReservationPurchaseRecommendationMetadata& WithAdditionalMetadata(const char* value) { SetAdditionalMetadata(value); return *this;}
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
