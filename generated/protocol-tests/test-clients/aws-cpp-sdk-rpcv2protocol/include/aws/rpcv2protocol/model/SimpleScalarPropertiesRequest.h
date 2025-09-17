/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rpcv2protocol/RpcV2ProtocolRequest.h>
#include <aws/rpcv2protocol/RpcV2Protocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace RpcV2Protocol {
namespace Model {

/**
 */
class SimpleScalarPropertiesRequest : public RpcV2ProtocolRequest {
 public:
  AWS_RPCV2PROTOCOL_API SimpleScalarPropertiesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SimpleScalarProperties"; }

  AWS_RPCV2PROTOCOL_API Aws::String SerializePayload() const override;

  AWS_RPCV2PROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{

  inline bool GetTrueBooleanValue() const { return m_trueBooleanValue; }
  inline bool TrueBooleanValueHasBeenSet() const { return m_trueBooleanValueHasBeenSet; }
  inline void SetTrueBooleanValue(bool value) {
    m_trueBooleanValueHasBeenSet = true;
    m_trueBooleanValue = value;
  }
  inline SimpleScalarPropertiesRequest& WithTrueBooleanValue(bool value) {
    SetTrueBooleanValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline bool GetFalseBooleanValue() const { return m_falseBooleanValue; }
  inline bool FalseBooleanValueHasBeenSet() const { return m_falseBooleanValueHasBeenSet; }
  inline void SetFalseBooleanValue(bool value) {
    m_falseBooleanValueHasBeenSet = true;
    m_falseBooleanValue = value;
  }
  inline SimpleScalarPropertiesRequest& WithFalseBooleanValue(bool value) {
    SetFalseBooleanValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetByteValue() const { return m_byteValue; }
  inline bool ByteValueHasBeenSet() const { return m_byteValueHasBeenSet; }
  inline void SetByteValue(int value) {
    m_byteValueHasBeenSet = true;
    m_byteValue = value;
  }
  inline SimpleScalarPropertiesRequest& WithByteValue(int value) {
    SetByteValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline double GetDoubleValue() const { return m_doubleValue; }
  inline bool DoubleValueHasBeenSet() const { return m_doubleValueHasBeenSet; }
  inline void SetDoubleValue(double value) {
    m_doubleValueHasBeenSet = true;
    m_doubleValue = value;
  }
  inline SimpleScalarPropertiesRequest& WithDoubleValue(double value) {
    SetDoubleValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline double GetFloatValue() const { return m_floatValue; }
  inline bool FloatValueHasBeenSet() const { return m_floatValueHasBeenSet; }
  inline void SetFloatValue(double value) {
    m_floatValueHasBeenSet = true;
    m_floatValue = value;
  }
  inline SimpleScalarPropertiesRequest& WithFloatValue(double value) {
    SetFloatValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetIntegerValue() const { return m_integerValue; }
  inline bool IntegerValueHasBeenSet() const { return m_integerValueHasBeenSet; }
  inline void SetIntegerValue(int value) {
    m_integerValueHasBeenSet = true;
    m_integerValue = value;
  }
  inline SimpleScalarPropertiesRequest& WithIntegerValue(int value) {
    SetIntegerValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline long long GetLongValue() const { return m_longValue; }
  inline bool LongValueHasBeenSet() const { return m_longValueHasBeenSet; }
  inline void SetLongValue(long long value) {
    m_longValueHasBeenSet = true;
    m_longValue = value;
  }
  inline SimpleScalarPropertiesRequest& WithLongValue(long long value) {
    SetLongValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetShortValue() const { return m_shortValue; }
  inline bool ShortValueHasBeenSet() const { return m_shortValueHasBeenSet; }
  inline void SetShortValue(int value) {
    m_shortValueHasBeenSet = true;
    m_shortValue = value;
  }
  inline SimpleScalarPropertiesRequest& WithShortValue(int value) {
    SetShortValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetStringValue() const { return m_stringValue; }
  inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
  template <typename StringValueT = Aws::String>
  void SetStringValue(StringValueT&& value) {
    m_stringValueHasBeenSet = true;
    m_stringValue = std::forward<StringValueT>(value);
  }
  template <typename StringValueT = Aws::String>
  SimpleScalarPropertiesRequest& WithStringValue(StringValueT&& value) {
    SetStringValue(std::forward<StringValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::ByteBuffer& GetBlobValue() const { return m_blobValue; }
  inline bool BlobValueHasBeenSet() const { return m_blobValueHasBeenSet; }
  template <typename BlobValueT = Aws::Utils::ByteBuffer>
  void SetBlobValue(BlobValueT&& value) {
    m_blobValueHasBeenSet = true;
    m_blobValue = std::forward<BlobValueT>(value);
  }
  template <typename BlobValueT = Aws::Utils::ByteBuffer>
  SimpleScalarPropertiesRequest& WithBlobValue(BlobValueT&& value) {
    SetBlobValue(std::forward<BlobValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  SimpleScalarPropertiesRequest& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_trueBooleanValue{false};
  bool m_trueBooleanValueHasBeenSet = false;

  bool m_falseBooleanValue{false};
  bool m_falseBooleanValueHasBeenSet = false;

  int m_byteValue{0};
  bool m_byteValueHasBeenSet = false;

  double m_doubleValue{0.0};
  bool m_doubleValueHasBeenSet = false;

  double m_floatValue{0.0};
  bool m_floatValueHasBeenSet = false;

  int m_integerValue{0};
  bool m_integerValueHasBeenSet = false;

  long long m_longValue{0};
  bool m_longValueHasBeenSet = false;

  int m_shortValue{0};
  bool m_shortValueHasBeenSet = false;

  Aws::String m_stringValue;
  bool m_stringValueHasBeenSet = false;

  Aws::Utils::ByteBuffer m_blobValue{};
  bool m_blobValueHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RpcV2Protocol
}  // namespace Aws
