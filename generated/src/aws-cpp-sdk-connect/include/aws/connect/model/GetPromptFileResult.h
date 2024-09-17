/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Connect
{
namespace Model
{
  class GetPromptFileResult
  {
  public:
    AWS_CONNECT_API GetPromptFileResult();
    AWS_CONNECT_API GetPromptFileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API GetPromptFileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A generated URL to the prompt that can be given to an unauthorized user so
     * they can access the prompt in S3.</p>
     */
    inline const Aws::String& GetPromptPresignedUrl() const{ return m_promptPresignedUrl; }
    inline void SetPromptPresignedUrl(const Aws::String& value) { m_promptPresignedUrl = value; }
    inline void SetPromptPresignedUrl(Aws::String&& value) { m_promptPresignedUrl = std::move(value); }
    inline void SetPromptPresignedUrl(const char* value) { m_promptPresignedUrl.assign(value); }
    inline GetPromptFileResult& WithPromptPresignedUrl(const Aws::String& value) { SetPromptPresignedUrl(value); return *this;}
    inline GetPromptFileResult& WithPromptPresignedUrl(Aws::String&& value) { SetPromptPresignedUrl(std::move(value)); return *this;}
    inline GetPromptFileResult& WithPromptPresignedUrl(const char* value) { SetPromptPresignedUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when this resource was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline GetPromptFileResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline GetPromptFileResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where this resource was last modified.</p>
     */
    inline const Aws::String& GetLastModifiedRegion() const{ return m_lastModifiedRegion; }
    inline void SetLastModifiedRegion(const Aws::String& value) { m_lastModifiedRegion = value; }
    inline void SetLastModifiedRegion(Aws::String&& value) { m_lastModifiedRegion = std::move(value); }
    inline void SetLastModifiedRegion(const char* value) { m_lastModifiedRegion.assign(value); }
    inline GetPromptFileResult& WithLastModifiedRegion(const Aws::String& value) { SetLastModifiedRegion(value); return *this;}
    inline GetPromptFileResult& WithLastModifiedRegion(Aws::String&& value) { SetLastModifiedRegion(std::move(value)); return *this;}
    inline GetPromptFileResult& WithLastModifiedRegion(const char* value) { SetLastModifiedRegion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetPromptFileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetPromptFileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetPromptFileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_promptPresignedUrl;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::String m_lastModifiedRegion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
