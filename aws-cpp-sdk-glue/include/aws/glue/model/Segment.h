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
   * requests to be executed in parallel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Segment">AWS API
   * Reference</a></p>
   */
  class AWS_GLUE_API Segment
  {
  public:
    Segment();
    Segment(Aws::Utils::Json::JsonView jsonValue);
    Segment& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The zero-based index number of the this segment. For example, if the total
     * number of segments is 4, SegmentNumber values will range from zero through
     * three.</p>
     */
    inline int GetSegmentNumber() const{ return m_segmentNumber; }

    /**
     * <p>The zero-based index number of the this segment. For example, if the total
     * number of segments is 4, SegmentNumber values will range from zero through
     * three.</p>
     */
    inline bool SegmentNumberHasBeenSet() const { return m_segmentNumberHasBeenSet; }

    /**
     * <p>The zero-based index number of the this segment. For example, if the total
     * number of segments is 4, SegmentNumber values will range from zero through
     * three.</p>
     */
    inline void SetSegmentNumber(int value) { m_segmentNumberHasBeenSet = true; m_segmentNumber = value; }

    /**
     * <p>The zero-based index number of the this segment. For example, if the total
     * number of segments is 4, SegmentNumber values will range from zero through
     * three.</p>
     */
    inline Segment& WithSegmentNumber(int value) { SetSegmentNumber(value); return *this;}


    /**
     * <p>The total numer of segments.</p>
     */
    inline int GetTotalSegments() const{ return m_totalSegments; }

    /**
     * <p>The total numer of segments.</p>
     */
    inline bool TotalSegmentsHasBeenSet() const { return m_totalSegmentsHasBeenSet; }

    /**
     * <p>The total numer of segments.</p>
     */
    inline void SetTotalSegments(int value) { m_totalSegmentsHasBeenSet = true; m_totalSegments = value; }

    /**
     * <p>The total numer of segments.</p>
     */
    inline Segment& WithTotalSegments(int value) { SetTotalSegments(value); return *this;}

  private:

    int m_segmentNumber;
    bool m_segmentNumberHasBeenSet;

    int m_totalSegments;
    bool m_totalSegmentsHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
