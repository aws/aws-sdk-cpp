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
   * <p>An error occurred while streaming the response. Retry your
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ModelStreamErrorException">AWS
   * API Reference</a></p>
   */
  class ModelStreamErrorException
  {
  public:
    AWS_BEDROCKRUNTIME_API ModelStreamErrorException() = default;
    AWS_BEDROCKRUNTIME_API ModelStreamErrorException(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ModelStreamErrorException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ModelStreamErrorException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The original status code.</p>
     */
    inline int GetOriginalStatusCode() const { return m_originalStatusCode; }
    inline bool OriginalStatusCodeHasBeenSet() const { return m_originalStatusCodeHasBeenSet; }
    inline void SetOriginalStatusCode(int value) { m_originalStatusCodeHasBeenSet = true; m_originalStatusCode = value; }
    inline ModelStreamErrorException& WithOriginalStatusCode(int value) { SetOriginalStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The original message.</p>
     */
    inline const Aws::String& GetOriginalMessage() const { return m_originalMessage; }
    inline bool OriginalMessageHasBeenSet() const { return m_originalMessageHasBeenSet; }
    template<typename OriginalMessageT = Aws::String>
    void SetOriginalMessage(OriginalMessageT&& value) { m_originalMessageHasBeenSet = true; m_originalMessage = std::forward<OriginalMessageT>(value); }
    template<typename OriginalMessageT = Aws::String>
    ModelStreamErrorException& WithOriginalMessage(OriginalMessageT&& value) { SetOriginalMessage(std::forward<OriginalMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    int m_originalStatusCode{0};
    bool m_originalStatusCodeHasBeenSet = false;

    Aws::String m_originalMessage;
    bool m_originalMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
