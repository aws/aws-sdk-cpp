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
  class AWS_GREENGRASS_API CreateFunctionDefinitionVersionRequest : public GreengrassRequest
  {
  public:
    CreateFunctionDefinitionVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFunctionDefinitionVersion"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * A client token used to correlate requests and responses.
     */
    inline const Aws::String& GetAmznClientToken() const{ return m_amznClientToken; }

    /**
     * A client token used to correlate requests and responses.
     */
    inline bool AmznClientTokenHasBeenSet() const { return m_amznClientTokenHasBeenSet; }

    /**
     * A client token used to correlate requests and responses.
     */
    inline void SetAmznClientToken(const Aws::String& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = value; }

    /**
     * A client token used to correlate requests and responses.
     */
    inline void SetAmznClientToken(Aws::String&& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = std::move(value); }

    /**
     * A client token used to correlate requests and responses.
     */
    inline void SetAmznClientToken(const char* value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken.assign(value); }

    /**
     * A client token used to correlate requests and responses.
     */
    inline CreateFunctionDefinitionVersionRequest& WithAmznClientToken(const Aws::String& value) { SetAmznClientToken(value); return *this;}

    /**
     * A client token used to correlate requests and responses.
     */
    inline CreateFunctionDefinitionVersionRequest& WithAmznClientToken(Aws::String&& value) { SetAmznClientToken(std::move(value)); return *this;}

    /**
     * A client token used to correlate requests and responses.
     */
    inline CreateFunctionDefinitionVersionRequest& WithAmznClientToken(const char* value) { SetAmznClientToken(value); return *this;}


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
    inline CreateFunctionDefinitionVersionRequest& WithDefaultConfig(const FunctionDefaultConfig& value) { SetDefaultConfig(value); return *this;}

    /**
     * The default configuration that applies to all Lambda functions in this function
     * definition version. Individual Lambda functions can override these settings.
     */
    inline CreateFunctionDefinitionVersionRequest& WithDefaultConfig(FunctionDefaultConfig&& value) { SetDefaultConfig(std::move(value)); return *this;}


    /**
     * The ID of the Lambda function definition.
     */
    inline const Aws::String& GetFunctionDefinitionId() const{ return m_functionDefinitionId; }

    /**
     * The ID of the Lambda function definition.
     */
    inline bool FunctionDefinitionIdHasBeenSet() const { return m_functionDefinitionIdHasBeenSet; }

    /**
     * The ID of the Lambda function definition.
     */
    inline void SetFunctionDefinitionId(const Aws::String& value) { m_functionDefinitionIdHasBeenSet = true; m_functionDefinitionId = value; }

    /**
     * The ID of the Lambda function definition.
     */
    inline void SetFunctionDefinitionId(Aws::String&& value) { m_functionDefinitionIdHasBeenSet = true; m_functionDefinitionId = std::move(value); }

    /**
     * The ID of the Lambda function definition.
     */
    inline void SetFunctionDefinitionId(const char* value) { m_functionDefinitionIdHasBeenSet = true; m_functionDefinitionId.assign(value); }

    /**
     * The ID of the Lambda function definition.
     */
    inline CreateFunctionDefinitionVersionRequest& WithFunctionDefinitionId(const Aws::String& value) { SetFunctionDefinitionId(value); return *this;}

    /**
     * The ID of the Lambda function definition.
     */
    inline CreateFunctionDefinitionVersionRequest& WithFunctionDefinitionId(Aws::String&& value) { SetFunctionDefinitionId(std::move(value)); return *this;}

    /**
     * The ID of the Lambda function definition.
     */
    inline CreateFunctionDefinitionVersionRequest& WithFunctionDefinitionId(const char* value) { SetFunctionDefinitionId(value); return *this;}


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
    inline CreateFunctionDefinitionVersionRequest& WithFunctions(const Aws::Vector<Function>& value) { SetFunctions(value); return *this;}

    /**
     * A list of Lambda functions in this function definition version.
     */
    inline CreateFunctionDefinitionVersionRequest& WithFunctions(Aws::Vector<Function>&& value) { SetFunctions(std::move(value)); return *this;}

    /**
     * A list of Lambda functions in this function definition version.
     */
    inline CreateFunctionDefinitionVersionRequest& AddFunctions(const Function& value) { m_functionsHasBeenSet = true; m_functions.push_back(value); return *this; }

    /**
     * A list of Lambda functions in this function definition version.
     */
    inline CreateFunctionDefinitionVersionRequest& AddFunctions(Function&& value) { m_functionsHasBeenSet = true; m_functions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_amznClientToken;
    bool m_amznClientTokenHasBeenSet;

    FunctionDefaultConfig m_defaultConfig;
    bool m_defaultConfigHasBeenSet;

    Aws::String m_functionDefinitionId;
    bool m_functionDefinitionIdHasBeenSet;

    Aws::Vector<Function> m_functions;
    bool m_functionsHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
