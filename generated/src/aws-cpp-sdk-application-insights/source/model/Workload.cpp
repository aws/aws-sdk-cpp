/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/Workload.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ApplicationInsights {
namespace Model {

Workload::Workload(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

Workload& Workload::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "WorkloadId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_workloadId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_workloadId = ss.str();
                  }
                }
                m_workloadIdHasBeenSet = true;
              }

              else if (initialKeyStr == "ComponentName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_componentName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_componentName = ss.str();
                  }
                }
                m_componentNameHasBeenSet = true;
              }

              else if (initialKeyStr == "WorkloadName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_workloadName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_workloadName = ss.str();
                  }
                }
                m_workloadNameHasBeenSet = true;
              }

              else if (initialKeyStr == "Tier") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_tier = TierMapper::GetTierForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_tierHasBeenSet = true;
              }

              else if (initialKeyStr == "WorkloadRemarks") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_workloadRemarks = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_workloadRemarks = ss.str();
                  }
                }
                m_workloadRemarksHasBeenSet = true;
              }

              else if (initialKeyStr == "MissingWorkloadConfig") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_missingWorkloadConfig = val.value();
                }
                m_missingWorkloadConfigHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("Workload", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "WorkloadId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_workloadId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_workloadId = ss.str();
                }
              }
              m_workloadIdHasBeenSet = true;
            }

            else if (initialKeyStr == "ComponentName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_componentName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_componentName = ss.str();
                }
              }
              m_componentNameHasBeenSet = true;
            }

            else if (initialKeyStr == "WorkloadName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_workloadName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_workloadName = ss.str();
                }
              }
              m_workloadNameHasBeenSet = true;
            }

            else if (initialKeyStr == "Tier") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_tier = TierMapper::GetTierForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_tierHasBeenSet = true;
            }

            else if (initialKeyStr == "WorkloadRemarks") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_workloadRemarks = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_workloadRemarks = ss.str();
                }
              }
              m_workloadRemarksHasBeenSet = true;
            }

            else if (initialKeyStr == "MissingWorkloadConfig") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_missingWorkloadConfig = val.value();
              }
              m_missingWorkloadConfigHasBeenSet = true;
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

void Workload::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_workloadIdHasBeenSet) {
    mapSize++;
  }
  if (m_componentNameHasBeenSet) {
    mapSize++;
  }
  if (m_workloadNameHasBeenSet) {
    mapSize++;
  }
  if (m_tierHasBeenSet) {
    mapSize++;
  }
  if (m_workloadRemarksHasBeenSet) {
    mapSize++;
  }
  if (m_missingWorkloadConfigHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_workloadIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("WorkloadId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_workloadId.c_str()));
  }

  if (m_componentNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ComponentName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_componentName.c_str()));
  }

  if (m_workloadNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("WorkloadName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_workloadName.c_str()));
  }

  if (m_tierHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tier"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(TierMapper::GetNameForTier(m_tier).c_str()));
  }

  if (m_workloadRemarksHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("WorkloadRemarks"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_workloadRemarks.c_str()));
  }

  if (m_missingWorkloadConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MissingWorkloadConfig"));
    encoder.WriteBool(m_missingWorkloadConfig);
  }
}

}  // namespace Model
}  // namespace ApplicationInsights
}  // namespace Aws