/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/interconnect/Interconnect_EXPORTS.h>
#include <aws/interconnect/model/AttachPointType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Interconnect {
namespace Model {

/**
 * <p>Describes a possible Attach Point for a Connection.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/interconnect-2022-07-26/AttachPointDescriptor">AWS
 * API Reference</a></p>
 */
class AttachPointDescriptor {
 public:
  AWS_INTERCONNECT_API AttachPointDescriptor() = default;
  AWS_INTERCONNECT_API AttachPointDescriptor(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_INTERCONNECT_API AttachPointDescriptor& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_INTERCONNECT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The type of this AttachPoint, which will dictate the syntax of the
   * identifier.</p> <p>Current types include:</p> <ul> <li> <p>ARN</p> </li> <li>
   * <p>DirectConnect Gateway</p> </li> </ul>
   */
  inline AttachPointType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(AttachPointType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline AttachPointDescriptor& WithType(AttachPointType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier for the specific type of the AttachPoint.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  AttachPointDescriptor& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The descriptive name of the identifier attach point.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  AttachPointDescriptor& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}
 private:
  AttachPointType m_type{AttachPointType::NOT_SET};

  Aws::String m_identifier;

  Aws::String m_name;
  bool m_typeHasBeenSet = false;
  bool m_identifierHasBeenSet = false;
  bool m_nameHasBeenSet = false;
};

}  // namespace Model
}  // namespace Interconnect
}  // namespace Aws
