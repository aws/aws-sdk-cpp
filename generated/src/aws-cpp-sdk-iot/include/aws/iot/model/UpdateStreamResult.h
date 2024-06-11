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
  class UpdateStreamResult
  {
  public:
    AWS_IOT_API UpdateStreamResult();
    AWS_IOT_API UpdateStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API UpdateStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The stream ID.</p>
     */
    inline const Aws::String& GetStreamId() const{ return m_streamId; }
    inline void SetStreamId(const Aws::String& value) { m_streamId = value; }
    inline void SetStreamId(Aws::String&& value) { m_streamId = std::move(value); }
    inline void SetStreamId(const char* value) { m_streamId.assign(value); }
    inline UpdateStreamResult& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}
    inline UpdateStreamResult& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}
    inline UpdateStreamResult& WithStreamId(const char* value) { SetStreamId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stream ARN.</p>
     */
    inline const Aws::String& GetStreamArn() const{ return m_streamArn; }
    inline void SetStreamArn(const Aws::String& value) { m_streamArn = value; }
    inline void SetStreamArn(Aws::String&& value) { m_streamArn = std::move(value); }
    inline void SetStreamArn(const char* value) { m_streamArn.assign(value); }
    inline UpdateStreamResult& WithStreamArn(const Aws::String& value) { SetStreamArn(value); return *this;}
    inline UpdateStreamResult& WithStreamArn(Aws::String&& value) { SetStreamArn(std::move(value)); return *this;}
    inline UpdateStreamResult& WithStreamArn(const char* value) { SetStreamArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the stream.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline UpdateStreamResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateStreamResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateStreamResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stream version.</p>
     */
    inline int GetStreamVersion() const{ return m_streamVersion; }
    inline void SetStreamVersion(int value) { m_streamVersion = value; }
    inline UpdateStreamResult& WithStreamVersion(int value) { SetStreamVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateStreamResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateStreamResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateStreamResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
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
