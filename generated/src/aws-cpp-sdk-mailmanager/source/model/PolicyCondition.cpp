/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/mailmanager/model/PolicyCondition.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace MailManager {
namespace Model {

PolicyCondition::PolicyCondition(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

PolicyCondition& PolicyCondition::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "StringExpression") {
                m_stringExpression = IngressStringExpression(decoder);
                m_stringExpressionHasBeenSet = true;
              }

              else if (initialKeyStr == "IpExpression") {
                m_ipExpression = IngressIpv4Expression(decoder);
                m_ipExpressionHasBeenSet = true;
              }

              else if (initialKeyStr == "Ipv6Expression") {
                m_ipv6Expression = IngressIpv6Expression(decoder);
                m_ipv6ExpressionHasBeenSet = true;
              }

              else if (initialKeyStr == "TlsExpression") {
                m_tlsExpression = IngressTlsProtocolExpression(decoder);
                m_tlsExpressionHasBeenSet = true;
              }

              else if (initialKeyStr == "BooleanExpression") {
                m_booleanExpression = IngressBooleanExpression(decoder);
                m_booleanExpressionHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("PolicyCondition", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "StringExpression") {
              m_stringExpression = IngressStringExpression(decoder);
              m_stringExpressionHasBeenSet = true;
            }

            else if (initialKeyStr == "IpExpression") {
              m_ipExpression = IngressIpv4Expression(decoder);
              m_ipExpressionHasBeenSet = true;
            }

            else if (initialKeyStr == "Ipv6Expression") {
              m_ipv6Expression = IngressIpv6Expression(decoder);
              m_ipv6ExpressionHasBeenSet = true;
            }

            else if (initialKeyStr == "TlsExpression") {
              m_tlsExpression = IngressTlsProtocolExpression(decoder);
              m_tlsExpressionHasBeenSet = true;
            }

            else if (initialKeyStr == "BooleanExpression") {
              m_booleanExpression = IngressBooleanExpression(decoder);
              m_booleanExpressionHasBeenSet = true;
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

void PolicyCondition::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_stringExpressionHasBeenSet) {
    mapSize++;
  }
  if (m_ipExpressionHasBeenSet) {
    mapSize++;
  }
  if (m_ipv6ExpressionHasBeenSet) {
    mapSize++;
  }
  if (m_tlsExpressionHasBeenSet) {
    mapSize++;
  }
  if (m_booleanExpressionHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_stringExpressionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StringExpression"));
    m_stringExpression.CborEncode(encoder);
  }

  if (m_ipExpressionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IpExpression"));
    m_ipExpression.CborEncode(encoder);
  }

  if (m_ipv6ExpressionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Ipv6Expression"));
    m_ipv6Expression.CborEncode(encoder);
  }

  if (m_tlsExpressionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TlsExpression"));
    m_tlsExpression.CborEncode(encoder);
  }

  if (m_booleanExpressionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BooleanExpression"));
    m_booleanExpression.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace MailManager
}  // namespace Aws