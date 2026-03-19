/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/QuotaShareIdleResourceAssignmentStrategy.h>

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
 * <p>The quota share scheduling policy details for a job queue.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/QuotaSharePolicy">AWS
 * API Reference</a></p>
 */
class QuotaSharePolicy {
 public:
  AWS_BATCH_API QuotaSharePolicy() = default;
  AWS_BATCH_API QuotaSharePolicy(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API QuotaSharePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The strategy that determines how idle resources are assigned to quota shares
   * that are borrowing capacity. Currently, only <code>FIFO</code> is supported.</p>
   */
  inline QuotaShareIdleResourceAssignmentStrategy GetIdleResourceAssignmentStrategy() const { return m_idleResourceAssignmentStrategy; }
  inline bool IdleResourceAssignmentStrategyHasBeenSet() const { return m_idleResourceAssignmentStrategyHasBeenSet; }
  inline void SetIdleResourceAssignmentStrategy(QuotaShareIdleResourceAssignmentStrategy value) {
    m_idleResourceAssignmentStrategyHasBeenSet = true;
    m_idleResourceAssignmentStrategy = value;
  }
  inline QuotaSharePolicy& WithIdleResourceAssignmentStrategy(QuotaShareIdleResourceAssignmentStrategy value) {
    SetIdleResourceAssignmentStrategy(value);
    return *this;
  }
  ///@}
 private:
  QuotaShareIdleResourceAssignmentStrategy m_idleResourceAssignmentStrategy{QuotaShareIdleResourceAssignmentStrategy::NOT_SET};
  bool m_idleResourceAssignmentStrategyHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
