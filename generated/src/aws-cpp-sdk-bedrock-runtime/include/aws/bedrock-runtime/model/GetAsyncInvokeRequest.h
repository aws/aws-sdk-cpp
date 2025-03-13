/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/BedrockRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

  /**
   */
  class GetAsyncInvokeRequest : public BedrockRuntimeRequest
  {
  public:
    AWS_BEDROCKRUNTIME_API GetAsyncInvokeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetAsyncInvoke"; }

    AWS_BEDROCKRUNTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The invocation's ARN.</p>
     */
    inline const Aws::String& GetInvocationArn() const { return m_invocationArn; }
    inline bool InvocationArnHasBeenSet() const { return m_invocationArnHasBeenSet; }
    template<typename InvocationArnT = Aws::String>
    void SetInvocationArn(InvocationArnT&& value) { m_invocationArnHasBeenSet = true; m_invocationArn = std::forward<InvocationArnT>(value); }
    template<typename InvocationArnT = Aws::String>
    GetAsyncInvokeRequest& WithInvocationArn(InvocationArnT&& value) { SetInvocationArn(std::forward<InvocationArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_invocationArn;
    bool m_invocationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
