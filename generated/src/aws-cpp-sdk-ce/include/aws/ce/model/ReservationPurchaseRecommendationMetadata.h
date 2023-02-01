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
   * <p>Information about this specific recommendation, such as the timestamp for
   * when Amazon Web Services made a specific recommendation.</p><p><h3>See
   * Also:</h3>   <a
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


    /**
     * <p>The ID for this specific recommendation.</p>
     */
    inline const Aws::String& GetRecommendationId() const{ return m_recommendationId; }

    /**
     * <p>The ID for this specific recommendation.</p>
     */
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }

    /**
     * <p>The ID for this specific recommendation.</p>
     */
    inline void SetRecommendationId(const Aws::String& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = value; }

    /**
     * <p>The ID for this specific recommendation.</p>
     */
    inline void SetRecommendationId(Aws::String&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::move(value); }

    /**
     * <p>The ID for this specific recommendation.</p>
     */
    inline void SetRecommendationId(const char* value) { m_recommendationIdHasBeenSet = true; m_recommendationId.assign(value); }

    /**
     * <p>The ID for this specific recommendation.</p>
     */
    inline ReservationPurchaseRecommendationMetadata& WithRecommendationId(const Aws::String& value) { SetRecommendationId(value); return *this;}

    /**
     * <p>The ID for this specific recommendation.</p>
     */
    inline ReservationPurchaseRecommendationMetadata& WithRecommendationId(Aws::String&& value) { SetRecommendationId(std::move(value)); return *this;}

    /**
     * <p>The ID for this specific recommendation.</p>
     */
    inline ReservationPurchaseRecommendationMetadata& WithRecommendationId(const char* value) { SetRecommendationId(value); return *this;}


    /**
     * <p>The timestamp for when Amazon Web Services made this recommendation.</p>
     */
    inline const Aws::String& GetGenerationTimestamp() const{ return m_generationTimestamp; }

    /**
     * <p>The timestamp for when Amazon Web Services made this recommendation.</p>
     */
    inline bool GenerationTimestampHasBeenSet() const { return m_generationTimestampHasBeenSet; }

    /**
     * <p>The timestamp for when Amazon Web Services made this recommendation.</p>
     */
    inline void SetGenerationTimestamp(const Aws::String& value) { m_generationTimestampHasBeenSet = true; m_generationTimestamp = value; }

    /**
     * <p>The timestamp for when Amazon Web Services made this recommendation.</p>
     */
    inline void SetGenerationTimestamp(Aws::String&& value) { m_generationTimestampHasBeenSet = true; m_generationTimestamp = std::move(value); }

    /**
     * <p>The timestamp for when Amazon Web Services made this recommendation.</p>
     */
    inline void SetGenerationTimestamp(const char* value) { m_generationTimestampHasBeenSet = true; m_generationTimestamp.assign(value); }

    /**
     * <p>The timestamp for when Amazon Web Services made this recommendation.</p>
     */
    inline ReservationPurchaseRecommendationMetadata& WithGenerationTimestamp(const Aws::String& value) { SetGenerationTimestamp(value); return *this;}

    /**
     * <p>The timestamp for when Amazon Web Services made this recommendation.</p>
     */
    inline ReservationPurchaseRecommendationMetadata& WithGenerationTimestamp(Aws::String&& value) { SetGenerationTimestamp(std::move(value)); return *this;}

    /**
     * <p>The timestamp for when Amazon Web Services made this recommendation.</p>
     */
    inline ReservationPurchaseRecommendationMetadata& WithGenerationTimestamp(const char* value) { SetGenerationTimestamp(value); return *this;}

  private:

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet = false;

    Aws::String m_generationTimestamp;
    bool m_generationTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
