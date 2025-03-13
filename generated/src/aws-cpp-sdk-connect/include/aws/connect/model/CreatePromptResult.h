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
    AWS_CONNECT_API CreatePromptResult() = default;
    AWS_CONNECT_API CreatePromptResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreatePromptResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the prompt.</p>
     */
    inline const Aws::String& GetPromptARN() const { return m_promptARN; }
    template<typename PromptARNT = Aws::String>
    void SetPromptARN(PromptARNT&& value) { m_promptARNHasBeenSet = true; m_promptARN = std::forward<PromptARNT>(value); }
    template<typename PromptARNT = Aws::String>
    CreatePromptResult& WithPromptARN(PromptARNT&& value) { SetPromptARN(std::forward<PromptARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the prompt.</p>
     */
    inline const Aws::String& GetPromptId() const { return m_promptId; }
    template<typename PromptIdT = Aws::String>
    void SetPromptId(PromptIdT&& value) { m_promptIdHasBeenSet = true; m_promptId = std::forward<PromptIdT>(value); }
    template<typename PromptIdT = Aws::String>
    CreatePromptResult& WithPromptId(PromptIdT&& value) { SetPromptId(std::forward<PromptIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreatePromptResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_promptARN;
    bool m_promptARNHasBeenSet = false;

    Aws::String m_promptId;
    bool m_promptIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
