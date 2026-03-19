/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Batch {
namespace Model {

/**
 * <p>Specifies the service job behavior when preempted.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ServiceJobPreemptionConfiguration">AWS
 * API Reference</a></p>
 */
class ServiceJobPreemptionConfiguration {
 public:
  AWS_BATCH_API ServiceJobPreemptionConfiguration() = default;
  AWS_BATCH_API ServiceJobPreemptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API ServiceJobPreemptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of times a service job can be retried after it is preempted. A job
   * will be terminated when preemption retries have been exhausted. If this field is
   * unset, preempted jobs will be requeued an unlimited number of times. </p>
   */
  inline int GetPreemptionRetriesBeforeTermination() const { return m_preemptionRetriesBeforeTermination; }
  inline bool PreemptionRetriesBeforeTerminationHasBeenSet() const { return m_preemptionRetriesBeforeTerminationHasBeenSet; }
  inline void SetPreemptionRetriesBeforeTermination(int value) {
    m_preemptionRetriesBeforeTerminationHasBeenSet = true;
    m_preemptionRetriesBeforeTermination = value;
  }
  inline ServiceJobPreemptionConfiguration& WithPreemptionRetriesBeforeTermination(int value) {
    SetPreemptionRetriesBeforeTermination(value);
    return *this;
  }
  ///@}
 private:
  int m_preemptionRetriesBeforeTermination{0};
  bool m_preemptionRetriesBeforeTerminationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
