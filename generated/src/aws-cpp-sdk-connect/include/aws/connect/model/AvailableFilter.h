/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AvailableFilterType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>A filter that is available for use with the metric. Part of an
 * AvailableFilterList that describes the filters that are available for use with
 * the metric.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AvailableFilter">AWS
 * API Reference</a></p>
 */
class AvailableFilter {
 public:
  AWS_CONNECT_API AvailableFilter() = default;
  AWS_CONNECT_API AvailableFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API AvailableFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the filter.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  AvailableFilter& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the filter. Valid values: <code>METRIC_LEVEL</code> |
   * <code>RESOURCE_LEVEL</code>.</p>
   */
  inline AvailableFilterType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(AvailableFilterType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline AvailableFilter& WithType(AvailableFilterType value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  AvailableFilterType m_type{AvailableFilterType::NOT_SET};
  bool m_idHasBeenSet = false;
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
