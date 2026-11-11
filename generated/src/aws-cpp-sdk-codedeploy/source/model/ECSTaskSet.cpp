/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/ECSTaskSet.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CodeDeploy {
namespace Model {

ECSTaskSet::ECSTaskSet(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ECSTaskSet& ECSTaskSet::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "identifer") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_identifer = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_identifer = ss.str();
                  }
                }
                m_identiferHasBeenSet = true;
              }

              else if (initialKeyStr == "desiredCount") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_desiredCount = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_desiredCount = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_desiredCountHasBeenSet = true;
              }

              else if (initialKeyStr == "pendingCount") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_pendingCount = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_pendingCount = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_pendingCountHasBeenSet = true;
              }

              else if (initialKeyStr == "runningCount") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_runningCount = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_runningCount = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_runningCountHasBeenSet = true;
              }

              else if (initialKeyStr == "status") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_status = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_status = ss.str();
                  }
                }
                m_statusHasBeenSet = true;
              }

              else if (initialKeyStr == "trafficWeight") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_trafficWeight = val.value();
                }
                m_trafficWeightHasBeenSet = true;
              }

              else if (initialKeyStr == "targetGroup") {
                m_targetGroup = TargetGroupInfo(decoder);
                m_targetGroupHasBeenSet = true;
              }

              else if (initialKeyStr == "taskSetLabel") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_taskSetLabel = TargetLabelMapper::GetTargetLabelForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_taskSetLabelHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ECSTaskSet", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "identifer") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_identifer = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_identifer = ss.str();
                }
              }
              m_identiferHasBeenSet = true;
            }

            else if (initialKeyStr == "desiredCount") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_desiredCount = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_desiredCount = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_desiredCountHasBeenSet = true;
            }

            else if (initialKeyStr == "pendingCount") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_pendingCount = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_pendingCount = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_pendingCountHasBeenSet = true;
            }

            else if (initialKeyStr == "runningCount") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_runningCount = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_runningCount = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_runningCountHasBeenSet = true;
            }

            else if (initialKeyStr == "status") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_status = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_status = ss.str();
                }
              }
              m_statusHasBeenSet = true;
            }

            else if (initialKeyStr == "trafficWeight") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_trafficWeight = val.value();
              }
              m_trafficWeightHasBeenSet = true;
            }

            else if (initialKeyStr == "targetGroup") {
              m_targetGroup = TargetGroupInfo(decoder);
              m_targetGroupHasBeenSet = true;
            }

            else if (initialKeyStr == "taskSetLabel") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_taskSetLabel =
                    TargetLabelMapper::GetTargetLabelForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_taskSetLabelHasBeenSet = true;
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

void ECSTaskSet::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_identiferHasBeenSet) {
    mapSize++;
  }
  if (m_desiredCountHasBeenSet) {
    mapSize++;
  }
  if (m_pendingCountHasBeenSet) {
    mapSize++;
  }
  if (m_runningCountHasBeenSet) {
    mapSize++;
  }
  if (m_statusHasBeenSet) {
    mapSize++;
  }
  if (m_trafficWeightHasBeenSet) {
    mapSize++;
  }
  if (m_targetGroupHasBeenSet) {
    mapSize++;
  }
  if (m_taskSetLabelHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_identiferHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("identifer"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_identifer.c_str()));
  }

  if (m_desiredCountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("desiredCount"));
    (m_desiredCount >= 0) ? encoder.WriteUInt(m_desiredCount) : encoder.WriteNegInt(m_desiredCount);
  }

  if (m_pendingCountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("pendingCount"));
    (m_pendingCount >= 0) ? encoder.WriteUInt(m_pendingCount) : encoder.WriteNegInt(m_pendingCount);
  }

  if (m_runningCountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("runningCount"));
    (m_runningCount >= 0) ? encoder.WriteUInt(m_runningCount) : encoder.WriteNegInt(m_runningCount);
  }

  if (m_statusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("status"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_status.c_str()));
  }

  if (m_trafficWeightHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("trafficWeight"));
    encoder.WriteFloat(m_trafficWeight);
  }

  if (m_targetGroupHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("targetGroup"));
    m_targetGroup.CborEncode(encoder);
  }

  if (m_taskSetLabelHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("taskSetLabel"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(TargetLabelMapper::GetNameForTargetLabel(m_taskSetLabel).c_str()));
  }
}

}  // namespace Model
}  // namespace CodeDeploy
}  // namespace Aws