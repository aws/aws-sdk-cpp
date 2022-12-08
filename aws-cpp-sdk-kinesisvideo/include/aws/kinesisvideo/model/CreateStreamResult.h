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
  class CreateStreamResult
  {
  public:
    AWS_KINESISVIDEO_API CreateStreamResult();
    AWS_KINESISVIDEO_API CreateStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEO_API CreateStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline const Aws::String& GetStreamARN() const{ return m_streamARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline void SetStreamARN(const Aws::String& value) { m_streamARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline void SetStreamARN(Aws::String&& value) { m_streamARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline void SetStreamARN(const char* value) { m_streamARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline CreateStreamResult& WithStreamARN(const Aws::String& value) { SetStreamARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline CreateStreamResult& WithStreamARN(Aws::String&& value) { SetStreamARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline CreateStreamResult& WithStreamARN(const char* value) { SetStreamARN(value); return *this;}

  private:

    Aws::String m_streamARN;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
