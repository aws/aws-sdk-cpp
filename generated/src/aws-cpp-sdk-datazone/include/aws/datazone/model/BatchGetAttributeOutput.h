/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/FormOutput.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {

/**
 * <p>The results of the BatchGetAttribute action.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/BatchGetAttributeOutput">AWS
 * API Reference</a></p>
 */
class BatchGetAttributeOutput {
 public:
  AWS_DATAZONE_API BatchGetAttributeOutput() = default;
  AWS_DATAZONE_API BatchGetAttributeOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API BatchGetAttributeOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The attribute ID.</p>
   */
  inline const Aws::String& GetAttributeIdentifier() const { return m_attributeIdentifier; }
  inline bool AttributeIdentifierHasBeenSet() const { return m_attributeIdentifierHasBeenSet; }
  template <typename AttributeIdentifierT = Aws::String>
  void SetAttributeIdentifier(AttributeIdentifierT&& value) {
    m_attributeIdentifierHasBeenSet = true;
    m_attributeIdentifier = std::forward<AttributeIdentifierT>(value);
  }
  template <typename AttributeIdentifierT = Aws::String>
  BatchGetAttributeOutput& WithAttributeIdentifier(AttributeIdentifierT&& value) {
    SetAttributeIdentifier(std::forward<AttributeIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metadata forms that are part of the results of the BatchGetAttribute
   * action.</p>
   */
  inline const Aws::Vector<FormOutput>& GetForms() const { return m_forms; }
  inline bool FormsHasBeenSet() const { return m_formsHasBeenSet; }
  template <typename FormsT = Aws::Vector<FormOutput>>
  void SetForms(FormsT&& value) {
    m_formsHasBeenSet = true;
    m_forms = std::forward<FormsT>(value);
  }
  template <typename FormsT = Aws::Vector<FormOutput>>
  BatchGetAttributeOutput& WithForms(FormsT&& value) {
    SetForms(std::forward<FormsT>(value));
    return *this;
  }
  template <typename FormsT = FormOutput>
  BatchGetAttributeOutput& AddForms(FormsT&& value) {
    m_formsHasBeenSet = true;
    m_forms.emplace_back(std::forward<FormsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_attributeIdentifier;
  bool m_attributeIdentifierHasBeenSet = false;

  Aws::Vector<FormOutput> m_forms;
  bool m_formsHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
