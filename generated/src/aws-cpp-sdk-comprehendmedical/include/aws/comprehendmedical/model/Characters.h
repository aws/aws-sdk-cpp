/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/crt/cbor/Cbor.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace ComprehendMedical {
namespace Model {

/**
 * <p> The number of characters in the input text to be analyzed. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/Characters">AWS
 * API Reference</a></p>
 */
class Characters {
 public:
  AWS_COMPREHENDMEDICAL_API Characters() = default;
  AWS_COMPREHENDMEDICAL_API Characters(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPREHENDMEDICAL_API Characters& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPREHENDMEDICAL_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p> The number of characters present in the input text document as processed by
   * Amazon Comprehend Medical. </p>
   */
  inline int64_t GetOriginalTextCharacters() const { return m_originalTextCharacters; }
  inline bool OriginalTextCharactersHasBeenSet() const { return m_originalTextCharactersHasBeenSet; }
  inline void SetOriginalTextCharacters(int64_t value) {
    m_originalTextCharactersHasBeenSet = true;
    m_originalTextCharacters = value;
  }
  inline Characters& WithOriginalTextCharacters(int64_t value) {
    SetOriginalTextCharacters(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_originalTextCharacters{0};
  bool m_originalTextCharactersHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComprehendMedical
}  // namespace Aws
