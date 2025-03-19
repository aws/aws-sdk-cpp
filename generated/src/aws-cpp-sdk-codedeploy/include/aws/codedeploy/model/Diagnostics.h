/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class Diagnostics
  {
  public:
    AWS_CODEDEPLOY_API Diagnostics() = default;
    AWS_CODEDEPLOY_API Diagnostics(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Diagnostics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
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
    inline LifecycleErrorCode GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(LifecycleErrorCode value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline Diagnostics& WithErrorCode(LifecycleErrorCode value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the script.</p>
     */
    inline const Aws::String& GetScriptName() const { return m_scriptName; }
    inline bool ScriptNameHasBeenSet() const { return m_scriptNameHasBeenSet; }
    template<typename ScriptNameT = Aws::String>
    void SetScriptName(ScriptNameT&& value) { m_scriptNameHasBeenSet = true; m_scriptName = std::forward<ScriptNameT>(value); }
    template<typename ScriptNameT = Aws::String>
    Diagnostics& WithScriptName(ScriptNameT&& value) { SetScriptName(std::forward<ScriptNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message associated with the error.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    Diagnostics& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last portion of the diagnostic log.</p> <p>If available, CodeDeploy
     * returns up to the last 4 KB of the diagnostic log.</p>
     */
    inline const Aws::String& GetLogTail() const { return m_logTail; }
    inline bool LogTailHasBeenSet() const { return m_logTailHasBeenSet; }
    template<typename LogTailT = Aws::String>
    void SetLogTail(LogTailT&& value) { m_logTailHasBeenSet = true; m_logTail = std::forward<LogTailT>(value); }
    template<typename LogTailT = Aws::String>
    Diagnostics& WithLogTail(LogTailT&& value) { SetLogTail(std::forward<LogTailT>(value)); return *this;}
    ///@}
  private:

    LifecycleErrorCode m_errorCode{LifecycleErrorCode::NOT_SET};
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_scriptName;
    bool m_scriptNameHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_logTail;
    bool m_logTailHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
