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
} // namespace Json
} // namespace Utils
namespace Greengrass
{
namespace Model
{

  /**
   * Configuration of the function<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/FunctionConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASS_API FunctionConfiguration
  {
  public:
    FunctionConfiguration();
    FunctionConfiguration(const Aws::Utils::Json::JsonValue& jsonValue);
    FunctionConfiguration& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Environment of the function configuration
     */
    inline const FunctionConfigurationEnvironment& GetEnvironment() const{ return m_environment; }

    /**
     * Environment of the function configuration
     */
    inline void SetEnvironment(const FunctionConfigurationEnvironment& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * Environment of the function configuration
     */
    inline void SetEnvironment(FunctionConfigurationEnvironment&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * Environment of the function configuration
     */
    inline FunctionConfiguration& WithEnvironment(const FunctionConfigurationEnvironment& value) { SetEnvironment(value); return *this;}

    /**
     * Environment of the function configuration
     */
    inline FunctionConfiguration& WithEnvironment(FunctionConfigurationEnvironment&& value) { SetEnvironment(std::move(value)); return *this;}


    /**
     * Execution Arguments
     */
    inline const Aws::String& GetExecArgs() const{ return m_execArgs; }

    /**
     * Execution Arguments
     */
    inline void SetExecArgs(const Aws::String& value) { m_execArgsHasBeenSet = true; m_execArgs = value; }

    /**
     * Execution Arguments
     */
    inline void SetExecArgs(Aws::String&& value) { m_execArgsHasBeenSet = true; m_execArgs = std::move(value); }

    /**
     * Execution Arguments
     */
    inline void SetExecArgs(const char* value) { m_execArgsHasBeenSet = true; m_execArgs.assign(value); }

    /**
     * Execution Arguments
     */
    inline FunctionConfiguration& WithExecArgs(const Aws::String& value) { SetExecArgs(value); return *this;}

    /**
     * Execution Arguments
     */
    inline FunctionConfiguration& WithExecArgs(Aws::String&& value) { SetExecArgs(std::move(value)); return *this;}

    /**
     * Execution Arguments
     */
    inline FunctionConfiguration& WithExecArgs(const char* value) { SetExecArgs(value); return *this;}


    /**
     * Executable
     */
    inline const Aws::String& GetExecutable() const{ return m_executable; }

    /**
     * Executable
     */
    inline void SetExecutable(const Aws::String& value) { m_executableHasBeenSet = true; m_executable = value; }

    /**
     * Executable
     */
    inline void SetExecutable(Aws::String&& value) { m_executableHasBeenSet = true; m_executable = std::move(value); }

    /**
     * Executable
     */
    inline void SetExecutable(const char* value) { m_executableHasBeenSet = true; m_executable.assign(value); }

    /**
     * Executable
     */
    inline FunctionConfiguration& WithExecutable(const Aws::String& value) { SetExecutable(value); return *this;}

    /**
     * Executable
     */
    inline FunctionConfiguration& WithExecutable(Aws::String&& value) { SetExecutable(std::move(value)); return *this;}

    /**
     * Executable
     */
    inline FunctionConfiguration& WithExecutable(const char* value) { SetExecutable(value); return *this;}


    /**
     * The memory size, in KB, you configured for the function.
     */
    inline int GetMemorySize() const{ return m_memorySize; }

    /**
     * The memory size, in KB, you configured for the function.
     */
    inline void SetMemorySize(int value) { m_memorySizeHasBeenSet = true; m_memorySize = value; }

    /**
     * The memory size, in KB, you configured for the function.
     */
    inline FunctionConfiguration& WithMemorySize(int value) { SetMemorySize(value); return *this;}


    /**
     * Whether the function is pinned or not. Pinned means the function is long-lived
     * and starts when the core starts.
     */
    inline bool GetPinned() const{ return m_pinned; }

    /**
     * Whether the function is pinned or not. Pinned means the function is long-lived
     * and starts when the core starts.
     */
    inline void SetPinned(bool value) { m_pinnedHasBeenSet = true; m_pinned = value; }

    /**
     * Whether the function is pinned or not. Pinned means the function is long-lived
     * and starts when the core starts.
     */
    inline FunctionConfiguration& WithPinned(bool value) { SetPinned(value); return *this;}


    /**
     * The function execution time at which Lambda should terminate the function. This
     * timeout still applies to pinned lambdas for each request.
     */
    inline int GetTimeout() const{ return m_timeout; }

    /**
     * The function execution time at which Lambda should terminate the function. This
     * timeout still applies to pinned lambdas for each request.
     */
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * The function execution time at which Lambda should terminate the function. This
     * timeout still applies to pinned lambdas for each request.
     */
    inline FunctionConfiguration& WithTimeout(int value) { SetTimeout(value); return *this;}

  private:

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
