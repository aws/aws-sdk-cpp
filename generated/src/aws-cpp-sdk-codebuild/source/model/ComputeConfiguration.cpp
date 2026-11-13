/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ComputeConfiguration.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CodeBuild {
namespace Model {

ComputeConfiguration::ComputeConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ComputeConfiguration& ComputeConfiguration::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "vCpu") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_vCpu = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_vCpu = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_vCpuHasBeenSet = true;
              }

              else if (initialKeyStr == "memory") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_memory = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_memory = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_memoryHasBeenSet = true;
              }

              else if (initialKeyStr == "disk") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_disk = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_disk = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_diskHasBeenSet = true;
              }

              else if (initialKeyStr == "machineType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_machineType = MachineTypeMapper::GetMachineTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_machineTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "instanceType") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_instanceType = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_instanceType = ss.str();
                  }
                }
                m_instanceTypeHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ComputeConfiguration", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "vCpu") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_vCpu = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_vCpu = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_vCpuHasBeenSet = true;
            }

            else if (initialKeyStr == "memory") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_memory = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_memory = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_memoryHasBeenSet = true;
            }

            else if (initialKeyStr == "disk") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_disk = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_disk = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_diskHasBeenSet = true;
            }

            else if (initialKeyStr == "machineType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_machineType =
                    MachineTypeMapper::GetMachineTypeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_machineTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "instanceType") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_instanceType = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_instanceType = ss.str();
                }
              }
              m_instanceTypeHasBeenSet = true;
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

void ComputeConfiguration::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_vCpuHasBeenSet) {
    mapSize++;
  }
  if (m_memoryHasBeenSet) {
    mapSize++;
  }
  if (m_diskHasBeenSet) {
    mapSize++;
  }
  if (m_machineTypeHasBeenSet) {
    mapSize++;
  }
  if (m_instanceTypeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_vCpuHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("vCpu"));
    (m_vCpu >= 0) ? encoder.WriteUInt(m_vCpu) : encoder.WriteNegInt(m_vCpu);
  }

  if (m_memoryHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("memory"));
    (m_memory >= 0) ? encoder.WriteUInt(m_memory) : encoder.WriteNegInt(m_memory);
  }

  if (m_diskHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("disk"));
    (m_disk >= 0) ? encoder.WriteUInt(m_disk) : encoder.WriteNegInt(m_disk);
  }

  if (m_machineTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("machineType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(MachineTypeMapper::GetNameForMachineType(m_machineType).c_str()));
  }

  if (m_instanceTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("instanceType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_instanceType.c_str()));
  }
}

}  // namespace Model
}  // namespace CodeBuild
}  // namespace Aws