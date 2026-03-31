/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/QuotaShareResourceSharingStrategy.h>

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
 * <p>Specifies whether a quota share reserves, lends, or both lends and borrows
 * idle compute capacity.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/QuotaShareResourceSharingConfiguration">AWS
 * API Reference</a></p>
 */
class QuotaShareResourceSharingConfiguration {
 public:
  AWS_BATCH_API QuotaShareResourceSharingConfiguration() = default;
  AWS_BATCH_API QuotaShareResourceSharingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API QuotaShareResourceSharingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The resource sharing strategy for the quota share. The <code>RESERVE</code>
   * strategy allows a quota share to reserve idle capacity for itself.
   * <code>LEND</code> configures the share to lend its idle capacity to another
   * share in need of capacity. The <code>LEND_AND_BORROW</code> strategy configures
   * the share to borrow idle capacity from an underutilized share, as well as lend
   * to another share.</p>
   */
  inline QuotaShareResourceSharingStrategy GetStrategy() const { return m_strategy; }
  inline bool StrategyHasBeenSet() const { return m_strategyHasBeenSet; }
  inline void SetStrategy(QuotaShareResourceSharingStrategy value) {
    m_strategyHasBeenSet = true;
    m_strategy = value;
  }
  inline QuotaShareResourceSharingConfiguration& WithStrategy(QuotaShareResourceSharingStrategy value) {
    SetStrategy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum percentage of additional capacity that the quota share can borrow
   * from other shares. <code>borrowLimit</code> can only be applied to quota shares
   * with a strategy of <code>LEND_AND_BORROW</code>. This value is expressed as a
   * percentage of the quota share's configured <a
   * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_QuotaShareCapacityLimit.html">CapacityLimits</a>.</p>
   * <p>The <code>borrowLimit</code> is applied uniformly across all capacity units.
   * For example, if the <code>borrowLimit</code> is 200, the quota share can borrow
   * up to 200% of its configured <code>maxCapacity</code> for each capacity unit.
   * The default <code>borrowLimit</code> is -1, which indicates unlimited
   * borrowing.</p>
   */
  inline int GetBorrowLimit() const { return m_borrowLimit; }
  inline bool BorrowLimitHasBeenSet() const { return m_borrowLimitHasBeenSet; }
  inline void SetBorrowLimit(int value) {
    m_borrowLimitHasBeenSet = true;
    m_borrowLimit = value;
  }
  inline QuotaShareResourceSharingConfiguration& WithBorrowLimit(int value) {
    SetBorrowLimit(value);
    return *this;
  }
  ///@}
 private:
  QuotaShareResourceSharingStrategy m_strategy{QuotaShareResourceSharingStrategy::NOT_SET};

  int m_borrowLimit{0};
  bool m_strategyHasBeenSet = false;
  bool m_borrowLimitHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
