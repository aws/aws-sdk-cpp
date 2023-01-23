/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
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
  class DescribeSignalingChannelResult
  {
  public:
    AWS_KINESISVIDEO_API DescribeSignalingChannelResult();
    AWS_KINESISVIDEO_API DescribeSignalingChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEO_API DescribeSignalingChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that encapsulates the specified signaling channel's metadata and
     * properties.</p>
     */
    inline const ChannelInfo& GetChannelInfo() const{ return m_channelInfo; }

    /**
     * <p>A structure that encapsulates the specified signaling channel's metadata and
     * properties.</p>
     */
    inline void SetChannelInfo(const ChannelInfo& value) { m_channelInfo = value; }

    /**
     * <p>A structure that encapsulates the specified signaling channel's metadata and
     * properties.</p>
     */
    inline void SetChannelInfo(ChannelInfo&& value) { m_channelInfo = std::move(value); }

    /**
     * <p>A structure that encapsulates the specified signaling channel's metadata and
     * properties.</p>
     */
    inline DescribeSignalingChannelResult& WithChannelInfo(const ChannelInfo& value) { SetChannelInfo(value); return *this;}

    /**
     * <p>A structure that encapsulates the specified signaling channel's metadata and
     * properties.</p>
     */
    inline DescribeSignalingChannelResult& WithChannelInfo(ChannelInfo&& value) { SetChannelInfo(std::move(value)); return *this;}

  private:

    ChannelInfo m_channelInfo;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
