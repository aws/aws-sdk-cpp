﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class FunctionConfiguration
  {
  public:
    AWS_GREENGRASS_API FunctionConfiguration();
    AWS_GREENGRASS_API FunctionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API FunctionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The expected encoding type of the input payload for the function. The default is
     * ''json''.
     */
    inline const EncodingType& GetEncodingType() const{ return m_encodingType; }
    inline bool EncodingTypeHasBeenSet() const { return m_encodingTypeHasBeenSet; }
    inline void SetEncodingType(const EncodingType& value) { m_encodingTypeHasBeenSet = true; m_encodingType = value; }
    inline void SetEncodingType(EncodingType&& value) { m_encodingTypeHasBeenSet = true; m_encodingType = std::move(value); }
    inline FunctionConfiguration& WithEncodingType(const EncodingType& value) { SetEncodingType(value); return *this;}
    inline FunctionConfiguration& WithEncodingType(EncodingType&& value) { SetEncodingType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The environment configuration of the function.
     */
    inline const FunctionConfigurationEnvironment& GetEnvironment() const{ return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    inline void SetEnvironment(const FunctionConfigurationEnvironment& value) { m_environmentHasBeenSet = true; m_environment = value; }
    inline void SetEnvironment(FunctionConfigurationEnvironment&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }
    inline FunctionConfiguration& WithEnvironment(const FunctionConfigurationEnvironment& value) { SetEnvironment(value); return *this;}
    inline FunctionConfiguration& WithEnvironment(FunctionConfigurationEnvironment&& value) { SetEnvironment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The execution arguments.
     */
    inline const Aws::String& GetExecArgs() const{ return m_execArgs; }
    inline bool ExecArgsHasBeenSet() const { return m_execArgsHasBeenSet; }
    inline void SetExecArgs(const Aws::String& value) { m_execArgsHasBeenSet = true; m_execArgs = value; }
    inline void SetExecArgs(Aws::String&& value) { m_execArgsHasBeenSet = true; m_execArgs = std::move(value); }
    inline void SetExecArgs(const char* value) { m_execArgsHasBeenSet = true; m_execArgs.assign(value); }
    inline FunctionConfiguration& WithExecArgs(const Aws::String& value) { SetExecArgs(value); return *this;}
    inline FunctionConfiguration& WithExecArgs(Aws::String&& value) { SetExecArgs(std::move(value)); return *this;}
    inline FunctionConfiguration& WithExecArgs(const char* value) { SetExecArgs(value); return *this;}
    ///@}

    ///@{
    /**
     * The name of the function executable.
     */
    inline const Aws::String& GetExecutable() const{ return m_executable; }
    inline bool ExecutableHasBeenSet() const { return m_executableHasBeenSet; }
    inline void SetExecutable(const Aws::String& value) { m_executableHasBeenSet = true; m_executable = value; }
    inline void SetExecutable(Aws::String&& value) { m_executableHasBeenSet = true; m_executable = std::move(value); }
    inline void SetExecutable(const char* value) { m_executableHasBeenSet = true; m_executable.assign(value); }
    inline FunctionConfiguration& WithExecutable(const Aws::String& value) { SetExecutable(value); return *this;}
    inline FunctionConfiguration& WithExecutable(Aws::String&& value) { SetExecutable(std::move(value)); return *this;}
    inline FunctionConfiguration& WithExecutable(const char* value) { SetExecutable(value); return *this;}
    ///@}

    ///@{
    /**
     * The memory size, in KB, which the function requires. This setting is not
     * applicable and should be cleared when you run the Lambda function without
     * containerization.
     */
    inline int GetMemorySize() const{ return m_memorySize; }
    inline bool MemorySizeHasBeenSet() const { return m_memorySizeHasBeenSet; }
    inline void SetMemorySize(int value) { m_memorySizeHasBeenSet = true; m_memorySize = value; }
    inline FunctionConfiguration& WithMemorySize(int value) { SetMemorySize(value); return *this;}
    ///@}

    ///@{
    /**
     * True if the function is pinned. Pinned means the function is long-lived and
     * starts when the core starts.
     */
    inline bool GetPinned() const{ return m_pinned; }
    inline bool PinnedHasBeenSet() const { return m_pinnedHasBeenSet; }
    inline void SetPinned(bool value) { m_pinnedHasBeenSet = true; m_pinned = value; }
    inline FunctionConfiguration& WithPinned(bool value) { SetPinned(value); return *this;}
    ///@}

    ///@{
    /**
     * The allowed function execution time, after which Lambda should terminate the
     * function. This timeout still applies to pinned Lambda functions for each
     * request.
     */
    inline int GetTimeout() const{ return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }
    inline FunctionConfiguration& WithTimeout(int value) { SetTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * The Lambda runtime supported by Greengrass which is to be used instead of the
     * one specified in the Lambda function.
     */
    inline const Aws::String& GetFunctionRuntimeOverride() const{ return m_functionRuntimeOverride; }
    inline bool FunctionRuntimeOverrideHasBeenSet() const { return m_functionRuntimeOverrideHasBeenSet; }
    inline void SetFunctionRuntimeOverride(const Aws::String& value) { m_functionRuntimeOverrideHasBeenSet = true; m_functionRuntimeOverride = value; }
    inline void SetFunctionRuntimeOverride(Aws::String&& value) { m_functionRuntimeOverrideHasBeenSet = true; m_functionRuntimeOverride = std::move(value); }
    inline void SetFunctionRuntimeOverride(const char* value) { m_functionRuntimeOverrideHasBeenSet = true; m_functionRuntimeOverride.assign(value); }
    inline FunctionConfiguration& WithFunctionRuntimeOverride(const Aws::String& value) { SetFunctionRuntimeOverride(value); return *this;}
    inline FunctionConfiguration& WithFunctionRuntimeOverride(Aws::String&& value) { SetFunctionRuntimeOverride(std::move(value)); return *this;}
    inline FunctionConfiguration& WithFunctionRuntimeOverride(const char* value) { SetFunctionRuntimeOverride(value); return *this;}
    ///@}
  private:

    EncodingType m_encodingType;
    bool m_encodingTypeHasBeenSet = false;

    FunctionConfigurationEnvironment m_environment;
    bool m_environmentHasBeenSet = false;

    Aws::String m_execArgs;
    bool m_execArgsHasBeenSet = false;

    Aws::String m_executable;
    bool m_executableHasBeenSet = false;

    int m_memorySize;
    bool m_memorySizeHasBeenSet = false;

    bool m_pinned;
    bool m_pinnedHasBeenSet = false;

    int m_timeout;
    bool m_timeoutHasBeenSet = false;

    Aws::String m_functionRuntimeOverride;
    bool m_functionRuntimeOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
