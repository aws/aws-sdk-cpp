/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
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
namespace BedrockRuntime
{
namespace Model
{
  class CountTokensResult
  {
  public:
    AWS_BEDROCKRUNTIME_API CountTokensResult() = default;
    AWS_BEDROCKRUNTIME_API CountTokensResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKRUNTIME_API CountTokensResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The number of tokens in the provided input according to the specified model's
     * tokenization rules. This count represents the number of input tokens that would
     * be processed if the same input were sent to the model in an inference request.
     * Use this value to estimate costs and ensure your inputs stay within model token
     * limits.</p>
     */
    inline int GetInputTokens() const { return m_inputTokens; }
    inline void SetInputTokens(int value) { m_inputTokensHasBeenSet = true; m_inputTokens = value; }
    inline CountTokensResult& WithInputTokens(int value) { SetInputTokens(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CountTokensResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_inputTokens{0};
    bool m_inputTokensHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
