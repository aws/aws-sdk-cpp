/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
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
namespace Bedrock
{
namespace Model
{
  class CreatePromptRouterResult
  {
  public:
    AWS_BEDROCK_API CreatePromptRouterResult();
    AWS_BEDROCK_API CreatePromptRouterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API CreatePromptRouterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the prompt
     * router.</p>
     */
    inline const Aws::String& GetPromptRouterArn() const{ return m_promptRouterArn; }
    inline void SetPromptRouterArn(const Aws::String& value) { m_promptRouterArn = value; }
    inline void SetPromptRouterArn(Aws::String&& value) { m_promptRouterArn = std::move(value); }
    inline void SetPromptRouterArn(const char* value) { m_promptRouterArn.assign(value); }
    inline CreatePromptRouterResult& WithPromptRouterArn(const Aws::String& value) { SetPromptRouterArn(value); return *this;}
    inline CreatePromptRouterResult& WithPromptRouterArn(Aws::String&& value) { SetPromptRouterArn(std::move(value)); return *this;}
    inline CreatePromptRouterResult& WithPromptRouterArn(const char* value) { SetPromptRouterArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreatePromptRouterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreatePromptRouterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreatePromptRouterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_promptRouterArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
