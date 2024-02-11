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
  class CreatePromptResult
  {
  public:
    AWS_CONNECT_API CreatePromptResult();
    AWS_CONNECT_API CreatePromptResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreatePromptResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the prompt.</p>
     */
    inline const Aws::String& GetPromptARN() const{ return m_promptARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the prompt.</p>
     */
    inline void SetPromptARN(const Aws::String& value) { m_promptARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the prompt.</p>
     */
    inline void SetPromptARN(Aws::String&& value) { m_promptARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the prompt.</p>
     */
    inline void SetPromptARN(const char* value) { m_promptARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the prompt.</p>
     */
    inline CreatePromptResult& WithPromptARN(const Aws::String& value) { SetPromptARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the prompt.</p>
     */
    inline CreatePromptResult& WithPromptARN(Aws::String&& value) { SetPromptARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the prompt.</p>
     */
    inline CreatePromptResult& WithPromptARN(const char* value) { SetPromptARN(value); return *this;}


    /**
     * <p>A unique identifier for the prompt.</p>
     */
    inline const Aws::String& GetPromptId() const{ return m_promptId; }

    /**
     * <p>A unique identifier for the prompt.</p>
     */
    inline void SetPromptId(const Aws::String& value) { m_promptId = value; }

    /**
     * <p>A unique identifier for the prompt.</p>
     */
    inline void SetPromptId(Aws::String&& value) { m_promptId = std::move(value); }

    /**
     * <p>A unique identifier for the prompt.</p>
     */
    inline void SetPromptId(const char* value) { m_promptId.assign(value); }

    /**
     * <p>A unique identifier for the prompt.</p>
     */
    inline CreatePromptResult& WithPromptId(const Aws::String& value) { SetPromptId(value); return *this;}

    /**
     * <p>A unique identifier for the prompt.</p>
     */
    inline CreatePromptResult& WithPromptId(Aws::String&& value) { SetPromptId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the prompt.</p>
     */
    inline CreatePromptResult& WithPromptId(const char* value) { SetPromptId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreatePromptResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreatePromptResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreatePromptResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_promptARN;

    Aws::String m_promptId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
