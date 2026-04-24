/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/DBStorageConfiguration.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizer {
namespace Model {

DBStorageConfiguration::DBStorageConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

DBStorageConfiguration& DBStorageConfiguration::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "storageType") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_storageType = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_storageType = ss.str();
                  }
                }
                m_storageTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "allocatedStorage") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_allocatedStorage = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_allocatedStorage = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_allocatedStorageHasBeenSet = true;
              }

              else if (initialKeyStr == "iops") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_iops = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_iops = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_iopsHasBeenSet = true;
              }

              else if (initialKeyStr == "maxAllocatedStorage") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_maxAllocatedStorage = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_maxAllocatedStorage = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_maxAllocatedStorageHasBeenSet = true;
              }

              else if (initialKeyStr == "storageThroughput") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_storageThroughput = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_storageThroughput = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_storageThroughputHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("DBStorageConfiguration", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "storageType") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_storageType = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_storageType = ss.str();
                }
              }
              m_storageTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "allocatedStorage") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_allocatedStorage = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_allocatedStorage = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_allocatedStorageHasBeenSet = true;
            }

            else if (initialKeyStr == "iops") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_iops = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_iops = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_iopsHasBeenSet = true;
            }

            else if (initialKeyStr == "maxAllocatedStorage") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_maxAllocatedStorage = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_maxAllocatedStorage = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_maxAllocatedStorageHasBeenSet = true;
            }

            else if (initialKeyStr == "storageThroughput") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_storageThroughput = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_storageThroughput = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_storageThroughputHasBeenSet = true;
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

void DBStorageConfiguration::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_storageTypeHasBeenSet) {
    mapSize++;
  }
  if (m_allocatedStorageHasBeenSet) {
    mapSize++;
  }
  if (m_iopsHasBeenSet) {
    mapSize++;
  }
  if (m_maxAllocatedStorageHasBeenSet) {
    mapSize++;
  }
  if (m_storageThroughputHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_storageTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("storageType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_storageType.c_str()));
  }

  if (m_allocatedStorageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("allocatedStorage"));
    (m_allocatedStorage >= 0) ? encoder.WriteUInt(m_allocatedStorage) : encoder.WriteNegInt(m_allocatedStorage);
  }

  if (m_iopsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("iops"));
    (m_iops >= 0) ? encoder.WriteUInt(m_iops) : encoder.WriteNegInt(m_iops);
  }

  if (m_maxAllocatedStorageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("maxAllocatedStorage"));
    (m_maxAllocatedStorage >= 0) ? encoder.WriteUInt(m_maxAllocatedStorage) : encoder.WriteNegInt(m_maxAllocatedStorage);
  }

  if (m_storageThroughputHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("storageThroughput"));
    (m_storageThroughput >= 0) ? encoder.WriteUInt(m_storageThroughput) : encoder.WriteNegInt(m_storageThroughput);
  }
}

}  // namespace Model
}  // namespace ComputeOptimizer
}  // namespace Aws