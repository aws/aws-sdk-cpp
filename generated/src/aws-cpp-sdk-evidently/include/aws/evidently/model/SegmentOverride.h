/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   * <p>This structure specifies a segment that you have already created, and defines
   * the traffic split for that segment to be used in a launch.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/SegmentOverride">AWS
   * API Reference</a></p>
   */
  class SegmentOverride
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API SegmentOverride();
    AWS_CLOUDWATCHEVIDENTLY_API SegmentOverride(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API SegmentOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A number indicating the order to use to evaluate segment overrides, if there
     * are more than one. Segment overrides with lower numbers are evaluated first.</p>
     */
    inline long long GetEvaluationOrder() const{ return m_evaluationOrder; }

    /**
     * <p>A number indicating the order to use to evaluate segment overrides, if there
     * are more than one. Segment overrides with lower numbers are evaluated first.</p>
     */
    inline bool EvaluationOrderHasBeenSet() const { return m_evaluationOrderHasBeenSet; }

    /**
     * <p>A number indicating the order to use to evaluate segment overrides, if there
     * are more than one. Segment overrides with lower numbers are evaluated first.</p>
     */
    inline void SetEvaluationOrder(long long value) { m_evaluationOrderHasBeenSet = true; m_evaluationOrder = value; }

    /**
     * <p>A number indicating the order to use to evaluate segment overrides, if there
     * are more than one. Segment overrides with lower numbers are evaluated first.</p>
     */
    inline SegmentOverride& WithEvaluationOrder(long long value) { SetEvaluationOrder(value); return *this;}


    /**
     * <p>The ARN of the segment to use.</p>
     */
    inline const Aws::String& GetSegment() const{ return m_segment; }

    /**
     * <p>The ARN of the segment to use.</p>
     */
    inline bool SegmentHasBeenSet() const { return m_segmentHasBeenSet; }

    /**
     * <p>The ARN of the segment to use.</p>
     */
    inline void SetSegment(const Aws::String& value) { m_segmentHasBeenSet = true; m_segment = value; }

    /**
     * <p>The ARN of the segment to use.</p>
     */
    inline void SetSegment(Aws::String&& value) { m_segmentHasBeenSet = true; m_segment = std::move(value); }

    /**
     * <p>The ARN of the segment to use.</p>
     */
    inline void SetSegment(const char* value) { m_segmentHasBeenSet = true; m_segment.assign(value); }

    /**
     * <p>The ARN of the segment to use.</p>
     */
    inline SegmentOverride& WithSegment(const Aws::String& value) { SetSegment(value); return *this;}

    /**
     * <p>The ARN of the segment to use.</p>
     */
    inline SegmentOverride& WithSegment(Aws::String&& value) { SetSegment(std::move(value)); return *this;}

    /**
     * <p>The ARN of the segment to use.</p>
     */
    inline SegmentOverride& WithSegment(const char* value) { SetSegment(value); return *this;}


    /**
     * <p>The traffic allocation percentages among the feature variations to assign to
     * this segment. This is a set of key-value pairs. The keys are variation names.
     * The values represent the amount of traffic to allocate to that variation for
     * this segment. This is expressed in thousandths of a percent, so a weight of
     * 50000 represents 50% of traffic.</p>
     */
    inline const Aws::Map<Aws::String, long long>& GetWeights() const{ return m_weights; }

    /**
     * <p>The traffic allocation percentages among the feature variations to assign to
     * this segment. This is a set of key-value pairs. The keys are variation names.
     * The values represent the amount of traffic to allocate to that variation for
     * this segment. This is expressed in thousandths of a percent, so a weight of
     * 50000 represents 50% of traffic.</p>
     */
    inline bool WeightsHasBeenSet() const { return m_weightsHasBeenSet; }

    /**
     * <p>The traffic allocation percentages among the feature variations to assign to
     * this segment. This is a set of key-value pairs. The keys are variation names.
     * The values represent the amount of traffic to allocate to that variation for
     * this segment. This is expressed in thousandths of a percent, so a weight of
     * 50000 represents 50% of traffic.</p>
     */
    inline void SetWeights(const Aws::Map<Aws::String, long long>& value) { m_weightsHasBeenSet = true; m_weights = value; }

    /**
     * <p>The traffic allocation percentages among the feature variations to assign to
     * this segment. This is a set of key-value pairs. The keys are variation names.
     * The values represent the amount of traffic to allocate to that variation for
     * this segment. This is expressed in thousandths of a percent, so a weight of
     * 50000 represents 50% of traffic.</p>
     */
    inline void SetWeights(Aws::Map<Aws::String, long long>&& value) { m_weightsHasBeenSet = true; m_weights = std::move(value); }

    /**
     * <p>The traffic allocation percentages among the feature variations to assign to
     * this segment. This is a set of key-value pairs. The keys are variation names.
     * The values represent the amount of traffic to allocate to that variation for
     * this segment. This is expressed in thousandths of a percent, so a weight of
     * 50000 represents 50% of traffic.</p>
     */
    inline SegmentOverride& WithWeights(const Aws::Map<Aws::String, long long>& value) { SetWeights(value); return *this;}

    /**
     * <p>The traffic allocation percentages among the feature variations to assign to
     * this segment. This is a set of key-value pairs. The keys are variation names.
     * The values represent the amount of traffic to allocate to that variation for
     * this segment. This is expressed in thousandths of a percent, so a weight of
     * 50000 represents 50% of traffic.</p>
     */
    inline SegmentOverride& WithWeights(Aws::Map<Aws::String, long long>&& value) { SetWeights(std::move(value)); return *this;}

    /**
     * <p>The traffic allocation percentages among the feature variations to assign to
     * this segment. This is a set of key-value pairs. The keys are variation names.
     * The values represent the amount of traffic to allocate to that variation for
     * this segment. This is expressed in thousandths of a percent, so a weight of
     * 50000 represents 50% of traffic.</p>
     */
    inline SegmentOverride& AddWeights(const Aws::String& key, long long value) { m_weightsHasBeenSet = true; m_weights.emplace(key, value); return *this; }

    /**
     * <p>The traffic allocation percentages among the feature variations to assign to
     * this segment. This is a set of key-value pairs. The keys are variation names.
     * The values represent the amount of traffic to allocate to that variation for
     * this segment. This is expressed in thousandths of a percent, so a weight of
     * 50000 represents 50% of traffic.</p>
     */
    inline SegmentOverride& AddWeights(Aws::String&& key, long long value) { m_weightsHasBeenSet = true; m_weights.emplace(std::move(key), value); return *this; }

    /**
     * <p>The traffic allocation percentages among the feature variations to assign to
     * this segment. This is a set of key-value pairs. The keys are variation names.
     * The values represent the amount of traffic to allocate to that variation for
     * this segment. This is expressed in thousandths of a percent, so a weight of
     * 50000 represents 50% of traffic.</p>
     */
    inline SegmentOverride& AddWeights(const char* key, long long value) { m_weightsHasBeenSet = true; m_weights.emplace(key, value); return *this; }

  private:

    long long m_evaluationOrder;
    bool m_evaluationOrderHasBeenSet = false;

    Aws::String m_segment;
    bool m_segmentHasBeenSet = false;

    Aws::Map<Aws::String, long long> m_weights;
    bool m_weightsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
