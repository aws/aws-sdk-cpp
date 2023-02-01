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
   * <p>Represents an update to the <a
   * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_InputLambdaProcessor.html">InputLambdaProcessor</a>
   * that is used to preprocess the records in the stream.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/InputLambdaProcessorUpdate">AWS
   * API Reference</a></p>
   */
  class InputLambdaProcessorUpdate
  {
  public:
    AWS_KINESISANALYTICS_API InputLambdaProcessorUpdate();
    AWS_KINESISANALYTICS_API InputLambdaProcessorUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API InputLambdaProcessorUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the new <a
     * href="https://docs.aws.amazon.com/lambda/">AWS Lambda</a> function that is used
     * to preprocess the records in the stream.</p>  <p>To specify an earlier
     * version of the Lambda function than the latest, include the Lambda function
     * version in the Lambda function ARN. For more information about Lambda ARNs, see
     * <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: AWS Lambda</a> </p> 
     */
    inline const Aws::String& GetResourceARNUpdate() const{ return m_resourceARNUpdate; }

    /**
     * <p>The Amazon Resource Name (ARN) of the new <a
     * href="https://docs.aws.amazon.com/lambda/">AWS Lambda</a> function that is used
     * to preprocess the records in the stream.</p>  <p>To specify an earlier
     * version of the Lambda function than the latest, include the Lambda function
     * version in the Lambda function ARN. For more information about Lambda ARNs, see
     * <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: AWS Lambda</a> </p> 
     */
    inline bool ResourceARNUpdateHasBeenSet() const { return m_resourceARNUpdateHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the new <a
     * href="https://docs.aws.amazon.com/lambda/">AWS Lambda</a> function that is used
     * to preprocess the records in the stream.</p>  <p>To specify an earlier
     * version of the Lambda function than the latest, include the Lambda function
     * version in the Lambda function ARN. For more information about Lambda ARNs, see
     * <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: AWS Lambda</a> </p> 
     */
    inline void SetResourceARNUpdate(const Aws::String& value) { m_resourceARNUpdateHasBeenSet = true; m_resourceARNUpdate = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the new <a
     * href="https://docs.aws.amazon.com/lambda/">AWS Lambda</a> function that is used
     * to preprocess the records in the stream.</p>  <p>To specify an earlier
     * version of the Lambda function than the latest, include the Lambda function
     * version in the Lambda function ARN. For more information about Lambda ARNs, see
     * <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: AWS Lambda</a> </p> 
     */
    inline void SetResourceARNUpdate(Aws::String&& value) { m_resourceARNUpdateHasBeenSet = true; m_resourceARNUpdate = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the new <a
     * href="https://docs.aws.amazon.com/lambda/">AWS Lambda</a> function that is used
     * to preprocess the records in the stream.</p>  <p>To specify an earlier
     * version of the Lambda function than the latest, include the Lambda function
     * version in the Lambda function ARN. For more information about Lambda ARNs, see
     * <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: AWS Lambda</a> </p> 
     */
    inline void SetResourceARNUpdate(const char* value) { m_resourceARNUpdateHasBeenSet = true; m_resourceARNUpdate.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the new <a
     * href="https://docs.aws.amazon.com/lambda/">AWS Lambda</a> function that is used
     * to preprocess the records in the stream.</p>  <p>To specify an earlier
     * version of the Lambda function than the latest, include the Lambda function
     * version in the Lambda function ARN. For more information about Lambda ARNs, see
     * <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: AWS Lambda</a> </p> 
     */
    inline InputLambdaProcessorUpdate& WithResourceARNUpdate(const Aws::String& value) { SetResourceARNUpdate(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the new <a
     * href="https://docs.aws.amazon.com/lambda/">AWS Lambda</a> function that is used
     * to preprocess the records in the stream.</p>  <p>To specify an earlier
     * version of the Lambda function than the latest, include the Lambda function
     * version in the Lambda function ARN. For more information about Lambda ARNs, see
     * <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: AWS Lambda</a> </p> 
     */
    inline InputLambdaProcessorUpdate& WithResourceARNUpdate(Aws::String&& value) { SetResourceARNUpdate(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the new <a
     * href="https://docs.aws.amazon.com/lambda/">AWS Lambda</a> function that is used
     * to preprocess the records in the stream.</p>  <p>To specify an earlier
     * version of the Lambda function than the latest, include the Lambda function
     * version in the Lambda function ARN. For more information about Lambda ARNs, see
     * <a
     * href="/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: AWS Lambda</a> </p> 
     */
    inline InputLambdaProcessorUpdate& WithResourceARNUpdate(const char* value) { SetResourceARNUpdate(value); return *this;}


    /**
     * <p>The ARN of the new IAM role that is used to access the AWS Lambda
     * function.</p>
     */
    inline const Aws::String& GetRoleARNUpdate() const{ return m_roleARNUpdate; }

    /**
     * <p>The ARN of the new IAM role that is used to access the AWS Lambda
     * function.</p>
     */
    inline bool RoleARNUpdateHasBeenSet() const { return m_roleARNUpdateHasBeenSet; }

    /**
     * <p>The ARN of the new IAM role that is used to access the AWS Lambda
     * function.</p>
     */
    inline void SetRoleARNUpdate(const Aws::String& value) { m_roleARNUpdateHasBeenSet = true; m_roleARNUpdate = value; }

    /**
     * <p>The ARN of the new IAM role that is used to access the AWS Lambda
     * function.</p>
     */
    inline void SetRoleARNUpdate(Aws::String&& value) { m_roleARNUpdateHasBeenSet = true; m_roleARNUpdate = std::move(value); }

    /**
     * <p>The ARN of the new IAM role that is used to access the AWS Lambda
     * function.</p>
     */
    inline void SetRoleARNUpdate(const char* value) { m_roleARNUpdateHasBeenSet = true; m_roleARNUpdate.assign(value); }

    /**
     * <p>The ARN of the new IAM role that is used to access the AWS Lambda
     * function.</p>
     */
    inline InputLambdaProcessorUpdate& WithRoleARNUpdate(const Aws::String& value) { SetRoleARNUpdate(value); return *this;}

    /**
     * <p>The ARN of the new IAM role that is used to access the AWS Lambda
     * function.</p>
     */
    inline InputLambdaProcessorUpdate& WithRoleARNUpdate(Aws::String&& value) { SetRoleARNUpdate(std::move(value)); return *this;}

    /**
     * <p>The ARN of the new IAM role that is used to access the AWS Lambda
     * function.</p>
     */
    inline InputLambdaProcessorUpdate& WithRoleARNUpdate(const char* value) { SetRoleARNUpdate(value); return *this;}

  private:

    Aws::String m_resourceARNUpdate;
    bool m_resourceARNUpdateHasBeenSet = false;

    Aws::String m_roleARNUpdate;
    bool m_roleARNUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
