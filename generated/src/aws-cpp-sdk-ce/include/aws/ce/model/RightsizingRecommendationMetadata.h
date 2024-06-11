/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/LookbackPeriodInDays.h>
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
   * <p>Metadata for a recommendation set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/RightsizingRecommendationMetadata">AWS
   * API Reference</a></p>
   */
  class RightsizingRecommendationMetadata
  {
  public:
    AWS_COSTEXPLORER_API RightsizingRecommendationMetadata();
    AWS_COSTEXPLORER_API RightsizingRecommendationMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API RightsizingRecommendationMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline RightsizingRecommendationMetadata& WithRecommendationId(const Aws::String& value) { SetRecommendationId(value); return *this;}
    inline RightsizingRecommendationMetadata& WithRecommendationId(Aws::String&& value) { SetRecommendationId(std::move(value)); return *this;}
    inline RightsizingRecommendationMetadata& WithRecommendationId(const char* value) { SetRecommendationId(value); return *this;}
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
    inline RightsizingRecommendationMetadata& WithGenerationTimestamp(const Aws::String& value) { SetGenerationTimestamp(value); return *this;}
    inline RightsizingRecommendationMetadata& WithGenerationTimestamp(Aws::String&& value) { SetGenerationTimestamp(std::move(value)); return *this;}
    inline RightsizingRecommendationMetadata& WithGenerationTimestamp(const char* value) { SetGenerationTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days of previous usage that Amazon Web Services considers when
     * making the recommendation.</p>
     */
    inline const LookbackPeriodInDays& GetLookbackPeriodInDays() const{ return m_lookbackPeriodInDays; }
    inline bool LookbackPeriodInDaysHasBeenSet() const { return m_lookbackPeriodInDaysHasBeenSet; }
    inline void SetLookbackPeriodInDays(const LookbackPeriodInDays& value) { m_lookbackPeriodInDaysHasBeenSet = true; m_lookbackPeriodInDays = value; }
    inline void SetLookbackPeriodInDays(LookbackPeriodInDays&& value) { m_lookbackPeriodInDaysHasBeenSet = true; m_lookbackPeriodInDays = std::move(value); }
    inline RightsizingRecommendationMetadata& WithLookbackPeriodInDays(const LookbackPeriodInDays& value) { SetLookbackPeriodInDays(value); return *this;}
    inline RightsizingRecommendationMetadata& WithLookbackPeriodInDays(LookbackPeriodInDays&& value) { SetLookbackPeriodInDays(std::move(value)); return *this;}
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
    inline RightsizingRecommendationMetadata& WithAdditionalMetadata(const Aws::String& value) { SetAdditionalMetadata(value); return *this;}
    inline RightsizingRecommendationMetadata& WithAdditionalMetadata(Aws::String&& value) { SetAdditionalMetadata(std::move(value)); return *this;}
    inline RightsizingRecommendationMetadata& WithAdditionalMetadata(const char* value) { SetAdditionalMetadata(value); return *this;}
    ///@}
  private:

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet = false;

    Aws::String m_generationTimestamp;
    bool m_generationTimestampHasBeenSet = false;

    LookbackPeriodInDays m_lookbackPeriodInDays;
    bool m_lookbackPeriodInDaysHasBeenSet = false;

    Aws::String m_additionalMetadata;
    bool m_additionalMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
