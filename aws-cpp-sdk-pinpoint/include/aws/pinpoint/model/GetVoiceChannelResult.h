/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/VoiceChannelResponse.h>
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
namespace Pinpoint
{
namespace Model
{
  class GetVoiceChannelResult
  {
  public:
    AWS_PINPOINT_API GetVoiceChannelResult();
    AWS_PINPOINT_API GetVoiceChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API GetVoiceChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const VoiceChannelResponse& GetVoiceChannelResponse() const{ return m_voiceChannelResponse; }

    
    inline void SetVoiceChannelResponse(const VoiceChannelResponse& value) { m_voiceChannelResponse = value; }

    
    inline void SetVoiceChannelResponse(VoiceChannelResponse&& value) { m_voiceChannelResponse = std::move(value); }

    
    inline GetVoiceChannelResult& WithVoiceChannelResponse(const VoiceChannelResponse& value) { SetVoiceChannelResponse(value); return *this;}

    
    inline GetVoiceChannelResult& WithVoiceChannelResponse(VoiceChannelResponse&& value) { SetVoiceChannelResponse(std::move(value)); return *this;}

  private:

    VoiceChannelResponse m_voiceChannelResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
