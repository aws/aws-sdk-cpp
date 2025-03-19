/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/model/ChannelInfo.h>
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
namespace KinesisVideo
{
namespace Model
{
  class DescribeSignalingChannelResult
  {
  public:
    AWS_KINESISVIDEO_API DescribeSignalingChannelResult() = default;
    AWS_KINESISVIDEO_API DescribeSignalingChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEO_API DescribeSignalingChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure that encapsulates the specified signaling channel's metadata and
     * properties.</p>
     */
    inline const ChannelInfo& GetChannelInfo() const { return m_channelInfo; }
    template<typename ChannelInfoT = ChannelInfo>
    void SetChannelInfo(ChannelInfoT&& value) { m_channelInfoHasBeenSet = true; m_channelInfo = std::forward<ChannelInfoT>(value); }
    template<typename ChannelInfoT = ChannelInfo>
    DescribeSignalingChannelResult& WithChannelInfo(ChannelInfoT&& value) { SetChannelInfo(std::forward<ChannelInfoT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSignalingChannelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ChannelInfo m_channelInfo;
    bool m_channelInfoHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
