/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ControlPlaneTagFilter.h>

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
 * <p>Filters to apply when searching for metrics.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/MetricSearchFilter">AWS
 * API Reference</a></p>
 */
class MetricSearchFilter {
 public:
  AWS_CONNECT_API MetricSearchFilter() = default;
  AWS_CONNECT_API MetricSearchFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API MetricSearchFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An object that can be used to specify tag conditions inside the
   * <code>SearchFilter</code>. This accepts an OR of AND (List of List) input
   * where:</p> <ul> <li> <p>The top level list specifies conditions that need to be
   * applied with OR operator.</p> </li> <li> <p>The inner list specifies conditions
   * that need to be applied with AND operator.</p> </li> </ul>
   */
  inline const ControlPlaneTagFilter& GetTagFilter() const { return m_tagFilter; }
  inline bool TagFilterHasBeenSet() const { return m_tagFilterHasBeenSet; }
  template <typename TagFilterT = ControlPlaneTagFilter>
  void SetTagFilter(TagFilterT&& value) {
    m_tagFilterHasBeenSet = true;
    m_tagFilter = std::forward<TagFilterT>(value);
  }
  template <typename TagFilterT = ControlPlaneTagFilter>
  MetricSearchFilter& WithTagFilter(TagFilterT&& value) {
    SetTagFilter(std::forward<TagFilterT>(value));
    return *this;
  }
  ///@}
 private:
  ControlPlaneTagFilter m_tagFilter;
  bool m_tagFilterHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
