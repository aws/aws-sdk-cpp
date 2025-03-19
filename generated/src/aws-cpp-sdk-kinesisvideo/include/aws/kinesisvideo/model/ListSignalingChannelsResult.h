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
    AWS_KINESISVIDEO_API ListSignalingChannelsResult() = default;
    AWS_KINESISVIDEO_API ListSignalingChannelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEO_API ListSignalingChannelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>ChannelInfo</code> objects.</p>
     */
    inline const Aws::Vector<ChannelInfo>& GetChannelInfoList() const { return m_channelInfoList; }
    template<typename ChannelInfoListT = Aws::Vector<ChannelInfo>>
    void SetChannelInfoList(ChannelInfoListT&& value) { m_channelInfoListHasBeenSet = true; m_channelInfoList = std::forward<ChannelInfoListT>(value); }
    template<typename ChannelInfoListT = Aws::Vector<ChannelInfo>>
    ListSignalingChannelsResult& WithChannelInfoList(ChannelInfoListT&& value) { SetChannelInfoList(std::forward<ChannelInfoListT>(value)); return *this;}
    template<typename ChannelInfoListT = ChannelInfo>
    ListSignalingChannelsResult& AddChannelInfoList(ChannelInfoListT&& value) { m_channelInfoListHasBeenSet = true; m_channelInfoList.emplace_back(std::forward<ChannelInfoListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, the call returns this element with a token. To
     * get the next batch of streams, use this token in your next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSignalingChannelsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSignalingChannelsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ChannelInfo> m_channelInfoList;
    bool m_channelInfoListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
