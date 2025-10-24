/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/model/AccessBudgetDetails.h>
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
namespace CleanRoomsML {
namespace Model {

/**
 * <p>An access budget that defines consumption limits for a specific resource
 * within defined time periods.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/AccessBudget">AWS
 * API Reference</a></p>
 */
class AccessBudget {
 public:
  AWS_CLEANROOMSML_API AccessBudget() = default;
  AWS_CLEANROOMSML_API AccessBudget(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMSML_API AccessBudget& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the resource that this access budget
   * applies to.</p>
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
   * <p>A list of budget details for this resource. Contains active budget periods
   * that apply to the resource.</p>
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
   * <p>The total remaining budget across all active budget periods for this
   * resource.</p>
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
}  // namespace CleanRoomsML
}  // namespace Aws
