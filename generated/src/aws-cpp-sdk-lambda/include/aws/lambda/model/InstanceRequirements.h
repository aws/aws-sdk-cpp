/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/Architecture.h>

#include <utility>

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
 * <p>Specifications that define the characteristics and constraints for compute
 * instances used by the capacity provider.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/InstanceRequirements">AWS
 * API Reference</a></p>
 */
class InstanceRequirements {
 public:
  AWS_LAMBDA_API InstanceRequirements() = default;
  AWS_LAMBDA_API InstanceRequirements(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API InstanceRequirements& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of supported CPU architectures for compute instances. Valid values
   * include <code>x86_64</code> and <code>arm64</code>.</p>
   */
  inline const Aws::Vector<Architecture>& GetArchitectures() const { return m_architectures; }
  inline bool ArchitecturesHasBeenSet() const { return m_architecturesHasBeenSet; }
  template <typename ArchitecturesT = Aws::Vector<Architecture>>
  void SetArchitectures(ArchitecturesT&& value) {
    m_architecturesHasBeenSet = true;
    m_architectures = std::forward<ArchitecturesT>(value);
  }
  template <typename ArchitecturesT = Aws::Vector<Architecture>>
  InstanceRequirements& WithArchitectures(ArchitecturesT&& value) {
    SetArchitectures(std::forward<ArchitecturesT>(value));
    return *this;
  }
  inline InstanceRequirements& AddArchitectures(Architecture value) {
    m_architecturesHasBeenSet = true;
    m_architectures.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of EC2 instance types that the capacity provider is allowed to use. If
   * not specified, all compatible instance types are allowed.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedInstanceTypes() const { return m_allowedInstanceTypes; }
  inline bool AllowedInstanceTypesHasBeenSet() const { return m_allowedInstanceTypesHasBeenSet; }
  template <typename AllowedInstanceTypesT = Aws::Vector<Aws::String>>
  void SetAllowedInstanceTypes(AllowedInstanceTypesT&& value) {
    m_allowedInstanceTypesHasBeenSet = true;
    m_allowedInstanceTypes = std::forward<AllowedInstanceTypesT>(value);
  }
  template <typename AllowedInstanceTypesT = Aws::Vector<Aws::String>>
  InstanceRequirements& WithAllowedInstanceTypes(AllowedInstanceTypesT&& value) {
    SetAllowedInstanceTypes(std::forward<AllowedInstanceTypesT>(value));
    return *this;
  }
  template <typename AllowedInstanceTypesT = Aws::String>
  InstanceRequirements& AddAllowedInstanceTypes(AllowedInstanceTypesT&& value) {
    m_allowedInstanceTypesHasBeenSet = true;
    m_allowedInstanceTypes.emplace_back(std::forward<AllowedInstanceTypesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of EC2 instance types that the capacity provider should not use, even
   * if they meet other requirements.</p>
   */
  inline const Aws::Vector<Aws::String>& GetExcludedInstanceTypes() const { return m_excludedInstanceTypes; }
  inline bool ExcludedInstanceTypesHasBeenSet() const { return m_excludedInstanceTypesHasBeenSet; }
  template <typename ExcludedInstanceTypesT = Aws::Vector<Aws::String>>
  void SetExcludedInstanceTypes(ExcludedInstanceTypesT&& value) {
    m_excludedInstanceTypesHasBeenSet = true;
    m_excludedInstanceTypes = std::forward<ExcludedInstanceTypesT>(value);
  }
  template <typename ExcludedInstanceTypesT = Aws::Vector<Aws::String>>
  InstanceRequirements& WithExcludedInstanceTypes(ExcludedInstanceTypesT&& value) {
    SetExcludedInstanceTypes(std::forward<ExcludedInstanceTypesT>(value));
    return *this;
  }
  template <typename ExcludedInstanceTypesT = Aws::String>
  InstanceRequirements& AddExcludedInstanceTypes(ExcludedInstanceTypesT&& value) {
    m_excludedInstanceTypesHasBeenSet = true;
    m_excludedInstanceTypes.emplace_back(std::forward<ExcludedInstanceTypesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Architecture> m_architectures;
  bool m_architecturesHasBeenSet = false;

  Aws::Vector<Aws::String> m_allowedInstanceTypes;
  bool m_allowedInstanceTypesHasBeenSet = false;

  Aws::Vector<Aws::String> m_excludedInstanceTypes;
  bool m_excludedInstanceTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
