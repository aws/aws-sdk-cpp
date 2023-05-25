/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
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
namespace DLM
{
namespace Model
{

  /**
   * <p>The request failed because a limit was exceeded.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/LimitExceededException">AWS
   * API Reference</a></p>
   */
  class LimitExceededException
  {
  public:
    AWS_DLM_API LimitExceededException();
    AWS_DLM_API LimitExceededException(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API LimitExceededException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline LimitExceededException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline LimitExceededException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline LimitExceededException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::String& GetCode() const{ return m_code; }

    
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    
    inline LimitExceededException& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    
    inline LimitExceededException& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    
    inline LimitExceededException& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>Value is the type of resource for which a limit was exceeded.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Value is the type of resource for which a limit was exceeded.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Value is the type of resource for which a limit was exceeded.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Value is the type of resource for which a limit was exceeded.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Value is the type of resource for which a limit was exceeded.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>Value is the type of resource for which a limit was exceeded.</p>
     */
    inline LimitExceededException& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>Value is the type of resource for which a limit was exceeded.</p>
     */
    inline LimitExceededException& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>Value is the type of resource for which a limit was exceeded.</p>
     */
    inline LimitExceededException& WithResourceType(const char* value) { SetResourceType(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
