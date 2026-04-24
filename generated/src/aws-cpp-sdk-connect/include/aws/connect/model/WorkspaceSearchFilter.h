/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ControlPlaneAttributeFilter.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Defines filters to apply when searching for workspaces, such as tag-based
 * filters.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/WorkspaceSearchFilter">AWS
 * API Reference</a></p>
 */
class WorkspaceSearchFilter {
 public:
  AWS_CONNECT_API WorkspaceSearchFilter() = default;
  AWS_CONNECT_API WorkspaceSearchFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API WorkspaceSearchFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const ControlPlaneAttributeFilter& GetAttributeFilter() const { return m_attributeFilter; }
  inline bool AttributeFilterHasBeenSet() const { return m_attributeFilterHasBeenSet; }
  template <typename AttributeFilterT = ControlPlaneAttributeFilter>
  void SetAttributeFilter(AttributeFilterT&& value) {
    m_attributeFilterHasBeenSet = true;
    m_attributeFilter = std::forward<AttributeFilterT>(value);
  }
  template <typename AttributeFilterT = ControlPlaneAttributeFilter>
  WorkspaceSearchFilter& WithAttributeFilter(AttributeFilterT&& value) {
    SetAttributeFilter(std::forward<AttributeFilterT>(value));
    return *this;
  }
  ///@}
 private:
  ControlPlaneAttributeFilter m_attributeFilter;
  bool m_attributeFilterHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
