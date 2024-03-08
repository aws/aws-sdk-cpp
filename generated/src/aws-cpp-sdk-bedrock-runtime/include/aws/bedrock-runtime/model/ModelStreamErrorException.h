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
   * <p>An error occurred while streaming the response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ModelStreamErrorException">AWS
   * API Reference</a></p>
   */
  class ModelStreamErrorException
  {
  public:
    AWS_BEDROCKRUNTIME_API ModelStreamErrorException();
    AWS_BEDROCKRUNTIME_API ModelStreamErrorException(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ModelStreamErrorException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ModelStreamErrorException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ModelStreamErrorException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ModelStreamErrorException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The original status code.</p>
     */
    inline int GetOriginalStatusCode() const{ return m_originalStatusCode; }

    /**
     * <p>The original status code.</p>
     */
    inline bool OriginalStatusCodeHasBeenSet() const { return m_originalStatusCodeHasBeenSet; }

    /**
     * <p>The original status code.</p>
     */
    inline void SetOriginalStatusCode(int value) { m_originalStatusCodeHasBeenSet = true; m_originalStatusCode = value; }

    /**
     * <p>The original status code.</p>
     */
    inline ModelStreamErrorException& WithOriginalStatusCode(int value) { SetOriginalStatusCode(value); return *this;}


    /**
     * <p>The original message.</p>
     */
    inline const Aws::String& GetOriginalMessage() const{ return m_originalMessage; }

    /**
     * <p>The original message.</p>
     */
    inline bool OriginalMessageHasBeenSet() const { return m_originalMessageHasBeenSet; }

    /**
     * <p>The original message.</p>
     */
    inline void SetOriginalMessage(const Aws::String& value) { m_originalMessageHasBeenSet = true; m_originalMessage = value; }

    /**
     * <p>The original message.</p>
     */
    inline void SetOriginalMessage(Aws::String&& value) { m_originalMessageHasBeenSet = true; m_originalMessage = std::move(value); }

    /**
     * <p>The original message.</p>
     */
    inline void SetOriginalMessage(const char* value) { m_originalMessageHasBeenSet = true; m_originalMessage.assign(value); }

    /**
     * <p>The original message.</p>
     */
    inline ModelStreamErrorException& WithOriginalMessage(const Aws::String& value) { SetOriginalMessage(value); return *this;}

    /**
     * <p>The original message.</p>
     */
    inline ModelStreamErrorException& WithOriginalMessage(Aws::String&& value) { SetOriginalMessage(std::move(value)); return *this;}

    /**
     * <p>The original message.</p>
     */
    inline ModelStreamErrorException& WithOriginalMessage(const char* value) { SetOriginalMessage(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    int m_originalStatusCode;
    bool m_originalStatusCodeHasBeenSet = false;

    Aws::String m_originalMessage;
    bool m_originalMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
