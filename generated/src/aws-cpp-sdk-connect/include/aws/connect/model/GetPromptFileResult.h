/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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


    /**
     * <p>A generated URL to the prompt that can be given to an unauthorized user so
     * they can access the prompt in S3.</p>
     */
    inline const Aws::String& GetPromptPresignedUrl() const{ return m_promptPresignedUrl; }

    /**
     * <p>A generated URL to the prompt that can be given to an unauthorized user so
     * they can access the prompt in S3.</p>
     */
    inline void SetPromptPresignedUrl(const Aws::String& value) { m_promptPresignedUrl = value; }

    /**
     * <p>A generated URL to the prompt that can be given to an unauthorized user so
     * they can access the prompt in S3.</p>
     */
    inline void SetPromptPresignedUrl(Aws::String&& value) { m_promptPresignedUrl = std::move(value); }

    /**
     * <p>A generated URL to the prompt that can be given to an unauthorized user so
     * they can access the prompt in S3.</p>
     */
    inline void SetPromptPresignedUrl(const char* value) { m_promptPresignedUrl.assign(value); }

    /**
     * <p>A generated URL to the prompt that can be given to an unauthorized user so
     * they can access the prompt in S3.</p>
     */
    inline GetPromptFileResult& WithPromptPresignedUrl(const Aws::String& value) { SetPromptPresignedUrl(value); return *this;}

    /**
     * <p>A generated URL to the prompt that can be given to an unauthorized user so
     * they can access the prompt in S3.</p>
     */
    inline GetPromptFileResult& WithPromptPresignedUrl(Aws::String&& value) { SetPromptPresignedUrl(std::move(value)); return *this;}

    /**
     * <p>A generated URL to the prompt that can be given to an unauthorized user so
     * they can access the prompt in S3.</p>
     */
    inline GetPromptFileResult& WithPromptPresignedUrl(const char* value) { SetPromptPresignedUrl(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetPromptFileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetPromptFileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetPromptFileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_promptPresignedUrl;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
