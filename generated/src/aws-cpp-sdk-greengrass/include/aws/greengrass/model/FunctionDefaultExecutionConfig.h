/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/model/FunctionIsolationMode.h>
#include <aws/greengrass/model/FunctionRunAsConfig.h>
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
   * Configuration information that specifies how a Lambda function runs. <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/FunctionDefaultExecutionConfig">AWS
   * API Reference</a></p>
   */
  class FunctionDefaultExecutionConfig
  {
  public:
    AWS_GREENGRASS_API FunctionDefaultExecutionConfig() = default;
    AWS_GREENGRASS_API FunctionDefaultExecutionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API FunctionDefaultExecutionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline FunctionIsolationMode GetIsolationMode() const { return m_isolationMode; }
    inline bool IsolationModeHasBeenSet() const { return m_isolationModeHasBeenSet; }
    inline void SetIsolationMode(FunctionIsolationMode value) { m_isolationModeHasBeenSet = true; m_isolationMode = value; }
    inline FunctionDefaultExecutionConfig& WithIsolationMode(FunctionIsolationMode value) { SetIsolationMode(value); return *this;}
    ///@}

    ///@{
    
    inline const FunctionRunAsConfig& GetRunAs() const { return m_runAs; }
    inline bool RunAsHasBeenSet() const { return m_runAsHasBeenSet; }
    template<typename RunAsT = FunctionRunAsConfig>
    void SetRunAs(RunAsT&& value) { m_runAsHasBeenSet = true; m_runAs = std::forward<RunAsT>(value); }
    template<typename RunAsT = FunctionRunAsConfig>
    FunctionDefaultExecutionConfig& WithRunAs(RunAsT&& value) { SetRunAs(std::forward<RunAsT>(value)); return *this;}
    ///@}
  private:

    FunctionIsolationMode m_isolationMode{FunctionIsolationMode::NOT_SET};
    bool m_isolationModeHasBeenSet = false;

    FunctionRunAsConfig m_runAs;
    bool m_runAsHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
