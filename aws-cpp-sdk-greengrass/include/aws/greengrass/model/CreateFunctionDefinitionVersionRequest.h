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
   * Function definition version<p><h3>See Also:</h3>   <a
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
     * The client token used to request idempotent operations.
     */
    inline const Aws::String& GetAmznClientToken() const{ return m_amznClientToken; }

    /**
     * The client token used to request idempotent operations.
     */
    inline void SetAmznClientToken(const Aws::String& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = value; }

    /**
     * The client token used to request idempotent operations.
     */
    inline void SetAmznClientToken(Aws::String&& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = std::move(value); }

    /**
     * The client token used to request idempotent operations.
     */
    inline void SetAmznClientToken(const char* value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken.assign(value); }

    /**
     * The client token used to request idempotent operations.
     */
    inline CreateFunctionDefinitionVersionRequest& WithAmznClientToken(const Aws::String& value) { SetAmznClientToken(value); return *this;}

    /**
     * The client token used to request idempotent operations.
     */
    inline CreateFunctionDefinitionVersionRequest& WithAmznClientToken(Aws::String&& value) { SetAmznClientToken(std::move(value)); return *this;}

    /**
     * The client token used to request idempotent operations.
     */
    inline CreateFunctionDefinitionVersionRequest& WithAmznClientToken(const char* value) { SetAmznClientToken(value); return *this;}


    /**
     * the unique Id of the lambda definition
     */
    inline const Aws::String& GetFunctionDefinitionId() const{ return m_functionDefinitionId; }

    /**
     * the unique Id of the lambda definition
     */
    inline void SetFunctionDefinitionId(const Aws::String& value) { m_functionDefinitionIdHasBeenSet = true; m_functionDefinitionId = value; }

    /**
     * the unique Id of the lambda definition
     */
    inline void SetFunctionDefinitionId(Aws::String&& value) { m_functionDefinitionIdHasBeenSet = true; m_functionDefinitionId = std::move(value); }

    /**
     * the unique Id of the lambda definition
     */
    inline void SetFunctionDefinitionId(const char* value) { m_functionDefinitionIdHasBeenSet = true; m_functionDefinitionId.assign(value); }

    /**
     * the unique Id of the lambda definition
     */
    inline CreateFunctionDefinitionVersionRequest& WithFunctionDefinitionId(const Aws::String& value) { SetFunctionDefinitionId(value); return *this;}

    /**
     * the unique Id of the lambda definition
     */
    inline CreateFunctionDefinitionVersionRequest& WithFunctionDefinitionId(Aws::String&& value) { SetFunctionDefinitionId(std::move(value)); return *this;}

    /**
     * the unique Id of the lambda definition
     */
    inline CreateFunctionDefinitionVersionRequest& WithFunctionDefinitionId(const char* value) { SetFunctionDefinitionId(value); return *this;}


    /**
     * Lambda functions in this function definition version.
     */
    inline const Aws::Vector<Function>& GetFunctions() const{ return m_functions; }

    /**
     * Lambda functions in this function definition version.
     */
    inline void SetFunctions(const Aws::Vector<Function>& value) { m_functionsHasBeenSet = true; m_functions = value; }

    /**
     * Lambda functions in this function definition version.
     */
    inline void SetFunctions(Aws::Vector<Function>&& value) { m_functionsHasBeenSet = true; m_functions = std::move(value); }

    /**
     * Lambda functions in this function definition version.
     */
    inline CreateFunctionDefinitionVersionRequest& WithFunctions(const Aws::Vector<Function>& value) { SetFunctions(value); return *this;}

    /**
     * Lambda functions in this function definition version.
     */
    inline CreateFunctionDefinitionVersionRequest& WithFunctions(Aws::Vector<Function>&& value) { SetFunctions(std::move(value)); return *this;}

    /**
     * Lambda functions in this function definition version.
     */
    inline CreateFunctionDefinitionVersionRequest& AddFunctions(const Function& value) { m_functionsHasBeenSet = true; m_functions.push_back(value); return *this; }

    /**
     * Lambda functions in this function definition version.
     */
    inline CreateFunctionDefinitionVersionRequest& AddFunctions(Function&& value) { m_functionsHasBeenSet = true; m_functions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_amznClientToken;
    bool m_amznClientTokenHasBeenSet;

    Aws::String m_functionDefinitionId;
    bool m_functionDefinitionIdHasBeenSet;

    Aws::Vector<Function> m_functions;
    bool m_functionsHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
