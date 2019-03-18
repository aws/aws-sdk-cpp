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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Greengrass
{
namespace Model
{

  /**
   * Information about a Lambda function.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/Function">AWS
   * API Reference</a></p>
   */
  class AWS_GREENGRASS_API Function
  {
  public:
    Function();
    Function(Aws::Utils::Json::JsonView jsonValue);
    Function& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The ARN of the Lambda function.
     */
    inline const Aws::String& GetFunctionArn() const{ return m_functionArn; }

    /**
     * The ARN of the Lambda function.
     */
    inline bool FunctionArnHasBeenSet() const { return m_functionArnHasBeenSet; }

    /**
     * The ARN of the Lambda function.
     */
    inline void SetFunctionArn(const Aws::String& value) { m_functionArnHasBeenSet = true; m_functionArn = value; }

    /**
     * The ARN of the Lambda function.
     */
    inline void SetFunctionArn(Aws::String&& value) { m_functionArnHasBeenSet = true; m_functionArn = std::move(value); }

    /**
     * The ARN of the Lambda function.
     */
    inline void SetFunctionArn(const char* value) { m_functionArnHasBeenSet = true; m_functionArn.assign(value); }

    /**
     * The ARN of the Lambda function.
     */
    inline Function& WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}

    /**
     * The ARN of the Lambda function.
     */
    inline Function& WithFunctionArn(Aws::String&& value) { SetFunctionArn(std::move(value)); return *this;}

    /**
     * The ARN of the Lambda function.
     */
    inline Function& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}


    /**
     * The configuration of the Lambda function.
     */
    inline const FunctionConfiguration& GetFunctionConfiguration() const{ return m_functionConfiguration; }

    /**
     * The configuration of the Lambda function.
     */
    inline bool FunctionConfigurationHasBeenSet() const { return m_functionConfigurationHasBeenSet; }

    /**
     * The configuration of the Lambda function.
     */
    inline void SetFunctionConfiguration(const FunctionConfiguration& value) { m_functionConfigurationHasBeenSet = true; m_functionConfiguration = value; }

    /**
     * The configuration of the Lambda function.
     */
    inline void SetFunctionConfiguration(FunctionConfiguration&& value) { m_functionConfigurationHasBeenSet = true; m_functionConfiguration = std::move(value); }

    /**
     * The configuration of the Lambda function.
     */
    inline Function& WithFunctionConfiguration(const FunctionConfiguration& value) { SetFunctionConfiguration(value); return *this;}

    /**
     * The configuration of the Lambda function.
     */
    inline Function& WithFunctionConfiguration(FunctionConfiguration&& value) { SetFunctionConfiguration(std::move(value)); return *this;}


    /**
     * A descriptive or arbitrary ID for the function. This value must be unique within
     * the function definition version. Max length is 128 characters with pattern
     * ''[a-zA-Z0-9:_-]+''.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * A descriptive or arbitrary ID for the function. This value must be unique within
     * the function definition version. Max length is 128 characters with pattern
     * ''[a-zA-Z0-9:_-]+''.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * A descriptive or arbitrary ID for the function. This value must be unique within
     * the function definition version. Max length is 128 characters with pattern
     * ''[a-zA-Z0-9:_-]+''.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * A descriptive or arbitrary ID for the function. This value must be unique within
     * the function definition version. Max length is 128 characters with pattern
     * ''[a-zA-Z0-9:_-]+''.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * A descriptive or arbitrary ID for the function. This value must be unique within
     * the function definition version. Max length is 128 characters with pattern
     * ''[a-zA-Z0-9:_-]+''.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * A descriptive or arbitrary ID for the function. This value must be unique within
     * the function definition version. Max length is 128 characters with pattern
     * ''[a-zA-Z0-9:_-]+''.
     */
    inline Function& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * A descriptive or arbitrary ID for the function. This value must be unique within
     * the function definition version. Max length is 128 characters with pattern
     * ''[a-zA-Z0-9:_-]+''.
     */
    inline Function& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * A descriptive or arbitrary ID for the function. This value must be unique within
     * the function definition version. Max length is 128 characters with pattern
     * ''[a-zA-Z0-9:_-]+''.
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
