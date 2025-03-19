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
    AWS_FIREHOSE_API DynamicPartitioningConfiguration() = default;
    AWS_FIREHOSE_API DynamicPartitioningConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API DynamicPartitioningConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The retry behavior in case Firehose is unable to deliver data to an Amazon S3
     * prefix.</p>
     */
    inline const RetryOptions& GetRetryOptions() const { return m_retryOptions; }
    inline bool RetryOptionsHasBeenSet() const { return m_retryOptionsHasBeenSet; }
    template<typename RetryOptionsT = RetryOptions>
    void SetRetryOptions(RetryOptionsT&& value) { m_retryOptionsHasBeenSet = true; m_retryOptions = std::forward<RetryOptionsT>(value); }
    template<typename RetryOptionsT = RetryOptions>
    DynamicPartitioningConfiguration& WithRetryOptions(RetryOptionsT&& value) { SetRetryOptions(std::forward<RetryOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that the dynamic partitioning is enabled for this Firehose
     * stream.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline DynamicPartitioningConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}
  private:

    RetryOptions m_retryOptions;
    bool m_retryOptionsHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
