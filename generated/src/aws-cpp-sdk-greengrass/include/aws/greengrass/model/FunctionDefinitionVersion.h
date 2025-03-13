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
    AWS_GREENGRASS_API FunctionDefinitionVersion() = default;
    AWS_GREENGRASS_API FunctionDefinitionVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API FunctionDefinitionVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The default configuration that applies to all Lambda functions in this function
     * definition version. Individual Lambda functions can override these settings.
     */
    inline const FunctionDefaultConfig& GetDefaultConfig() const { return m_defaultConfig; }
    inline bool DefaultConfigHasBeenSet() const { return m_defaultConfigHasBeenSet; }
    template<typename DefaultConfigT = FunctionDefaultConfig>
    void SetDefaultConfig(DefaultConfigT&& value) { m_defaultConfigHasBeenSet = true; m_defaultConfig = std::forward<DefaultConfigT>(value); }
    template<typename DefaultConfigT = FunctionDefaultConfig>
    FunctionDefinitionVersion& WithDefaultConfig(DefaultConfigT&& value) { SetDefaultConfig(std::forward<DefaultConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A list of Lambda functions in this function definition version.
     */
    inline const Aws::Vector<Function>& GetFunctions() const { return m_functions; }
    inline bool FunctionsHasBeenSet() const { return m_functionsHasBeenSet; }
    template<typename FunctionsT = Aws::Vector<Function>>
    void SetFunctions(FunctionsT&& value) { m_functionsHasBeenSet = true; m_functions = std::forward<FunctionsT>(value); }
    template<typename FunctionsT = Aws::Vector<Function>>
    FunctionDefinitionVersion& WithFunctions(FunctionsT&& value) { SetFunctions(std::forward<FunctionsT>(value)); return *this;}
    template<typename FunctionsT = Function>
    FunctionDefinitionVersion& AddFunctions(FunctionsT&& value) { m_functionsHasBeenSet = true; m_functions.emplace_back(std::forward<FunctionsT>(value)); return *this; }
    ///@}
  private:

    FunctionDefaultConfig m_defaultConfig;
    bool m_defaultConfigHasBeenSet = false;

    Aws::Vector<Function> m_functions;
    bool m_functionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
