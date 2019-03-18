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
  class AWS_GREENGRASS_API FunctionDefaultExecutionConfig
  {
  public:
    FunctionDefaultExecutionConfig();
    FunctionDefaultExecutionConfig(Aws::Utils::Json::JsonView jsonValue);
    FunctionDefaultExecutionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const FunctionIsolationMode& GetIsolationMode() const{ return m_isolationMode; }

    
    inline bool IsolationModeHasBeenSet() const { return m_isolationModeHasBeenSet; }

    
    inline void SetIsolationMode(const FunctionIsolationMode& value) { m_isolationModeHasBeenSet = true; m_isolationMode = value; }

    
    inline void SetIsolationMode(FunctionIsolationMode&& value) { m_isolationModeHasBeenSet = true; m_isolationMode = std::move(value); }

    
    inline FunctionDefaultExecutionConfig& WithIsolationMode(const FunctionIsolationMode& value) { SetIsolationMode(value); return *this;}

    
    inline FunctionDefaultExecutionConfig& WithIsolationMode(FunctionIsolationMode&& value) { SetIsolationMode(std::move(value)); return *this;}


    
    inline const FunctionRunAsConfig& GetRunAs() const{ return m_runAs; }

    
    inline bool RunAsHasBeenSet() const { return m_runAsHasBeenSet; }

    
    inline void SetRunAs(const FunctionRunAsConfig& value) { m_runAsHasBeenSet = true; m_runAs = value; }

    
    inline void SetRunAs(FunctionRunAsConfig&& value) { m_runAsHasBeenSet = true; m_runAs = std::move(value); }

    
    inline FunctionDefaultExecutionConfig& WithRunAs(const FunctionRunAsConfig& value) { SetRunAs(value); return *this;}

    
    inline FunctionDefaultExecutionConfig& WithRunAs(FunctionRunAsConfig&& value) { SetRunAs(std::move(value)); return *this;}

  private:

    FunctionIsolationMode m_isolationMode;
    bool m_isolationModeHasBeenSet;

    FunctionRunAsConfig m_runAs;
    bool m_runAsHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
