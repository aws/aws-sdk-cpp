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
    AWS_KINESISVIDEO_API CreateSignalingChannelResult();
    AWS_KINESISVIDEO_API CreateSignalingChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEO_API CreateSignalingChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the created channel.</p>
     */
    inline const Aws::String& GetChannelARN() const{ return m_channelARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the created channel.</p>
     */
    inline void SetChannelARN(const Aws::String& value) { m_channelARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the created channel.</p>
     */
    inline void SetChannelARN(Aws::String&& value) { m_channelARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the created channel.</p>
     */
    inline void SetChannelARN(const char* value) { m_channelARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the created channel.</p>
     */
    inline CreateSignalingChannelResult& WithChannelARN(const Aws::String& value) { SetChannelARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the created channel.</p>
     */
    inline CreateSignalingChannelResult& WithChannelARN(Aws::String&& value) { SetChannelARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the created channel.</p>
     */
    inline CreateSignalingChannelResult& WithChannelARN(const char* value) { SetChannelARN(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateSignalingChannelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateSignalingChannelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateSignalingChannelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_channelARN;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
