/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/model/RetryOptions.h>
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
   * <p>The configuration of the dynamic partitioning mechanism that creates smaller
   * data sets from the streaming data by partitioning it based on partition keys.
   * Currently, dynamic partitioning is only supported for Amazon S3 destinations.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/DynamicPartitioningConfiguration">AWS
   * API Reference</a></p>
   */
  class DynamicPartitioningConfiguration
  {
  public:
    AWS_FIREHOSE_API DynamicPartitioningConfiguration();
    AWS_FIREHOSE_API DynamicPartitioningConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API DynamicPartitioningConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The retry behavior in case Kinesis Data Firehose is unable to deliver data to
     * an Amazon S3 prefix.</p>
     */
    inline const RetryOptions& GetRetryOptions() const{ return m_retryOptions; }

    /**
     * <p>The retry behavior in case Kinesis Data Firehose is unable to deliver data to
     * an Amazon S3 prefix.</p>
     */
    inline bool RetryOptionsHasBeenSet() const { return m_retryOptionsHasBeenSet; }

    /**
     * <p>The retry behavior in case Kinesis Data Firehose is unable to deliver data to
     * an Amazon S3 prefix.</p>
     */
    inline void SetRetryOptions(const RetryOptions& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = value; }

    /**
     * <p>The retry behavior in case Kinesis Data Firehose is unable to deliver data to
     * an Amazon S3 prefix.</p>
     */
    inline void SetRetryOptions(RetryOptions&& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = std::move(value); }

    /**
     * <p>The retry behavior in case Kinesis Data Firehose is unable to deliver data to
     * an Amazon S3 prefix.</p>
     */
    inline DynamicPartitioningConfiguration& WithRetryOptions(const RetryOptions& value) { SetRetryOptions(value); return *this;}

    /**
     * <p>The retry behavior in case Kinesis Data Firehose is unable to deliver data to
     * an Amazon S3 prefix.</p>
     */
    inline DynamicPartitioningConfiguration& WithRetryOptions(RetryOptions&& value) { SetRetryOptions(std::move(value)); return *this;}


    /**
     * <p>Specifies that the dynamic partitioning is enabled for this Kinesis Data
     * Firehose delivery stream.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies that the dynamic partitioning is enabled for this Kinesis Data
     * Firehose delivery stream.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies that the dynamic partitioning is enabled for this Kinesis Data
     * Firehose delivery stream.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies that the dynamic partitioning is enabled for this Kinesis Data
     * Firehose delivery stream.</p>
     */
    inline DynamicPartitioningConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    RetryOptions m_retryOptions;
    bool m_retryOptionsHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
