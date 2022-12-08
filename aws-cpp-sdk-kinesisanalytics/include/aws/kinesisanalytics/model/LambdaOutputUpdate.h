/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>When updating an output configuration using the <a
   * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_UpdateApplication.html">UpdateApplication</a>
   * operation, provides information about an AWS Lambda function configured as the
   * destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/LambdaOutputUpdate">AWS
   * API Reference</a></p>
   */
  class LambdaOutputUpdate
  {
  public:
    AWS_KINESISANALYTICS_API LambdaOutputUpdate();
    AWS_KINESISANALYTICS_API LambdaOutputUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API LambdaOutputUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Amazon Resource Name (ARN) of the destination Lambda function.</p> 
     * <p>To specify an earlier version of the Lambda function than the latest, include
     * the Lambda function version in the Lambda function ARN. For more information
     * about Lambda ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: AWS Lambda</a> </p> 
     */
    inline const Aws::String& GetResourceARNUpdate() const{ return m_resourceARNUpdate; }

    /**
     * <p>Amazon Resource Name (ARN) of the destination Lambda function.</p> 
     * <p>To specify an earlier version of the Lambda function than the latest, include
     * the Lambda function version in the Lambda function ARN. For more information
     * about Lambda ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: AWS Lambda</a> </p> 
     */
    inline bool ResourceARNUpdateHasBeenSet() const { return m_resourceARNUpdateHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the destination Lambda function.</p> 
     * <p>To specify an earlier version of the Lambda function than the latest, include
     * the Lambda function version in the Lambda function ARN. For more information
     * about Lambda ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: AWS Lambda</a> </p> 
     */
    inline void SetResourceARNUpdate(const Aws::String& value) { m_resourceARNUpdateHasBeenSet = true; m_resourceARNUpdate = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the destination Lambda function.</p> 
     * <p>To specify an earlier version of the Lambda function than the latest, include
     * the Lambda function version in the Lambda function ARN. For more information
     * about Lambda ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: AWS Lambda</a> </p> 
     */
    inline void SetResourceARNUpdate(Aws::String&& value) { m_resourceARNUpdateHasBeenSet = true; m_resourceARNUpdate = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the destination Lambda function.</p> 
     * <p>To specify an earlier version of the Lambda function than the latest, include
     * the Lambda function version in the Lambda function ARN. For more information
     * about Lambda ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: AWS Lambda</a> </p> 
     */
    inline void SetResourceARNUpdate(const char* value) { m_resourceARNUpdateHasBeenSet = true; m_resourceARNUpdate.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the destination Lambda function.</p> 
     * <p>To specify an earlier version of the Lambda function than the latest, include
     * the Lambda function version in the Lambda function ARN. For more information
     * about Lambda ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: AWS Lambda</a> </p> 
     */
    inline LambdaOutputUpdate& WithResourceARNUpdate(const Aws::String& value) { SetResourceARNUpdate(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the destination Lambda function.</p> 
     * <p>To specify an earlier version of the Lambda function than the latest, include
     * the Lambda function version in the Lambda function ARN. For more information
     * about Lambda ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: AWS Lambda</a> </p> 
     */
    inline LambdaOutputUpdate& WithResourceARNUpdate(Aws::String&& value) { SetResourceARNUpdate(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the destination Lambda function.</p> 
     * <p>To specify an earlier version of the Lambda function than the latest, include
     * the Lambda function version in the Lambda function ARN. For more information
     * about Lambda ARNs, see <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: AWS Lambda</a> </p> 
     */
    inline LambdaOutputUpdate& WithResourceARNUpdate(const char* value) { SetResourceARNUpdate(value); return *this;}


    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to write to the
     * destination function on your behalf. You need to grant the necessary permissions
     * to this role. </p>
     */
    inline const Aws::String& GetRoleARNUpdate() const{ return m_roleARNUpdate; }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to write to the
     * destination function on your behalf. You need to grant the necessary permissions
     * to this role. </p>
     */
    inline bool RoleARNUpdateHasBeenSet() const { return m_roleARNUpdateHasBeenSet; }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to write to the
     * destination function on your behalf. You need to grant the necessary permissions
     * to this role. </p>
     */
    inline void SetRoleARNUpdate(const Aws::String& value) { m_roleARNUpdateHasBeenSet = true; m_roleARNUpdate = value; }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to write to the
     * destination function on your behalf. You need to grant the necessary permissions
     * to this role. </p>
     */
    inline void SetRoleARNUpdate(Aws::String&& value) { m_roleARNUpdateHasBeenSet = true; m_roleARNUpdate = std::move(value); }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to write to the
     * destination function on your behalf. You need to grant the necessary permissions
     * to this role. </p>
     */
    inline void SetRoleARNUpdate(const char* value) { m_roleARNUpdateHasBeenSet = true; m_roleARNUpdate.assign(value); }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to write to the
     * destination function on your behalf. You need to grant the necessary permissions
     * to this role. </p>
     */
    inline LambdaOutputUpdate& WithRoleARNUpdate(const Aws::String& value) { SetRoleARNUpdate(value); return *this;}

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to write to the
     * destination function on your behalf. You need to grant the necessary permissions
     * to this role. </p>
     */
    inline LambdaOutputUpdate& WithRoleARNUpdate(Aws::String&& value) { SetRoleARNUpdate(std::move(value)); return *this;}

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to write to the
     * destination function on your behalf. You need to grant the necessary permissions
     * to this role. </p>
     */
    inline LambdaOutputUpdate& WithRoleARNUpdate(const char* value) { SetRoleARNUpdate(value); return *this;}

  private:

    Aws::String m_resourceARNUpdate;
    bool m_resourceARNUpdateHasBeenSet = false;

    Aws::String m_roleARNUpdate;
    bool m_roleARNUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
