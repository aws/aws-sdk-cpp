/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ACM {
namespace Model {

/**
 * <p>Defines a custom ASN.1 X.400 <code>GeneralName</code> using an object
 * identifier (OID) and value. For more information, see NIST's definition of <a
 * href="https://csrc.nist.gov/glossary/term/Object_Identifier">Object Identifier
 * (OID)</a>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/OtherName">AWS API
 * Reference</a></p>
 */
class OtherName {
 public:
  AWS_ACM_API OtherName() = default;
  AWS_ACM_API OtherName(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API OtherName& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies an OID.</p>
   */
  inline const Aws::String& GetObjectIdentifier() const { return m_objectIdentifier; }
  inline bool ObjectIdentifierHasBeenSet() const { return m_objectIdentifierHasBeenSet; }
  template <typename ObjectIdentifierT = Aws::String>
  void SetObjectIdentifier(ObjectIdentifierT&& value) {
    m_objectIdentifierHasBeenSet = true;
    m_objectIdentifier = std::forward<ObjectIdentifierT>(value);
  }
  template <typename ObjectIdentifierT = Aws::String>
  OtherName& WithObjectIdentifier(ObjectIdentifierT&& value) {
    SetObjectIdentifier(std::forward<ObjectIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies an OID value.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  OtherName& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_objectIdentifier;

  Aws::String m_value;
  bool m_objectIdentifierHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
