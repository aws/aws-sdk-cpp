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
   * <p>When configuring application output, identifies an Amazon Kinesis Firehose
   * delivery stream as the destination. You provide the stream Amazon Resource Name
   * (ARN) and an IAM role that enables Amazon Kinesis Analytics to write to the
   * stream on your behalf.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/KinesisFirehoseOutput">AWS
   * API Reference</a></p>
   */
  class KinesisFirehoseOutput
  {
  public:
    AWS_KINESISANALYTICS_API KinesisFirehoseOutput();
    AWS_KINESISANALYTICS_API KinesisFirehoseOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API KinesisFirehoseOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>ARN of the destination Amazon Kinesis Firehose delivery stream to write
     * to.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>ARN of the destination Amazon Kinesis Firehose delivery stream to write
     * to.</p>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p>ARN of the destination Amazon Kinesis Firehose delivery stream to write
     * to.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>ARN of the destination Amazon Kinesis Firehose delivery stream to write
     * to.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p>ARN of the destination Amazon Kinesis Firehose delivery stream to write
     * to.</p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>ARN of the destination Amazon Kinesis Firehose delivery stream to write
     * to.</p>
     */
    inline KinesisFirehoseOutput& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>ARN of the destination Amazon Kinesis Firehose delivery stream to write
     * to.</p>
     */
    inline KinesisFirehoseOutput& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p>ARN of the destination Amazon Kinesis Firehose delivery stream to write
     * to.</p>
     */
    inline KinesisFirehoseOutput& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to write to the
     * destination stream on your behalf. You need to grant the necessary permissions
     * to this role.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to write to the
     * destination stream on your behalf. You need to grant the necessary permissions
     * to this role.</p>
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to write to the
     * destination stream on your behalf. You need to grant the necessary permissions
     * to this role.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to write to the
     * destination stream on your behalf. You need to grant the necessary permissions
     * to this role.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to write to the
     * destination stream on your behalf. You need to grant the necessary permissions
     * to this role.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to write to the
     * destination stream on your behalf. You need to grant the necessary permissions
     * to this role.</p>
     */
    inline KinesisFirehoseOutput& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to write to the
     * destination stream on your behalf. You need to grant the necessary permissions
     * to this role.</p>
     */
    inline KinesisFirehoseOutput& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to write to the
     * destination stream on your behalf. You need to grant the necessary permissions
     * to this role.</p>
     */
    inline KinesisFirehoseOutput& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}

  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
