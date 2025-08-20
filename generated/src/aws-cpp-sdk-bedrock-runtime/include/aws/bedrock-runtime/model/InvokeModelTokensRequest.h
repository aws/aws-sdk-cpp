/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/Array.h>
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
   * <p>The body of an <code>InvokeModel</code> API request for token counting. This
   * structure mirrors the input format for the <code>InvokeModel</code> operation,
   * allowing you to count tokens for raw text inference requests.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/InvokeModelTokensRequest">AWS
   * API Reference</a></p>
   */
  class InvokeModelTokensRequest
  {
  public:
    AWS_BEDROCKRUNTIME_API InvokeModelTokensRequest() = default;
    AWS_BEDROCKRUNTIME_API InvokeModelTokensRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API InvokeModelTokensRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The request body to count tokens for, formatted according to the model's
     * expected input format. To learn about the input format for different models, see
     * <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-parameters.html">Model
     * inference parameters and responses</a>.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetBody() const { return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    template<typename BodyT = Aws::Utils::CryptoBuffer>
    void SetBody(BodyT&& value) { m_bodyHasBeenSet = true; m_body = std::forward<BodyT>(value); }
    template<typename BodyT = Aws::Utils::CryptoBuffer>
    InvokeModelTokensRequest& WithBody(BodyT&& value) { SetBody(std::forward<BodyT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::CryptoBuffer m_body{};
    bool m_bodyHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
