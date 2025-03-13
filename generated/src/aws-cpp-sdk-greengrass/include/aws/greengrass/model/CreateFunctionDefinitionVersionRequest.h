/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/FunctionDefaultConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/greengrass/model/Function.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   * Information needed to create a function definition version.<p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateFunctionDefinitionVersionRequest">AWS
   * API Reference</a></p>
   */
  class CreateFunctionDefinitionVersionRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API CreateFunctionDefinitionVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFunctionDefinitionVersion"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;

    AWS_GREENGRASS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * A client token used to correlate requests and responses.
     */
    inline const Aws::String& GetAmznClientToken() const { return m_amznClientToken; }
    inline bool AmznClientTokenHasBeenSet() const { return m_amznClientTokenHasBeenSet; }
    template<typename AmznClientTokenT = Aws::String>
    void SetAmznClientToken(AmznClientTokenT&& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = std::forward<AmznClientTokenT>(value); }
    template<typename AmznClientTokenT = Aws::String>
    CreateFunctionDefinitionVersionRequest& WithAmznClientToken(AmznClientTokenT&& value) { SetAmznClientToken(std::forward<AmznClientTokenT>(value)); return *this;}
    ///@}

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
    CreateFunctionDefinitionVersionRequest& WithDefaultConfig(DefaultConfigT&& value) { SetDefaultConfig(std::forward<DefaultConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the Lambda function definition.
     */
    inline const Aws::String& GetFunctionDefinitionId() const { return m_functionDefinitionId; }
    inline bool FunctionDefinitionIdHasBeenSet() const { return m_functionDefinitionIdHasBeenSet; }
    template<typename FunctionDefinitionIdT = Aws::String>
    void SetFunctionDefinitionId(FunctionDefinitionIdT&& value) { m_functionDefinitionIdHasBeenSet = true; m_functionDefinitionId = std::forward<FunctionDefinitionIdT>(value); }
    template<typename FunctionDefinitionIdT = Aws::String>
    CreateFunctionDefinitionVersionRequest& WithFunctionDefinitionId(FunctionDefinitionIdT&& value) { SetFunctionDefinitionId(std::forward<FunctionDefinitionIdT>(value)); return *this;}
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
    CreateFunctionDefinitionVersionRequest& WithFunctions(FunctionsT&& value) { SetFunctions(std::forward<FunctionsT>(value)); return *this;}
    template<typename FunctionsT = Function>
    CreateFunctionDefinitionVersionRequest& AddFunctions(FunctionsT&& value) { m_functionsHasBeenSet = true; m_functions.emplace_back(std::forward<FunctionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_amznClientToken;
    bool m_amznClientTokenHasBeenSet = false;

    FunctionDefaultConfig m_defaultConfig;
    bool m_defaultConfigHasBeenSet = false;

    Aws::String m_functionDefinitionId;
    bool m_functionDefinitionIdHasBeenSet = false;

    Aws::Vector<Function> m_functions;
    bool m_functionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
