/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/compute-optimizer/model/RecommendationSourceType.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p>Describes the source of a recommendation, such as an Amazon EC2 instance or
   * Auto Scaling group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/RecommendationSource">AWS
   * API Reference</a></p>
   */
  class RecommendationSource
  {
  public:
    AWS_COMPUTEOPTIMIZER_API RecommendationSource();
    AWS_COMPUTEOPTIMIZER_API RecommendationSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API RecommendationSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the recommendation source.</p>
     */
    inline const Aws::String& GetRecommendationSourceArn() const{ return m_recommendationSourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommendation source.</p>
     */
    inline bool RecommendationSourceArnHasBeenSet() const { return m_recommendationSourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommendation source.</p>
     */
    inline void SetRecommendationSourceArn(const Aws::String& value) { m_recommendationSourceArnHasBeenSet = true; m_recommendationSourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommendation source.</p>
     */
    inline void SetRecommendationSourceArn(Aws::String&& value) { m_recommendationSourceArnHasBeenSet = true; m_recommendationSourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommendation source.</p>
     */
    inline void SetRecommendationSourceArn(const char* value) { m_recommendationSourceArnHasBeenSet = true; m_recommendationSourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the recommendation source.</p>
     */
    inline RecommendationSource& WithRecommendationSourceArn(const Aws::String& value) { SetRecommendationSourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the recommendation source.</p>
     */
    inline RecommendationSource& WithRecommendationSourceArn(Aws::String&& value) { SetRecommendationSourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the recommendation source.</p>
     */
    inline RecommendationSource& WithRecommendationSourceArn(const char* value) { SetRecommendationSourceArn(value); return *this;}


    /**
     * <p>The resource type of the recommendation source.</p>
     */
    inline const RecommendationSourceType& GetRecommendationSourceType() const{ return m_recommendationSourceType; }

    /**
     * <p>The resource type of the recommendation source.</p>
     */
    inline bool RecommendationSourceTypeHasBeenSet() const { return m_recommendationSourceTypeHasBeenSet; }

    /**
     * <p>The resource type of the recommendation source.</p>
     */
    inline void SetRecommendationSourceType(const RecommendationSourceType& value) { m_recommendationSourceTypeHasBeenSet = true; m_recommendationSourceType = value; }

    /**
     * <p>The resource type of the recommendation source.</p>
     */
    inline void SetRecommendationSourceType(RecommendationSourceType&& value) { m_recommendationSourceTypeHasBeenSet = true; m_recommendationSourceType = std::move(value); }

    /**
     * <p>The resource type of the recommendation source.</p>
     */
    inline RecommendationSource& WithRecommendationSourceType(const RecommendationSourceType& value) { SetRecommendationSourceType(value); return *this;}

    /**
     * <p>The resource type of the recommendation source.</p>
     */
    inline RecommendationSource& WithRecommendationSourceType(RecommendationSourceType&& value) { SetRecommendationSourceType(std::move(value)); return *this;}

  private:

    Aws::String m_recommendationSourceArn;
    bool m_recommendationSourceArnHasBeenSet = false;

    RecommendationSourceType m_recommendationSourceType;
    bool m_recommendationSourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
