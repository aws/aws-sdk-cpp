﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/model/Segment.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class CreateSegmentResult
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API CreateSegmentResult();
    AWS_CLOUDWATCHEVIDENTLY_API CreateSegmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API CreateSegmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure that contains the complete information about the segment that was
     * just created.</p>
     */
    inline const Segment& GetSegment() const{ return m_segment; }
    inline void SetSegment(const Segment& value) { m_segment = value; }
    inline void SetSegment(Segment&& value) { m_segment = std::move(value); }
    inline CreateSegmentResult& WithSegment(const Segment& value) { SetSegment(value); return *this;}
    inline CreateSegmentResult& WithSegment(Segment&& value) { SetSegment(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateSegmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateSegmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateSegmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Segment m_segment;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
