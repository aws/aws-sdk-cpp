/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/SegmentsResponse.h>
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
namespace Pinpoint
{
namespace Model
{
  class GetSegmentsResult
  {
  public:
    AWS_PINPOINT_API GetSegmentsResult();
    AWS_PINPOINT_API GetSegmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetSegmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const SegmentsResponse& GetSegmentsResponse() const{ return m_segmentsResponse; }

    
    inline void SetSegmentsResponse(const SegmentsResponse& value) { m_segmentsResponse = value; }

    
    inline void SetSegmentsResponse(SegmentsResponse&& value) { m_segmentsResponse = std::move(value); }

    
    inline GetSegmentsResult& WithSegmentsResponse(const SegmentsResponse& value) { SetSegmentsResponse(value); return *this;}

    
    inline GetSegmentsResult& WithSegmentsResponse(SegmentsResponse&& value) { SetSegmentsResponse(std::move(value)); return *this;}

  private:

    SegmentsResponse m_segmentsResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
