/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_COSTEXPLORER_API SavingsPlansPurchaseRecommendationMetadata
  {
  public:
    SavingsPlansPurchaseRecommendationMetadata();
    SavingsPlansPurchaseRecommendationMetadata(Aws::Utils::Json::JsonView jsonValue);
    SavingsPlansPurchaseRecommendationMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The timestamp showing when the recommendations were generated.</p>
     */
    inline const Aws::String& GetGenerationTimestamp() const{ return m_generationTimestamp; }

    /**
     * <p>The timestamp showing when the recommendations were generated.</p>
     */
    inline bool GenerationTimestampHasBeenSet() const { return m_generationTimestampHasBeenSet; }

    /**
     * <p>The timestamp showing when the recommendations were generated.</p>
     */
    inline void SetGenerationTimestamp(const Aws::String& value) { m_generationTimestampHasBeenSet = true; m_generationTimestamp = value; }

    /**
     * <p>The timestamp showing when the recommendations were generated.</p>
     */
    inline void SetGenerationTimestamp(Aws::String&& value) { m_generationTimestampHasBeenSet = true; m_generationTimestamp = std::move(value); }

    /**
     * <p>The timestamp showing when the recommendations were generated.</p>
     */
    inline void SetGenerationTimestamp(const char* value) { m_generationTimestampHasBeenSet = true; m_generationTimestamp.assign(value); }

    /**
     * <p>The timestamp showing when the recommendations were generated.</p>
     */
    inline SavingsPlansPurchaseRecommendationMetadata& WithGenerationTimestamp(const Aws::String& value) { SetGenerationTimestamp(value); return *this;}

    /**
     * <p>The timestamp showing when the recommendations were generated.</p>
     */
    inline SavingsPlansPurchaseRecommendationMetadata& WithGenerationTimestamp(Aws::String&& value) { SetGenerationTimestamp(std::move(value)); return *this;}

    /**
     * <p>The timestamp showing when the recommendations were generated.</p>
     */
    inline SavingsPlansPurchaseRecommendationMetadata& WithGenerationTimestamp(const char* value) { SetGenerationTimestamp(value); return *this;}

  private:

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet;

    Aws::String m_generationTimestamp;
    bool m_generationTimestampHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
