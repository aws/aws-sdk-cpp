/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/datasync/model/QopConfiguration.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace DataSync {
namespace Model {

QopConfiguration::QopConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

QopConfiguration& QopConfiguration::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  if (decoder != nullptr) {
    auto initialMapType = decoder->PeekType();
    if (initialMapType.has_value() && (initialMapType.value() == CborType::MapStart || initialMapType.value() == CborType::IndefMapStart)) {
      if (initialMapType.value() == CborType::MapStart) {
        auto mapSize = decoder->PopNextMapStart();
        if (mapSize.has_value()) {
          for (size_t i = 0; i < mapSize.value(); ++i) {
            auto initialKey = decoder->PopNextTextVal();
            if (initialKey.has_value()) {
              Aws::String initialKeyStr(reinterpret_cast<const char*>(initialKey.value().ptr), initialKey.value().len);

              if (initialKeyStr == "RpcProtection") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_rpcProtection = HdfsRpcProtectionMapper::GetHdfsRpcProtectionForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_rpcProtectionHasBeenSet = true;
              }

              else if (initialKeyStr == "DataTransferProtection") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_dataTransferProtection = HdfsDataTransferProtectionMapper::GetHdfsDataTransferProtectionForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_dataTransferProtectionHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("QopConfiguration", "Invalid data received for %s", initialKeyStr.c_str());
                break;
              }
            }
          }
        }
      } else  // IndefMapStart
      {
        decoder->ConsumeNextSingleElement();  // consume the IndefMapStart
        while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
          auto outerMapNextType = decoder->PeekType();
          if (!outerMapNextType.has_value() || outerMapNextType.value() == CborType::Break) {
            if (outerMapNextType.has_value()) {
              decoder->ConsumeNextSingleElement();  // consume the Break
            }
            break;
          }

          auto initialKey = decoder->PopNextTextVal();
          if (initialKey.has_value()) {
            Aws::String initialKeyStr(reinterpret_cast<const char*>(initialKey.value().ptr), initialKey.value().len);

            if (initialKeyStr == "RpcProtection") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_rpcProtection = HdfsRpcProtectionMapper::GetHdfsRpcProtectionForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_rpcProtectionHasBeenSet = true;
            }

            else if (initialKeyStr == "DataTransferProtection") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_dataTransferProtection = HdfsDataTransferProtectionMapper::GetHdfsDataTransferProtectionForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_dataTransferProtectionHasBeenSet = true;
            } else {
              // Unknown key, skip the value
              decoder->ConsumeNextWholeDataItem();
            }
          }
        }
      }
    }
  }

  return *this;
}

void QopConfiguration::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_rpcProtectionHasBeenSet) {
    mapSize++;
  }
  if (m_dataTransferProtectionHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_rpcProtectionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RpcProtection"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(HdfsRpcProtectionMapper::GetNameForHdfsRpcProtection(m_rpcProtection).c_str()));
  }

  if (m_dataTransferProtectionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DataTransferProtection"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        HdfsDataTransferProtectionMapper::GetNameForHdfsDataTransferProtection(m_dataTransferProtection).c_str()));
  }
}

}  // namespace Model
}  // namespace DataSync
}  // namespace Aws