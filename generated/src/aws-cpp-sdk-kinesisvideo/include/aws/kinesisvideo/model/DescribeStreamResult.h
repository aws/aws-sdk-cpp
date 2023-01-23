/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/model/StreamInfo.h>
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
namespace KinesisVideo
{
namespace Model
{
  class DescribeStreamResult
  {
  public:
    AWS_KINESISVIDEO_API DescribeStreamResult();
    AWS_KINESISVIDEO_API DescribeStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEO_API DescribeStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that describes the stream.</p>
     */
    inline const StreamInfo& GetStreamInfo() const{ return m_streamInfo; }

    /**
     * <p>An object that describes the stream.</p>
     */
    inline void SetStreamInfo(const StreamInfo& value) { m_streamInfo = value; }

    /**
     * <p>An object that describes the stream.</p>
     */
    inline void SetStreamInfo(StreamInfo&& value) { m_streamInfo = std::move(value); }

    /**
     * <p>An object that describes the stream.</p>
     */
    inline DescribeStreamResult& WithStreamInfo(const StreamInfo& value) { SetStreamInfo(value); return *this;}

    /**
     * <p>An object that describes the stream.</p>
     */
    inline DescribeStreamResult& WithStreamInfo(StreamInfo&& value) { SetStreamInfo(std::move(value)); return *this;}

  private:

    StreamInfo m_streamInfo;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
