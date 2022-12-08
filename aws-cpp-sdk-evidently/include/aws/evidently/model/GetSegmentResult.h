/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/model/Segment.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudWatchEvidently
{
namespace Model
{
  class GetSegmentResult
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API GetSegmentResult();
    AWS_CLOUDWATCHEVIDENTLY_API GetSegmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API GetSegmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that contains the complete information about the segment.</p>
     */
    inline const Segment& GetSegment() const{ return m_segment; }

    /**
     * <p>A structure that contains the complete information about the segment.</p>
     */
    inline void SetSegment(const Segment& value) { m_segment = value; }

    /**
     * <p>A structure that contains the complete information about the segment.</p>
     */
    inline void SetSegment(Segment&& value) { m_segment = std::move(value); }

    /**
     * <p>A structure that contains the complete information about the segment.</p>
     */
    inline GetSegmentResult& WithSegment(const Segment& value) { SetSegment(value); return *this;}

    /**
     * <p>A structure that contains the complete information about the segment.</p>
     */
    inline GetSegmentResult& WithSegment(Segment&& value) { SetSegment(std::move(value)); return *this;}

  private:

    Segment m_segment;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
