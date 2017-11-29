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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_KINESISVIDEO_API ListStreamsResult
  {
  public:
    ListStreamsResult();
    ListStreamsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListStreamsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>StreamInfo</code> objects.</p>
     */
    inline const Aws::Vector<StreamInfo>& GetStreamInfoList() const{ return m_streamInfoList; }

    /**
     * <p>An array of <code>StreamInfo</code> objects.</p>
     */
    inline void SetStreamInfoList(const Aws::Vector<StreamInfo>& value) { m_streamInfoList = value; }

    /**
     * <p>An array of <code>StreamInfo</code> objects.</p>
     */
    inline void SetStreamInfoList(Aws::Vector<StreamInfo>&& value) { m_streamInfoList = std::move(value); }

    /**
     * <p>An array of <code>StreamInfo</code> objects.</p>
     */
    inline ListStreamsResult& WithStreamInfoList(const Aws::Vector<StreamInfo>& value) { SetStreamInfoList(value); return *this;}

    /**
     * <p>An array of <code>StreamInfo</code> objects.</p>
     */
    inline ListStreamsResult& WithStreamInfoList(Aws::Vector<StreamInfo>&& value) { SetStreamInfoList(std::move(value)); return *this;}

    /**
     * <p>An array of <code>StreamInfo</code> objects.</p>
     */
    inline ListStreamsResult& AddStreamInfoList(const StreamInfo& value) { m_streamInfoList.push_back(value); return *this; }

    /**
     * <p>An array of <code>StreamInfo</code> objects.</p>
     */
    inline ListStreamsResult& AddStreamInfoList(StreamInfo&& value) { m_streamInfoList.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, the call returns this element with a token. To
     * get the next batch of streams, use this token in your next request. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, the call returns this element with a token. To
     * get the next batch of streams, use this token in your next request. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, the call returns this element with a token. To
     * get the next batch of streams, use this token in your next request. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, the call returns this element with a token. To
     * get the next batch of streams, use this token in your next request. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, the call returns this element with a token. To
     * get the next batch of streams, use this token in your next request. </p>
     */
    inline ListStreamsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, the call returns this element with a token. To
     * get the next batch of streams, use this token in your next request. </p>
     */
    inline ListStreamsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, the call returns this element with a token. To
     * get the next batch of streams, use this token in your next request. </p>
     */
    inline ListStreamsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<StreamInfo> m_streamInfoList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
