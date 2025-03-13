/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
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
  class CreateSignalingChannelResult
  {
  public:
    AWS_KINESISVIDEO_API CreateSignalingChannelResult() = default;
    AWS_KINESISVIDEO_API CreateSignalingChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEO_API CreateSignalingChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the created channel.</p>
     */
    inline const Aws::String& GetChannelARN() const { return m_channelARN; }
    template<typename ChannelARNT = Aws::String>
    void SetChannelARN(ChannelARNT&& value) { m_channelARNHasBeenSet = true; m_channelARN = std::forward<ChannelARNT>(value); }
    template<typename ChannelARNT = Aws::String>
    CreateSignalingChannelResult& WithChannelARN(ChannelARNT&& value) { SetChannelARN(std::forward<ChannelARNT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateSignalingChannelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_channelARN;
    bool m_channelARNHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
