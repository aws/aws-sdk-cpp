/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntime_EXPORTS.h>
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BedrockDataAutomationRuntime
{
namespace Model
{

  /**
   * <p>Structure for request of GetDataAutomationStatus API.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-runtime-2024-06-13/GetDataAutomationStatusRequest">AWS
   * API Reference</a></p>
   */
  class GetDataAutomationStatusRequest : public BedrockDataAutomationRuntimeRequest
  {
  public:
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API GetDataAutomationStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDataAutomationStatus"; }

    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API Aws::String SerializePayload() const override;

    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Invocation arn.</p>
     */
    inline const Aws::String& GetInvocationArn() const { return m_invocationArn; }
    inline bool InvocationArnHasBeenSet() const { return m_invocationArnHasBeenSet; }
    template<typename InvocationArnT = Aws::String>
    void SetInvocationArn(InvocationArnT&& value) { m_invocationArnHasBeenSet = true; m_invocationArn = std::forward<InvocationArnT>(value); }
    template<typename InvocationArnT = Aws::String>
    GetDataAutomationStatusRequest& WithInvocationArn(InvocationArnT&& value) { SetInvocationArn(std::forward<InvocationArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_invocationArn;
    bool m_invocationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomationRuntime
} // namespace Aws
