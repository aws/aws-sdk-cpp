/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-projects/IoT1ClickProjects_EXPORTS.h>
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
namespace IoT1ClickProjects
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/TooManyRequestsException">AWS
   * API Reference</a></p>
   */
  class TooManyRequestsException
  {
  public:
    AWS_IOT1CLICKPROJECTS_API TooManyRequestsException();
    AWS_IOT1CLICKPROJECTS_API TooManyRequestsException(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT1CLICKPROJECTS_API TooManyRequestsException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT1CLICKPROJECTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetCode() const{ return m_code; }

    
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    
    inline TooManyRequestsException& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    
    inline TooManyRequestsException& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    
    inline TooManyRequestsException& WithCode(const char* value) { SetCode(value); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline TooManyRequestsException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline TooManyRequestsException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline TooManyRequestsException& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT1ClickProjects
} // namespace Aws
