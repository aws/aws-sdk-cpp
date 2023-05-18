/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/Prompt.h>
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
  class DescribePromptResult
  {
  public:
    AWS_CONNECT_API DescribePromptResult();
    AWS_CONNECT_API DescribePromptResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API DescribePromptResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the prompt.</p>
     */
    inline const Prompt& GetPrompt() const{ return m_prompt; }

    /**
     * <p>Information about the prompt.</p>
     */
    inline void SetPrompt(const Prompt& value) { m_prompt = value; }

    /**
     * <p>Information about the prompt.</p>
     */
    inline void SetPrompt(Prompt&& value) { m_prompt = std::move(value); }

    /**
     * <p>Information about the prompt.</p>
     */
    inline DescribePromptResult& WithPrompt(const Prompt& value) { SetPrompt(value); return *this;}

    /**
     * <p>Information about the prompt.</p>
     */
    inline DescribePromptResult& WithPrompt(Prompt&& value) { SetPrompt(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribePromptResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribePromptResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribePromptResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Prompt m_prompt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
