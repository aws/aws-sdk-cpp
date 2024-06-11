﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/Message.h>
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
   * <p>The output from a call to <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_runtime_Converse.html">Converse</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ConverseOutput">AWS
   * API Reference</a></p>
   */
  class ConverseOutput
  {
  public:
    AWS_BEDROCKRUNTIME_API ConverseOutput();
    AWS_BEDROCKRUNTIME_API ConverseOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ConverseOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The message that the model generates.</p>
     */
    inline const Message& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Message& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Message&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline ConverseOutput& WithMessage(const Message& value) { SetMessage(value); return *this;}
    inline ConverseOutput& WithMessage(Message&& value) { SetMessage(std::move(value)); return *this;}
    ///@}
  private:

    Message m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
