/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisvideo/model/ChannelInfo.h>
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
  class ListSignalingChannelsResult
  {
  public:
    AWS_KINESISVIDEO_API ListSignalingChannelsResult();
    AWS_KINESISVIDEO_API ListSignalingChannelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEO_API ListSignalingChannelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>ChannelInfo</code> objects.</p>
     */
    inline const Aws::Vector<ChannelInfo>& GetChannelInfoList() const{ return m_channelInfoList; }

    /**
     * <p>An array of <code>ChannelInfo</code> objects.</p>
     */
    inline void SetChannelInfoList(const Aws::Vector<ChannelInfo>& value) { m_channelInfoList = value; }

    /**
     * <p>An array of <code>ChannelInfo</code> objects.</p>
     */
    inline void SetChannelInfoList(Aws::Vector<ChannelInfo>&& value) { m_channelInfoList = std::move(value); }

    /**
     * <p>An array of <code>ChannelInfo</code> objects.</p>
     */
    inline ListSignalingChannelsResult& WithChannelInfoList(const Aws::Vector<ChannelInfo>& value) { SetChannelInfoList(value); return *this;}

    /**
     * <p>An array of <code>ChannelInfo</code> objects.</p>
     */
    inline ListSignalingChannelsResult& WithChannelInfoList(Aws::Vector<ChannelInfo>&& value) { SetChannelInfoList(std::move(value)); return *this;}

    /**
     * <p>An array of <code>ChannelInfo</code> objects.</p>
     */
    inline ListSignalingChannelsResult& AddChannelInfoList(const ChannelInfo& value) { m_channelInfoList.push_back(value); return *this; }

    /**
     * <p>An array of <code>ChannelInfo</code> objects.</p>
     */
    inline ListSignalingChannelsResult& AddChannelInfoList(ChannelInfo&& value) { m_channelInfoList.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, the call returns this element with a token. To
     * get the next batch of streams, use this token in your next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, the call returns this element with a token. To
     * get the next batch of streams, use this token in your next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, the call returns this element with a token. To
     * get the next batch of streams, use this token in your next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, the call returns this element with a token. To
     * get the next batch of streams, use this token in your next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, the call returns this element with a token. To
     * get the next batch of streams, use this token in your next request.</p>
     */
    inline ListSignalingChannelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, the call returns this element with a token. To
     * get the next batch of streams, use this token in your next request.</p>
     */
    inline ListSignalingChannelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, the call returns this element with a token. To
     * get the next batch of streams, use this token in your next request.</p>
     */
    inline ListSignalingChannelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ChannelInfo> m_channelInfoList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
