/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_KINESISVIDEO_API CreateSignalingChannelResult
  {
  public:
    CreateSignalingChannelResult();
    CreateSignalingChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateSignalingChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the created channel.</p>
     */
    inline const Aws::String& GetChannelARN() const{ return m_channelARN; }

    /**
     * <p>The ARN of the created channel.</p>
     */
    inline void SetChannelARN(const Aws::String& value) { m_channelARN = value; }

    /**
     * <p>The ARN of the created channel.</p>
     */
    inline void SetChannelARN(Aws::String&& value) { m_channelARN = std::move(value); }

    /**
     * <p>The ARN of the created channel.</p>
     */
    inline void SetChannelARN(const char* value) { m_channelARN.assign(value); }

    /**
     * <p>The ARN of the created channel.</p>
     */
    inline CreateSignalingChannelResult& WithChannelARN(const Aws::String& value) { SetChannelARN(value); return *this;}

    /**
     * <p>The ARN of the created channel.</p>
     */
    inline CreateSignalingChannelResult& WithChannelARN(Aws::String&& value) { SetChannelARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the created channel.</p>
     */
    inline CreateSignalingChannelResult& WithChannelARN(const char* value) { SetChannelARN(value); return *this;}

  private:

    Aws::String m_channelARN;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
