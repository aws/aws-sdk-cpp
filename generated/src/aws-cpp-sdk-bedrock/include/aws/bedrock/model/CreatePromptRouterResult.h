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
    AWS_BEDROCK_API CreatePromptRouterResult() = default;
    AWS_BEDROCK_API CreatePromptRouterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API CreatePromptRouterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that uniquely identifies the prompt
     * router.</p>
     */
    inline const Aws::String& GetPromptRouterArn() const { return m_promptRouterArn; }
    template<typename PromptRouterArnT = Aws::String>
    void SetPromptRouterArn(PromptRouterArnT&& value) { m_promptRouterArnHasBeenSet = true; m_promptRouterArn = std::forward<PromptRouterArnT>(value); }
    template<typename PromptRouterArnT = Aws::String>
    CreatePromptRouterResult& WithPromptRouterArn(PromptRouterArnT&& value) { SetPromptRouterArn(std::forward<PromptRouterArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreatePromptRouterResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_promptRouterArn;
    bool m_promptRouterArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
