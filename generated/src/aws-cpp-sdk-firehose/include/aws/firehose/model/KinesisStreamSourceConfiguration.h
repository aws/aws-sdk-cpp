﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p>The stream and role Amazon Resource Names (ARNs) for a Kinesis data stream
   * used as the source for a Firehose stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/KinesisStreamSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class KinesisStreamSourceConfiguration
  {
  public:
    AWS_FIREHOSE_API KinesisStreamSourceConfiguration();
    AWS_FIREHOSE_API KinesisStreamSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API KinesisStreamSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the source Kinesis data stream. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kinesis-streams">Amazon
     * Kinesis Data Streams ARN Format</a>.</p>
     */
    inline const Aws::String& GetKinesisStreamARN() const{ return m_kinesisStreamARN; }
    inline bool KinesisStreamARNHasBeenSet() const { return m_kinesisStreamARNHasBeenSet; }
    inline void SetKinesisStreamARN(const Aws::String& value) { m_kinesisStreamARNHasBeenSet = true; m_kinesisStreamARN = value; }
    inline void SetKinesisStreamARN(Aws::String&& value) { m_kinesisStreamARNHasBeenSet = true; m_kinesisStreamARN = std::move(value); }
    inline void SetKinesisStreamARN(const char* value) { m_kinesisStreamARNHasBeenSet = true; m_kinesisStreamARN.assign(value); }
    inline KinesisStreamSourceConfiguration& WithKinesisStreamARN(const Aws::String& value) { SetKinesisStreamARN(value); return *this;}
    inline KinesisStreamSourceConfiguration& WithKinesisStreamARN(Aws::String&& value) { SetKinesisStreamARN(std::move(value)); return *this;}
    inline KinesisStreamSourceConfiguration& WithKinesisStreamARN(const char* value) { SetKinesisStreamARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role that provides access to the source Kinesis data stream.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">Amazon
     * Web Services Identity and Access Management (IAM) ARN Format</a>.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }
    inline KinesisStreamSourceConfiguration& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}
    inline KinesisStreamSourceConfiguration& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}
    inline KinesisStreamSourceConfiguration& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}
    ///@}
  private:

    Aws::String m_kinesisStreamARN;
    bool m_kinesisStreamARNHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
