/**
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
    AWS_GREENGRASS_API FunctionConfiguration() = default;
    AWS_GREENGRASS_API FunctionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API FunctionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The expected encoding type of the input payload for the function. The default is
     * ''json''.
     */
    inline EncodingType GetEncodingType() const { return m_encodingType; }
    inline bool EncodingTypeHasBeenSet() const { return m_encodingTypeHasBeenSet; }
    inline void SetEncodingType(EncodingType value) { m_encodingTypeHasBeenSet = true; m_encodingType = value; }
    inline FunctionConfiguration& WithEncodingType(EncodingType value) { SetEncodingType(value); return *this;}
    ///@}

    ///@{
    /**
     * The environment configuration of the function.
     */
    inline const FunctionConfigurationEnvironment& GetEnvironment() const { return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    template<typename EnvironmentT = FunctionConfigurationEnvironment>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = FunctionConfigurationEnvironment>
    FunctionConfiguration& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The execution arguments.
     */
    inline const Aws::String& GetExecArgs() const { return m_execArgs; }
    inline bool ExecArgsHasBeenSet() const { return m_execArgsHasBeenSet; }
    template<typename ExecArgsT = Aws::String>
    void SetExecArgs(ExecArgsT&& value) { m_execArgsHasBeenSet = true; m_execArgs = std::forward<ExecArgsT>(value); }
    template<typename ExecArgsT = Aws::String>
    FunctionConfiguration& WithExecArgs(ExecArgsT&& value) { SetExecArgs(std::forward<ExecArgsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name of the function executable.
     */
    inline const Aws::String& GetExecutable() const { return m_executable; }
    inline bool ExecutableHasBeenSet() const { return m_executableHasBeenSet; }
    template<typename ExecutableT = Aws::String>
    void SetExecutable(ExecutableT&& value) { m_executableHasBeenSet = true; m_executable = std::forward<ExecutableT>(value); }
    template<typename ExecutableT = Aws::String>
    FunctionConfiguration& WithExecutable(ExecutableT&& value) { SetExecutable(std::forward<ExecutableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The memory size, in KB, which the function requires. This setting is not
     * applicable and should be cleared when you run the Lambda function without
     * containerization.
     */
    inline int GetMemorySize() const { return m_memorySize; }
    inline bool MemorySizeHasBeenSet() const { return m_memorySizeHasBeenSet; }
    inline void SetMemorySize(int value) { m_memorySizeHasBeenSet = true; m_memorySize = value; }
    inline FunctionConfiguration& WithMemorySize(int value) { SetMemorySize(value); return *this;}
    ///@}

    ///@{
    /**
     * True if the function is pinned. Pinned means the function is long-lived and
     * starts when the core starts.
     */
    inline bool GetPinned() const { return m_pinned; }
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
    inline int GetTimeout() const { return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }
    inline FunctionConfiguration& WithTimeout(int value) { SetTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * The Lambda runtime supported by Greengrass which is to be used instead of the
     * one specified in the Lambda function.
     */
    inline const Aws::String& GetFunctionRuntimeOverride() const { return m_functionRuntimeOverride; }
    inline bool FunctionRuntimeOverrideHasBeenSet() const { return m_functionRuntimeOverrideHasBeenSet; }
    template<typename FunctionRuntimeOverrideT = Aws::String>
    void SetFunctionRuntimeOverride(FunctionRuntimeOverrideT&& value) { m_functionRuntimeOverrideHasBeenSet = true; m_functionRuntimeOverride = std::forward<FunctionRuntimeOverrideT>(value); }
    template<typename FunctionRuntimeOverrideT = Aws::String>
    FunctionConfiguration& WithFunctionRuntimeOverride(FunctionRuntimeOverrideT&& value) { SetFunctionRuntimeOverride(std::forward<FunctionRuntimeOverrideT>(value)); return *this;}
    ///@}
  private:

    EncodingType m_encodingType{EncodingType::NOT_SET};
    bool m_encodingTypeHasBeenSet = false;

    FunctionConfigurationEnvironment m_environment;
    bool m_environmentHasBeenSet = false;

    Aws::String m_execArgs;
    bool m_execArgsHasBeenSet = false;

    Aws::String m_executable;
    bool m_executableHasBeenSet = false;

    int m_memorySize{0};
    bool m_memorySizeHasBeenSet = false;

    bool m_pinned{false};
    bool m_pinnedHasBeenSet = false;

    int m_timeout{0};
    bool m_timeoutHasBeenSet = false;

    Aws::String m_functionRuntimeOverride;
    bool m_functionRuntimeOverrideHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
