/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/model/SegmentSortDataType.h>
#include <aws/customer-profiles/model/SegmentSortOrder.h>
#include <aws/customer-profiles/model/SortAttributeType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CustomerProfiles {
namespace Model {

/**
 * <p>Defines the characteristics and rules for sorting by a specific
 * attribute.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/SortAttribute">AWS
 * API Reference</a></p>
 */
class SortAttribute {
 public:
  AWS_CUSTOMERPROFILES_API SortAttribute() = default;
  AWS_CUSTOMERPROFILES_API SortAttribute(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API SortAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the attribute to sort by.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  SortAttribute& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data type of the sort attribute (e.g., string, number, date).</p>
   */
  inline SegmentSortDataType GetDataType() const { return m_dataType; }
  inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
  inline void SetDataType(SegmentSortDataType value) {
    m_dataTypeHasBeenSet = true;
    m_dataType = value;
  }
  inline SortAttribute& WithDataType(SegmentSortDataType value) {
    SetDataType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sort order for the attribute (ascending or descending).</p>
   */
  inline SegmentSortOrder GetOrder() const { return m_order; }
  inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
  inline void SetOrder(SegmentSortOrder value) {
    m_orderHasBeenSet = true;
    m_order = value;
  }
  inline SortAttribute& WithOrder(SegmentSortOrder value) {
    SetOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of attribute (e.g., profile, calculated).</p>
   */
  inline SortAttributeType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(SortAttributeType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline SortAttribute& WithType(SortAttributeType value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  SegmentSortDataType m_dataType{SegmentSortDataType::NOT_SET};

  SegmentSortOrder m_order{SegmentSortOrder::NOT_SET};

  SortAttributeType m_type{SortAttributeType::NOT_SET};
  bool m_nameHasBeenSet = false;
  bool m_dataTypeHasBeenSet = false;
  bool m_orderHasBeenSet = false;
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
