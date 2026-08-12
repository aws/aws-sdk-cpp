/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/model/ParameterTypeType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace IAM {
namespace Model {

/**
 * <p>Defines a parameter that a role template accepts. You supply values for these
 * parameters when you create a role with <a
 * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_AcquireRole.html">AcquireRole</a>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ParameterDefinition">AWS
 * API Reference</a></p>
 */
class ParameterDefinition {
 public:
  AWS_IAM_API ParameterDefinition() = default;
  AWS_IAM_API ParameterDefinition(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_IAM_API ParameterDefinition& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
  AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The name of the parameter.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ParameterDefinition& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data type of the parameter. Valid values are <code>String</code>,
   * <code>StringList</code>, <code>Number</code>, <code>NumberList</code>,
   * <code>Arn</code>, and <code>ArnList</code>.</p>
   */
  inline ParameterTypeType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(ParameterTypeType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline ParameterDefinition& WithType(ParameterTypeType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional subtype that further constrains the values that are allowed for
   * the parameter.</p>
   */
  inline const Aws::String& GetSubType() const { return m_subType; }
  inline bool SubTypeHasBeenSet() const { return m_subTypeHasBeenSet; }
  template <typename SubTypeT = Aws::String>
  void SetSubType(SubTypeT&& value) {
    m_subTypeHasBeenSet = true;
    m_subType = std::forward<SubTypeT>(value);
  }
  template <typename SubTypeT = Aws::String>
  ParameterDefinition& WithSubType(SubTypeT&& value) {
    SetSubType(std::forward<SubTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the parameter.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  ParameterDefinition& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether you must supply a value for the parameter when you create a
   * role from the template.</p>
   */
  inline bool GetIsRequired() const { return m_isRequired; }
  inline bool IsRequiredHasBeenSet() const { return m_isRequiredHasBeenSet; }
  inline void SetIsRequired(bool value) {
    m_isRequiredHasBeenSet = true;
    m_isRequired = value;
  }
  inline ParameterDefinition& WithIsRequired(bool value) {
    SetIsRequired(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value that the service uses for the parameter when you do not supply
   * one.</p>
   */
  inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
  inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
  template <typename DefaultValueT = Aws::String>
  void SetDefaultValue(DefaultValueT&& value) {
    m_defaultValueHasBeenSet = true;
    m_defaultValue = std::forward<DefaultValueT>(value);
  }
  template <typename DefaultValueT = Aws::String>
  ParameterDefinition& WithDefaultValue(DefaultValueT&& value) {
    SetDefaultValue(std::forward<DefaultValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether you can change the parameter value after you create the
   * role.</p>
   */
  inline bool GetImmutable() const { return m_immutable; }
  inline bool ImmutableHasBeenSet() const { return m_immutableHasBeenSet; }
  inline void SetImmutable(bool value) {
    m_immutableHasBeenSet = true;
    m_immutable = value;
  }
  inline ParameterDefinition& WithImmutable(bool value) {
    SetImmutable(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  ParameterTypeType m_type{ParameterTypeType::NOT_SET};

  Aws::String m_subType;

  Aws::String m_description;

  bool m_isRequired{false};

  Aws::String m_defaultValue;

  bool m_immutable{false};
  bool m_nameHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_subTypeHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_isRequiredHasBeenSet = false;
  bool m_defaultValueHasBeenSet = false;
  bool m_immutableHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
