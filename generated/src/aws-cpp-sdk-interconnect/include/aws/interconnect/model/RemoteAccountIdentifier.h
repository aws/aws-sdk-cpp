/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/interconnect/Interconnect_EXPORTS.h>

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
 * <p>The types of identifiers that may be needed for remote account
 * specification.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/interconnect-2022-07-26/RemoteAccountIdentifier">AWS
 * API Reference</a></p>
 */
class RemoteAccountIdentifier {
 public:
  AWS_INTERCONNECT_API RemoteAccountIdentifier() = default;
  AWS_INTERCONNECT_API RemoteAccountIdentifier(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_INTERCONNECT_API RemoteAccountIdentifier& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_INTERCONNECT_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>A generic bit of identifying information. Can be used in place of any of the
   * more specific types.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  RemoteAccountIdentifier& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_identifier;
  bool m_identifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace Interconnect
}  // namespace Aws
