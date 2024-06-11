﻿/**
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


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the stream.</p>
     */
    inline const Aws::String& GetStreamARN() const{ return m_streamARN; }
    inline void SetStreamARN(const Aws::String& value) { m_streamARN = value; }
    inline void SetStreamARN(Aws::String&& value) { m_streamARN = std::move(value); }
    inline void SetStreamARN(const char* value) { m_streamARN.assign(value); }
    inline CreateStreamResult& WithStreamARN(const Aws::String& value) { SetStreamARN(value); return *this;}
    inline CreateStreamResult& WithStreamARN(Aws::String&& value) { SetStreamARN(std::move(value)); return *this;}
    inline CreateStreamResult& WithStreamARN(const char* value) { SetStreamARN(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateStreamResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateStreamResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateStreamResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_streamARN;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
