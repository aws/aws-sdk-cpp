/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/directconnect/model/Connection.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace DirectConnect {
namespace Model {

Connection::Connection(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

Connection& Connection::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "ownerAccount") {
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

              else if (initialKeyStr == "connectionId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_connectionId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_connectionId = ss.str();
                  }
                }
                m_connectionIdHasBeenSet = true;
              }

              else if (initialKeyStr == "connectionName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_connectionName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_connectionName = ss.str();
                  }
                }
                m_connectionNameHasBeenSet = true;
              }

              else if (initialKeyStr == "connectionState") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_connectionState = ConnectionStateMapper::GetConnectionStateForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_connectionStateHasBeenSet = true;
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

              else if (initialKeyStr == "bandwidth") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_bandwidth = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_bandwidth = ss.str();
                  }
                }
                m_bandwidthHasBeenSet = true;
              }

              else if (initialKeyStr == "vlan") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_vlan = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_vlan = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_vlanHasBeenSet = true;
              }

              else if (initialKeyStr == "partnerName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_partnerName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_partnerName = ss.str();
                  }
                }
                m_partnerNameHasBeenSet = true;
              }

              else if (initialKeyStr == "loaIssueTime") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_loaIssueTime = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_loaIssueTime = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_loaIssueTimeHasBeenSet = true;
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

              else if (initialKeyStr == "jumboFrameCapable") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_jumboFrameCapable = val.value();
                }
                m_jumboFrameCapableHasBeenSet = true;
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

              else if (initialKeyStr == "portEncryptionStatus") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_portEncryptionStatus = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_portEncryptionStatus = ss.str();
                  }
                }
                m_portEncryptionStatusHasBeenSet = true;
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

              else if (initialKeyStr == "rateLimiterStatus") {
                m_rateLimiterStatus = RateLimiterStatus(decoder);
                m_rateLimiterStatusHasBeenSet = true;
              }

              else if (initialKeyStr == "partnerInterconnectMacSecCapable") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_partnerInterconnectMacSecCapable = val.value();
                }
                m_partnerInterconnectMacSecCapableHasBeenSet = true;
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
                AWS_LOG_ERROR("Connection", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "ownerAccount") {
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

            else if (initialKeyStr == "connectionId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_connectionId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_connectionId = ss.str();
                }
              }
              m_connectionIdHasBeenSet = true;
            }

            else if (initialKeyStr == "connectionName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_connectionName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_connectionName = ss.str();
                }
              }
              m_connectionNameHasBeenSet = true;
            }

            else if (initialKeyStr == "connectionState") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_connectionState = ConnectionStateMapper::GetConnectionStateForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_connectionStateHasBeenSet = true;
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

            else if (initialKeyStr == "bandwidth") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_bandwidth = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_bandwidth = ss.str();
                }
              }
              m_bandwidthHasBeenSet = true;
            }

            else if (initialKeyStr == "vlan") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_vlan = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_vlan = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_vlanHasBeenSet = true;
            }

            else if (initialKeyStr == "partnerName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_partnerName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_partnerName = ss.str();
                }
              }
              m_partnerNameHasBeenSet = true;
            }

            else if (initialKeyStr == "loaIssueTime") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_loaIssueTime = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_loaIssueTime = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_loaIssueTimeHasBeenSet = true;
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

            else if (initialKeyStr == "jumboFrameCapable") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_jumboFrameCapable = val.value();
              }
              m_jumboFrameCapableHasBeenSet = true;
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

            else if (initialKeyStr == "portEncryptionStatus") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_portEncryptionStatus = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_portEncryptionStatus = ss.str();
                }
              }
              m_portEncryptionStatusHasBeenSet = true;
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

            else if (initialKeyStr == "rateLimiterStatus") {
              m_rateLimiterStatus = RateLimiterStatus(decoder);
              m_rateLimiterStatusHasBeenSet = true;
            }

            else if (initialKeyStr == "partnerInterconnectMacSecCapable") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_partnerInterconnectMacSecCapable = val.value();
              }
              m_partnerInterconnectMacSecCapableHasBeenSet = true;
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

void Connection::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_ownerAccountHasBeenSet) {
    mapSize++;
  }
  if (m_connectionIdHasBeenSet) {
    mapSize++;
  }
  if (m_connectionNameHasBeenSet) {
    mapSize++;
  }
  if (m_connectionStateHasBeenSet) {
    mapSize++;
  }
  if (m_regionHasBeenSet) {
    mapSize++;
  }
  if (m_locationHasBeenSet) {
    mapSize++;
  }
  if (m_bandwidthHasBeenSet) {
    mapSize++;
  }
  if (m_vlanHasBeenSet) {
    mapSize++;
  }
  if (m_partnerNameHasBeenSet) {
    mapSize++;
  }
  if (m_loaIssueTimeHasBeenSet) {
    mapSize++;
  }
  if (m_lagIdHasBeenSet) {
    mapSize++;
  }
  if (m_awsDeviceHasBeenSet) {
    mapSize++;
  }
  if (m_jumboFrameCapableHasBeenSet) {
    mapSize++;
  }
  if (m_awsDeviceV2HasBeenSet) {
    mapSize++;
  }
  if (m_awsLogicalDeviceIdHasBeenSet) {
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
  if (m_portEncryptionStatusHasBeenSet) {
    mapSize++;
  }
  if (m_encryptionModeHasBeenSet) {
    mapSize++;
  }
  if (m_macSecKeysHasBeenSet) {
    mapSize++;
  }
  if (m_rateLimiterStatusHasBeenSet) {
    mapSize++;
  }
  if (m_partnerInterconnectMacSecCapableHasBeenSet) {
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
  if (m_billingModeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_ownerAccountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ownerAccount"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_ownerAccount.c_str()));
  }

  if (m_connectionIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("connectionId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_connectionId.c_str()));
  }

  if (m_connectionNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("connectionName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_connectionName.c_str()));
  }

  if (m_connectionStateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("connectionState"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ConnectionStateMapper::GetNameForConnectionState(m_connectionState).c_str()));
  }

  if (m_regionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("region"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_region.c_str()));
  }

  if (m_locationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("location"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_location.c_str()));
  }

  if (m_bandwidthHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("bandwidth"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_bandwidth.c_str()));
  }

  if (m_vlanHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("vlan"));
    (m_vlan >= 0) ? encoder.WriteUInt(m_vlan) : encoder.WriteNegInt(m_vlan);
  }

  if (m_partnerNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("partnerName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_partnerName.c_str()));
  }

  if (m_loaIssueTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("loaIssueTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_loaIssueTime.Seconds());
  }

  if (m_lagIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("lagId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_lagId.c_str()));
  }

  if (m_awsDeviceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("awsDevice"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_awsDevice.c_str()));
  }

  if (m_jumboFrameCapableHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("jumboFrameCapable"));
    encoder.WriteBool(m_jumboFrameCapable);
  }

  if (m_awsDeviceV2HasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("awsDeviceV2"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_awsDeviceV2.c_str()));
  }

  if (m_awsLogicalDeviceIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("awsLogicalDeviceId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_awsLogicalDeviceId.c_str()));
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

  if (m_portEncryptionStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("portEncryptionStatus"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_portEncryptionStatus.c_str()));
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

  if (m_rateLimiterStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("rateLimiterStatus"));
    m_rateLimiterStatus.CborEncode(encoder);
  }

  if (m_partnerInterconnectMacSecCapableHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("partnerInterconnectMacSecCapable"));
    encoder.WriteBool(m_partnerInterconnectMacSecCapable);
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

  if (m_billingModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("billingMode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(BillingModeMapper::GetNameForBillingMode(m_billingMode).c_str()));
  }
}

}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws