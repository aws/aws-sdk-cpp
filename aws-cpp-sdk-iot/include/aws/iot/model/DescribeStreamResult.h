/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/StreamInfo.h>
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
namespace IoT
{
namespace Model
{
  class DescribeStreamResult
  {
  public:
    AWS_IOT_API DescribeStreamResult();
    AWS_IOT_API DescribeStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the stream.</p>
     */
    inline const StreamInfo& GetStreamInfo() const{ return m_streamInfo; }

    /**
     * <p>Information about the stream.</p>
     */
    inline void SetStreamInfo(const StreamInfo& value) { m_streamInfo = value; }

    /**
     * <p>Information about the stream.</p>
     */
    inline void SetStreamInfo(StreamInfo&& value) { m_streamInfo = std::move(value); }

    /**
     * <p>Information about the stream.</p>
     */
    inline DescribeStreamResult& WithStreamInfo(const StreamInfo& value) { SetStreamInfo(value); return *this;}

    /**
     * <p>Information about the stream.</p>
     */
    inline DescribeStreamResult& WithStreamInfo(StreamInfo&& value) { SetStreamInfo(std::move(value)); return *this;}

  private:

    StreamInfo m_streamInfo;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
