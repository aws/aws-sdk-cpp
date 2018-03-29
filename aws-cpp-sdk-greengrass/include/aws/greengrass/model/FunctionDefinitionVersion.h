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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/greengrass/model/Function.h>
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
   * Information about a function definition version.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/FunctionDefinitionVersion">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASS_API FunctionDefinitionVersion
  {
  public:
    FunctionDefinitionVersion();
    FunctionDefinitionVersion(const Aws::Utils::Json::JsonValue& jsonValue);
    FunctionDefinitionVersion& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A list of Lambda functions in this function definition version.
     */
    inline const Aws::Vector<Function>& GetFunctions() const{ return m_functions; }

    /**
     * A list of Lambda functions in this function definition version.
     */
    inline void SetFunctions(const Aws::Vector<Function>& value) { m_functionsHasBeenSet = true; m_functions = value; }

    /**
     * A list of Lambda functions in this function definition version.
     */
    inline void SetFunctions(Aws::Vector<Function>&& value) { m_functionsHasBeenSet = true; m_functions = std::move(value); }

    /**
     * A list of Lambda functions in this function definition version.
     */
    inline FunctionDefinitionVersion& WithFunctions(const Aws::Vector<Function>& value) { SetFunctions(value); return *this;}

    /**
     * A list of Lambda functions in this function definition version.
     */
    inline FunctionDefinitionVersion& WithFunctions(Aws::Vector<Function>&& value) { SetFunctions(std::move(value)); return *this;}

    /**
     * A list of Lambda functions in this function definition version.
     */
    inline FunctionDefinitionVersion& AddFunctions(const Function& value) { m_functionsHasBeenSet = true; m_functions.push_back(value); return *this; }

    /**
     * A list of Lambda functions in this function definition version.
     */
    inline FunctionDefinitionVersion& AddFunctions(Function&& value) { m_functionsHasBeenSet = true; m_functions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Function> m_functions;
    bool m_functionsHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
