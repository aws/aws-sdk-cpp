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
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/model/EncodingType.h>
#include <aws/greengrass/model/FunctionConfigurationEnvironment.h>
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
namespace Greengrass
{
namespace Model
{

  /**
   * The configuration of the Lambda function.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/FunctionConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASS_API FunctionConfiguration
  {
  public:
    FunctionConfiguration();
    FunctionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    FunctionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The expected encoding type of the input payload for the function. The default is
     * ''json''.
     */
    inline const EncodingType& GetEncodingType() const{ return m_encodingType; }

    /**
     * The expected encoding type of the input payload for the function. The default is
     * ''json''.
     */
    inline bool EncodingTypeHasBeenSet() const { return m_encodingTypeHasBeenSet; }

    /**
     * The expected encoding type of the input payload for the function. The default is
     * ''json''.
     */
    inline void SetEncodingType(const EncodingType& value) { m_encodingTypeHasBeenSet = true; m_encodingType = value; }

    /**
     * The expected encoding type of the input payload for the function. The default is
     * ''json''.
     */
    inline void SetEncodingType(EncodingType&& value) { m_encodingTypeHasBeenSet = true; m_encodingType = std::move(value); }

    /**
     * The expected encoding type of the input payload for the function. The default is
     * ''json''.
     */
    inline FunctionConfiguration& WithEncodingType(const EncodingType& value) { SetEncodingType(value); return *this;}

    /**
     * The expected encoding type of the input payload for the function. The default is
     * ''json''.
     */
    inline FunctionConfiguration& WithEncodingType(EncodingType&& value) { SetEncodingType(std::move(value)); return *this;}


    /**
     * The environment configuration of the function.
     */
    inline const FunctionConfigurationEnvironment& GetEnvironment() const{ return m_environment; }

    /**
     * The environment configuration of the function.
     */
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }

    /**
     * The environment configuration of the function.
     */
    inline void SetEnvironment(const FunctionConfigurationEnvironment& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * The environment configuration of the function.
     */
    inline void SetEnvironment(FunctionConfigurationEnvironment&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * The environment configuration of the function.
     */
    inline FunctionConfiguration& WithEnvironment(const FunctionConfigurationEnvironment& value) { SetEnvironment(value); return *this;}

    /**
     * The environment configuration of the function.
     */
    inline FunctionConfiguration& WithEnvironment(FunctionConfigurationEnvironment&& value) { SetEnvironment(std::move(value)); return *this;}


    /**
     * The execution arguments.
     */
    inline const Aws::String& GetExecArgs() const{ return m_execArgs; }

    /**
     * The execution arguments.
     */
    inline bool ExecArgsHasBeenSet() const { return m_execArgsHasBeenSet; }

    /**
     * The execution arguments.
     */
    inline void SetExecArgs(const Aws::String& value) { m_execArgsHasBeenSet = true; m_execArgs = value; }

    /**
     * The execution arguments.
     */
    inline void SetExecArgs(Aws::String&& value) { m_execArgsHasBeenSet = true; m_execArgs = std::move(value); }

    /**
     * The execution arguments.
     */
    inline void SetExecArgs(const char* value) { m_execArgsHasBeenSet = true; m_execArgs.assign(value); }

    /**
     * The execution arguments.
     */
    inline FunctionConfiguration& WithExecArgs(const Aws::String& value) { SetExecArgs(value); return *this;}

    /**
     * The execution arguments.
     */
    inline FunctionConfiguration& WithExecArgs(Aws::String&& value) { SetExecArgs(std::move(value)); return *this;}

    /**
     * The execution arguments.
     */
    inline FunctionConfiguration& WithExecArgs(const char* value) { SetExecArgs(value); return *this;}


    /**
     * The name of the function executable.
     */
    inline const Aws::String& GetExecutable() const{ return m_executable; }

    /**
     * The name of the function executable.
     */
    inline bool ExecutableHasBeenSet() const { return m_executableHasBeenSet; }

    /**
     * The name of the function executable.
     */
    inline void SetExecutable(const Aws::String& value) { m_executableHasBeenSet = true; m_executable = value; }

    /**
     * The name of the function executable.
     */
    inline void SetExecutable(Aws::String&& value) { m_executableHasBeenSet = true; m_executable = std::move(value); }

    /**
     * The name of the function executable.
     */
    inline void SetExecutable(const char* value) { m_executableHasBeenSet = true; m_executable.assign(value); }

    /**
     * The name of the function executable.
     */
    inline FunctionConfiguration& WithExecutable(const Aws::String& value) { SetExecutable(value); return *this;}

    /**
     * The name of the function executable.
     */
    inline FunctionConfiguration& WithExecutable(Aws::String&& value) { SetExecutable(std::move(value)); return *this;}

    /**
     * The name of the function executable.
     */
    inline FunctionConfiguration& WithExecutable(const char* value) { SetExecutable(value); return *this;}


    /**
     * The memory size, in KB, which the function requires. This setting is not
     * applicable and should be cleared when you run the Lambda function without
     * containerization.
     */
    inline int GetMemorySize() const{ return m_memorySize; }

    /**
     * The memory size, in KB, which the function requires. This setting is not
     * applicable and should be cleared when you run the Lambda function without
     * containerization.
     */
    inline bool MemorySizeHasBeenSet() const { return m_memorySizeHasBeenSet; }

    /**
     * The memory size, in KB, which the function requires. This setting is not
     * applicable and should be cleared when you run the Lambda function without
     * containerization.
     */
    inline void SetMemorySize(int value) { m_memorySizeHasBeenSet = true; m_memorySize = value; }

    /**
     * The memory size, in KB, which the function requires. This setting is not
     * applicable and should be cleared when you run the Lambda function without
     * containerization.
     */
    inline FunctionConfiguration& WithMemorySize(int value) { SetMemorySize(value); return *this;}


    /**
     * True if the function is pinned. Pinned means the function is long-lived and
     * starts when the core starts.
     */
    inline bool GetPinned() const{ return m_pinned; }

    /**
     * True if the function is pinned. Pinned means the function is long-lived and
     * starts when the core starts.
     */
    inline bool PinnedHasBeenSet() const { return m_pinnedHasBeenSet; }

    /**
     * True if the function is pinned. Pinned means the function is long-lived and
     * starts when the core starts.
     */
    inline void SetPinned(bool value) { m_pinnedHasBeenSet = true; m_pinned = value; }

    /**
     * True if the function is pinned. Pinned means the function is long-lived and
     * starts when the core starts.
     */
    inline FunctionConfiguration& WithPinned(bool value) { SetPinned(value); return *this;}


    /**
     * The allowed function execution time, after which Lambda should terminate the
     * function. This timeout still applies to pinned Lambda functions for each
     * request.
     */
    inline int GetTimeout() const{ return m_timeout; }

    /**
     * The allowed function execution time, after which Lambda should terminate the
     * function. This timeout still applies to pinned Lambda functions for each
     * request.
     */
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }

    /**
     * The allowed function execution time, after which Lambda should terminate the
     * function. This timeout still applies to pinned Lambda functions for each
     * request.
     */
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * The allowed function execution time, after which Lambda should terminate the
     * function. This timeout still applies to pinned Lambda functions for each
     * request.
     */
    inline FunctionConfiguration& WithTimeout(int value) { SetTimeout(value); return *this;}

  private:

    EncodingType m_encodingType;
    bool m_encodingTypeHasBeenSet;

    FunctionConfigurationEnvironment m_environment;
    bool m_environmentHasBeenSet;

    Aws::String m_execArgs;
    bool m_execArgsHasBeenSet;

    Aws::String m_executable;
    bool m_executableHasBeenSet;

    int m_memorySize;
    bool m_memorySizeHasBeenSet;

    bool m_pinned;
    bool m_pinnedHasBeenSet;

    int m_timeout;
    bool m_timeoutHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
