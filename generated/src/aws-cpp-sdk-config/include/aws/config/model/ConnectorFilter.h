/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/ConnectorFilterName.h>
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
namespace ConfigService {
namespace Model {

/**
 * <p>Filters connectors based on the connector provider.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConnectorFilter">AWS
 * API Reference</a></p>
 */
class ConnectorFilter {
 public:
  AWS_CONFIGSERVICE_API ConnectorFilter() = default;
  AWS_CONFIGSERVICE_API ConnectorFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONFIGSERVICE_API ConnectorFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the filter. Currently, only <code>provider</code> is
   * supported.</p>
   */
  inline ConnectorFilterName GetFilterName() const { return m_filterName; }
  inline bool FilterNameHasBeenSet() const { return m_filterNameHasBeenSet; }
  inline void SetFilterName(ConnectorFilterName value) {
    m_filterNameHasBeenSet = true;
    m_filterName = value;
  }
  inline ConnectorFilter& WithFilterName(ConnectorFilterName value) {
    SetFilterName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value of the filter. For <code>provider</code>, valid values include:
   * <code>AZURE</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetFilterValues() const { return m_filterValues; }
  inline bool FilterValuesHasBeenSet() const { return m_filterValuesHasBeenSet; }
  template <typename FilterValuesT = Aws::Vector<Aws::String>>
  void SetFilterValues(FilterValuesT&& value) {
    m_filterValuesHasBeenSet = true;
    m_filterValues = std::forward<FilterValuesT>(value);
  }
  template <typename FilterValuesT = Aws::Vector<Aws::String>>
  ConnectorFilter& WithFilterValues(FilterValuesT&& value) {
    SetFilterValues(std::forward<FilterValuesT>(value));
    return *this;
  }
  template <typename FilterValuesT = Aws::String>
  ConnectorFilter& AddFilterValues(FilterValuesT&& value) {
    m_filterValuesHasBeenSet = true;
    m_filterValues.emplace_back(std::forward<FilterValuesT>(value));
    return *this;
  }
  ///@}
 private:
  ConnectorFilterName m_filterName{ConnectorFilterName::NOT_SET};

  Aws::Vector<Aws::String> m_filterValues;
  bool m_filterNameHasBeenSet = false;
  bool m_filterValuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConfigService
}  // namespace Aws
