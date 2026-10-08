/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/fms/model/AdminScope.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace FMS {
namespace Model {

AdminScope::AdminScope(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

AdminScope& AdminScope::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "AccountScope") {
                m_accountScope = AccountScope(decoder);
                m_accountScopeHasBeenSet = true;
              }

              else if (initialKeyStr == "OrganizationalUnitScope") {
                m_organizationalUnitScope = OrganizationalUnitScope(decoder);
                m_organizationalUnitScopeHasBeenSet = true;
              }

              else if (initialKeyStr == "RegionScope") {
                m_regionScope = RegionScope(decoder);
                m_regionScopeHasBeenSet = true;
              }

              else if (initialKeyStr == "PolicyTypeScope") {
                m_policyTypeScope = PolicyTypeScope(decoder);
                m_policyTypeScopeHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("AdminScope", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "AccountScope") {
              m_accountScope = AccountScope(decoder);
              m_accountScopeHasBeenSet = true;
            }

            else if (initialKeyStr == "OrganizationalUnitScope") {
              m_organizationalUnitScope = OrganizationalUnitScope(decoder);
              m_organizationalUnitScopeHasBeenSet = true;
            }

            else if (initialKeyStr == "RegionScope") {
              m_regionScope = RegionScope(decoder);
              m_regionScopeHasBeenSet = true;
            }

            else if (initialKeyStr == "PolicyTypeScope") {
              m_policyTypeScope = PolicyTypeScope(decoder);
              m_policyTypeScopeHasBeenSet = true;
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

void AdminScope::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_accountScopeHasBeenSet) {
    mapSize++;
  }
  if (m_organizationalUnitScopeHasBeenSet) {
    mapSize++;
  }
  if (m_regionScopeHasBeenSet) {
    mapSize++;
  }
  if (m_policyTypeScopeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_accountScopeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AccountScope"));
    m_accountScope.CborEncode(encoder);
  }

  if (m_organizationalUnitScopeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OrganizationalUnitScope"));
    m_organizationalUnitScope.CborEncode(encoder);
  }

  if (m_regionScopeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RegionScope"));
    m_regionScope.CborEncode(encoder);
  }

  if (m_policyTypeScopeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PolicyTypeScope"));
    m_policyTypeScope.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace FMS
}  // namespace Aws