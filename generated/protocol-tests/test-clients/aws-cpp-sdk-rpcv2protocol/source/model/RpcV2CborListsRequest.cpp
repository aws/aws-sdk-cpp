/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/rpcv2protocol/model/RpcV2CborListsRequest.h>

#include <utility>

using namespace Aws::RpcV2Protocol::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String RpcV2CborListsRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_stringListHasBeenSet) {
    mapSize++;
  }
  if (m_stringSetHasBeenSet) {
    mapSize++;
  }
  if (m_integerListHasBeenSet) {
    mapSize++;
  }
  if (m_booleanListHasBeenSet) {
    mapSize++;
  }
  if (m_timestampListHasBeenSet) {
    mapSize++;
  }
  if (m_enumListHasBeenSet) {
    mapSize++;
  }
  if (m_intEnumListHasBeenSet) {
    mapSize++;
  }
  if (m_nestedStringListHasBeenSet) {
    mapSize++;
  }
  if (m_structureListHasBeenSet) {
    mapSize++;
  }
  if (m_blobListHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_stringListHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("stringList"));
    encoder.WriteArrayStart(m_stringList.size());
    for (const auto& item_0 : m_stringList) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_stringSetHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("stringSet"));
    encoder.WriteArrayStart(m_stringSet.size());
    for (const auto& item_0 : m_stringSet) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_integerListHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("integerList"));
    encoder.WriteArrayStart(m_integerList.size());
    for (const auto& item_0 : m_integerList) {
      (item_0 >= 0) ? encoder.WriteUInt(item_0) : encoder.WriteNegInt(item_0);
    }
  }

  if (m_booleanListHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("booleanList"));
    encoder.WriteArrayStart(m_booleanList.size());
    for (const auto& item_0 : m_booleanList) {
      encoder.WriteBool(item_0);
    }
  }

  if (m_timestampListHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("timestampList"));
    encoder.WriteArrayStart(m_timestampList.size());
    for (const auto& item_0 : m_timestampList) {
      encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
      encoder.WriteUInt(item_0.Millis());
    }
  }

  if (m_enumListHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("enumList"));
    encoder.WriteArrayStart(m_enumList.size());
    for (const auto& item_0 : m_enumList) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(FooEnumMapper::GetNameForFooEnum(item_0).c_str()));
    }
  }

  if (m_intEnumListHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("intEnumList"));
    encoder.WriteArrayStart(m_intEnumList.size());
    for (const auto& item_0 : m_intEnumList) {
      (item_0 >= 0) ? encoder.WriteUInt(item_0) : encoder.WriteNegInt(item_0);
    }
  }

  if (m_nestedStringListHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("nestedStringList"));
    encoder.WriteArrayStart(m_nestedStringList.size());
    for (const auto& item_0 : m_nestedStringList) {
      encoder.WriteArrayStart(item_0.size());
      for (const auto& item_1 : item_0) {
        encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_1.c_str()));
      }
    }
  }

  if (m_structureListHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("structureList"));
    encoder.WriteArrayStart(m_structureList.size());
    for (const auto& item_0 : m_structureList) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_blobListHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("blobList"));
    encoder.WriteArrayStart(m_blobList.size());
    for (const auto& item_0 : m_blobList) {
      encoder.WriteBytes(Aws::Crt::ByteCursorFromCString(reinterpret_cast<const char*>(item_0.GetUnderlyingData())));
    }
  }

  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection RpcV2CborListsRequest::GetRequestSpecificHeaders() const {
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
