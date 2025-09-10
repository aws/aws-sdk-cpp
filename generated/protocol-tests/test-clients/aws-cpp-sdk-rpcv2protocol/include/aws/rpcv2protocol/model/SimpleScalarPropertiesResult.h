/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/rpcv2protocol/RpcV2Protocol_EXPORTS.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace RpcV2Protocol {
namespace Model {
class SimpleScalarPropertiesResult {
 public:
  AWS_RPCV2PROTOCOL_API SimpleScalarPropertiesResult() = default;
  AWS_RPCV2PROTOCOL_API SimpleScalarPropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_RPCV2PROTOCOL_API SimpleScalarPropertiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{

  inline bool GetTrueBooleanValue() const { return m_trueBooleanValue; }
  inline void SetTrueBooleanValue(bool value) {
    m_trueBooleanValueHasBeenSet = true;
    m_trueBooleanValue = value;
  }
  inline SimpleScalarPropertiesResult& WithTrueBooleanValue(bool value) {
    SetTrueBooleanValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline bool GetFalseBooleanValue() const { return m_falseBooleanValue; }
  inline void SetFalseBooleanValue(bool value) {
    m_falseBooleanValueHasBeenSet = true;
    m_falseBooleanValue = value;
  }
  inline SimpleScalarPropertiesResult& WithFalseBooleanValue(bool value) {
    SetFalseBooleanValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline int64_t GetByteValue() const { return m_byteValue; }
  inline void SetByteValue(int64_t value) {
    m_byteValueHasBeenSet = true;
    m_byteValue = value;
  }
  inline SimpleScalarPropertiesResult& WithByteValue(int64_t value) {
    SetByteValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline double GetDoubleValue() const { return m_doubleValue; }
  inline void SetDoubleValue(double value) {
    m_doubleValueHasBeenSet = true;
    m_doubleValue = value;
  }
  inline SimpleScalarPropertiesResult& WithDoubleValue(double value) {
    SetDoubleValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline double GetFloatValue() const { return m_floatValue; }
  inline void SetFloatValue(double value) {
    m_floatValueHasBeenSet = true;
    m_floatValue = value;
  }
  inline SimpleScalarPropertiesResult& WithFloatValue(double value) {
    SetFloatValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline int64_t GetIntegerValue() const { return m_integerValue; }
  inline void SetIntegerValue(int64_t value) {
    m_integerValueHasBeenSet = true;
    m_integerValue = value;
  }
  inline SimpleScalarPropertiesResult& WithIntegerValue(int64_t value) {
    SetIntegerValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline long long GetLongValue() const { return m_longValue; }
  inline void SetLongValue(long long value) {
    m_longValueHasBeenSet = true;
    m_longValue = value;
  }
  inline SimpleScalarPropertiesResult& WithLongValue(long long value) {
    SetLongValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline int64_t GetShortValue() const { return m_shortValue; }
  inline void SetShortValue(int64_t value) {
    m_shortValueHasBeenSet = true;
    m_shortValue = value;
  }
  inline SimpleScalarPropertiesResult& WithShortValue(int64_t value) {
    SetShortValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetStringValue() const { return m_stringValue; }
  template <typename StringValueT = Aws::String>
  void SetStringValue(StringValueT&& value) {
    m_stringValueHasBeenSet = true;
    m_stringValue = std::forward<StringValueT>(value);
  }
  template <typename StringValueT = Aws::String>
  SimpleScalarPropertiesResult& WithStringValue(StringValueT&& value) {
    SetStringValue(std::forward<StringValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::ByteBuffer& GetBlobValue() const { return m_blobValue; }
  template <typename BlobValueT = Aws::Utils::ByteBuffer>
  void SetBlobValue(BlobValueT&& value) {
    m_blobValueHasBeenSet = true;
    m_blobValue = std::forward<BlobValueT>(value);
  }
  template <typename BlobValueT = Aws::Utils::ByteBuffer>
  SimpleScalarPropertiesResult& WithBlobValue(BlobValueT&& value) {
    SetBlobValue(std::forward<BlobValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  SimpleScalarPropertiesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_trueBooleanValue{false};
  bool m_trueBooleanValueHasBeenSet = false;

  bool m_falseBooleanValue{false};
  bool m_falseBooleanValueHasBeenSet = false;

  int64_t m_byteValue{0};
  bool m_byteValueHasBeenSet = false;

  double m_doubleValue{0.0};
  bool m_doubleValueHasBeenSet = false;

  double m_floatValue{0.0};
  bool m_floatValueHasBeenSet = false;

  int64_t m_integerValue{0};
  bool m_integerValueHasBeenSet = false;

  long long m_longValue{0};
  bool m_longValueHasBeenSet = false;

  int64_t m_shortValue{0};
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
