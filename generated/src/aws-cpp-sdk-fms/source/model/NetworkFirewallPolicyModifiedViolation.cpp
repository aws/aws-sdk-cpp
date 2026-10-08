/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/fms/model/NetworkFirewallPolicyModifiedViolation.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace FMS {
namespace Model {

NetworkFirewallPolicyModifiedViolation::NetworkFirewallPolicyModifiedViolation(
    const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  *this = decoder;
}

NetworkFirewallPolicyModifiedViolation& NetworkFirewallPolicyModifiedViolation::operator=(
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

              if (initialKeyStr == "ViolationTarget") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_violationTarget = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_violationTarget = ss.str();
                  }
                }
                m_violationTargetHasBeenSet = true;
              }

              else if (initialKeyStr == "CurrentPolicyDescription") {
                m_currentPolicyDescription = NetworkFirewallPolicyDescription(decoder);
                m_currentPolicyDescriptionHasBeenSet = true;
              }

              else if (initialKeyStr == "ExpectedPolicyDescription") {
                m_expectedPolicyDescription = NetworkFirewallPolicyDescription(decoder);
                m_expectedPolicyDescriptionHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("NetworkFirewallPolicyModifiedViolation", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "ViolationTarget") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_violationTarget = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_violationTarget = ss.str();
                }
              }
              m_violationTargetHasBeenSet = true;
            }

            else if (initialKeyStr == "CurrentPolicyDescription") {
              m_currentPolicyDescription = NetworkFirewallPolicyDescription(decoder);
              m_currentPolicyDescriptionHasBeenSet = true;
            }

            else if (initialKeyStr == "ExpectedPolicyDescription") {
              m_expectedPolicyDescription = NetworkFirewallPolicyDescription(decoder);
              m_expectedPolicyDescriptionHasBeenSet = true;
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

void NetworkFirewallPolicyModifiedViolation::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_violationTargetHasBeenSet) {
    mapSize++;
  }
  if (m_currentPolicyDescriptionHasBeenSet) {
    mapSize++;
  }
  if (m_expectedPolicyDescriptionHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_violationTargetHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ViolationTarget"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_violationTarget.c_str()));
  }

  if (m_currentPolicyDescriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CurrentPolicyDescription"));
    m_currentPolicyDescription.CborEncode(encoder);
  }

  if (m_expectedPolicyDescriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ExpectedPolicyDescription"));
    m_expectedPolicyDescription.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace FMS
}  // namespace Aws