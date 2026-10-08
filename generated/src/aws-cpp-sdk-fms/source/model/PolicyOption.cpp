/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/fms/model/PolicyOption.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace FMS {
namespace Model {

PolicyOption::PolicyOption(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

PolicyOption& PolicyOption::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "NetworkFirewallPolicy") {
                m_networkFirewallPolicy = NetworkFirewallPolicy(decoder);
                m_networkFirewallPolicyHasBeenSet = true;
              }

              else if (initialKeyStr == "ThirdPartyFirewallPolicy") {
                m_thirdPartyFirewallPolicy = ThirdPartyFirewallPolicy(decoder);
                m_thirdPartyFirewallPolicyHasBeenSet = true;
              }

              else if (initialKeyStr == "NetworkAclCommonPolicy") {
                m_networkAclCommonPolicy = NetworkAclCommonPolicy(decoder);
                m_networkAclCommonPolicyHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("PolicyOption", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "NetworkFirewallPolicy") {
              m_networkFirewallPolicy = NetworkFirewallPolicy(decoder);
              m_networkFirewallPolicyHasBeenSet = true;
            }

            else if (initialKeyStr == "ThirdPartyFirewallPolicy") {
              m_thirdPartyFirewallPolicy = ThirdPartyFirewallPolicy(decoder);
              m_thirdPartyFirewallPolicyHasBeenSet = true;
            }

            else if (initialKeyStr == "NetworkAclCommonPolicy") {
              m_networkAclCommonPolicy = NetworkAclCommonPolicy(decoder);
              m_networkAclCommonPolicyHasBeenSet = true;
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

void PolicyOption::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_networkFirewallPolicyHasBeenSet) {
    mapSize++;
  }
  if (m_thirdPartyFirewallPolicyHasBeenSet) {
    mapSize++;
  }
  if (m_networkAclCommonPolicyHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_networkFirewallPolicyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NetworkFirewallPolicy"));
    m_networkFirewallPolicy.CborEncode(encoder);
  }

  if (m_thirdPartyFirewallPolicyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ThirdPartyFirewallPolicy"));
    m_thirdPartyFirewallPolicy.CborEncode(encoder);
  }

  if (m_networkAclCommonPolicyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NetworkAclCommonPolicy"));
    m_networkAclCommonPolicy.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace FMS
}  // namespace Aws