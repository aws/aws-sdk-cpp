﻿/**
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
    AWS_COMPUTEOPTIMIZER_API RecommendationSource() = default;
    AWS_COMPUTEOPTIMIZER_API RecommendationSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API RecommendationSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the recommendation source.</p>
     */
    inline const Aws::String& GetRecommendationSourceArn() const { return m_recommendationSourceArn; }
    inline bool RecommendationSourceArnHasBeenSet() const { return m_recommendationSourceArnHasBeenSet; }
    template<typename RecommendationSourceArnT = Aws::String>
    void SetRecommendationSourceArn(RecommendationSourceArnT&& value) { m_recommendationSourceArnHasBeenSet = true; m_recommendationSourceArn = std::forward<RecommendationSourceArnT>(value); }
    template<typename RecommendationSourceArnT = Aws::String>
    RecommendationSource& WithRecommendationSourceArn(RecommendationSourceArnT&& value) { SetRecommendationSourceArn(std::forward<RecommendationSourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type of the recommendation source.</p>
     */
    inline RecommendationSourceType GetRecommendationSourceType() const { return m_recommendationSourceType; }
    inline bool RecommendationSourceTypeHasBeenSet() const { return m_recommendationSourceTypeHasBeenSet; }
    inline void SetRecommendationSourceType(RecommendationSourceType value) { m_recommendationSourceTypeHasBeenSet = true; m_recommendationSourceType = value; }
    inline RecommendationSource& WithRecommendationSourceType(RecommendationSourceType value) { SetRecommendationSourceType(value); return *this;}
    ///@}
  private:

    Aws::String m_recommendationSourceArn;
    bool m_recommendationSourceArnHasBeenSet = false;

    RecommendationSourceType m_recommendationSourceType{RecommendationSourceType::NOT_SET};
    bool m_recommendationSourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
