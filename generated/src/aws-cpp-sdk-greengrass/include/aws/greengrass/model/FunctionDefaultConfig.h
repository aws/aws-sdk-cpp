/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/model/FunctionDefaultExecutionConfig.h>
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
   * The default configuration that applies to all Lambda functions in the group.
   * Individual Lambda functions can override these settings.<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/FunctionDefaultConfig">AWS
   * API Reference</a></p>
   */
  class FunctionDefaultConfig
  {
  public:
    AWS_GREENGRASS_API FunctionDefaultConfig() = default;
    AWS_GREENGRASS_API FunctionDefaultConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API FunctionDefaultConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const FunctionDefaultExecutionConfig& GetExecution() const { return m_execution; }
    inline bool ExecutionHasBeenSet() const { return m_executionHasBeenSet; }
    template<typename ExecutionT = FunctionDefaultExecutionConfig>
    void SetExecution(ExecutionT&& value) { m_executionHasBeenSet = true; m_execution = std::forward<ExecutionT>(value); }
    template<typename ExecutionT = FunctionDefaultExecutionConfig>
    FunctionDefaultConfig& WithExecution(ExecutionT&& value) { SetExecution(std::forward<ExecutionT>(value)); return *this;}
    ///@}
  private:

    FunctionDefaultExecutionConfig m_execution;
    bool m_executionHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
