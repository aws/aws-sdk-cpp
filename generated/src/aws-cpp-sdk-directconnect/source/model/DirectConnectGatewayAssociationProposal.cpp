/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/directconnect/model/DirectConnectGatewayAssociationProposal.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace DirectConnect {
namespace Model {

DirectConnectGatewayAssociationProposal::DirectConnectGatewayAssociationProposal(
    const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  *this = decoder;
}

DirectConnectGatewayAssociationProposal& DirectConnectGatewayAssociationProposal::operator=(
    const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "proposalId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_proposalId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_proposalId = ss.str();
                  }
                }
                m_proposalIdHasBeenSet = true;
              }

              else if (initialKeyStr == "directConnectGatewayId") {
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

              else if (initialKeyStr == "proposalState") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_proposalState =
                      DirectConnectGatewayAssociationProposalStateMapper::GetDirectConnectGatewayAssociationProposalStateForName(
                          Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_proposalStateHasBeenSet = true;
              }

              else if (initialKeyStr == "associatedGateway") {
                m_associatedGateway = AssociatedGateway(decoder);
                m_associatedGatewayHasBeenSet = true;
              }

              else if (initialKeyStr == "existingAllowedPrefixesToDirectConnectGateway") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_existingAllowedPrefixesToDirectConnectGateway.push_back(RouteFilterPrefix(decoder));
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
                      m_existingAllowedPrefixesToDirectConnectGateway.push_back(RouteFilterPrefix(decoder));
                    }
                  }
                }
                m_existingAllowedPrefixesToDirectConnectGatewayHasBeenSet = true;
              }

              else if (initialKeyStr == "requestedAllowedPrefixesToDirectConnectGateway") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_requestedAllowedPrefixesToDirectConnectGateway.push_back(RouteFilterPrefix(decoder));
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
                      m_requestedAllowedPrefixesToDirectConnectGateway.push_back(RouteFilterPrefix(decoder));
                    }
                  }
                }
                m_requestedAllowedPrefixesToDirectConnectGatewayHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("DirectConnectGatewayAssociationProposal", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "proposalId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_proposalId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_proposalId = ss.str();
                }
              }
              m_proposalIdHasBeenSet = true;
            }

            else if (initialKeyStr == "directConnectGatewayId") {
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

            else if (initialKeyStr == "proposalState") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_proposalState =
                    DirectConnectGatewayAssociationProposalStateMapper::GetDirectConnectGatewayAssociationProposalStateForName(
                        Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_proposalStateHasBeenSet = true;
            }

            else if (initialKeyStr == "associatedGateway") {
              m_associatedGateway = AssociatedGateway(decoder);
              m_associatedGatewayHasBeenSet = true;
            }

            else if (initialKeyStr == "existingAllowedPrefixesToDirectConnectGateway") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_existingAllowedPrefixesToDirectConnectGateway.push_back(RouteFilterPrefix(decoder));
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
                    m_existingAllowedPrefixesToDirectConnectGateway.push_back(RouteFilterPrefix(decoder));
                  }
                }
              }
              m_existingAllowedPrefixesToDirectConnectGatewayHasBeenSet = true;
            }

            else if (initialKeyStr == "requestedAllowedPrefixesToDirectConnectGateway") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_requestedAllowedPrefixesToDirectConnectGateway.push_back(RouteFilterPrefix(decoder));
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
                    m_requestedAllowedPrefixesToDirectConnectGateway.push_back(RouteFilterPrefix(decoder));
                  }
                }
              }
              m_requestedAllowedPrefixesToDirectConnectGatewayHasBeenSet = true;
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

void DirectConnectGatewayAssociationProposal::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_proposalIdHasBeenSet) {
    mapSize++;
  }
  if (m_directConnectGatewayIdHasBeenSet) {
    mapSize++;
  }
  if (m_directConnectGatewayOwnerAccountHasBeenSet) {
    mapSize++;
  }
  if (m_proposalStateHasBeenSet) {
    mapSize++;
  }
  if (m_associatedGatewayHasBeenSet) {
    mapSize++;
  }
  if (m_existingAllowedPrefixesToDirectConnectGatewayHasBeenSet) {
    mapSize++;
  }
  if (m_requestedAllowedPrefixesToDirectConnectGatewayHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_proposalIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("proposalId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_proposalId.c_str()));
  }

  if (m_directConnectGatewayIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("directConnectGatewayId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_directConnectGatewayId.c_str()));
  }

  if (m_directConnectGatewayOwnerAccountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("directConnectGatewayOwnerAccount"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_directConnectGatewayOwnerAccount.c_str()));
  }

  if (m_proposalStateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("proposalState"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        DirectConnectGatewayAssociationProposalStateMapper::GetNameForDirectConnectGatewayAssociationProposalState(m_proposalState)
            .c_str()));
  }

  if (m_associatedGatewayHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("associatedGateway"));
    m_associatedGateway.CborEncode(encoder);
  }

  if (m_existingAllowedPrefixesToDirectConnectGatewayHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("existingAllowedPrefixesToDirectConnectGateway"));
    encoder.WriteArrayStart(m_existingAllowedPrefixesToDirectConnectGateway.size());
    for (const auto& item_0 : m_existingAllowedPrefixesToDirectConnectGateway) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_requestedAllowedPrefixesToDirectConnectGatewayHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("requestedAllowedPrefixesToDirectConnectGateway"));
    encoder.WriteArrayStart(m_requestedAllowedPrefixesToDirectConnectGateway.size());
    for (const auto& item_0 : m_requestedAllowedPrefixesToDirectConnectGateway) {
      item_0.CborEncode(encoder);
    }
  }
}

}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws