/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/codedeploy/codedeploy_EXPORTS.h>
#include <aws/codedeploy/model/LifecycleErrorCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace codedeploy
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_CODEDEPLOY_API Diagnostics
  {
  public:
    Diagnostics();
    Diagnostics(const Aws::Utils::Json::JsonValue& jsonValue);
    Diagnostics& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const LifecycleErrorCode& GetErrorCode() const{ return m_errorCode; }
    
    inline void SetErrorCode(const LifecycleErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    
    inline Diagnostics&  WithErrorCode(const LifecycleErrorCode& value) { SetErrorCode(value); return *this;}

    
    inline const Aws::String& GetScriptName() const{ return m_scriptName; }
    
    inline void SetScriptName(const Aws::String& value) { m_scriptNameHasBeenSet = true; m_scriptName = value; }

    
    inline void SetScriptName(const char* value) { m_scriptNameHasBeenSet = true; m_scriptName.assign(value); }

    
    inline Diagnostics&  WithScriptName(const Aws::String& value) { SetScriptName(value); return *this;}

    
    inline Diagnostics& WithScriptName(const char* value) { SetScriptName(value); return *this;}

    
    inline const Aws::String& GetMessage() const{ return m_message; }
    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline Diagnostics&  WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline Diagnostics& WithMessage(const char* value) { SetMessage(value); return *this;}

    
    inline const Aws::String& GetLogTail() const{ return m_logTail; }
    
    inline void SetLogTail(const Aws::String& value) { m_logTailHasBeenSet = true; m_logTail = value; }

    
    inline void SetLogTail(const char* value) { m_logTailHasBeenSet = true; m_logTail.assign(value); }

    
    inline Diagnostics&  WithLogTail(const Aws::String& value) { SetLogTail(value); return *this;}

    
    inline Diagnostics& WithLogTail(const char* value) { SetLogTail(value); return *this;}

  private:
    LifecycleErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet;
    Aws::String m_scriptName;
    bool m_scriptNameHasBeenSet;
    Aws::String m_message;
    bool m_messageHasBeenSet;
    Aws::String m_logTail;
    bool m_logTailHasBeenSet;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws
