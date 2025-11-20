/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Lambda {
namespace Model {

/**
 * <p>The <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/invocation-eventsourcemapping.html#invocation-eventsourcemapping-provisioned-mode">
 * provisioned mode</a> configuration for the event source. Use Provisioned Mode to
 * customize the minimum and maximum number of event pollers for your event
 * source.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/ProvisionedPollerConfig">AWS
 * API Reference</a></p>
 */
class ProvisionedPollerConfig {
 public:
  AWS_LAMBDA_API ProvisionedPollerConfig() = default;
  AWS_LAMBDA_API ProvisionedPollerConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API ProvisionedPollerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The minimum number of event pollers this event source can scale down to. For
   * Amazon SQS events source mappings, default is 2, and minimum 2 required. For
   * Amazon MSK and self-managed Apache Kafka event source mappings, default is
   * 1.</p>
   */
  inline int GetMinimumPollers() const { return m_minimumPollers; }
  inline bool MinimumPollersHasBeenSet() const { return m_minimumPollersHasBeenSet; }
  inline void SetMinimumPollers(int value) {
    m_minimumPollersHasBeenSet = true;
    m_minimumPollers = value;
  }
  inline ProvisionedPollerConfig& WithMinimumPollers(int value) {
    SetMinimumPollers(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of event pollers this event source can scale up to. For
   * Amazon SQS events source mappings, default is 200, and minimum value allowed is
   * 2. For Amazon MSK and self-managed Apache Kafka event source mappings, default
   * is 200, and minimum value allowed is 1.</p>
   */
  inline int GetMaximumPollers() const { return m_maximumPollers; }
  inline bool MaximumPollersHasBeenSet() const { return m_maximumPollersHasBeenSet; }
  inline void SetMaximumPollers(int value) {
    m_maximumPollersHasBeenSet = true;
    m_maximumPollers = value;
  }
  inline ProvisionedPollerConfig& WithMaximumPollers(int value) {
    SetMaximumPollers(value);
    return *this;
  }
  ///@}
 private:
  int m_minimumPollers{0};
  bool m_minimumPollersHasBeenSet = false;

  int m_maximumPollers{0};
  bool m_maximumPollersHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
