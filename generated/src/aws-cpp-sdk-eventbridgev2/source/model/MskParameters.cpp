/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/model/MskParameters.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace EventBridgeV2 {
namespace Model {

MskParameters::MskParameters(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

MskParameters& MskParameters::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "TopicName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_topicName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_topicName = ss.str();
                  }
                }
                m_topicNameHasBeenSet = true;
              }

              else if (initialKeyStr == "Compression") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_compression = MskCompressionMapper::GetMskCompressionForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_compressionHasBeenSet = true;
              }

              else if (initialKeyStr == "Acks") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_acks = MskAcksMapper::GetMskAcksForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_acksHasBeenSet = true;
              }

              else if (initialKeyStr == "PartitionKey") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_partitionKey = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_partitionKey = ss.str();
                  }
                }
                m_partitionKeyHasBeenSet = true;
              }

              else if (initialKeyStr == "Headers") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_headers.push_back(MskHeader(decoder));
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
                      m_headers.push_back(MskHeader(decoder));
                    }
                  }
                }
                m_headersHasBeenSet = true;
              }

              else if (initialKeyStr == "ClientId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_clientId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_clientId = ss.str();
                  }
                }
                m_clientIdHasBeenSet = true;
              }

              else if (initialKeyStr == "Connectivity") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_connectivity = MskConnectivityMapper::GetMskConnectivityForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_connectivityHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("MskParameters", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "TopicName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_topicName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_topicName = ss.str();
                }
              }
              m_topicNameHasBeenSet = true;
            }

            else if (initialKeyStr == "Compression") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_compression = MskCompressionMapper::GetMskCompressionForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_compressionHasBeenSet = true;
            }

            else if (initialKeyStr == "Acks") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_acks = MskAcksMapper::GetMskAcksForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_acksHasBeenSet = true;
            }

            else if (initialKeyStr == "PartitionKey") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_partitionKey = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_partitionKey = ss.str();
                }
              }
              m_partitionKeyHasBeenSet = true;
            }

            else if (initialKeyStr == "Headers") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_headers.push_back(MskHeader(decoder));
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
                    m_headers.push_back(MskHeader(decoder));
                  }
                }
              }
              m_headersHasBeenSet = true;
            }

            else if (initialKeyStr == "ClientId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_clientId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_clientId = ss.str();
                }
              }
              m_clientIdHasBeenSet = true;
            }

            else if (initialKeyStr == "Connectivity") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_connectivity = MskConnectivityMapper::GetMskConnectivityForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_connectivityHasBeenSet = true;
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

void MskParameters::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_topicNameHasBeenSet) {
    mapSize++;
  }
  if (m_compressionHasBeenSet) {
    mapSize++;
  }
  if (m_acksHasBeenSet) {
    mapSize++;
  }
  if (m_partitionKeyHasBeenSet) {
    mapSize++;
  }
  if (m_headersHasBeenSet) {
    mapSize++;
  }
  if (m_clientIdHasBeenSet) {
    mapSize++;
  }
  if (m_connectivityHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_topicNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TopicName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_topicName.c_str()));
  }

  if (m_compressionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Compression"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(MskCompressionMapper::GetNameForMskCompression(m_compression).c_str()));
  }

  if (m_acksHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Acks"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(MskAcksMapper::GetNameForMskAcks(m_acks).c_str()));
  }

  if (m_partitionKeyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PartitionKey"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_partitionKey.c_str()));
  }

  if (m_headersHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Headers"));
    encoder.WriteArrayStart(m_headers.size());
    for (const auto& item_0 : m_headers) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_clientIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ClientId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_clientId.c_str()));
  }

  if (m_connectivityHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Connectivity"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(MskConnectivityMapper::GetNameForMskConnectivity(m_connectivity).c_str()));
  }
}

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws