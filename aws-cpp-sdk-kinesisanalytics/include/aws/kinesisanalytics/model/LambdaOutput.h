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
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
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
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p>When configuring application output, identifies an AWS Lambda function as the
   * destination. You provide the function Amazon Resource Name (ARN) and also an IAM
   * role ARN that Amazon Kinesis Analytics can use to write to the function on your
   * behalf. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/LambdaOutput">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICS_API LambdaOutput
  {
  public:
    LambdaOutput();
    LambdaOutput(Aws::Utils::Json::JsonView jsonValue);
    LambdaOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Amazon Resource Name (ARN) of the destination Lambda function to write
     * to.</p> <note> <p>To specify an earlier version of the Lambda function than the
     * latest, include the Lambda function version in the Lambda function ARN. For more
     * information about Lambda ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: AWS Lambda</a> </p> </note>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>Amazon Resource Name (ARN) of the destination Lambda function to write
     * to.</p> <note> <p>To specify an earlier version of the Lambda function than the
     * latest, include the Lambda function version in the Lambda function ARN. For more
     * information about Lambda ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: AWS Lambda</a> </p> </note>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the destination Lambda function to write
     * to.</p> <note> <p>To specify an earlier version of the Lambda function than the
     * latest, include the Lambda function version in the Lambda function ARN. For more
     * information about Lambda ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: AWS Lambda</a> </p> </note>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the destination Lambda function to write
     * to.</p> <note> <p>To specify an earlier version of the Lambda function than the
     * latest, include the Lambda function version in the Lambda function ARN. For more
     * information about Lambda ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: AWS Lambda</a> </p> </note>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the destination Lambda function to write
     * to.</p> <note> <p>To specify an earlier version of the Lambda function than the
     * latest, include the Lambda function version in the Lambda function ARN. For more
     * information about Lambda ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: AWS Lambda</a> </p> </note>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the destination Lambda function to write
     * to.</p> <note> <p>To specify an earlier version of the Lambda function than the
     * latest, include the Lambda function version in the Lambda function ARN. For more
     * information about Lambda ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: AWS Lambda</a> </p> </note>
     */
    inline LambdaOutput& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the destination Lambda function to write
     * to.</p> <note> <p>To specify an earlier version of the Lambda function than the
     * latest, include the Lambda function version in the Lambda function ARN. For more
     * information about Lambda ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: AWS Lambda</a> </p> </note>
     */
    inline LambdaOutput& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the destination Lambda function to write
     * to.</p> <note> <p>To specify an earlier version of the Lambda function than the
     * latest, include the Lambda function version in the Lambda function ARN. For more
     * information about Lambda ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: AWS Lambda</a> </p> </note>
     */
    inline LambdaOutput& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to write to the
     * destination function on your behalf. You need to grant the necessary permissions
     * to this role. </p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to write to the
     * destination function on your behalf. You need to grant the necessary permissions
     * to this role. </p>
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to write to the
     * destination function on your behalf. You need to grant the necessary permissions
     * to this role. </p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to write to the
     * destination function on your behalf. You need to grant the necessary permissions
     * to this role. </p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to write to the
     * destination function on your behalf. You need to grant the necessary permissions
     * to this role. </p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to write to the
     * destination function on your behalf. You need to grant the necessary permissions
     * to this role. </p>
     */
    inline LambdaOutput& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to write to the
     * destination function on your behalf. You need to grant the necessary permissions
     * to this role. </p>
     */
    inline LambdaOutput& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to write to the
     * destination function on your behalf. You need to grant the necessary permissions
     * to this role. </p>
     */
    inline LambdaOutput& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}

  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
