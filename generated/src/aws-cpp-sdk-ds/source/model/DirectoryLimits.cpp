/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/ds/model/DirectoryLimits.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace DirectoryService {
namespace Model {

DirectoryLimits::DirectoryLimits(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

DirectoryLimits& DirectoryLimits::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "CloudOnlyDirectoriesLimit") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_cloudOnlyDirectoriesLimit = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_cloudOnlyDirectoriesLimit = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_cloudOnlyDirectoriesLimitHasBeenSet = true;
              }

              else if (initialKeyStr == "CloudOnlyDirectoriesCurrentCount") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_cloudOnlyDirectoriesCurrentCount = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_cloudOnlyDirectoriesCurrentCount = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_cloudOnlyDirectoriesCurrentCountHasBeenSet = true;
              }

              else if (initialKeyStr == "CloudOnlyDirectoriesLimitReached") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_cloudOnlyDirectoriesLimitReached = val.value();
                }
                m_cloudOnlyDirectoriesLimitReachedHasBeenSet = true;
              }

              else if (initialKeyStr == "CloudOnlyMicrosoftADLimit") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_cloudOnlyMicrosoftADLimit = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_cloudOnlyMicrosoftADLimit = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_cloudOnlyMicrosoftADLimitHasBeenSet = true;
              }

              else if (initialKeyStr == "CloudOnlyMicrosoftADCurrentCount") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_cloudOnlyMicrosoftADCurrentCount = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_cloudOnlyMicrosoftADCurrentCount = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_cloudOnlyMicrosoftADCurrentCountHasBeenSet = true;
              }

              else if (initialKeyStr == "CloudOnlyMicrosoftADLimitReached") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_cloudOnlyMicrosoftADLimitReached = val.value();
                }
                m_cloudOnlyMicrosoftADLimitReachedHasBeenSet = true;
              }

              else if (initialKeyStr == "ConnectedDirectoriesLimit") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_connectedDirectoriesLimit = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_connectedDirectoriesLimit = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_connectedDirectoriesLimitHasBeenSet = true;
              }

              else if (initialKeyStr == "ConnectedDirectoriesCurrentCount") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_connectedDirectoriesCurrentCount = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_connectedDirectoriesCurrentCount = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_connectedDirectoriesCurrentCountHasBeenSet = true;
              }

              else if (initialKeyStr == "ConnectedDirectoriesLimitReached") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_connectedDirectoriesLimitReached = val.value();
                }
                m_connectedDirectoriesLimitReachedHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("DirectoryLimits", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "CloudOnlyDirectoriesLimit") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_cloudOnlyDirectoriesLimit = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_cloudOnlyDirectoriesLimit = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_cloudOnlyDirectoriesLimitHasBeenSet = true;
            }

            else if (initialKeyStr == "CloudOnlyDirectoriesCurrentCount") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_cloudOnlyDirectoriesCurrentCount = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_cloudOnlyDirectoriesCurrentCount = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_cloudOnlyDirectoriesCurrentCountHasBeenSet = true;
            }

            else if (initialKeyStr == "CloudOnlyDirectoriesLimitReached") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_cloudOnlyDirectoriesLimitReached = val.value();
              }
              m_cloudOnlyDirectoriesLimitReachedHasBeenSet = true;
            }

            else if (initialKeyStr == "CloudOnlyMicrosoftADLimit") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_cloudOnlyMicrosoftADLimit = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_cloudOnlyMicrosoftADLimit = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_cloudOnlyMicrosoftADLimitHasBeenSet = true;
            }

            else if (initialKeyStr == "CloudOnlyMicrosoftADCurrentCount") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_cloudOnlyMicrosoftADCurrentCount = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_cloudOnlyMicrosoftADCurrentCount = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_cloudOnlyMicrosoftADCurrentCountHasBeenSet = true;
            }

            else if (initialKeyStr == "CloudOnlyMicrosoftADLimitReached") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_cloudOnlyMicrosoftADLimitReached = val.value();
              }
              m_cloudOnlyMicrosoftADLimitReachedHasBeenSet = true;
            }

            else if (initialKeyStr == "ConnectedDirectoriesLimit") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_connectedDirectoriesLimit = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_connectedDirectoriesLimit = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_connectedDirectoriesLimitHasBeenSet = true;
            }

            else if (initialKeyStr == "ConnectedDirectoriesCurrentCount") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_connectedDirectoriesCurrentCount = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_connectedDirectoriesCurrentCount = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_connectedDirectoriesCurrentCountHasBeenSet = true;
            }

            else if (initialKeyStr == "ConnectedDirectoriesLimitReached") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_connectedDirectoriesLimitReached = val.value();
              }
              m_connectedDirectoriesLimitReachedHasBeenSet = true;
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

void DirectoryLimits::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_cloudOnlyDirectoriesLimitHasBeenSet) {
    mapSize++;
  }
  if (m_cloudOnlyDirectoriesCurrentCountHasBeenSet) {
    mapSize++;
  }
  if (m_cloudOnlyDirectoriesLimitReachedHasBeenSet) {
    mapSize++;
  }
  if (m_cloudOnlyMicrosoftADLimitHasBeenSet) {
    mapSize++;
  }
  if (m_cloudOnlyMicrosoftADCurrentCountHasBeenSet) {
    mapSize++;
  }
  if (m_cloudOnlyMicrosoftADLimitReachedHasBeenSet) {
    mapSize++;
  }
  if (m_connectedDirectoriesLimitHasBeenSet) {
    mapSize++;
  }
  if (m_connectedDirectoriesCurrentCountHasBeenSet) {
    mapSize++;
  }
  if (m_connectedDirectoriesLimitReachedHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_cloudOnlyDirectoriesLimitHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CloudOnlyDirectoriesLimit"));
    (m_cloudOnlyDirectoriesLimit >= 0) ? encoder.WriteUInt(m_cloudOnlyDirectoriesLimit) : encoder.WriteNegInt(m_cloudOnlyDirectoriesLimit);
  }

  if (m_cloudOnlyDirectoriesCurrentCountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CloudOnlyDirectoriesCurrentCount"));
    (m_cloudOnlyDirectoriesCurrentCount >= 0) ? encoder.WriteUInt(m_cloudOnlyDirectoriesCurrentCount)
                                              : encoder.WriteNegInt(m_cloudOnlyDirectoriesCurrentCount);
  }

  if (m_cloudOnlyDirectoriesLimitReachedHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CloudOnlyDirectoriesLimitReached"));
    encoder.WriteBool(m_cloudOnlyDirectoriesLimitReached);
  }

  if (m_cloudOnlyMicrosoftADLimitHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CloudOnlyMicrosoftADLimit"));
    (m_cloudOnlyMicrosoftADLimit >= 0) ? encoder.WriteUInt(m_cloudOnlyMicrosoftADLimit) : encoder.WriteNegInt(m_cloudOnlyMicrosoftADLimit);
  }

  if (m_cloudOnlyMicrosoftADCurrentCountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CloudOnlyMicrosoftADCurrentCount"));
    (m_cloudOnlyMicrosoftADCurrentCount >= 0) ? encoder.WriteUInt(m_cloudOnlyMicrosoftADCurrentCount)
                                              : encoder.WriteNegInt(m_cloudOnlyMicrosoftADCurrentCount);
  }

  if (m_cloudOnlyMicrosoftADLimitReachedHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CloudOnlyMicrosoftADLimitReached"));
    encoder.WriteBool(m_cloudOnlyMicrosoftADLimitReached);
  }

  if (m_connectedDirectoriesLimitHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ConnectedDirectoriesLimit"));
    (m_connectedDirectoriesLimit >= 0) ? encoder.WriteUInt(m_connectedDirectoriesLimit) : encoder.WriteNegInt(m_connectedDirectoriesLimit);
  }

  if (m_connectedDirectoriesCurrentCountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ConnectedDirectoriesCurrentCount"));
    (m_connectedDirectoriesCurrentCount >= 0) ? encoder.WriteUInt(m_connectedDirectoriesCurrentCount)
                                              : encoder.WriteNegInt(m_connectedDirectoriesCurrentCount);
  }

  if (m_connectedDirectoriesLimitReachedHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ConnectedDirectoriesLimitReached"));
    encoder.WriteBool(m_connectedDirectoriesLimitReached);
  }
}

}  // namespace Model
}  // namespace DirectoryService
}  // namespace Aws