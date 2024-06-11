/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{
  class CreateStreamResult
  {
  public:
    AWS_IOT_API CreateStreamResult();
    AWS_IOT_API CreateStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API CreateStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The stream ID.</p>
     */
    inline const Aws::String& GetStreamId() const{ return m_streamId; }
    inline void SetStreamId(const Aws::String& value) { m_streamId = value; }
    inline void SetStreamId(Aws::String&& value) { m_streamId = std::move(value); }
    inline void SetStreamId(const char* value) { m_streamId.assign(value); }
    inline CreateStreamResult& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}
    inline CreateStreamResult& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}
    inline CreateStreamResult& WithStreamId(const char* value) { SetStreamId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stream ARN.</p>
     */
    inline const Aws::String& GetStreamArn() const{ return m_streamArn; }
    inline void SetStreamArn(const Aws::String& value) { m_streamArn = value; }
    inline void SetStreamArn(Aws::String&& value) { m_streamArn = std::move(value); }
    inline void SetStreamArn(const char* value) { m_streamArn.assign(value); }
    inline CreateStreamResult& WithStreamArn(const Aws::String& value) { SetStreamArn(value); return *this;}
    inline CreateStreamResult& WithStreamArn(Aws::String&& value) { SetStreamArn(std::move(value)); return *this;}
    inline CreateStreamResult& WithStreamArn(const char* value) { SetStreamArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the stream.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateStreamResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateStreamResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateStreamResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the stream.</p>
     */
    inline int GetStreamVersion() const{ return m_streamVersion; }
    inline void SetStreamVersion(int value) { m_streamVersion = value; }
    inline CreateStreamResult& WithStreamVersion(int value) { SetStreamVersion(value); return *this;}
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

    Aws::String m_streamId;

    Aws::String m_streamArn;

    Aws::String m_description;

    int m_streamVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
