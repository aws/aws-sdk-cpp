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
   * Configuration that defines the default containerization used for when running
   * Lambda functions in the group. Individual Lambda functions can be override this
   * setting.<p><h3>See Also:</h3>   <a
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

    
    inline void SetIsolationMode(const FunctionIsolationMode& value) { m_isolationModeHasBeenSet = true; m_isolationMode = value; }

    
    inline void SetIsolationMode(FunctionIsolationMode&& value) { m_isolationModeHasBeenSet = true; m_isolationMode = std::move(value); }

    
    inline FunctionDefaultExecutionConfig& WithIsolationMode(const FunctionIsolationMode& value) { SetIsolationMode(value); return *this;}

    
    inline FunctionDefaultExecutionConfig& WithIsolationMode(FunctionIsolationMode&& value) { SetIsolationMode(std::move(value)); return *this;}

  private:

    FunctionIsolationMode m_isolationMode;
    bool m_isolationModeHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
