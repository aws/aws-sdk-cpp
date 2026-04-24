/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/QuotaShareInSharePreemptionState.h>

#include <utility>

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
 * <p>Specifies the preemption behavior for jobs in a quota share.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/QuotaSharePreemptionConfiguration">AWS
 * API Reference</a></p>
 */
class QuotaSharePreemptionConfiguration {
 public:
  AWS_BATCH_API QuotaSharePreemptionConfiguration() = default;
  AWS_BATCH_API QuotaSharePreemptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API QuotaSharePreemptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether jobs within a quota share can be preempted by another,
   * higher priority job in the same quota share.</p>
   */
  inline QuotaShareInSharePreemptionState GetInSharePreemption() const { return m_inSharePreemption; }
  inline bool InSharePreemptionHasBeenSet() const { return m_inSharePreemptionHasBeenSet; }
  inline void SetInSharePreemption(QuotaShareInSharePreemptionState value) {
    m_inSharePreemptionHasBeenSet = true;
    m_inSharePreemption = value;
  }
  inline QuotaSharePreemptionConfiguration& WithInSharePreemption(QuotaShareInSharePreemptionState value) {
    SetInSharePreemption(value);
    return *this;
  }
  ///@}
 private:
  QuotaShareInSharePreemptionState m_inSharePreemption{QuotaShareInSharePreemptionState::NOT_SET};
  bool m_inSharePreemptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
