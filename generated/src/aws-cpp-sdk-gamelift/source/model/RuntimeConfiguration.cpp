/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/model/RuntimeConfiguration.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace GameLift {
namespace Model {

RuntimeConfiguration::RuntimeConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

RuntimeConfiguration& RuntimeConfiguration::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "ServerProcesses") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_serverProcesses.push_back(ServerProcess(decoder));
                      }
                    }
                  } else  // IndefArrayStart
                  {
                    decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType_0 = decoder->PeekType();
                      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                        if (nextType_0.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      m_serverProcesses.push_back(ServerProcess(decoder));
                    }
                  }
                }
                m_serverProcessesHasBeenSet = true;
              }

              else if (initialKeyStr == "MaxConcurrentGameSessionActivations") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_maxConcurrentGameSessionActivations = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_maxConcurrentGameSessionActivations = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_maxConcurrentGameSessionActivationsHasBeenSet = true;
              }

              else if (initialKeyStr == "GameSessionActivationTimeoutSeconds") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_gameSessionActivationTimeoutSeconds = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_gameSessionActivationTimeoutSeconds = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_gameSessionActivationTimeoutSecondsHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("RuntimeConfiguration", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "ServerProcesses") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_serverProcesses.push_back(ServerProcess(decoder));
                    }
                  }
                } else  // IndefArrayStart
                {
                  decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType_0 = decoder->PeekType();
                    if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                      if (nextType_0.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    m_serverProcesses.push_back(ServerProcess(decoder));
                  }
                }
              }
              m_serverProcessesHasBeenSet = true;
            }

            else if (initialKeyStr == "MaxConcurrentGameSessionActivations") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_maxConcurrentGameSessionActivations = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_maxConcurrentGameSessionActivations = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_maxConcurrentGameSessionActivationsHasBeenSet = true;
            }

            else if (initialKeyStr == "GameSessionActivationTimeoutSeconds") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_gameSessionActivationTimeoutSeconds = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_gameSessionActivationTimeoutSeconds = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_gameSessionActivationTimeoutSecondsHasBeenSet = true;
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

void RuntimeConfiguration::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_serverProcessesHasBeenSet) {
    mapSize++;
  }
  if (m_maxConcurrentGameSessionActivationsHasBeenSet) {
    mapSize++;
  }
  if (m_gameSessionActivationTimeoutSecondsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_serverProcessesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ServerProcesses"));
    encoder.WriteArrayStart(m_serverProcesses.size());
    for (const auto& item_0 : m_serverProcesses) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_maxConcurrentGameSessionActivationsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxConcurrentGameSessionActivations"));
    (m_maxConcurrentGameSessionActivations >= 0) ? encoder.WriteUInt(m_maxConcurrentGameSessionActivations)
                                                 : encoder.WriteNegInt(m_maxConcurrentGameSessionActivations);
  }

  if (m_gameSessionActivationTimeoutSecondsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GameSessionActivationTimeoutSeconds"));
    (m_gameSessionActivationTimeoutSeconds >= 0) ? encoder.WriteUInt(m_gameSessionActivationTimeoutSeconds)
                                                 : encoder.WriteNegInt(m_gameSessionActivationTimeoutSeconds);
  }
}

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws