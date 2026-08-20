/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
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
namespace Batch {
namespace Model {

/**
 * <p>The instance type requirements for the Amazon ECS Managed Instances capacity
 * provider. Use this to specify which Amazon EC2 instance types or instance
 * families Amazon ECS can launch.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/InstanceRequirementsRequest">AWS
 * API Reference</a></p>
 */
class InstanceRequirementsRequest {
 public:
  AWS_BATCH_API InstanceRequirementsRequest() = default;
  AWS_BATCH_API InstanceRequirementsRequest(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API InstanceRequirementsRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of specific instance types or instance families that Amazon ECS can
   * launch (for example, <code>m5.large</code> or <code>g5</code>). When specified,
   * only these instance types are used.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedInstanceTypes() const { return m_allowedInstanceTypes; }
  inline bool AllowedInstanceTypesHasBeenSet() const { return m_allowedInstanceTypesHasBeenSet; }
  template <typename AllowedInstanceTypesT = Aws::Vector<Aws::String>>
  void SetAllowedInstanceTypes(AllowedInstanceTypesT&& value) {
    m_allowedInstanceTypesHasBeenSet = true;
    m_allowedInstanceTypes = std::forward<AllowedInstanceTypesT>(value);
  }
  template <typename AllowedInstanceTypesT = Aws::Vector<Aws::String>>
  InstanceRequirementsRequest& WithAllowedInstanceTypes(AllowedInstanceTypesT&& value) {
    SetAllowedInstanceTypes(std::forward<AllowedInstanceTypesT>(value));
    return *this;
  }
  template <typename AllowedInstanceTypesT = Aws::String>
  InstanceRequirementsRequest& AddAllowedInstanceTypes(AllowedInstanceTypesT&& value) {
    m_allowedInstanceTypesHasBeenSet = true;
    m_allowedInstanceTypes.emplace_back(std::forward<AllowedInstanceTypesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_allowedInstanceTypes;
  bool m_allowedInstanceTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
