/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/datasync/model/TaskExecutionFilesFailedDetail.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace DataSync {
namespace Model {

TaskExecutionFilesFailedDetail::TaskExecutionFilesFailedDetail(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  *this = decoder;
}

TaskExecutionFilesFailedDetail& TaskExecutionFilesFailedDetail::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Prepare") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_prepare = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_prepare = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_prepareHasBeenSet = true;
              }

              else if (initialKeyStr == "Transfer") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_transfer = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_transfer = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_transferHasBeenSet = true;
              }

              else if (initialKeyStr == "Verify") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_verify = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_verify = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_verifyHasBeenSet = true;
              }

              else if (initialKeyStr == "Delete") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_delete = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_delete = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_deleteHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("TaskExecutionFilesFailedDetail", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Prepare") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_prepare = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_prepare = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_prepareHasBeenSet = true;
            }

            else if (initialKeyStr == "Transfer") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_transfer = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_transfer = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_transferHasBeenSet = true;
            }

            else if (initialKeyStr == "Verify") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_verify = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_verify = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_verifyHasBeenSet = true;
            }

            else if (initialKeyStr == "Delete") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_delete = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_delete = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_deleteHasBeenSet = true;
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

void TaskExecutionFilesFailedDetail::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_prepareHasBeenSet) {
    mapSize++;
  }
  if (m_transferHasBeenSet) {
    mapSize++;
  }
  if (m_verifyHasBeenSet) {
    mapSize++;
  }
  if (m_deleteHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_prepareHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Prepare"));
    (m_prepare >= 0) ? encoder.WriteUInt(m_prepare) : encoder.WriteNegInt(m_prepare);
  }

  if (m_transferHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Transfer"));
    (m_transfer >= 0) ? encoder.WriteUInt(m_transfer) : encoder.WriteNegInt(m_transfer);
  }

  if (m_verifyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Verify"));
    (m_verify >= 0) ? encoder.WriteUInt(m_verify) : encoder.WriteNegInt(m_verify);
  }

  if (m_deleteHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Delete"));
    (m_delete >= 0) ? encoder.WriteUInt(m_delete) : encoder.WriteNegInt(m_delete);
  }
}

}  // namespace Model
}  // namespace DataSync
}  // namespace Aws