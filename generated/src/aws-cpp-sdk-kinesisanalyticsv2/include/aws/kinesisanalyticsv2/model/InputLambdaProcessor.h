﻿/**
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
   * <p>An object that contains the Amazon Resource Name (ARN) of the Amazon Lambda
   * function that is used to preprocess records in the stream in a SQL-based Kinesis
   * Data Analytics application. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/InputLambdaProcessor">AWS
   * API Reference</a></p>
   */
  class InputLambdaProcessor
  {
  public:
    AWS_KINESISANALYTICSV2_API InputLambdaProcessor();
    AWS_KINESISANALYTICSV2_API InputLambdaProcessor(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API InputLambdaProcessor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the Amazon Lambda function that operates on records in the
     * stream.</p>  <p>To specify an earlier version of the Lambda function than
     * the latest, include the Lambda function version in the Lambda function ARN. For
     * more information about Lambda ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-lambda">Example
     * ARNs: Amazon Lambda</a> </p> 
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }
    inline InputLambdaProcessor& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}
    inline InputLambdaProcessor& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}
    inline InputLambdaProcessor& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
