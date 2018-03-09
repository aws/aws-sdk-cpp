﻿/*
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
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/AliasRoutingConfiguration.h>
#include <utility>

namespace Aws
{
namespace Lambda
{
namespace Model
{

  /**
   */
  class AWS_LAMBDA_API CreateAliasRequest : public LambdaRequest
  {
  public:
    CreateAliasRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAlias"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Name of the Lambda function for which you want to create an alias. Note that
     * the length constraint applies only to the ARN. If you specify only the function
     * name, it is limited to 64 characters in length.</p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>Name of the Lambda function for which you want to create an alias. Note that
     * the length constraint applies only to the ARN. If you specify only the function
     * name, it is limited to 64 characters in length.</p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>Name of the Lambda function for which you want to create an alias. Note that
     * the length constraint applies only to the ARN. If you specify only the function
     * name, it is limited to 64 characters in length.</p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = std::move(value); }

    /**
     * <p>Name of the Lambda function for which you want to create an alias. Note that
     * the length constraint applies only to the ARN. If you specify only the function
     * name, it is limited to 64 characters in length.</p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>Name of the Lambda function for which you want to create an alias. Note that
     * the length constraint applies only to the ARN. If you specify only the function
     * name, it is limited to 64 characters in length.</p>
     */
    inline CreateAliasRequest& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>Name of the Lambda function for which you want to create an alias. Note that
     * the length constraint applies only to the ARN. If you specify only the function
     * name, it is limited to 64 characters in length.</p>
     */
    inline CreateAliasRequest& WithFunctionName(Aws::String&& value) { SetFunctionName(std::move(value)); return *this;}

    /**
     * <p>Name of the Lambda function for which you want to create an alias. Note that
     * the length constraint applies only to the ARN. If you specify only the function
     * name, it is limited to 64 characters in length.</p>
     */
    inline CreateAliasRequest& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}


    /**
     * <p>Name for the alias you are creating.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name for the alias you are creating.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name for the alias you are creating.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name for the alias you are creating.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name for the alias you are creating.</p>
     */
    inline CreateAliasRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name for the alias you are creating.</p>
     */
    inline CreateAliasRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name for the alias you are creating.</p>
     */
    inline CreateAliasRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Lambda function version for which you are creating the alias.</p>
     */
    inline const Aws::String& GetFunctionVersion() const{ return m_functionVersion; }

    /**
     * <p>Lambda function version for which you are creating the alias.</p>
     */
    inline void SetFunctionVersion(const Aws::String& value) { m_functionVersionHasBeenSet = true; m_functionVersion = value; }

    /**
     * <p>Lambda function version for which you are creating the alias.</p>
     */
    inline void SetFunctionVersion(Aws::String&& value) { m_functionVersionHasBeenSet = true; m_functionVersion = std::move(value); }

    /**
     * <p>Lambda function version for which you are creating the alias.</p>
     */
    inline void SetFunctionVersion(const char* value) { m_functionVersionHasBeenSet = true; m_functionVersion.assign(value); }

    /**
     * <p>Lambda function version for which you are creating the alias.</p>
     */
    inline CreateAliasRequest& WithFunctionVersion(const Aws::String& value) { SetFunctionVersion(value); return *this;}

    /**
     * <p>Lambda function version for which you are creating the alias.</p>
     */
    inline CreateAliasRequest& WithFunctionVersion(Aws::String&& value) { SetFunctionVersion(std::move(value)); return *this;}

    /**
     * <p>Lambda function version for which you are creating the alias.</p>
     */
    inline CreateAliasRequest& WithFunctionVersion(const char* value) { SetFunctionVersion(value); return *this;}


    /**
     * <p>Description of the alias.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Description of the alias.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Description of the alias.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Description of the alias.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Description of the alias.</p>
     */
    inline CreateAliasRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Description of the alias.</p>
     */
    inline CreateAliasRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Description of the alias.</p>
     */
    inline CreateAliasRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Specifies an additional version your alias can point to, allowing you to
     * dictate what percentage of traffic will invoke each version. For more
     * information, see <a>lambda-traffic-shifting-using-aliases</a>.</p>
     */
    inline const AliasRoutingConfiguration& GetRoutingConfig() const{ return m_routingConfig; }

    /**
     * <p>Specifies an additional version your alias can point to, allowing you to
     * dictate what percentage of traffic will invoke each version. For more
     * information, see <a>lambda-traffic-shifting-using-aliases</a>.</p>
     */
    inline void SetRoutingConfig(const AliasRoutingConfiguration& value) { m_routingConfigHasBeenSet = true; m_routingConfig = value; }

    /**
     * <p>Specifies an additional version your alias can point to, allowing you to
     * dictate what percentage of traffic will invoke each version. For more
     * information, see <a>lambda-traffic-shifting-using-aliases</a>.</p>
     */
    inline void SetRoutingConfig(AliasRoutingConfiguration&& value) { m_routingConfigHasBeenSet = true; m_routingConfig = std::move(value); }

    /**
     * <p>Specifies an additional version your alias can point to, allowing you to
     * dictate what percentage of traffic will invoke each version. For more
     * information, see <a>lambda-traffic-shifting-using-aliases</a>.</p>
     */
    inline CreateAliasRequest& WithRoutingConfig(const AliasRoutingConfiguration& value) { SetRoutingConfig(value); return *this;}

    /**
     * <p>Specifies an additional version your alias can point to, allowing you to
     * dictate what percentage of traffic will invoke each version. For more
     * information, see <a>lambda-traffic-shifting-using-aliases</a>.</p>
     */
    inline CreateAliasRequest& WithRoutingConfig(AliasRoutingConfiguration&& value) { SetRoutingConfig(std::move(value)); return *this;}

  private:

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_functionVersion;
    bool m_functionVersionHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    AliasRoutingConfiguration m_routingConfig;
    bool m_routingConfigHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
