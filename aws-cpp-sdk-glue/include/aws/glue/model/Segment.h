/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>

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
namespace Glue
{
namespace Model
{

  /**
   * <p>Defines a non-overlapping region of a table's partitions, allowing multiple
   * requests to be run in parallel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Segment">AWS API
   * Reference</a></p>
   */
  class Segment
  {
  public:
    AWS_GLUE_API Segment();
    AWS_GLUE_API Segment(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Segment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The zero-based index number of the segment. For example, if the total number
     * of segments is 4, <code>SegmentNumber</code> values range from 0 through 3.</p>
     */
    inline int GetSegmentNumber() const{ return m_segmentNumber; }

    /**
     * <p>The zero-based index number of the segment. For example, if the total number
     * of segments is 4, <code>SegmentNumber</code> values range from 0 through 3.</p>
     */
    inline bool SegmentNumberHasBeenSet() const { return m_segmentNumberHasBeenSet; }

    /**
     * <p>The zero-based index number of the segment. For example, if the total number
     * of segments is 4, <code>SegmentNumber</code> values range from 0 through 3.</p>
     */
    inline void SetSegmentNumber(int value) { m_segmentNumberHasBeenSet = true; m_segmentNumber = value; }

    /**
     * <p>The zero-based index number of the segment. For example, if the total number
     * of segments is 4, <code>SegmentNumber</code> values range from 0 through 3.</p>
     */
    inline Segment& WithSegmentNumber(int value) { SetSegmentNumber(value); return *this;}


    /**
     * <p>The total number of segments.</p>
     */
    inline int GetTotalSegments() const{ return m_totalSegments; }

    /**
     * <p>The total number of segments.</p>
     */
    inline bool TotalSegmentsHasBeenSet() const { return m_totalSegmentsHasBeenSet; }

    /**
     * <p>The total number of segments.</p>
     */
    inline void SetTotalSegments(int value) { m_totalSegmentsHasBeenSet = true; m_totalSegments = value; }

    /**
     * <p>The total number of segments.</p>
     */
    inline Segment& WithTotalSegments(int value) { SetTotalSegments(value); return *this;}

  private:

    int m_segmentNumber;
    bool m_segmentNumberHasBeenSet = false;

    int m_totalSegments;
    bool m_totalSegmentsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
