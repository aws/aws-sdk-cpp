/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lambda
{
namespace Model
{

  /**
   */
  class AWS_LAMBDA_API UpdateAliasRequest : public LambdaRequest
  {
  public:
    UpdateAliasRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The function name for which the alias is created.</p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>The function name for which the alias is created.</p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The function name for which the alias is created.</p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The function name for which the alias is created.</p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>The function name for which the alias is created.</p>
     */
    inline UpdateAliasRequest& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The function name for which the alias is created.</p>
     */
    inline UpdateAliasRequest& WithFunctionName(Aws::String&& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The function name for which the alias is created.</p>
     */
    inline UpdateAliasRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}

    /**
     * <p>The alias name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The alias name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The alias name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The alias name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The alias name.</p>
     */
    inline UpdateAliasRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The alias name.</p>
     */
    inline UpdateAliasRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The alias name.</p>
     */
    inline UpdateAliasRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Using this parameter you can change the Lambda function version to which the
     * alias points.</p>
     */
    inline const Aws::String& GetFunctionVersion() const{ return m_functionVersion; }

    /**
     * <p>Using this parameter you can change the Lambda function version to which the
     * alias points.</p>
     */
    inline void SetFunctionVersion(const Aws::String& value) { m_functionVersionHasBeenSet = true; m_functionVersion = value; }

    /**
     * <p>Using this parameter you can change the Lambda function version to which the
     * alias points.</p>
     */
    inline void SetFunctionVersion(Aws::String&& value) { m_functionVersionHasBeenSet = true; m_functionVersion = value; }

    /**
     * <p>Using this parameter you can change the Lambda function version to which the
     * alias points.</p>
     */
    inline void SetFunctionVersion(const char* value) { m_functionVersionHasBeenSet = true; m_functionVersion.assign(value); }

    /**
     * <p>Using this parameter you can change the Lambda function version to which the
     * alias points.</p>
     */
    inline UpdateAliasRequest& WithFunctionVersion(const Aws::String& value) { SetFunctionVersion(value); return *this;}

    /**
     * <p>Using this parameter you can change the Lambda function version to which the
     * alias points.</p>
     */
    inline UpdateAliasRequest& WithFunctionVersion(Aws::String&& value) { SetFunctionVersion(value); return *this;}

    /**
     * <p>Using this parameter you can change the Lambda function version to which the
     * alias points.</p>
     */
    inline UpdateAliasRequest& WithFunctionVersion(const char* value) { SetFunctionVersion(value); return *this;}

    /**
     * <p>You can change the description of the alias using this parameter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>You can change the description of the alias using this parameter.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>You can change the description of the alias using this parameter.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>You can change the description of the alias using this parameter.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>You can change the description of the alias using this parameter.</p>
     */
    inline UpdateAliasRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>You can change the description of the alias using this parameter.</p>
     */
    inline UpdateAliasRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>You can change the description of the alias using this parameter.</p>
     */
    inline UpdateAliasRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:
    Aws::String m_functionName;
    bool m_functionNameHasBeenSet;
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_functionVersion;
    bool m_functionVersionHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
