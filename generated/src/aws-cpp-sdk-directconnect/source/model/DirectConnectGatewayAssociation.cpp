/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/directconnect/model/DirectConnectGatewayAssociation.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace DirectConnect {
namespace Model {

DirectConnectGatewayAssociation::DirectConnectGatewayAssociation(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  *this = decoder;
}

DirectConnectGatewayAssociation& DirectConnectGatewayAssociation::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              else if (initialKeyStr == "directConnectGatewayOwnerAccount") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_directConnectGatewayOwnerAccount = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_directConnectGatewayOwnerAccount = ss.str();
                  }
                }
                m_directConnectGatewayOwnerAccountHasBeenSet = true;
              }

              else if (initialKeyStr == "associationState") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_associationState = DirectConnectGatewayAssociationStateMapper::GetDirectConnectGatewayAssociationStateForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_associationStateHasBeenSet = true;
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
              }

              else if (initialKeyStr == "associatedGateway") {
                m_associatedGateway = AssociatedGateway(decoder);
                m_associatedGatewayHasBeenSet = true;
              }

              else if (initialKeyStr == "associationId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_associationId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_associationId = ss.str();
                  }
                }
                m_associationIdHasBeenSet = true;
              }

              else if (initialKeyStr == "allowedPrefixesToDirectConnectGateway") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_allowedPrefixesToDirectConnectGateway.push_back(RouteFilterPrefix(decoder));
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
                      m_allowedPrefixesToDirectConnectGateway.push_back(RouteFilterPrefix(decoder));
                    }
                  }
                }
                m_allowedPrefixesToDirectConnectGatewayHasBeenSet = true;
              }

              else if (initialKeyStr == "associatedCoreNetwork") {
                m_associatedCoreNetwork = AssociatedCoreNetwork(decoder);
                m_associatedCoreNetworkHasBeenSet = true;
              }

              else if (initialKeyStr == "virtualGatewayId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_virtualGatewayId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_virtualGatewayId = ss.str();
                  }
                }
                m_virtualGatewayIdHasBeenSet = true;
              }

              else if (initialKeyStr == "virtualGatewayRegion") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_virtualGatewayRegion = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_virtualGatewayRegion = ss.str();
                  }
                }
                m_virtualGatewayRegionHasBeenSet = true;
              }

              else if (initialKeyStr == "virtualGatewayOwnerAccount") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_virtualGatewayOwnerAccount = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_virtualGatewayOwnerAccount = ss.str();
                  }
                }
                m_virtualGatewayOwnerAccountHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("DirectConnectGatewayAssociation", "Invalid data received for %s", initialKeyStr.c_str());
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

            else if (initialKeyStr == "directConnectGatewayOwnerAccount") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_directConnectGatewayOwnerAccount = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_directConnectGatewayOwnerAccount = ss.str();
                }
              }
              m_directConnectGatewayOwnerAccountHasBeenSet = true;
            }

            else if (initialKeyStr == "associationState") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_associationState = DirectConnectGatewayAssociationStateMapper::GetDirectConnectGatewayAssociationStateForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_associationStateHasBeenSet = true;
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
            }

            else if (initialKeyStr == "associatedGateway") {
              m_associatedGateway = AssociatedGateway(decoder);
              m_associatedGatewayHasBeenSet = true;
            }

            else if (initialKeyStr == "associationId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_associationId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_associationId = ss.str();
                }
              }
              m_associationIdHasBeenSet = true;
            }

            else if (initialKeyStr == "allowedPrefixesToDirectConnectGateway") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_allowedPrefixesToDirectConnectGateway.push_back(RouteFilterPrefix(decoder));
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
                    m_allowedPrefixesToDirectConnectGateway.push_back(RouteFilterPrefix(decoder));
                  }
                }
              }
              m_allowedPrefixesToDirectConnectGatewayHasBeenSet = true;
            }

            else if (initialKeyStr == "associatedCoreNetwork") {
              m_associatedCoreNetwork = AssociatedCoreNetwork(decoder);
              m_associatedCoreNetworkHasBeenSet = true;
            }

            else if (initialKeyStr == "virtualGatewayId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_virtualGatewayId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_virtualGatewayId = ss.str();
                }
              }
              m_virtualGatewayIdHasBeenSet = true;
            }

            else if (initialKeyStr == "virtualGatewayRegion") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_virtualGatewayRegion = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_virtualGatewayRegion = ss.str();
                }
              }
              m_virtualGatewayRegionHasBeenSet = true;
            }

            else if (initialKeyStr == "virtualGatewayOwnerAccount") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_virtualGatewayOwnerAccount = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_virtualGatewayOwnerAccount = ss.str();
                }
              }
              m_virtualGatewayOwnerAccountHasBeenSet = true;
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

void DirectConnectGatewayAssociation::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_directConnectGatewayIdHasBeenSet) {
    mapSize++;
  }
  if (m_directConnectGatewayOwnerAccountHasBeenSet) {
    mapSize++;
  }
  if (m_associationStateHasBeenSet) {
    mapSize++;
  }
  if (m_stateChangeErrorHasBeenSet) {
    mapSize++;
  }
  if (m_associatedGatewayHasBeenSet) {
    mapSize++;
  }
  if (m_associationIdHasBeenSet) {
    mapSize++;
  }
  if (m_allowedPrefixesToDirectConnectGatewayHasBeenSet) {
    mapSize++;
  }
  if (m_associatedCoreNetworkHasBeenSet) {
    mapSize++;
  }
  if (m_virtualGatewayIdHasBeenSet) {
    mapSize++;
  }
  if (m_virtualGatewayRegionHasBeenSet) {
    mapSize++;
  }
  if (m_virtualGatewayOwnerAccountHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_directConnectGatewayIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("directConnectGatewayId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_directConnectGatewayId.c_str()));
  }

  if (m_directConnectGatewayOwnerAccountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("directConnectGatewayOwnerAccount"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_directConnectGatewayOwnerAccount.c_str()));
  }

  if (m_associationStateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("associationState"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        DirectConnectGatewayAssociationStateMapper::GetNameForDirectConnectGatewayAssociationState(m_associationState).c_str()));
  }

  if (m_stateChangeErrorHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("stateChangeError"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_stateChangeError.c_str()));
  }

  if (m_associatedGatewayHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("associatedGateway"));
    m_associatedGateway.CborEncode(encoder);
  }

  if (m_associationIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("associationId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_associationId.c_str()));
  }

  if (m_allowedPrefixesToDirectConnectGatewayHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("allowedPrefixesToDirectConnectGateway"));
    encoder.WriteArrayStart(m_allowedPrefixesToDirectConnectGateway.size());
    for (const auto& item_0 : m_allowedPrefixesToDirectConnectGateway) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_associatedCoreNetworkHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("associatedCoreNetwork"));
    m_associatedCoreNetwork.CborEncode(encoder);
  }

  if (m_virtualGatewayIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("virtualGatewayId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_virtualGatewayId.c_str()));
  }

  if (m_virtualGatewayRegionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("virtualGatewayRegion"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_virtualGatewayRegion.c_str()));
  }

  if (m_virtualGatewayOwnerAccountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("virtualGatewayOwnerAccount"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_virtualGatewayOwnerAccount.c_str()));
  }
}

}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws