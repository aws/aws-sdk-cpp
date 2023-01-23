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


    /**
     * <p>The S3 object location for the script.</p>
     */
    inline const S3Location& GetScriptS3Location() const{ return m_scriptS3Location; }

    /**
     * <p>The S3 object location for the script.</p>
     */
    inline bool ScriptS3LocationHasBeenSet() const { return m_scriptS3LocationHasBeenSet; }

    /**
     * <p>The S3 object location for the script.</p>
     */
    inline void SetScriptS3Location(const S3Location& value) { m_scriptS3LocationHasBeenSet = true; m_scriptS3Location = value; }

    /**
     * <p>The S3 object location for the script.</p>
     */
    inline void SetScriptS3Location(S3Location&& value) { m_scriptS3LocationHasBeenSet = true; m_scriptS3Location = std::move(value); }

    /**
     * <p>The S3 object location for the script.</p>
     */
    inline ScriptDetails& WithScriptS3Location(const S3Location& value) { SetScriptS3Location(value); return *this;}

    /**
     * <p>The S3 object location for the script.</p>
     */
    inline ScriptDetails& WithScriptS3Location(S3Location&& value) { SetScriptS3Location(std::move(value)); return *this;}


    /**
     * <p>The run path for the script.</p>
     */
    inline const Aws::String& GetExecutablePath() const{ return m_executablePath; }

    /**
     * <p>The run path for the script.</p>
     */
    inline bool ExecutablePathHasBeenSet() const { return m_executablePathHasBeenSet; }

    /**
     * <p>The run path for the script.</p>
     */
    inline void SetExecutablePath(const Aws::String& value) { m_executablePathHasBeenSet = true; m_executablePath = value; }

    /**
     * <p>The run path for the script.</p>
     */
    inline void SetExecutablePath(Aws::String&& value) { m_executablePathHasBeenSet = true; m_executablePath = std::move(value); }

    /**
     * <p>The run path for the script.</p>
     */
    inline void SetExecutablePath(const char* value) { m_executablePathHasBeenSet = true; m_executablePath.assign(value); }

    /**
     * <p>The run path for the script.</p>
     */
    inline ScriptDetails& WithExecutablePath(const Aws::String& value) { SetExecutablePath(value); return *this;}

    /**
     * <p>The run path for the script.</p>
     */
    inline ScriptDetails& WithExecutablePath(Aws::String&& value) { SetExecutablePath(std::move(value)); return *this;}

    /**
     * <p>The run path for the script.</p>
     */
    inline ScriptDetails& WithExecutablePath(const char* value) { SetExecutablePath(value); return *this;}


    /**
     * <p>The runtime parameters passed to the run path for the script.</p>
     */
    inline const Aws::String& GetExecutableParameters() const{ return m_executableParameters; }

    /**
     * <p>The runtime parameters passed to the run path for the script.</p>
     */
    inline bool ExecutableParametersHasBeenSet() const { return m_executableParametersHasBeenSet; }

    /**
     * <p>The runtime parameters passed to the run path for the script.</p>
     */
    inline void SetExecutableParameters(const Aws::String& value) { m_executableParametersHasBeenSet = true; m_executableParameters = value; }

    /**
     * <p>The runtime parameters passed to the run path for the script.</p>
     */
    inline void SetExecutableParameters(Aws::String&& value) { m_executableParametersHasBeenSet = true; m_executableParameters = std::move(value); }

    /**
     * <p>The runtime parameters passed to the run path for the script.</p>
     */
    inline void SetExecutableParameters(const char* value) { m_executableParametersHasBeenSet = true; m_executableParameters.assign(value); }

    /**
     * <p>The runtime parameters passed to the run path for the script.</p>
     */
    inline ScriptDetails& WithExecutableParameters(const Aws::String& value) { SetExecutableParameters(value); return *this;}

    /**
     * <p>The runtime parameters passed to the run path for the script.</p>
     */
    inline ScriptDetails& WithExecutableParameters(Aws::String&& value) { SetExecutableParameters(std::move(value)); return *this;}

    /**
     * <p>The runtime parameters passed to the run path for the script.</p>
     */
    inline ScriptDetails& WithExecutableParameters(const char* value) { SetExecutableParameters(value); return *this;}


    /**
     * <p>The run timeout, in seconds, for the script.</p>
     */
    inline int GetTimeoutInSeconds() const{ return m_timeoutInSeconds; }

    /**
     * <p>The run timeout, in seconds, for the script.</p>
     */
    inline bool TimeoutInSecondsHasBeenSet() const { return m_timeoutInSecondsHasBeenSet; }

    /**
     * <p>The run timeout, in seconds, for the script.</p>
     */
    inline void SetTimeoutInSeconds(int value) { m_timeoutInSecondsHasBeenSet = true; m_timeoutInSeconds = value; }

    /**
     * <p>The run timeout, in seconds, for the script.</p>
     */
    inline ScriptDetails& WithTimeoutInSeconds(int value) { SetTimeoutInSeconds(value); return *this;}

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
