/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/fms/model/NetworkAclEntry.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace FMS {
namespace Model {

NetworkAclEntry::NetworkAclEntry(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

NetworkAclEntry& NetworkAclEntry::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "IcmpTypeCode") {
                m_icmpTypeCode = NetworkAclIcmpTypeCode(decoder);
                m_icmpTypeCodeHasBeenSet = true;
              }

              else if (initialKeyStr == "Protocol") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_protocol = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_protocol = ss.str();
                  }
                }
                m_protocolHasBeenSet = true;
              }

              else if (initialKeyStr == "PortRange") {
                m_portRange = NetworkAclPortRange(decoder);
                m_portRangeHasBeenSet = true;
              }

              else if (initialKeyStr == "CidrBlock") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_cidrBlock = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_cidrBlock = ss.str();
                  }
                }
                m_cidrBlockHasBeenSet = true;
              }

              else if (initialKeyStr == "Ipv6CidrBlock") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_ipv6CidrBlock = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_ipv6CidrBlock = ss.str();
                  }
                }
                m_ipv6CidrBlockHasBeenSet = true;
              }

              else if (initialKeyStr == "RuleAction") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_ruleAction = NetworkAclRuleActionMapper::GetNetworkAclRuleActionForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_ruleActionHasBeenSet = true;
              }

              else if (initialKeyStr == "Egress") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_egress = val.value();
                }
                m_egressHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("NetworkAclEntry", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "IcmpTypeCode") {
              m_icmpTypeCode = NetworkAclIcmpTypeCode(decoder);
              m_icmpTypeCodeHasBeenSet = true;
            }

            else if (initialKeyStr == "Protocol") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_protocol = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_protocol = ss.str();
                }
              }
              m_protocolHasBeenSet = true;
            }

            else if (initialKeyStr == "PortRange") {
              m_portRange = NetworkAclPortRange(decoder);
              m_portRangeHasBeenSet = true;
            }

            else if (initialKeyStr == "CidrBlock") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_cidrBlock = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_cidrBlock = ss.str();
                }
              }
              m_cidrBlockHasBeenSet = true;
            }

            else if (initialKeyStr == "Ipv6CidrBlock") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_ipv6CidrBlock = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_ipv6CidrBlock = ss.str();
                }
              }
              m_ipv6CidrBlockHasBeenSet = true;
            }

            else if (initialKeyStr == "RuleAction") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_ruleAction = NetworkAclRuleActionMapper::GetNetworkAclRuleActionForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_ruleActionHasBeenSet = true;
            }

            else if (initialKeyStr == "Egress") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_egress = val.value();
              }
              m_egressHasBeenSet = true;
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

void NetworkAclEntry::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_icmpTypeCodeHasBeenSet) {
    mapSize++;
  }
  if (m_protocolHasBeenSet) {
    mapSize++;
  }
  if (m_portRangeHasBeenSet) {
    mapSize++;
  }
  if (m_cidrBlockHasBeenSet) {
    mapSize++;
  }
  if (m_ipv6CidrBlockHasBeenSet) {
    mapSize++;
  }
  if (m_ruleActionHasBeenSet) {
    mapSize++;
  }
  if (m_egressHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_icmpTypeCodeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IcmpTypeCode"));
    m_icmpTypeCode.CborEncode(encoder);
  }

  if (m_protocolHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Protocol"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_protocol.c_str()));
  }

  if (m_portRangeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PortRange"));
    m_portRange.CborEncode(encoder);
  }

  if (m_cidrBlockHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CidrBlock"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_cidrBlock.c_str()));
  }

  if (m_ipv6CidrBlockHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Ipv6CidrBlock"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_ipv6CidrBlock.c_str()));
  }

  if (m_ruleActionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RuleAction"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(NetworkAclRuleActionMapper::GetNameForNetworkAclRuleAction(m_ruleAction).c_str()));
  }

  if (m_egressHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Egress"));
    encoder.WriteBool(m_egress);
  }
}

}  // namespace Model
}  // namespace FMS
}  // namespace Aws