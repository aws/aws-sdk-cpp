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
    AWS_APPSTREAM_API ScriptDetails();
    AWS_APPSTREAM_API ScriptDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API ScriptDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The S3 object location for the script.</p>
     */
    inline const S3Location& GetScriptS3Location() const{ return m_scriptS3Location; }
    inline bool ScriptS3LocationHasBeenSet() const { return m_scriptS3LocationHasBeenSet; }
    inline void SetScriptS3Location(const S3Location& value) { m_scriptS3LocationHasBeenSet = true; m_scriptS3Location = value; }
    inline void SetScriptS3Location(S3Location&& value) { m_scriptS3LocationHasBeenSet = true; m_scriptS3Location = std::move(value); }
    inline ScriptDetails& WithScriptS3Location(const S3Location& value) { SetScriptS3Location(value); return *this;}
    inline ScriptDetails& WithScriptS3Location(S3Location&& value) { SetScriptS3Location(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run path for the script.</p>
     */
    inline const Aws::String& GetExecutablePath() const{ return m_executablePath; }
    inline bool ExecutablePathHasBeenSet() const { return m_executablePathHasBeenSet; }
    inline void SetExecutablePath(const Aws::String& value) { m_executablePathHasBeenSet = true; m_executablePath = value; }
    inline void SetExecutablePath(Aws::String&& value) { m_executablePathHasBeenSet = true; m_executablePath = std::move(value); }
    inline void SetExecutablePath(const char* value) { m_executablePathHasBeenSet = true; m_executablePath.assign(value); }
    inline ScriptDetails& WithExecutablePath(const Aws::String& value) { SetExecutablePath(value); return *this;}
    inline ScriptDetails& WithExecutablePath(Aws::String&& value) { SetExecutablePath(std::move(value)); return *this;}
    inline ScriptDetails& WithExecutablePath(const char* value) { SetExecutablePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime parameters passed to the run path for the script.</p>
     */
    inline const Aws::String& GetExecutableParameters() const{ return m_executableParameters; }
    inline bool ExecutableParametersHasBeenSet() const { return m_executableParametersHasBeenSet; }
    inline void SetExecutableParameters(const Aws::String& value) { m_executableParametersHasBeenSet = true; m_executableParameters = value; }
    inline void SetExecutableParameters(Aws::String&& value) { m_executableParametersHasBeenSet = true; m_executableParameters = std::move(value); }
    inline void SetExecutableParameters(const char* value) { m_executableParametersHasBeenSet = true; m_executableParameters.assign(value); }
    inline ScriptDetails& WithExecutableParameters(const Aws::String& value) { SetExecutableParameters(value); return *this;}
    inline ScriptDetails& WithExecutableParameters(Aws::String&& value) { SetExecutableParameters(std::move(value)); return *this;}
    inline ScriptDetails& WithExecutableParameters(const char* value) { SetExecutableParameters(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run timeout, in seconds, for the script.</p>
     */
    inline int GetTimeoutInSeconds() const{ return m_timeoutInSeconds; }
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

    int m_timeoutInSeconds;
    bool m_timeoutInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
