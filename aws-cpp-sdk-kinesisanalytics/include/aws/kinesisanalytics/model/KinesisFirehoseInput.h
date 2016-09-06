/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p> Identifies an Amazon Kinesis Firehose delivery stream as the streaming
   * source. You provide the Firehose delivery stream's Amazon Resource Name (ARN)
   * and an IAM role ARN that enables Amazon Kinesis Analytics to access the stream
   * on your behalf.</p>
   */
  class AWS_KINESISANALYTICS_API KinesisFirehoseInput
  {
  public:
    KinesisFirehoseInput();
    KinesisFirehoseInput(const Aws::Utils::Json::JsonValue& jsonValue);
    KinesisFirehoseInput& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>ARN of the input Firehose delivery stream.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>ARN of the input Firehose delivery stream.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>ARN of the input Firehose delivery stream.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>ARN of the input Firehose delivery stream.</p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>ARN of the input Firehose delivery stream.</p>
     */
    inline KinesisFirehoseInput& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>ARN of the input Firehose delivery stream.</p>
     */
    inline KinesisFirehoseInput& WithResourceARN(Aws::String&& value) { SetResourceARN(value); return *this;}

    /**
     * <p>ARN of the input Firehose delivery stream.</p>
     */
    inline KinesisFirehoseInput& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to access the
     * stream on your behalf. You need to make sure the role has necessary permissions
     * to access the stream.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to access the
     * stream on your behalf. You need to make sure the role has necessary permissions
     * to access the stream.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to access the
     * stream on your behalf. You need to make sure the role has necessary permissions
     * to access the stream.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to access the
     * stream on your behalf. You need to make sure the role has necessary permissions
     * to access the stream.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to access the
     * stream on your behalf. You need to make sure the role has necessary permissions
     * to access the stream.</p>
     */
    inline KinesisFirehoseInput& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to access the
     * stream on your behalf. You need to make sure the role has necessary permissions
     * to access the stream.</p>
     */
    inline KinesisFirehoseInput& WithRoleARN(Aws::String&& value) { SetRoleARN(value); return *this;}

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to access the
     * stream on your behalf. You need to make sure the role has necessary permissions
     * to access the stream.</p>
     */
    inline KinesisFirehoseInput& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}

  private:
    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet;
    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
