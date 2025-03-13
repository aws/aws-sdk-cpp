/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class ListSegmentsResult
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API ListSegmentsResult() = default;
    AWS_CLOUDWATCHEVIDENTLY_API ListSegmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API ListSegmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to use in a subsequent <code>ListSegments</code> operation to
     * return the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSegmentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of structures that contain information about the segments in this
     * Region.</p>
     */
    inline const Aws::Vector<Segment>& GetSegments() const { return m_segments; }
    template<typename SegmentsT = Aws::Vector<Segment>>
    void SetSegments(SegmentsT&& value) { m_segmentsHasBeenSet = true; m_segments = std::forward<SegmentsT>(value); }
    template<typename SegmentsT = Aws::Vector<Segment>>
    ListSegmentsResult& WithSegments(SegmentsT&& value) { SetSegments(std::forward<SegmentsT>(value)); return *this;}
    template<typename SegmentsT = Segment>
    ListSegmentsResult& AddSegments(SegmentsT&& value) { m_segmentsHasBeenSet = true; m_segments.emplace_back(std::forward<SegmentsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSegmentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Segment> m_segments;
    bool m_segmentsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
