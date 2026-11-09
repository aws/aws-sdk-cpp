/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/EMR_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EMR {
namespace Model {

/**
 * <p>Additional information about a step's execution, available after the step has
 * started running.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/StepAdditionalInfo">AWS
 * API Reference</a></p>
 */
class StepAdditionalInfo {
 public:
  AWS_EMR_API StepAdditionalInfo() = default;
  AWS_EMR_API StepAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMR_API StepAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The YARN application IDs associated with the step.</p>
   */
  inline const Aws::Vector<Aws::String>& GetResourceManagerApplicationIds() const { return m_resourceManagerApplicationIds; }
  inline bool ResourceManagerApplicationIdsHasBeenSet() const { return m_resourceManagerApplicationIdsHasBeenSet; }
  template <typename ResourceManagerApplicationIdsT = Aws::Vector<Aws::String>>
  void SetResourceManagerApplicationIds(ResourceManagerApplicationIdsT&& value) {
    m_resourceManagerApplicationIdsHasBeenSet = true;
    m_resourceManagerApplicationIds = std::forward<ResourceManagerApplicationIdsT>(value);
  }
  template <typename ResourceManagerApplicationIdsT = Aws::Vector<Aws::String>>
  StepAdditionalInfo& WithResourceManagerApplicationIds(ResourceManagerApplicationIdsT&& value) {
    SetResourceManagerApplicationIds(std::forward<ResourceManagerApplicationIdsT>(value));
    return *this;
  }
  template <typename ResourceManagerApplicationIdsT = Aws::String>
  StepAdditionalInfo& AddResourceManagerApplicationIds(ResourceManagerApplicationIdsT&& value) {
    m_resourceManagerApplicationIdsHasBeenSet = true;
    m_resourceManagerApplicationIds.emplace_back(std::forward<ResourceManagerApplicationIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The address of the YARN resource manager that processed the step.</p>
   */
  inline const Aws::String& GetResourceManager() const { return m_resourceManager; }
  inline bool ResourceManagerHasBeenSet() const { return m_resourceManagerHasBeenSet; }
  template <typename ResourceManagerT = Aws::String>
  void SetResourceManager(ResourceManagerT&& value) {
    m_resourceManagerHasBeenSet = true;
    m_resourceManager = std::forward<ResourceManagerT>(value);
  }
  template <typename ResourceManagerT = Aws::String>
  StepAdditionalInfo& WithResourceManager(ResourceManagerT&& value) {
    SetResourceManager(std::forward<ResourceManagerT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_resourceManagerApplicationIds;

  Aws::String m_resourceManager;
  bool m_resourceManagerApplicationIdsHasBeenSet = false;
  bool m_resourceManagerHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMR
}  // namespace Aws
