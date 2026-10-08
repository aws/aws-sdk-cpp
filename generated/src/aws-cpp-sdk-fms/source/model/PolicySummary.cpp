/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/fms/model/PolicySummary.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace FMS {
namespace Model {

PolicySummary::PolicySummary(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

PolicySummary& PolicySummary::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "PolicyArn") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_policyArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_policyArn = ss.str();
                  }
                }
                m_policyArnHasBeenSet = true;
              }

              else if (initialKeyStr == "PolicyId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_policyId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_policyId = ss.str();
                  }
                }
                m_policyIdHasBeenSet = true;
              }

              else if (initialKeyStr == "PolicyName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_policyName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_policyName = ss.str();
                  }
                }
                m_policyNameHasBeenSet = true;
              }

              else if (initialKeyStr == "ResourceType") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_resourceType = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_resourceType = ss.str();
                  }
                }
                m_resourceTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "SecurityServiceType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_securityServiceType = SecurityServiceTypeMapper::GetSecurityServiceTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_securityServiceTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "RemediationEnabled") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_remediationEnabled = val.value();
                }
                m_remediationEnabledHasBeenSet = true;
              }

              else if (initialKeyStr == "DeleteUnusedFMManagedResources") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_deleteUnusedFMManagedResources = val.value();
                }
                m_deleteUnusedFMManagedResourcesHasBeenSet = true;
              }

              else if (initialKeyStr == "PolicyStatus") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_policyStatus = CustomerPolicyStatusMapper::GetCustomerPolicyStatusForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_policyStatusHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("PolicySummary", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "PolicyArn") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_policyArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_policyArn = ss.str();
                }
              }
              m_policyArnHasBeenSet = true;
            }

            else if (initialKeyStr == "PolicyId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_policyId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_policyId = ss.str();
                }
              }
              m_policyIdHasBeenSet = true;
            }

            else if (initialKeyStr == "PolicyName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_policyName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_policyName = ss.str();
                }
              }
              m_policyNameHasBeenSet = true;
            }

            else if (initialKeyStr == "ResourceType") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_resourceType = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_resourceType = ss.str();
                }
              }
              m_resourceTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "SecurityServiceType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_securityServiceType = SecurityServiceTypeMapper::GetSecurityServiceTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_securityServiceTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "RemediationEnabled") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_remediationEnabled = val.value();
              }
              m_remediationEnabledHasBeenSet = true;
            }

            else if (initialKeyStr == "DeleteUnusedFMManagedResources") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_deleteUnusedFMManagedResources = val.value();
              }
              m_deleteUnusedFMManagedResourcesHasBeenSet = true;
            }

            else if (initialKeyStr == "PolicyStatus") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_policyStatus = CustomerPolicyStatusMapper::GetCustomerPolicyStatusForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_policyStatusHasBeenSet = true;
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

void PolicySummary::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_policyArnHasBeenSet) {
    mapSize++;
  }
  if (m_policyIdHasBeenSet) {
    mapSize++;
  }
  if (m_policyNameHasBeenSet) {
    mapSize++;
  }
  if (m_resourceTypeHasBeenSet) {
    mapSize++;
  }
  if (m_securityServiceTypeHasBeenSet) {
    mapSize++;
  }
  if (m_remediationEnabledHasBeenSet) {
    mapSize++;
  }
  if (m_deleteUnusedFMManagedResourcesHasBeenSet) {
    mapSize++;
  }
  if (m_policyStatusHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_policyArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PolicyArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_policyArn.c_str()));
  }

  if (m_policyIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PolicyId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_policyId.c_str()));
  }

  if (m_policyNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PolicyName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_policyName.c_str()));
  }

  if (m_resourceTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ResourceType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_resourceType.c_str()));
  }

  if (m_securityServiceTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SecurityServiceType"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(SecurityServiceTypeMapper::GetNameForSecurityServiceType(m_securityServiceType).c_str()));
  }

  if (m_remediationEnabledHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RemediationEnabled"));
    encoder.WriteBool(m_remediationEnabled);
  }

  if (m_deleteUnusedFMManagedResourcesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DeleteUnusedFMManagedResources"));
    encoder.WriteBool(m_deleteUnusedFMManagedResources);
  }

  if (m_policyStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PolicyStatus"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(CustomerPolicyStatusMapper::GetNameForCustomerPolicyStatus(m_policyStatus).c_str()));
  }
}

}  // namespace Model
}  // namespace FMS
}  // namespace Aws