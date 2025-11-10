/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/model/EnabledControlInheritanceDrift.h>
#include <aws/controltower/model/EnabledControlResourceDrift.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ControlTower {
namespace Model {

/**
 * <p>Defines the various categories of drift that can occur for an enabled control
 * resource.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/EnabledControlDriftTypes">AWS
 * API Reference</a></p>
 */
class EnabledControlDriftTypes {
 public:
  AWS_CONTROLTOWER_API EnabledControlDriftTypes() = default;
  AWS_CONTROLTOWER_API EnabledControlDriftTypes(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTROLTOWER_API EnabledControlDriftTypes& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Indicates drift related to inheritance configuration between parent and child
   * controls.</p>
   */
  inline const EnabledControlInheritanceDrift& GetInheritance() const { return m_inheritance; }
  inline bool InheritanceHasBeenSet() const { return m_inheritanceHasBeenSet; }
  template <typename InheritanceT = EnabledControlInheritanceDrift>
  void SetInheritance(InheritanceT&& value) {
    m_inheritanceHasBeenSet = true;
    m_inheritance = std::forward<InheritanceT>(value);
  }
  template <typename InheritanceT = EnabledControlInheritanceDrift>
  EnabledControlDriftTypes& WithInheritance(InheritanceT&& value) {
    SetInheritance(std::forward<InheritanceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates drift related to the underlying Amazon Web Services resources
   * managed by the control.</p>
   */
  inline const EnabledControlResourceDrift& GetResource() const { return m_resource; }
  inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
  template <typename ResourceT = EnabledControlResourceDrift>
  void SetResource(ResourceT&& value) {
    m_resourceHasBeenSet = true;
    m_resource = std::forward<ResourceT>(value);
  }
  template <typename ResourceT = EnabledControlResourceDrift>
  EnabledControlDriftTypes& WithResource(ResourceT&& value) {
    SetResource(std::forward<ResourceT>(value));
    return *this;
  }
  ///@}
 private:
  EnabledControlInheritanceDrift m_inheritance;
  bool m_inheritanceHasBeenSet = false;

  EnabledControlResourceDrift m_resource;
  bool m_resourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace ControlTower
}  // namespace Aws
