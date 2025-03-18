/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
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
namespace GameLiftStreams
{
namespace Model
{
  class CreateStreamSessionConnectionResult
  {
  public:
    AWS_GAMELIFTSTREAMS_API CreateStreamSessionConnectionResult() = default;
    AWS_GAMELIFTSTREAMS_API CreateStreamSessionConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFTSTREAMS_API CreateStreamSessionConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The WebRTC answer string that the stream server generates in response to the
     * <code>SignalRequest</code>. </p>
     */
    inline const Aws::String& GetSignalResponse() const { return m_signalResponse; }
    template<typename SignalResponseT = Aws::String>
    void SetSignalResponse(SignalResponseT&& value) { m_signalResponseHasBeenSet = true; m_signalResponse = std::forward<SignalResponseT>(value); }
    template<typename SignalResponseT = Aws::String>
    CreateStreamSessionConnectionResult& WithSignalResponse(SignalResponseT&& value) { SetSignalResponse(std::forward<SignalResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateStreamSessionConnectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_signalResponse;
    bool m_signalResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
