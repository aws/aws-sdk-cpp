/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>For a SQL-based Kinesis Data Analytics application, represents an update to
   * the <a>InputLambdaProcessor</a> that is used to preprocess the records in the
   * stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/InputLambdaProcessorUpdate">AWS
   * API Reference</a></p>
   */
  class InputLambdaProcessorUpdate
  {
  public:
    AWS_KINESISANALYTICSV2_API InputLambdaProcessorUpdate();
    AWS_KINESISANALYTICSV2_API InputLambdaProcessorUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API InputLambdaProcessorUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the new Amazon Lambda function that is used
     * to preprocess the records in the stream.</p>  <p>To specify an earlier
     * version of the Lambda function than the latest, include the Lambda function
     * version in the Lambda function ARN. For more information about Lambda ARNs, see
     * <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: Amazon Lambda</a> </p> 
     */
    inline const Aws::String& GetResourceARNUpdate() const{ return m_resourceARNUpdate; }

    /**
     * <p>The Amazon Resource Name (ARN) of the new Amazon Lambda function that is used
     * to preprocess the records in the stream.</p>  <p>To specify an earlier
     * version of the Lambda function than the latest, include the Lambda function
     * version in the Lambda function ARN. For more information about Lambda ARNs, see
     * <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: Amazon Lambda</a> </p> 
     */
    inline bool ResourceARNUpdateHasBeenSet() const { return m_resourceARNUpdateHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the new Amazon Lambda function that is used
     * to preprocess the records in the stream.</p>  <p>To specify an earlier
     * version of the Lambda function than the latest, include the Lambda function
     * version in the Lambda function ARN. For more information about Lambda ARNs, see
     * <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: Amazon Lambda</a> </p> 
     */
    inline void SetResourceARNUpdate(const Aws::String& value) { m_resourceARNUpdateHasBeenSet = true; m_resourceARNUpdate = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the new Amazon Lambda function that is used
     * to preprocess the records in the stream.</p>  <p>To specify an earlier
     * version of the Lambda function than the latest, include the Lambda function
     * version in the Lambda function ARN. For more information about Lambda ARNs, see
     * <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: Amazon Lambda</a> </p> 
     */
    inline void SetResourceARNUpdate(Aws::String&& value) { m_resourceARNUpdateHasBeenSet = true; m_resourceARNUpdate = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the new Amazon Lambda function that is used
     * to preprocess the records in the stream.</p>  <p>To specify an earlier
     * version of the Lambda function than the latest, include the Lambda function
     * version in the Lambda function ARN. For more information about Lambda ARNs, see
     * <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: Amazon Lambda</a> </p> 
     */
    inline void SetResourceARNUpdate(const char* value) { m_resourceARNUpdateHasBeenSet = true; m_resourceARNUpdate.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the new Amazon Lambda function that is used
     * to preprocess the records in the stream.</p>  <p>To specify an earlier
     * version of the Lambda function than the latest, include the Lambda function
     * version in the Lambda function ARN. For more information about Lambda ARNs, see
     * <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: Amazon Lambda</a> </p> 
     */
    inline InputLambdaProcessorUpdate& WithResourceARNUpdate(const Aws::String& value) { SetResourceARNUpdate(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the new Amazon Lambda function that is used
     * to preprocess the records in the stream.</p>  <p>To specify an earlier
     * version of the Lambda function than the latest, include the Lambda function
     * version in the Lambda function ARN. For more information about Lambda ARNs, see
     * <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: Amazon Lambda</a> </p> 
     */
    inline InputLambdaProcessorUpdate& WithResourceARNUpdate(Aws::String&& value) { SetResourceARNUpdate(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the new Amazon Lambda function that is used
     * to preprocess the records in the stream.</p>  <p>To specify an earlier
     * version of the Lambda function than the latest, include the Lambda function
     * version in the Lambda function ARN. For more information about Lambda ARNs, see
     * <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: Amazon Lambda</a> </p> 
     */
    inline InputLambdaProcessorUpdate& WithResourceARNUpdate(const char* value) { SetResourceARNUpdate(value); return *this;}

  private:

    Aws::String m_resourceARNUpdate;
    bool m_resourceARNUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
