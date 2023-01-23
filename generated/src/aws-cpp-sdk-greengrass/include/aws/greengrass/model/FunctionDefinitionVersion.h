/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/model/FunctionDefaultConfig.h>
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
  class JsonView;
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
  class FunctionDefinitionVersion
  {
  public:
    AWS_GREENGRASS_API FunctionDefinitionVersion();
    AWS_GREENGRASS_API FunctionDefinitionVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API FunctionDefinitionVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The default configuration that applies to all Lambda functions in this function
     * definition version. Individual Lambda functions can override these settings.
     */
    inline const FunctionDefaultConfig& GetDefaultConfig() const{ return m_defaultConfig; }

    /**
     * The default configuration that applies to all Lambda functions in this function
     * definition version. Individual Lambda functions can override these settings.
     */
    inline bool DefaultConfigHasBeenSet() const { return m_defaultConfigHasBeenSet; }

    /**
     * The default configuration that applies to all Lambda functions in this function
     * definition version. Individual Lambda functions can override these settings.
     */
    inline void SetDefaultConfig(const FunctionDefaultConfig& value) { m_defaultConfigHasBeenSet = true; m_defaultConfig = value; }

    /**
     * The default configuration that applies to all Lambda functions in this function
     * definition version. Individual Lambda functions can override these settings.
     */
    inline void SetDefaultConfig(FunctionDefaultConfig&& value) { m_defaultConfigHasBeenSet = true; m_defaultConfig = std::move(value); }

    /**
     * The default configuration that applies to all Lambda functions in this function
     * definition version. Individual Lambda functions can override these settings.
     */
    inline FunctionDefinitionVersion& WithDefaultConfig(const FunctionDefaultConfig& value) { SetDefaultConfig(value); return *this;}

    /**
     * The default configuration that applies to all Lambda functions in this function
     * definition version. Individual Lambda functions can override these settings.
     */
    inline FunctionDefinitionVersion& WithDefaultConfig(FunctionDefaultConfig&& value) { SetDefaultConfig(std::move(value)); return *this;}


    /**
     * A list of Lambda functions in this function definition version.
     */
    inline const Aws::Vector<Function>& GetFunctions() const{ return m_functions; }

    /**
     * A list of Lambda functions in this function definition version.
     */
    inline bool FunctionsHasBeenSet() const { return m_functionsHasBeenSet; }

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

    FunctionDefaultConfig m_defaultConfig;
    bool m_defaultConfigHasBeenSet = false;

    Aws::Vector<Function> m_functions;
    bool m_functionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
