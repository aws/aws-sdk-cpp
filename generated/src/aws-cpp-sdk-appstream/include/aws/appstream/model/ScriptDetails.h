/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/S3Location.h>
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
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes the details of the script.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ScriptDetails">AWS
   * API Reference</a></p>
   */
  class ScriptDetails
  {
  public:
    AWS_APPSTREAM_API ScriptDetails() = default;
    AWS_APPSTREAM_API ScriptDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API ScriptDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The S3 object location for the script.</p>
     */
    inline const S3Location& GetScriptS3Location() const { return m_scriptS3Location; }
    inline bool ScriptS3LocationHasBeenSet() const { return m_scriptS3LocationHasBeenSet; }
    template<typename ScriptS3LocationT = S3Location>
    void SetScriptS3Location(ScriptS3LocationT&& value) { m_scriptS3LocationHasBeenSet = true; m_scriptS3Location = std::forward<ScriptS3LocationT>(value); }
    template<typename ScriptS3LocationT = S3Location>
    ScriptDetails& WithScriptS3Location(ScriptS3LocationT&& value) { SetScriptS3Location(std::forward<ScriptS3LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run path for the script.</p>
     */
    inline const Aws::String& GetExecutablePath() const { return m_executablePath; }
    inline bool ExecutablePathHasBeenSet() const { return m_executablePathHasBeenSet; }
    template<typename ExecutablePathT = Aws::String>
    void SetExecutablePath(ExecutablePathT&& value) { m_executablePathHasBeenSet = true; m_executablePath = std::forward<ExecutablePathT>(value); }
    template<typename ExecutablePathT = Aws::String>
    ScriptDetails& WithExecutablePath(ExecutablePathT&& value) { SetExecutablePath(std::forward<ExecutablePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime parameters passed to the run path for the script.</p>
     */
    inline const Aws::String& GetExecutableParameters() const { return m_executableParameters; }
    inline bool ExecutableParametersHasBeenSet() const { return m_executableParametersHasBeenSet; }
    template<typename ExecutableParametersT = Aws::String>
    void SetExecutableParameters(ExecutableParametersT&& value) { m_executableParametersHasBeenSet = true; m_executableParameters = std::forward<ExecutableParametersT>(value); }
    template<typename ExecutableParametersT = Aws::String>
    ScriptDetails& WithExecutableParameters(ExecutableParametersT&& value) { SetExecutableParameters(std::forward<ExecutableParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run timeout, in seconds, for the script.</p>
     */
    inline int GetTimeoutInSeconds() const { return m_timeoutInSeconds; }
    inline bool TimeoutInSecondsHasBeenSet() const { return m_timeoutInSecondsHasBeenSet; }
    inline void SetTimeoutInSeconds(int value) { m_timeoutInSecondsHasBeenSet = true; m_timeoutInSeconds = value; }
    inline ScriptDetails& WithTimeoutInSeconds(int value) { SetTimeoutInSeconds(value); return *this;}
    ///@}
  private:

    S3Location m_scriptS3Location;
    bool m_scriptS3LocationHasBeenSet = false;

    Aws::String m_executablePath;
    bool m_executablePathHasBeenSet = false;

    Aws::String m_executableParameters;
    bool m_executableParametersHasBeenSet = false;

    int m_timeoutInSeconds{0};
    bool m_timeoutInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
