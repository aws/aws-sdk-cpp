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
    AWS_GAMELIFTSTREAMS_API CreateStreamSessionConnectionResult();
    AWS_GAMELIFTSTREAMS_API CreateStreamSessionConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFTSTREAMS_API CreateStreamSessionConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The WebRTC answer string that the stream server generates in response to the
     * <code>SignalRequest</code>. </p>
     */
    inline const Aws::String& GetSignalResponse() const{ return m_signalResponse; }
    inline void SetSignalResponse(const Aws::String& value) { m_signalResponse = value; }
    inline void SetSignalResponse(Aws::String&& value) { m_signalResponse = std::move(value); }
    inline void SetSignalResponse(const char* value) { m_signalResponse.assign(value); }
    inline CreateStreamSessionConnectionResult& WithSignalResponse(const Aws::String& value) { SetSignalResponse(value); return *this;}
    inline CreateStreamSessionConnectionResult& WithSignalResponse(Aws::String&& value) { SetSignalResponse(std::move(value)); return *this;}
    inline CreateStreamSessionConnectionResult& WithSignalResponse(const char* value) { SetSignalResponse(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateStreamSessionConnectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateStreamSessionConnectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateStreamSessionConnectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_signalResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
