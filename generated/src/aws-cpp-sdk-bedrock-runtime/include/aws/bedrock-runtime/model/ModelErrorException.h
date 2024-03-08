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
   * <p>The request failed due to an error while processing the model.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ModelErrorException">AWS
   * API Reference</a></p>
   */
  class ModelErrorException
  {
  public:
    AWS_BEDROCKRUNTIME_API ModelErrorException();
    AWS_BEDROCKRUNTIME_API ModelErrorException(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ModelErrorException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ModelErrorException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ModelErrorException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ModelErrorException& WithMessage(const char* value) { SetMessage(value); return *this;}


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
    inline ModelErrorException& WithOriginalStatusCode(int value) { SetOriginalStatusCode(value); return *this;}


    /**
     * <p>The resource name.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The resource name.</p>
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * <p>The resource name.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The resource name.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * <p>The resource name.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>The resource name.</p>
     */
    inline ModelErrorException& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The resource name.</p>
     */
    inline ModelErrorException& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>The resource name.</p>
     */
    inline ModelErrorException& WithResourceName(const char* value) { SetResourceName(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    int m_originalStatusCode;
    bool m_originalStatusCodeHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
