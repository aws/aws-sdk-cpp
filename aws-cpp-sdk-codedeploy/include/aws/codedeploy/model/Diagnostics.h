/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/model/LifecycleErrorCode.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Diagnostic information about executable scripts that are part of a
   * deployment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/Diagnostics">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API Diagnostics
  {
  public:
    Diagnostics();
    Diagnostics(Aws::Utils::Json::JsonView jsonValue);
    Diagnostics& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The associated error code:</p> <ul> <li> <p>Success: The specified script
     * ran.</p> </li> <li> <p>ScriptMissing: The specified script was not found in the
     * specified location.</p> </li> <li> <p>ScriptNotExecutable: The specified script
     * is not a recognized executable file type.</p> </li> <li> <p>ScriptTimedOut: The
     * specified script did not finish running in the specified time period.</p> </li>
     * <li> <p>ScriptFailed: The specified script failed to run as expected.</p> </li>
     * <li> <p>UnknownError: The specified script did not run for an unknown
     * reason.</p> </li> </ul>
     */
    inline const LifecycleErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The associated error code:</p> <ul> <li> <p>Success: The specified script
     * ran.</p> </li> <li> <p>ScriptMissing: The specified script was not found in the
     * specified location.</p> </li> <li> <p>ScriptNotExecutable: The specified script
     * is not a recognized executable file type.</p> </li> <li> <p>ScriptTimedOut: The
     * specified script did not finish running in the specified time period.</p> </li>
     * <li> <p>ScriptFailed: The specified script failed to run as expected.</p> </li>
     * <li> <p>UnknownError: The specified script did not run for an unknown
     * reason.</p> </li> </ul>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The associated error code:</p> <ul> <li> <p>Success: The specified script
     * ran.</p> </li> <li> <p>ScriptMissing: The specified script was not found in the
     * specified location.</p> </li> <li> <p>ScriptNotExecutable: The specified script
     * is not a recognized executable file type.</p> </li> <li> <p>ScriptTimedOut: The
     * specified script did not finish running in the specified time period.</p> </li>
     * <li> <p>ScriptFailed: The specified script failed to run as expected.</p> </li>
     * <li> <p>UnknownError: The specified script did not run for an unknown
     * reason.</p> </li> </ul>
     */
    inline void SetErrorCode(const LifecycleErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The associated error code:</p> <ul> <li> <p>Success: The specified script
     * ran.</p> </li> <li> <p>ScriptMissing: The specified script was not found in the
     * specified location.</p> </li> <li> <p>ScriptNotExecutable: The specified script
     * is not a recognized executable file type.</p> </li> <li> <p>ScriptTimedOut: The
     * specified script did not finish running in the specified time period.</p> </li>
     * <li> <p>ScriptFailed: The specified script failed to run as expected.</p> </li>
     * <li> <p>UnknownError: The specified script did not run for an unknown
     * reason.</p> </li> </ul>
     */
    inline void SetErrorCode(LifecycleErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The associated error code:</p> <ul> <li> <p>Success: The specified script
     * ran.</p> </li> <li> <p>ScriptMissing: The specified script was not found in the
     * specified location.</p> </li> <li> <p>ScriptNotExecutable: The specified script
     * is not a recognized executable file type.</p> </li> <li> <p>ScriptTimedOut: The
     * specified script did not finish running in the specified time period.</p> </li>
     * <li> <p>ScriptFailed: The specified script failed to run as expected.</p> </li>
     * <li> <p>UnknownError: The specified script did not run for an unknown
     * reason.</p> </li> </ul>
     */
    inline Diagnostics& WithErrorCode(const LifecycleErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The associated error code:</p> <ul> <li> <p>Success: The specified script
     * ran.</p> </li> <li> <p>ScriptMissing: The specified script was not found in the
     * specified location.</p> </li> <li> <p>ScriptNotExecutable: The specified script
     * is not a recognized executable file type.</p> </li> <li> <p>ScriptTimedOut: The
     * specified script did not finish running in the specified time period.</p> </li>
     * <li> <p>ScriptFailed: The specified script failed to run as expected.</p> </li>
     * <li> <p>UnknownError: The specified script did not run for an unknown
     * reason.</p> </li> </ul>
     */
    inline Diagnostics& WithErrorCode(LifecycleErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}


    /**
     * <p>The name of the script.</p>
     */
    inline const Aws::String& GetScriptName() const{ return m_scriptName; }

    /**
     * <p>The name of the script.</p>
     */
    inline bool ScriptNameHasBeenSet() const { return m_scriptNameHasBeenSet; }

    /**
     * <p>The name of the script.</p>
     */
    inline void SetScriptName(const Aws::String& value) { m_scriptNameHasBeenSet = true; m_scriptName = value; }

    /**
     * <p>The name of the script.</p>
     */
    inline void SetScriptName(Aws::String&& value) { m_scriptNameHasBeenSet = true; m_scriptName = std::move(value); }

    /**
     * <p>The name of the script.</p>
     */
    inline void SetScriptName(const char* value) { m_scriptNameHasBeenSet = true; m_scriptName.assign(value); }

    /**
     * <p>The name of the script.</p>
     */
    inline Diagnostics& WithScriptName(const Aws::String& value) { SetScriptName(value); return *this;}

    /**
     * <p>The name of the script.</p>
     */
    inline Diagnostics& WithScriptName(Aws::String&& value) { SetScriptName(std::move(value)); return *this;}

    /**
     * <p>The name of the script.</p>
     */
    inline Diagnostics& WithScriptName(const char* value) { SetScriptName(value); return *this;}


    /**
     * <p>The message associated with the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message associated with the error.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The message associated with the error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message associated with the error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message associated with the error.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message associated with the error.</p>
     */
    inline Diagnostics& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message associated with the error.</p>
     */
    inline Diagnostics& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message associated with the error.</p>
     */
    inline Diagnostics& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The last portion of the diagnostic log.</p> <p>If available, AWS CodeDeploy
     * returns up to the last 4 KB of the diagnostic log.</p>
     */
    inline const Aws::String& GetLogTail() const{ return m_logTail; }

    /**
     * <p>The last portion of the diagnostic log.</p> <p>If available, AWS CodeDeploy
     * returns up to the last 4 KB of the diagnostic log.</p>
     */
    inline bool LogTailHasBeenSet() const { return m_logTailHasBeenSet; }

    /**
     * <p>The last portion of the diagnostic log.</p> <p>If available, AWS CodeDeploy
     * returns up to the last 4 KB of the diagnostic log.</p>
     */
    inline void SetLogTail(const Aws::String& value) { m_logTailHasBeenSet = true; m_logTail = value; }

    /**
     * <p>The last portion of the diagnostic log.</p> <p>If available, AWS CodeDeploy
     * returns up to the last 4 KB of the diagnostic log.</p>
     */
    inline void SetLogTail(Aws::String&& value) { m_logTailHasBeenSet = true; m_logTail = std::move(value); }

    /**
     * <p>The last portion of the diagnostic log.</p> <p>If available, AWS CodeDeploy
     * returns up to the last 4 KB of the diagnostic log.</p>
     */
    inline void SetLogTail(const char* value) { m_logTailHasBeenSet = true; m_logTail.assign(value); }

    /**
     * <p>The last portion of the diagnostic log.</p> <p>If available, AWS CodeDeploy
     * returns up to the last 4 KB of the diagnostic log.</p>
     */
    inline Diagnostics& WithLogTail(const Aws::String& value) { SetLogTail(value); return *this;}

    /**
     * <p>The last portion of the diagnostic log.</p> <p>If available, AWS CodeDeploy
     * returns up to the last 4 KB of the diagnostic log.</p>
     */
    inline Diagnostics& WithLogTail(Aws::String&& value) { SetLogTail(std::move(value)); return *this;}

    /**
     * <p>The last portion of the diagnostic log.</p> <p>If available, AWS CodeDeploy
     * returns up to the last 4 KB of the diagnostic log.</p>
     */
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
} // namespace CodeDeploy
} // namespace Aws
