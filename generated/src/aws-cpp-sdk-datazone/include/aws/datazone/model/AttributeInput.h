/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/FormInput.h>

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
 * <p>The attribute input.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AttributeInput">AWS
 * API Reference</a></p>
 */
class AttributeInput {
 public:
  AWS_DATAZONE_API AttributeInput() = default;
  AWS_DATAZONE_API AttributeInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API AttributeInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the attribute.</p>
   */
  inline const Aws::String& GetAttributeIdentifier() const { return m_attributeIdentifier; }
  inline bool AttributeIdentifierHasBeenSet() const { return m_attributeIdentifierHasBeenSet; }
  template <typename AttributeIdentifierT = Aws::String>
  void SetAttributeIdentifier(AttributeIdentifierT&& value) {
    m_attributeIdentifierHasBeenSet = true;
    m_attributeIdentifier = std::forward<AttributeIdentifierT>(value);
  }
  template <typename AttributeIdentifierT = Aws::String>
  AttributeInput& WithAttributeIdentifier(AttributeIdentifierT&& value) {
    SetAttributeIdentifier(std::forward<AttributeIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metadata forms as part of the attribute input.</p>
   */
  inline const Aws::Vector<FormInput>& GetForms() const { return m_forms; }
  inline bool FormsHasBeenSet() const { return m_formsHasBeenSet; }
  template <typename FormsT = Aws::Vector<FormInput>>
  void SetForms(FormsT&& value) {
    m_formsHasBeenSet = true;
    m_forms = std::forward<FormsT>(value);
  }
  template <typename FormsT = Aws::Vector<FormInput>>
  AttributeInput& WithForms(FormsT&& value) {
    SetForms(std::forward<FormsT>(value));
    return *this;
  }
  template <typename FormsT = FormInput>
  AttributeInput& AddForms(FormsT&& value) {
    m_formsHasBeenSet = true;
    m_forms.emplace_back(std::forward<FormsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_attributeIdentifier;
  bool m_attributeIdentifierHasBeenSet = false;

  Aws::Vector<FormInput> m_forms;
  bool m_formsHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
