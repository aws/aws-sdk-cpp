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
  class AWS_KINESISVIDEO_API DescribeStreamResult
  {
  public:
    DescribeStreamResult();
    DescribeStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
