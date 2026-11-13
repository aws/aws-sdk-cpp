/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/directconnect/model/DirectConnectGatewayAttachment.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace DirectConnect {
namespace Model {

DirectConnectGatewayAttachment::DirectConnectGatewayAttachment(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  *this = decoder;
}

DirectConnectGatewayAttachment& DirectConnectGatewayAttachment::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "directConnectGatewayId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_directConnectGatewayId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_directConnectGatewayId = ss.str();
                  }
                }
                m_directConnectGatewayIdHasBeenSet = true;
              }

              else if (initialKeyStr == "virtualInterfaceId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_virtualInterfaceId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_virtualInterfaceId = ss.str();
                  }
                }
                m_virtualInterfaceIdHasBeenSet = true;
              }

              else if (initialKeyStr == "virtualInterfaceRegion") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_virtualInterfaceRegion = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_virtualInterfaceRegion = ss.str();
                  }
                }
                m_virtualInterfaceRegionHasBeenSet = true;
              }

              else if (initialKeyStr == "virtualInterfaceOwnerAccount") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_virtualInterfaceOwnerAccount = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_virtualInterfaceOwnerAccount = ss.str();
                  }
                }
                m_virtualInterfaceOwnerAccountHasBeenSet = true;
              }

              else if (initialKeyStr == "attachmentState") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_attachmentState = DirectConnectGatewayAttachmentStateMapper::GetDirectConnectGatewayAttachmentStateForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_attachmentStateHasBeenSet = true;
              }

              else if (initialKeyStr == "attachmentType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_attachmentType = DirectConnectGatewayAttachmentTypeMapper::GetDirectConnectGatewayAttachmentTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_attachmentTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "stateChangeError") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_stateChangeError = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_stateChangeError = ss.str();
                  }
                }
                m_stateChangeErrorHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("DirectConnectGatewayAttachment", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "directConnectGatewayId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_directConnectGatewayId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_directConnectGatewayId = ss.str();
                }
              }
              m_directConnectGatewayIdHasBeenSet = true;
            }

            else if (initialKeyStr == "virtualInterfaceId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_virtualInterfaceId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_virtualInterfaceId = ss.str();
                }
              }
              m_virtualInterfaceIdHasBeenSet = true;
            }

            else if (initialKeyStr == "virtualInterfaceRegion") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_virtualInterfaceRegion = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_virtualInterfaceRegion = ss.str();
                }
              }
              m_virtualInterfaceRegionHasBeenSet = true;
            }

            else if (initialKeyStr == "virtualInterfaceOwnerAccount") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_virtualInterfaceOwnerAccount = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_virtualInterfaceOwnerAccount = ss.str();
                }
              }
              m_virtualInterfaceOwnerAccountHasBeenSet = true;
            }

            else if (initialKeyStr == "attachmentState") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_attachmentState = DirectConnectGatewayAttachmentStateMapper::GetDirectConnectGatewayAttachmentStateForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_attachmentStateHasBeenSet = true;
            }

            else if (initialKeyStr == "attachmentType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_attachmentType = DirectConnectGatewayAttachmentTypeMapper::GetDirectConnectGatewayAttachmentTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_attachmentTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "stateChangeError") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_stateChangeError = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_stateChangeError = ss.str();
                }
              }
              m_stateChangeErrorHasBeenSet = true;
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

void DirectConnectGatewayAttachment::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_directConnectGatewayIdHasBeenSet) {
    mapSize++;
  }
  if (m_virtualInterfaceIdHasBeenSet) {
    mapSize++;
  }
  if (m_virtualInterfaceRegionHasBeenSet) {
    mapSize++;
  }
  if (m_virtualInterfaceOwnerAccountHasBeenSet) {
    mapSize++;
  }
  if (m_attachmentStateHasBeenSet) {
    mapSize++;
  }
  if (m_attachmentTypeHasBeenSet) {
    mapSize++;
  }
  if (m_stateChangeErrorHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_directConnectGatewayIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("directConnectGatewayId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_directConnectGatewayId.c_str()));
  }

  if (m_virtualInterfaceIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("virtualInterfaceId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_virtualInterfaceId.c_str()));
  }

  if (m_virtualInterfaceRegionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("virtualInterfaceRegion"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_virtualInterfaceRegion.c_str()));
  }

  if (m_virtualInterfaceOwnerAccountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("virtualInterfaceOwnerAccount"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_virtualInterfaceOwnerAccount.c_str()));
  }

  if (m_attachmentStateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("attachmentState"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        DirectConnectGatewayAttachmentStateMapper::GetNameForDirectConnectGatewayAttachmentState(m_attachmentState).c_str()));
  }

  if (m_attachmentTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("attachmentType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        DirectConnectGatewayAttachmentTypeMapper::GetNameForDirectConnectGatewayAttachmentType(m_attachmentType).c_str()));
  }

  if (m_stateChangeErrorHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("stateChangeError"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_stateChangeError.c_str()));
  }
}

}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws