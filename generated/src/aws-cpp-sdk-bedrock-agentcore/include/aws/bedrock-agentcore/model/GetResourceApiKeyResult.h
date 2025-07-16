/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
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
namespace BedrockAgentCore
{
namespace Model
{
  class GetResourceApiKeyResult
  {
  public:
    AWS_BEDROCKAGENTCORE_API GetResourceApiKeyResult() = default;
    AWS_BEDROCKAGENTCORE_API GetResourceApiKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTCORE_API GetResourceApiKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The API Key associated with the resource requested.</p>
     */
    inline const Aws::String& GetApiKey() const { return m_apiKey; }
    template<typename ApiKeyT = Aws::String>
    void SetApiKey(ApiKeyT&& value) { m_apiKeyHasBeenSet = true; m_apiKey = std::forward<ApiKeyT>(value); }
    template<typename ApiKeyT = Aws::String>
    GetResourceApiKeyResult& WithApiKey(ApiKeyT&& value) { SetApiKey(std::forward<ApiKeyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetResourceApiKeyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_apiKey;
    bool m_apiKeyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
