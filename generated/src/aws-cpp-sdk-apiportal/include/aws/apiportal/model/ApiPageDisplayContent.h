/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/DisplayContentOverrides.h>
#include <aws/apiportal/model/None.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace APIPortal {
namespace Model {

/**
 * <p>Exactly one of the members is set: <code>none</code> to use default display
 * content, or <code>overrides</code> to customize it. Modeled as a union so the
 * &quot;exactly one&quot; choice is enforced by type.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/ApiPageDisplayContent">AWS
 * API Reference</a></p>
 */
class ApiPageDisplayContent {
 public:
  AWS_APIPORTAL_API ApiPageDisplayContent() = default;
  AWS_APIPORTAL_API ApiPageDisplayContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API ApiPageDisplayContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Use the content generated from the Managed API.</p>
   */
  inline const None& GetNone() const { return m_none; }
  inline bool NoneHasBeenSet() const { return m_noneHasBeenSet; }
  template <typename NoneT = None>
  void SetNone(NoneT&& value) {
    m_noneHasBeenSet = true;
    m_none = std::forward<NoneT>(value);
  }
  template <typename NoneT = None>
  ApiPageDisplayContent& WithNone(NoneT&& value) {
    SetNone(std::forward<NoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Replace the generated content with your own.</p>
   */
  inline const DisplayContentOverrides& GetOverrides() const { return m_overrides; }
  inline bool OverridesHasBeenSet() const { return m_overridesHasBeenSet; }
  template <typename OverridesT = DisplayContentOverrides>
  void SetOverrides(OverridesT&& value) {
    m_overridesHasBeenSet = true;
    m_overrides = std::forward<OverridesT>(value);
  }
  template <typename OverridesT = DisplayContentOverrides>
  ApiPageDisplayContent& WithOverrides(OverridesT&& value) {
    SetOverrides(std::forward<OverridesT>(value));
    return *this;
  }
  ///@}
 private:
  None m_none;

  DisplayContentOverrides m_overrides;
  bool m_noneHasBeenSet = false;
  bool m_overridesHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
