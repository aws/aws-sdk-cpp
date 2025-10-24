/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/AccessBudgetDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRooms {
namespace Model {

/**
 * <p>Controls and tracks usage limits for associated configured tables within a
 * collaboration across queries and job. Supports both period-based budgets that
 * can renew (daily, weekly, or monthly) and fixed lifetime budgets. Contains the
 * resource ARN, remaining budget information, and up to two budget configurations
 * (period-based and lifetime). By default, table usage is unlimited unless a
 * budget is configured.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AccessBudget">AWS
 * API Reference</a></p>
 */
class AccessBudget {
 public:
  AWS_CLEANROOMS_API AccessBudget() = default;
  AWS_CLEANROOMS_API AccessBudget(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API AccessBudget& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the access budget resource.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  AccessBudget& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Detailed budget information including time bounds, remaining budget, and
   * refresh settings.</p>
   */
  inline const Aws::Vector<AccessBudgetDetails>& GetDetails() const { return m_details; }
  inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
  template <typename DetailsT = Aws::Vector<AccessBudgetDetails>>
  void SetDetails(DetailsT&& value) {
    m_detailsHasBeenSet = true;
    m_details = std::forward<DetailsT>(value);
  }
  template <typename DetailsT = Aws::Vector<AccessBudgetDetails>>
  AccessBudget& WithDetails(DetailsT&& value) {
    SetDetails(std::forward<DetailsT>(value));
    return *this;
  }
  template <typename DetailsT = AccessBudgetDetails>
  AccessBudget& AddDetails(DetailsT&& value) {
    m_detailsHasBeenSet = true;
    m_details.emplace_back(std::forward<DetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total remaining budget across all budget parameters, showing the lower
   * value between the per-period budget and lifetime budget for this access budget.
   * For individual parameter budgets, see <code>remainingBudget</code>.</p>
   */
  inline int GetAggregateRemainingBudget() const { return m_aggregateRemainingBudget; }
  inline bool AggregateRemainingBudgetHasBeenSet() const { return m_aggregateRemainingBudgetHasBeenSet; }
  inline void SetAggregateRemainingBudget(int value) {
    m_aggregateRemainingBudgetHasBeenSet = true;
    m_aggregateRemainingBudget = value;
  }
  inline AccessBudget& WithAggregateRemainingBudget(int value) {
    SetAggregateRemainingBudget(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceArn;
  bool m_resourceArnHasBeenSet = false;

  Aws::Vector<AccessBudgetDetails> m_details;
  bool m_detailsHasBeenSet = false;

  int m_aggregateRemainingBudget{0};
  bool m_aggregateRemainingBudgetHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
