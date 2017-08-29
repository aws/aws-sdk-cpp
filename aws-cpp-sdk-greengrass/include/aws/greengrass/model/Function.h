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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/FunctionConfiguration.h>
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
   * Information on function<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/Function">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASS_API Function
  {
  public:
    Function();
    Function(const Aws::Utils::Json::JsonValue& jsonValue);
    Function& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Arn of the Lambda function.
     */
    inline const Aws::String& GetFunctionArn() const{ return m_functionArn; }

    /**
     * Arn of the Lambda function.
     */
    inline void SetFunctionArn(const Aws::String& value) { m_functionArnHasBeenSet = true; m_functionArn = value; }

    /**
     * Arn of the Lambda function.
     */
    inline void SetFunctionArn(Aws::String&& value) { m_functionArnHasBeenSet = true; m_functionArn = std::move(value); }

    /**
     * Arn of the Lambda function.
     */
    inline void SetFunctionArn(const char* value) { m_functionArnHasBeenSet = true; m_functionArn.assign(value); }

    /**
     * Arn of the Lambda function.
     */
    inline Function& WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}

    /**
     * Arn of the Lambda function.
     */
    inline Function& WithFunctionArn(Aws::String&& value) { SetFunctionArn(std::move(value)); return *this;}

    /**
     * Arn of the Lambda function.
     */
    inline Function& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}


    /**
     * Configuration of the function
     */
    inline const FunctionConfiguration& GetFunctionConfiguration() const{ return m_functionConfiguration; }

    /**
     * Configuration of the function
     */
    inline void SetFunctionConfiguration(const FunctionConfiguration& value) { m_functionConfigurationHasBeenSet = true; m_functionConfiguration = value; }

    /**
     * Configuration of the function
     */
    inline void SetFunctionConfiguration(FunctionConfiguration&& value) { m_functionConfigurationHasBeenSet = true; m_functionConfiguration = std::move(value); }

    /**
     * Configuration of the function
     */
    inline Function& WithFunctionConfiguration(const FunctionConfiguration& value) { SetFunctionConfiguration(value); return *this;}

    /**
     * Configuration of the function
     */
    inline Function& WithFunctionConfiguration(FunctionConfiguration&& value) { SetFunctionConfiguration(std::move(value)); return *this;}


    /**
     * Id of the function in this version.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * Id of the function in this version.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * Id of the function in this version.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * Id of the function in this version.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * Id of the function in this version.
     */
    inline Function& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * Id of the function in this version.
     */
    inline Function& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * Id of the function in this version.
     */
    inline Function& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_functionArn;
    bool m_functionArnHasBeenSet;

    FunctionConfiguration m_functionConfiguration;
    bool m_functionConfigurationHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
