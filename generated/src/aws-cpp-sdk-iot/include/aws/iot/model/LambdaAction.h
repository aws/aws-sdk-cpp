/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Describes an action to invoke a Lambda function.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/LambdaAction">AWS
   * API Reference</a></p>
   */
  class LambdaAction
  {
  public:
    AWS_IOT_API LambdaAction();
    AWS_IOT_API LambdaAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API LambdaAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline const Aws::String& GetFunctionArn() const{ return m_functionArn; }

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline bool FunctionArnHasBeenSet() const { return m_functionArnHasBeenSet; }

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline void SetFunctionArn(const Aws::String& value) { m_functionArnHasBeenSet = true; m_functionArn = value; }

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline void SetFunctionArn(Aws::String&& value) { m_functionArnHasBeenSet = true; m_functionArn = std::move(value); }

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline void SetFunctionArn(const char* value) { m_functionArnHasBeenSet = true; m_functionArn.assign(value); }

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline LambdaAction& WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline LambdaAction& WithFunctionArn(Aws::String&& value) { SetFunctionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline LambdaAction& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}

  private:

    Aws::String m_functionArn;
    bool m_functionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
