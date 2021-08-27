/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/Channel.h>
#include <aws/ivs/model/StreamKey.h>
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
namespace IVS
{
namespace Model
{
  class AWS_IVS_API CreateChannelResult
  {
  public:
    CreateChannelResult();
    CreateChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Channel& GetChannel() const{ return m_channel; }

    
    inline void SetChannel(const Channel& value) { m_channel = value; }

    
    inline void SetChannel(Channel&& value) { m_channel = std::move(value); }

    
    inline CreateChannelResult& WithChannel(const Channel& value) { SetChannel(value); return *this;}

    
    inline CreateChannelResult& WithChannel(Channel&& value) { SetChannel(std::move(value)); return *this;}


    
    inline const StreamKey& GetStreamKey() const{ return m_streamKey; }

    
    inline void SetStreamKey(const StreamKey& value) { m_streamKey = value; }

    
    inline void SetStreamKey(StreamKey&& value) { m_streamKey = std::move(value); }

    
    inline CreateChannelResult& WithStreamKey(const StreamKey& value) { SetStreamKey(value); return *this;}

    
    inline CreateChannelResult& WithStreamKey(StreamKey&& value) { SetStreamKey(std::move(value)); return *this;}

  private:

    Channel m_channel;

    StreamKey m_streamKey;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
