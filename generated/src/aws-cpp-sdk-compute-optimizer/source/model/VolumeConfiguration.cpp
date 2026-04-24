/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/VolumeConfiguration.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizer {
namespace Model {

VolumeConfiguration::VolumeConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

VolumeConfiguration& VolumeConfiguration::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "volumeType") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_volumeType = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  } else {
                    decoder->ConsumeNextSingleElement();
                    Aws::StringStream ss;
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType = decoder->PeekType();
                      if (!nextType.has_value() || nextType.value() == CborType::Break) {
                        if (nextType.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                      }
                    }
                    m_volumeType = ss.str();
                  }
                }
                m_volumeTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "volumeSize") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_volumeSize = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_volumeSize = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_volumeSizeHasBeenSet = true;
              }

              else if (initialKeyStr == "volumeBaselineIOPS") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_volumeBaselineIOPS = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_volumeBaselineIOPS = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_volumeBaselineIOPSHasBeenSet = true;
              }

              else if (initialKeyStr == "volumeBurstIOPS") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_volumeBurstIOPS = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_volumeBurstIOPS = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_volumeBurstIOPSHasBeenSet = true;
              }

              else if (initialKeyStr == "volumeBaselineThroughput") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_volumeBaselineThroughput = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_volumeBaselineThroughput = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_volumeBaselineThroughputHasBeenSet = true;
              }

              else if (initialKeyStr == "volumeBurstThroughput") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_volumeBurstThroughput = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_volumeBurstThroughput = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_volumeBurstThroughputHasBeenSet = true;
              }

              else if (initialKeyStr == "rootVolume") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_rootVolume = val.value();
                }
                m_rootVolumeHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("VolumeConfiguration", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "volumeType") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_volumeType = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                  }
                } else {
                  decoder->ConsumeNextSingleElement();
                  Aws::StringStream ss;
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType = decoder->PeekType();
                    if (!nextType.has_value() || nextType.value() == CborType::Break) {
                      if (nextType.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  }
                  m_volumeType = ss.str();
                }
              }
              m_volumeTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "volumeSize") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_volumeSize = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_volumeSize = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_volumeSizeHasBeenSet = true;
            }

            else if (initialKeyStr == "volumeBaselineIOPS") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_volumeBaselineIOPS = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_volumeBaselineIOPS = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_volumeBaselineIOPSHasBeenSet = true;
            }

            else if (initialKeyStr == "volumeBurstIOPS") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_volumeBurstIOPS = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_volumeBurstIOPS = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_volumeBurstIOPSHasBeenSet = true;
            }

            else if (initialKeyStr == "volumeBaselineThroughput") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_volumeBaselineThroughput = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_volumeBaselineThroughput = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_volumeBaselineThroughputHasBeenSet = true;
            }

            else if (initialKeyStr == "volumeBurstThroughput") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_volumeBurstThroughput = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_volumeBurstThroughput = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_volumeBurstThroughputHasBeenSet = true;
            }

            else if (initialKeyStr == "rootVolume") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_rootVolume = val.value();
              }
              m_rootVolumeHasBeenSet = true;
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

void VolumeConfiguration::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_volumeTypeHasBeenSet) {
    mapSize++;
  }
  if (m_volumeSizeHasBeenSet) {
    mapSize++;
  }
  if (m_volumeBaselineIOPSHasBeenSet) {
    mapSize++;
  }
  if (m_volumeBurstIOPSHasBeenSet) {
    mapSize++;
  }
  if (m_volumeBaselineThroughputHasBeenSet) {
    mapSize++;
  }
  if (m_volumeBurstThroughputHasBeenSet) {
    mapSize++;
  }
  if (m_rootVolumeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_volumeTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("volumeType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_volumeType.c_str()));
  }

  if (m_volumeSizeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("volumeSize"));
    (m_volumeSize >= 0) ? encoder.WriteUInt(m_volumeSize) : encoder.WriteNegInt(m_volumeSize);
  }

  if (m_volumeBaselineIOPSHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("volumeBaselineIOPS"));
    (m_volumeBaselineIOPS >= 0) ? encoder.WriteUInt(m_volumeBaselineIOPS) : encoder.WriteNegInt(m_volumeBaselineIOPS);
  }

  if (m_volumeBurstIOPSHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("volumeBurstIOPS"));
    (m_volumeBurstIOPS >= 0) ? encoder.WriteUInt(m_volumeBurstIOPS) : encoder.WriteNegInt(m_volumeBurstIOPS);
  }

  if (m_volumeBaselineThroughputHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("volumeBaselineThroughput"));
    (m_volumeBaselineThroughput >= 0) ? encoder.WriteUInt(m_volumeBaselineThroughput) : encoder.WriteNegInt(m_volumeBaselineThroughput);
  }

  if (m_volumeBurstThroughputHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("volumeBurstThroughput"));
    (m_volumeBurstThroughput >= 0) ? encoder.WriteUInt(m_volumeBurstThroughput) : encoder.WriteNegInt(m_volumeBurstThroughput);
  }

  if (m_rootVolumeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("rootVolume"));
    encoder.WriteBool(m_rootVolume);
  }
}

}  // namespace Model
}  // namespace ComputeOptimizer
}  // namespace Aws