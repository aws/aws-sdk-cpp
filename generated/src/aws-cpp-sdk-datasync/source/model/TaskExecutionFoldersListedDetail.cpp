/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/datasync/model/TaskExecutionFoldersListedDetail.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace DataSync {
namespace Model {

TaskExecutionFoldersListedDetail::TaskExecutionFoldersListedDetail(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  *this = decoder;
}

TaskExecutionFoldersListedDetail& TaskExecutionFoldersListedDetail::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "AtSource") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_atSource = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_atSource = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_atSourceHasBeenSet = true;
              }

              else if (initialKeyStr == "AtDestinationForDelete") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_atDestinationForDelete = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_atDestinationForDelete = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_atDestinationForDeleteHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("TaskExecutionFoldersListedDetail", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "AtSource") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_atSource = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_atSource = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_atSourceHasBeenSet = true;
            }

            else if (initialKeyStr == "AtDestinationForDelete") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_atDestinationForDelete = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_atDestinationForDelete = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_atDestinationForDeleteHasBeenSet = true;
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

void TaskExecutionFoldersListedDetail::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_atSourceHasBeenSet) {
    mapSize++;
  }
  if (m_atDestinationForDeleteHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_atSourceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AtSource"));
    (m_atSource >= 0) ? encoder.WriteUInt(m_atSource) : encoder.WriteNegInt(m_atSource);
  }

  if (m_atDestinationForDeleteHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AtDestinationForDelete"));
    (m_atDestinationForDelete >= 0) ? encoder.WriteUInt(m_atDestinationForDelete) : encoder.WriteNegInt(m_atDestinationForDelete);
  }
}

}  // namespace Model
}  // namespace DataSync
}  // namespace Aws