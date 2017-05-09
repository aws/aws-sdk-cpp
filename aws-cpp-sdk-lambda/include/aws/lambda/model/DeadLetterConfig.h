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
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Lambda
{
namespace Model
{

  /**
   * <p>The parent object that contains the target ARN (Amazon Resource Name) of an
   * Amazon SQS queue or Amazon SNS topic.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeadLetterConfig">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API DeadLetterConfig
  {
  public:
    DeadLetterConfig();
    DeadLetterConfig(const Aws::Utils::Json::JsonValue& jsonValue);
    DeadLetterConfig& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon SQS queue or Amazon SNS topic you
     * specify as your Dead Letter Queue (DLQ).</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon SQS queue or Amazon SNS topic you
     * specify as your Dead Letter Queue (DLQ).</p>
     */
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon SQS queue or Amazon SNS topic you
     * specify as your Dead Letter Queue (DLQ).</p>
     */
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon SQS queue or Amazon SNS topic you
     * specify as your Dead Letter Queue (DLQ).</p>
     */
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon SQS queue or Amazon SNS topic you
     * specify as your Dead Letter Queue (DLQ).</p>
     */
    inline DeadLetterConfig& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon SQS queue or Amazon SNS topic you
     * specify as your Dead Letter Queue (DLQ).</p>
     */
    inline DeadLetterConfig& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon SQS queue or Amazon SNS topic you
     * specify as your Dead Letter Queue (DLQ).</p>
     */
    inline DeadLetterConfig& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}

  private:
    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
