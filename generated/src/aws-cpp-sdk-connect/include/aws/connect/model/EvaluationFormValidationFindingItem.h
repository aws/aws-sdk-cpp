/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
 * <p>Information about an evaluation form item affected by a validation
 * finding.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormValidationFindingItem">AWS
 * API Reference</a></p>
 */
class EvaluationFormValidationFindingItem {
 public:
  AWS_CONNECT_API EvaluationFormValidationFindingItem() = default;
  AWS_CONNECT_API EvaluationFormValidationFindingItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationFormValidationFindingItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the evaluation form item (question or section) affected by
   * the finding.</p>
   */
  inline const Aws::String& GetRefId() const { return m_refId; }
  inline bool RefIdHasBeenSet() const { return m_refIdHasBeenSet; }
  template <typename RefIdT = Aws::String>
  void SetRefId(RefIdT&& value) {
    m_refIdHasBeenSet = true;
    m_refId = std::forward<RefIdT>(value);
  }
  template <typename RefIdT = Aws::String>
  EvaluationFormValidationFindingItem& WithRefId(RefIdT&& value) {
    SetRefId(std::forward<RefIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specific property of the evaluation form item that the finding relates
   * to.</p>
   */
  inline const Aws::String& GetProperty() const { return m_property; }
  inline bool PropertyHasBeenSet() const { return m_propertyHasBeenSet; }
  template <typename PropertyT = Aws::String>
  void SetProperty(PropertyT&& value) {
    m_propertyHasBeenSet = true;
    m_property = std::forward<PropertyT>(value);
  }
  template <typename PropertyT = Aws::String>
  EvaluationFormValidationFindingItem& WithProperty(PropertyT&& value) {
    SetProperty(std::forward<PropertyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_refId;

  Aws::String m_property;
  bool m_refIdHasBeenSet = false;
  bool m_propertyHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
