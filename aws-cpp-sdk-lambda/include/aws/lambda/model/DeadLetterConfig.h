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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Lambda
{
namespace Model
{

  /**
   * <p>The <a href="https://docs.aws.amazon.com/lambda/latest/dg/dlq.html">dead
   * letter queue</a> for failed asynchronous invocations.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/DeadLetterConfig">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API DeadLetterConfig
  {
  public:
    DeadLetterConfig();
    DeadLetterConfig(Aws::Utils::Json::JsonView jsonValue);
    DeadLetterConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon SQS queue or Amazon SNS
     * topic.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon SQS queue or Amazon SNS
     * topic.</p>
     */
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon SQS queue or Amazon SNS
     * topic.</p>
     */
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon SQS queue or Amazon SNS
     * topic.</p>
     */
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon SQS queue or Amazon SNS
     * topic.</p>
     */
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon SQS queue or Amazon SNS
     * topic.</p>
     */
    inline DeadLetterConfig& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon SQS queue or Amazon SNS
     * topic.</p>
     */
    inline DeadLetterConfig& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an Amazon SQS queue or Amazon SNS
     * topic.</p>
     */
    inline DeadLetterConfig& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}

  private:

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
