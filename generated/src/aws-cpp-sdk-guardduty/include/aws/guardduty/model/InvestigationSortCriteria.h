/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/InvestigationSortField.h>
#include <aws/guardduty/model/OrderBy.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains information about the criteria used for sorting
 * investigations.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/InvestigationSortCriteria">AWS
 * API Reference</a></p>
 */
class InvestigationSortCriteria {
 public:
  AWS_GUARDDUTY_API InvestigationSortCriteria() = default;
  AWS_GUARDDUTY_API InvestigationSortCriteria(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API InvestigationSortCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The attribute by which to sort investigations.</p>
   */
  inline InvestigationSortField GetAttributeName() const { return m_attributeName; }
  inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
  inline void SetAttributeName(InvestigationSortField value) {
    m_attributeNameHasBeenSet = true;
    m_attributeName = value;
  }
  inline InvestigationSortCriteria& WithAttributeName(InvestigationSortField value) {
    SetAttributeName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The order in which the sorted results are to be displayed.</p>
   */
  inline OrderBy GetOrderBy() const { return m_orderBy; }
  inline bool OrderByHasBeenSet() const { return m_orderByHasBeenSet; }
  inline void SetOrderBy(OrderBy value) {
    m_orderByHasBeenSet = true;
    m_orderBy = value;
  }
  inline InvestigationSortCriteria& WithOrderBy(OrderBy value) {
    SetOrderBy(value);
    return *this;
  }
  ///@}
 private:
  InvestigationSortField m_attributeName{InvestigationSortField::NOT_SET};

  OrderBy m_orderBy{OrderBy::NOT_SET};
  bool m_attributeNameHasBeenSet = false;
  bool m_orderByHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
