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
  class CreateChannelResult
  {
  public:
    AWS_IVS_API CreateChannelResult();
    AWS_IVS_API CreateChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVS_API CreateChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p/>
     */
    inline const Channel& GetChannel() const{ return m_channel; }

    /**
     * <p/>
     */
    inline void SetChannel(const Channel& value) { m_channel = value; }

    /**
     * <p/>
     */
    inline void SetChannel(Channel&& value) { m_channel = std::move(value); }

    /**
     * <p/>
     */
    inline CreateChannelResult& WithChannel(const Channel& value) { SetChannel(value); return *this;}

    /**
     * <p/>
     */
    inline CreateChannelResult& WithChannel(Channel&& value) { SetChannel(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const StreamKey& GetStreamKey() const{ return m_streamKey; }

    /**
     * <p/>
     */
    inline void SetStreamKey(const StreamKey& value) { m_streamKey = value; }

    /**
     * <p/>
     */
    inline void SetStreamKey(StreamKey&& value) { m_streamKey = std::move(value); }

    /**
     * <p/>
     */
    inline CreateChannelResult& WithStreamKey(const StreamKey& value) { SetStreamKey(value); return *this;}

    /**
     * <p/>
     */
    inline CreateChannelResult& WithStreamKey(StreamKey&& value) { SetStreamKey(std::move(value)); return *this;}

  private:

    Channel m_channel;

    StreamKey m_streamKey;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
