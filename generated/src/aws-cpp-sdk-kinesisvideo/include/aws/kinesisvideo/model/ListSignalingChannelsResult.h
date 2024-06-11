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


    ///@{
    /**
     * <p>An array of <code>ChannelInfo</code> objects.</p>
     */
    inline const Aws::Vector<ChannelInfo>& GetChannelInfoList() const{ return m_channelInfoList; }
    inline void SetChannelInfoList(const Aws::Vector<ChannelInfo>& value) { m_channelInfoList = value; }
    inline void SetChannelInfoList(Aws::Vector<ChannelInfo>&& value) { m_channelInfoList = std::move(value); }
    inline ListSignalingChannelsResult& WithChannelInfoList(const Aws::Vector<ChannelInfo>& value) { SetChannelInfoList(value); return *this;}
    inline ListSignalingChannelsResult& WithChannelInfoList(Aws::Vector<ChannelInfo>&& value) { SetChannelInfoList(std::move(value)); return *this;}
    inline ListSignalingChannelsResult& AddChannelInfoList(const ChannelInfo& value) { m_channelInfoList.push_back(value); return *this; }
    inline ListSignalingChannelsResult& AddChannelInfoList(ChannelInfo&& value) { m_channelInfoList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, the call returns this element with a token. To
     * get the next batch of streams, use this token in your next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSignalingChannelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSignalingChannelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSignalingChannelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSignalingChannelsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSignalingChannelsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSignalingChannelsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ChannelInfo> m_channelInfoList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
