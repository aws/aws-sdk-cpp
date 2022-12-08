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
    AWS_CLOUDWATCHEVIDENTLY_API ListSegmentsResult();
    AWS_CLOUDWATCHEVIDENTLY_API ListSegmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API ListSegmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token to use in a subsequent <code>ListSegments</code> operation to
     * return the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use in a subsequent <code>ListSegments</code> operation to
     * return the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use in a subsequent <code>ListSegments</code> operation to
     * return the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use in a subsequent <code>ListSegments</code> operation to
     * return the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use in a subsequent <code>ListSegments</code> operation to
     * return the next set of results.</p>
     */
    inline ListSegmentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use in a subsequent <code>ListSegments</code> operation to
     * return the next set of results.</p>
     */
    inline ListSegmentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use in a subsequent <code>ListSegments</code> operation to
     * return the next set of results.</p>
     */
    inline ListSegmentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An array of structures that contain information about the segments in this
     * Region.</p>
     */
    inline const Aws::Vector<Segment>& GetSegments() const{ return m_segments; }

    /**
     * <p>An array of structures that contain information about the segments in this
     * Region.</p>
     */
    inline void SetSegments(const Aws::Vector<Segment>& value) { m_segments = value; }

    /**
     * <p>An array of structures that contain information about the segments in this
     * Region.</p>
     */
    inline void SetSegments(Aws::Vector<Segment>&& value) { m_segments = std::move(value); }

    /**
     * <p>An array of structures that contain information about the segments in this
     * Region.</p>
     */
    inline ListSegmentsResult& WithSegments(const Aws::Vector<Segment>& value) { SetSegments(value); return *this;}

    /**
     * <p>An array of structures that contain information about the segments in this
     * Region.</p>
     */
    inline ListSegmentsResult& WithSegments(Aws::Vector<Segment>&& value) { SetSegments(std::move(value)); return *this;}

    /**
     * <p>An array of structures that contain information about the segments in this
     * Region.</p>
     */
    inline ListSegmentsResult& AddSegments(const Segment& value) { m_segments.push_back(value); return *this; }

    /**
     * <p>An array of structures that contain information about the segments in this
     * Region.</p>
     */
    inline ListSegmentsResult& AddSegments(Segment&& value) { m_segments.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<Segment> m_segments;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
