/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/rpcv2protocol/model/SimpleScalarPropertiesRequest.h>

#include <utility>

using namespace Aws::RpcV2Protocol::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String SimpleScalarPropertiesRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_trueBooleanValueHasBeenSet) {
    mapSize++;
  }
  if (m_falseBooleanValueHasBeenSet) {
    mapSize++;
  }
  if (m_byteValueHasBeenSet) {
    mapSize++;
  }
  if (m_doubleValueHasBeenSet) {
    mapSize++;
  }
  if (m_floatValueHasBeenSet) {
    mapSize++;
  }
  if (m_integerValueHasBeenSet) {
    mapSize++;
  }
  if (m_longValueHasBeenSet) {
    mapSize++;
  }
  if (m_shortValueHasBeenSet) {
    mapSize++;
  }
  if (m_stringValueHasBeenSet) {
    mapSize++;
  }
  if (m_blobValueHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_trueBooleanValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("trueBooleanValue"));
    encoder.WriteBool(m_trueBooleanValue);
  }

  if (m_falseBooleanValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("falseBooleanValue"));
    encoder.WriteBool(m_falseBooleanValue);
  }

  if (m_byteValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("byteValue"));
    (m_byteValue >= 0) ? encoder.WriteUInt(m_byteValue) : encoder.WriteNegInt(m_byteValue);
  }

  if (m_doubleValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("doubleValue"));
    encoder.WriteFloat(m_doubleValue);
  }

  if (m_floatValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("floatValue"));
    encoder.WriteFloat(m_floatValue);
  }

  if (m_integerValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("integerValue"));
    (m_integerValue >= 0) ? encoder.WriteUInt(m_integerValue) : encoder.WriteNegInt(m_integerValue);
  }

  if (m_longValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("longValue"));
    (m_longValue >= 0) ? encoder.WriteUInt(m_longValue) : encoder.WriteNegInt(m_longValue);
  }

  if (m_shortValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("shortValue"));
    (m_shortValue >= 0) ? encoder.WriteUInt(m_shortValue) : encoder.WriteNegInt(m_shortValue);
  }

  if (m_stringValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("stringValue"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_stringValue.c_str()));
  }

  if (m_blobValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("blobValue"));
    encoder.WriteBytes(Aws::Crt::ByteCursorFromCString(reinterpret_cast<const char*>(m_blobValue.GetUnderlyingData())));
  }

  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection SimpleScalarPropertiesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::HeaderValuePair(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE));
  Aws::StringStream ss;
  if (m_requestIdHasBeenSet) {
    ss << m_requestId;
    headers.emplace("x-amzn-requestid", ss.str());
    ss.str("");
  }

  return headers;
}
