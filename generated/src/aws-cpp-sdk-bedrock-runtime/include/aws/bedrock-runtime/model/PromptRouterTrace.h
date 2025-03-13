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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>A prompt router trace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/PromptRouterTrace">AWS
   * API Reference</a></p>
   */
  class PromptRouterTrace
  {
  public:
    AWS_BEDROCKRUNTIME_API PromptRouterTrace() = default;
    AWS_BEDROCKRUNTIME_API PromptRouterTrace(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API PromptRouterTrace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the invoked model.</p>
     */
    inline const Aws::String& GetInvokedModelId() const { return m_invokedModelId; }
    inline bool InvokedModelIdHasBeenSet() const { return m_invokedModelIdHasBeenSet; }
    template<typename InvokedModelIdT = Aws::String>
    void SetInvokedModelId(InvokedModelIdT&& value) { m_invokedModelIdHasBeenSet = true; m_invokedModelId = std::forward<InvokedModelIdT>(value); }
    template<typename InvokedModelIdT = Aws::String>
    PromptRouterTrace& WithInvokedModelId(InvokedModelIdT&& value) { SetInvokedModelId(std::forward<InvokedModelIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_invokedModelId;
    bool m_invokedModelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
