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
   * <p>An object that contains the Amazon Resource Name (ARN) of the <a
   * href="https://docs.aws.amazon.com/lambda/">AWS Lambda</a> function that is used
   * to preprocess records in the stream, and the ARN of the IAM role that is used to
   * access the AWS Lambda expression.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/InputLambdaProcessorDescription">AWS
   * API Reference</a></p>
   */
  class InputLambdaProcessorDescription
  {
  public:
    AWS_KINESISANALYTICS_API InputLambdaProcessorDescription();
    AWS_KINESISANALYTICS_API InputLambdaProcessorDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API InputLambdaProcessorDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the <a href="https://docs.aws.amazon.com/lambda/">AWS Lambda</a>
     * function that is used to preprocess the records in the stream.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>The ARN of the <a href="https://docs.aws.amazon.com/lambda/">AWS Lambda</a>
     * function that is used to preprocess the records in the stream.</p>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p>The ARN of the <a href="https://docs.aws.amazon.com/lambda/">AWS Lambda</a>
     * function that is used to preprocess the records in the stream.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>The ARN of the <a href="https://docs.aws.amazon.com/lambda/">AWS Lambda</a>
     * function that is used to preprocess the records in the stream.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p>The ARN of the <a href="https://docs.aws.amazon.com/lambda/">AWS Lambda</a>
     * function that is used to preprocess the records in the stream.</p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>The ARN of the <a href="https://docs.aws.amazon.com/lambda/">AWS Lambda</a>
     * function that is used to preprocess the records in the stream.</p>
     */
    inline InputLambdaProcessorDescription& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>The ARN of the <a href="https://docs.aws.amazon.com/lambda/">AWS Lambda</a>
     * function that is used to preprocess the records in the stream.</p>
     */
    inline InputLambdaProcessorDescription& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the <a href="https://docs.aws.amazon.com/lambda/">AWS Lambda</a>
     * function that is used to preprocess the records in the stream.</p>
     */
    inline InputLambdaProcessorDescription& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    /**
     * <p>The ARN of the IAM role that is used to access the AWS Lambda function.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The ARN of the IAM role that is used to access the AWS Lambda function.</p>
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that is used to access the AWS Lambda function.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The ARN of the IAM role that is used to access the AWS Lambda function.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>The ARN of the IAM role that is used to access the AWS Lambda function.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The ARN of the IAM role that is used to access the AWS Lambda function.</p>
     */
    inline InputLambdaProcessorDescription& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The ARN of the IAM role that is used to access the AWS Lambda function.</p>
     */
    inline InputLambdaProcessorDescription& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that is used to access the AWS Lambda function.</p>
     */
    inline InputLambdaProcessorDescription& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}

  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
