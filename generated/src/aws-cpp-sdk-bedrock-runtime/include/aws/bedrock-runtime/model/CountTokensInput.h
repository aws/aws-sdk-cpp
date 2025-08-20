/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/InvokeModelTokensRequest.h>
#include <aws/bedrock-runtime/model/ConverseTokensRequest.h>
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
   * <p>The input value for token counting. The value should be either an
   * <code>InvokeModel</code> or <code>Converse</code> request body. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/CountTokensInput">AWS
   * API Reference</a></p>
   */
  class CountTokensInput
  {
  public:
    AWS_BEDROCKRUNTIME_API CountTokensInput() = default;
    AWS_BEDROCKRUNTIME_API CountTokensInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API CountTokensInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An <code>InvokeModel</code> request for which to count tokens. Use this field
     * when you want to count tokens for a raw text input that would be sent to the
     * <code>InvokeModel</code> operation.</p>
     */
    inline const InvokeModelTokensRequest& GetInvokeModel() const { return m_invokeModel; }
    inline bool InvokeModelHasBeenSet() const { return m_invokeModelHasBeenSet; }
    template<typename InvokeModelT = InvokeModelTokensRequest>
    void SetInvokeModel(InvokeModelT&& value) { m_invokeModelHasBeenSet = true; m_invokeModel = std::forward<InvokeModelT>(value); }
    template<typename InvokeModelT = InvokeModelTokensRequest>
    CountTokensInput& WithInvokeModel(InvokeModelT&& value) { SetInvokeModel(std::forward<InvokeModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>Converse</code> request for which to count tokens. Use this field
     * when you want to count tokens for a conversation-based input that would be sent
     * to the <code>Converse</code> operation.</p>
     */
    inline const ConverseTokensRequest& GetConverse() const { return m_converse; }
    inline bool ConverseHasBeenSet() const { return m_converseHasBeenSet; }
    template<typename ConverseT = ConverseTokensRequest>
    void SetConverse(ConverseT&& value) { m_converseHasBeenSet = true; m_converse = std::forward<ConverseT>(value); }
    template<typename ConverseT = ConverseTokensRequest>
    CountTokensInput& WithConverse(ConverseT&& value) { SetConverse(std::forward<ConverseT>(value)); return *this;}
    ///@}
  private:

    InvokeModelTokensRequest m_invokeModel;
    bool m_invokeModelHasBeenSet = false;

    ConverseTokensRequest m_converse;
    bool m_converseHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
