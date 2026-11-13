/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/directconnect/model/Lag.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace DirectConnect {
namespace Model {

Lag::Lag(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

Lag& Lag::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "connectionsBandwidth") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_connectionsBandwidth = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_connectionsBandwidth = ss.str();
                  }
                }
                m_connectionsBandwidthHasBeenSet = true;
              }

              else if (initialKeyStr == "numberOfConnections") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_numberOfConnections = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_numberOfConnections = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_numberOfConnectionsHasBeenSet = true;
              }

              else if (initialKeyStr == "lagId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_lagId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_lagId = ss.str();
                  }
                }
                m_lagIdHasBeenSet = true;
              }

              else if (initialKeyStr == "ownerAccount") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_ownerAccount = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_ownerAccount = ss.str();
                  }
                }
                m_ownerAccountHasBeenSet = true;
              }

              else if (initialKeyStr == "lagName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_lagName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_lagName = ss.str();
                  }
                }
                m_lagNameHasBeenSet = true;
              }

              else if (initialKeyStr == "lagState") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_lagState =
                      LagStateMapper::GetLagStateForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_lagStateHasBeenSet = true;
              }

              else if (initialKeyStr == "location") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_location = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_location = ss.str();
                  }
                }
                m_locationHasBeenSet = true;
              }

              else if (initialKeyStr == "region") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_region = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_region = ss.str();
                  }
                }
                m_regionHasBeenSet = true;
              }

              else if (initialKeyStr == "minimumLinks") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_minimumLinks = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_minimumLinks = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_minimumLinksHasBeenSet = true;
              }

              else if (initialKeyStr == "awsDevice") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_awsDevice = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_awsDevice = ss.str();
                  }
                }
                m_awsDeviceHasBeenSet = true;
              }

              else if (initialKeyStr == "awsDeviceV2") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_awsDeviceV2 = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_awsDeviceV2 = ss.str();
                  }
                }
                m_awsDeviceV2HasBeenSet = true;
              }

              else if (initialKeyStr == "awsLogicalDeviceId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_awsLogicalDeviceId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_awsLogicalDeviceId = ss.str();
                  }
                }
                m_awsLogicalDeviceIdHasBeenSet = true;
              }

              else if (initialKeyStr == "connections") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_connections.push_back(Connection(decoder));
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
                      m_connections.push_back(Connection(decoder));
                    }
                  }
                }
                m_connectionsHasBeenSet = true;
              }

              else if (initialKeyStr == "allowsHostedConnections") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_allowsHostedConnections = val.value();
                }
                m_allowsHostedConnectionsHasBeenSet = true;
              }

              else if (initialKeyStr == "jumboFrameCapable") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_jumboFrameCapable = val.value();
                }
                m_jumboFrameCapableHasBeenSet = true;
              }

              else if (initialKeyStr == "hasLogicalRedundancy") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_hasLogicalRedundancy = HasLogicalRedundancyMapper::GetHasLogicalRedundancyForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_hasLogicalRedundancyHasBeenSet = true;
              }

              else if (initialKeyStr == "tags") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_tags.push_back(Tag(decoder));
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
                      m_tags.push_back(Tag(decoder));
                    }
                  }
                }
                m_tagsHasBeenSet = true;
              }

              else if (initialKeyStr == "providerName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_providerName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_providerName = ss.str();
                  }
                }
                m_providerNameHasBeenSet = true;
              }

              else if (initialKeyStr == "macSecCapable") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_macSecCapable = val.value();
                }
                m_macSecCapableHasBeenSet = true;
              }

              else if (initialKeyStr == "encryptionMode") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_encryptionMode = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_encryptionMode = ss.str();
                  }
                }
                m_encryptionModeHasBeenSet = true;
              }

              else if (initialKeyStr == "macSecKeys") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_macSecKeys.push_back(MacSecKey(decoder));
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
                      m_macSecKeys.push_back(MacSecKey(decoder));
                    }
                  }
                }
                m_macSecKeysHasBeenSet = true;
              }

              else if (initialKeyStr == "prefixPoolSizeIpv4") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_prefixPoolSizeIpv4 = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_prefixPoolSizeIpv4 = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_prefixPoolSizeIpv4HasBeenSet = true;
              }

              else if (initialKeyStr == "prefixPoolSizeIpv6") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_prefixPoolSizeIpv6 = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_prefixPoolSizeIpv6 = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_prefixPoolSizeIpv6HasBeenSet = true;
              }

              else if (initialKeyStr == "prefixPoolUnallocatedCountIpv4") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_prefixPoolUnallocatedCountIpv4 = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_prefixPoolUnallocatedCountIpv4 = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_prefixPoolUnallocatedCountIpv4HasBeenSet = true;
              }

              else if (initialKeyStr == "prefixPoolUnallocatedCountIpv6") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_prefixPoolUnallocatedCountIpv6 = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_prefixPoolUnallocatedCountIpv6 = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_prefixPoolUnallocatedCountIpv6HasBeenSet = true;
              }

              else if (initialKeyStr == "rateLimiterStatus") {
                m_rateLimiterStatus = RateLimiterStatus(decoder);
                m_rateLimiterStatusHasBeenSet = true;
              }

              else if (initialKeyStr == "billingMode") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_billingMode = BillingModeMapper::GetBillingModeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_billingModeHasBeenSet = true;
              }

              else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("Lag", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "connectionsBandwidth") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_connectionsBandwidth = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_connectionsBandwidth = ss.str();
                }
              }
              m_connectionsBandwidthHasBeenSet = true;
            }

            else if (initialKeyStr == "numberOfConnections") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_numberOfConnections = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_numberOfConnections = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_numberOfConnectionsHasBeenSet = true;
            }

            else if (initialKeyStr == "lagId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_lagId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_lagId = ss.str();
                }
              }
              m_lagIdHasBeenSet = true;
            }

            else if (initialKeyStr == "ownerAccount") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_ownerAccount = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_ownerAccount = ss.str();
                }
              }
              m_ownerAccountHasBeenSet = true;
            }

            else if (initialKeyStr == "lagName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_lagName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_lagName = ss.str();
                }
              }
              m_lagNameHasBeenSet = true;
            }

            else if (initialKeyStr == "lagState") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_lagState =
                    LagStateMapper::GetLagStateForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_lagStateHasBeenSet = true;
            }

            else if (initialKeyStr == "location") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_location = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_location = ss.str();
                }
              }
              m_locationHasBeenSet = true;
            }

            else if (initialKeyStr == "region") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_region = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_region = ss.str();
                }
              }
              m_regionHasBeenSet = true;
            }

            else if (initialKeyStr == "minimumLinks") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_minimumLinks = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_minimumLinks = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_minimumLinksHasBeenSet = true;
            }

            else if (initialKeyStr == "awsDevice") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_awsDevice = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_awsDevice = ss.str();
                }
              }
              m_awsDeviceHasBeenSet = true;
            }

            else if (initialKeyStr == "awsDeviceV2") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_awsDeviceV2 = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_awsDeviceV2 = ss.str();
                }
              }
              m_awsDeviceV2HasBeenSet = true;
            }

            else if (initialKeyStr == "awsLogicalDeviceId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_awsLogicalDeviceId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_awsLogicalDeviceId = ss.str();
                }
              }
              m_awsLogicalDeviceIdHasBeenSet = true;
            }

            else if (initialKeyStr == "connections") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_connections.push_back(Connection(decoder));
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
                    m_connections.push_back(Connection(decoder));
                  }
                }
              }
              m_connectionsHasBeenSet = true;
            }

            else if (initialKeyStr == "allowsHostedConnections") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_allowsHostedConnections = val.value();
              }
              m_allowsHostedConnectionsHasBeenSet = true;
            }

            else if (initialKeyStr == "jumboFrameCapable") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_jumboFrameCapable = val.value();
              }
              m_jumboFrameCapableHasBeenSet = true;
            }

            else if (initialKeyStr == "hasLogicalRedundancy") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_hasLogicalRedundancy = HasLogicalRedundancyMapper::GetHasLogicalRedundancyForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_hasLogicalRedundancyHasBeenSet = true;
            }

            else if (initialKeyStr == "tags") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_tags.push_back(Tag(decoder));
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
                    m_tags.push_back(Tag(decoder));
                  }
                }
              }
              m_tagsHasBeenSet = true;
            }

            else if (initialKeyStr == "providerName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_providerName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_providerName = ss.str();
                }
              }
              m_providerNameHasBeenSet = true;
            }

            else if (initialKeyStr == "macSecCapable") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_macSecCapable = val.value();
              }
              m_macSecCapableHasBeenSet = true;
            }

            else if (initialKeyStr == "encryptionMode") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_encryptionMode = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_encryptionMode = ss.str();
                }
              }
              m_encryptionModeHasBeenSet = true;
            }

            else if (initialKeyStr == "macSecKeys") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_macSecKeys.push_back(MacSecKey(decoder));
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
                    m_macSecKeys.push_back(MacSecKey(decoder));
                  }
                }
              }
              m_macSecKeysHasBeenSet = true;
            }

            else if (initialKeyStr == "prefixPoolSizeIpv4") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_prefixPoolSizeIpv4 = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_prefixPoolSizeIpv4 = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_prefixPoolSizeIpv4HasBeenSet = true;
            }

            else if (initialKeyStr == "prefixPoolSizeIpv6") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_prefixPoolSizeIpv6 = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_prefixPoolSizeIpv6 = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_prefixPoolSizeIpv6HasBeenSet = true;
            }

            else if (initialKeyStr == "prefixPoolUnallocatedCountIpv4") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_prefixPoolUnallocatedCountIpv4 = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_prefixPoolUnallocatedCountIpv4 = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_prefixPoolUnallocatedCountIpv4HasBeenSet = true;
            }

            else if (initialKeyStr == "prefixPoolUnallocatedCountIpv6") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_prefixPoolUnallocatedCountIpv6 = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_prefixPoolUnallocatedCountIpv6 = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_prefixPoolUnallocatedCountIpv6HasBeenSet = true;
            }

            else if (initialKeyStr == "rateLimiterStatus") {
              m_rateLimiterStatus = RateLimiterStatus(decoder);
              m_rateLimiterStatusHasBeenSet = true;
            }

            else if (initialKeyStr == "billingMode") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_billingMode =
                    BillingModeMapper::GetBillingModeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_billingModeHasBeenSet = true;
            }

            else {
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

void Lag::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_connectionsBandwidthHasBeenSet) {
    mapSize++;
  }
  if (m_numberOfConnectionsHasBeenSet) {
    mapSize++;
  }
  if (m_lagIdHasBeenSet) {
    mapSize++;
  }
  if (m_ownerAccountHasBeenSet) {
    mapSize++;
  }
  if (m_lagNameHasBeenSet) {
    mapSize++;
  }
  if (m_lagStateHasBeenSet) {
    mapSize++;
  }
  if (m_locationHasBeenSet) {
    mapSize++;
  }
  if (m_regionHasBeenSet) {
    mapSize++;
  }
  if (m_minimumLinksHasBeenSet) {
    mapSize++;
  }
  if (m_awsDeviceHasBeenSet) {
    mapSize++;
  }
  if (m_awsDeviceV2HasBeenSet) {
    mapSize++;
  }
  if (m_awsLogicalDeviceIdHasBeenSet) {
    mapSize++;
  }
  if (m_connectionsHasBeenSet) {
    mapSize++;
  }
  if (m_allowsHostedConnectionsHasBeenSet) {
    mapSize++;
  }
  if (m_jumboFrameCapableHasBeenSet) {
    mapSize++;
  }
  if (m_hasLogicalRedundancyHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_providerNameHasBeenSet) {
    mapSize++;
  }
  if (m_macSecCapableHasBeenSet) {
    mapSize++;
  }
  if (m_encryptionModeHasBeenSet) {
    mapSize++;
  }
  if (m_macSecKeysHasBeenSet) {
    mapSize++;
  }
  if (m_prefixPoolSizeIpv4HasBeenSet) {
    mapSize++;
  }
  if (m_prefixPoolSizeIpv6HasBeenSet) {
    mapSize++;
  }
  if (m_prefixPoolUnallocatedCountIpv4HasBeenSet) {
    mapSize++;
  }
  if (m_prefixPoolUnallocatedCountIpv6HasBeenSet) {
    mapSize++;
  }
  if (m_rateLimiterStatusHasBeenSet) {
    mapSize++;
  }
  if (m_billingModeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_connectionsBandwidthHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("connectionsBandwidth"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_connectionsBandwidth.c_str()));
  }

  if (m_numberOfConnectionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("numberOfConnections"));
    (m_numberOfConnections >= 0) ? encoder.WriteUInt(m_numberOfConnections) : encoder.WriteNegInt(m_numberOfConnections);
  }

  if (m_lagIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("lagId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_lagId.c_str()));
  }

  if (m_ownerAccountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ownerAccount"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_ownerAccount.c_str()));
  }

  if (m_lagNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("lagName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_lagName.c_str()));
  }

  if (m_lagStateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("lagState"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(LagStateMapper::GetNameForLagState(m_lagState).c_str()));
  }

  if (m_locationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("location"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_location.c_str()));
  }

  if (m_regionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("region"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_region.c_str()));
  }

  if (m_minimumLinksHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("minimumLinks"));
    (m_minimumLinks >= 0) ? encoder.WriteUInt(m_minimumLinks) : encoder.WriteNegInt(m_minimumLinks);
  }

  if (m_awsDeviceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("awsDevice"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_awsDevice.c_str()));
  }

  if (m_awsDeviceV2HasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("awsDeviceV2"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_awsDeviceV2.c_str()));
  }

  if (m_awsLogicalDeviceIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("awsLogicalDeviceId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_awsLogicalDeviceId.c_str()));
  }

  if (m_connectionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("connections"));
    encoder.WriteArrayStart(m_connections.size());
    for (const auto& item_0 : m_connections) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_allowsHostedConnectionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("allowsHostedConnections"));
    encoder.WriteBool(m_allowsHostedConnections);
  }

  if (m_jumboFrameCapableHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("jumboFrameCapable"));
    encoder.WriteBool(m_jumboFrameCapable);
  }

  if (m_hasLogicalRedundancyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("hasLogicalRedundancy"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(HasLogicalRedundancyMapper::GetNameForHasLogicalRedundancy(m_hasLogicalRedundancy).c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_providerNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("providerName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_providerName.c_str()));
  }

  if (m_macSecCapableHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("macSecCapable"));
    encoder.WriteBool(m_macSecCapable);
  }

  if (m_encryptionModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("encryptionMode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_encryptionMode.c_str()));
  }

  if (m_macSecKeysHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("macSecKeys"));
    encoder.WriteArrayStart(m_macSecKeys.size());
    for (const auto& item_0 : m_macSecKeys) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_prefixPoolSizeIpv4HasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("prefixPoolSizeIpv4"));
    (m_prefixPoolSizeIpv4 >= 0) ? encoder.WriteUInt(m_prefixPoolSizeIpv4) : encoder.WriteNegInt(m_prefixPoolSizeIpv4);
  }

  if (m_prefixPoolSizeIpv6HasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("prefixPoolSizeIpv6"));
    (m_prefixPoolSizeIpv6 >= 0) ? encoder.WriteUInt(m_prefixPoolSizeIpv6) : encoder.WriteNegInt(m_prefixPoolSizeIpv6);
  }

  if (m_prefixPoolUnallocatedCountIpv4HasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("prefixPoolUnallocatedCountIpv4"));
    (m_prefixPoolUnallocatedCountIpv4 >= 0) ? encoder.WriteUInt(m_prefixPoolUnallocatedCountIpv4)
                                            : encoder.WriteNegInt(m_prefixPoolUnallocatedCountIpv4);
  }

  if (m_prefixPoolUnallocatedCountIpv6HasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("prefixPoolUnallocatedCountIpv6"));
    (m_prefixPoolUnallocatedCountIpv6 >= 0) ? encoder.WriteUInt(m_prefixPoolUnallocatedCountIpv6)
                                            : encoder.WriteNegInt(m_prefixPoolUnallocatedCountIpv6);
  }

  if (m_rateLimiterStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("rateLimiterStatus"));
    m_rateLimiterStatus.CborEncode(encoder);
  }

  if (m_billingModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("billingMode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(BillingModeMapper::GetNameForBillingMode(m_billingMode).c_str()));
  }
}

}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws