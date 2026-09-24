/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace EventBridgeV2 {
namespace Model {

/**
 * <p>A custom SQS message attribute (data type plus string or binary
 * value).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/SqsMessageAttributeValue">AWS
 * API Reference</a></p>
 */
class SqsMessageAttributeValue {
 public:
  AWS_EVENTBRIDGEV2_API SqsMessageAttributeValue() = default;
  AWS_EVENTBRIDGEV2_API SqsMessageAttributeValue(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API SqsMessageAttributeValue& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Attribute data type. Requiredness, the accepted vocabulary, and any custom
   * label belong to SQS, which rejects an attribute without a data type on
   * delivery.</p>
   */
  inline const Aws::String& GetDataType() const { return m_dataType; }
  inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
  template <typename DataTypeT = Aws::String>
  void SetDataType(DataTypeT&& value) {
    m_dataTypeHasBeenSet = true;
    m_dataType = std::forward<DataTypeT>(value);
  }
  template <typename DataTypeT = Aws::String>
  SqsMessageAttributeValue& WithDataType(DataTypeT&& value) {
    SetDataType(std::forward<DataTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>String attribute value. A JSONata expression resolves once per delivered
   * event.</p>
   */
  inline const Aws::String& GetStringValue() const { return m_stringValue; }
  inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
  template <typename StringValueT = Aws::String>
  void SetStringValue(StringValueT&& value) {
    m_stringValueHasBeenSet = true;
    m_stringValue = std::forward<StringValueT>(value);
  }
  template <typename StringValueT = Aws::String>
  SqsMessageAttributeValue& WithStringValue(StringValueT&& value) {
    SetStringValue(std::forward<StringValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Base64-encoded literal binary attribute value.</p>
   */
  inline const Aws::String& GetBinaryValue() const { return m_binaryValue; }
  inline bool BinaryValueHasBeenSet() const { return m_binaryValueHasBeenSet; }
  template <typename BinaryValueT = Aws::String>
  void SetBinaryValue(BinaryValueT&& value) {
    m_binaryValueHasBeenSet = true;
    m_binaryValue = std::forward<BinaryValueT>(value);
  }
  template <typename BinaryValueT = Aws::String>
  SqsMessageAttributeValue& WithBinaryValue(BinaryValueT&& value) {
    SetBinaryValue(std::forward<BinaryValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dataType;

  Aws::String m_stringValue;

  Aws::String m_binaryValue;
  bool m_dataTypeHasBeenSet = false;
  bool m_stringValueHasBeenSet = false;
  bool m_binaryValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
