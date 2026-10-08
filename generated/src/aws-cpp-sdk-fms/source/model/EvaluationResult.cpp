/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/fms/model/EvaluationResult.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace FMS {
namespace Model {

EvaluationResult::EvaluationResult(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

EvaluationResult& EvaluationResult::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "ComplianceStatus") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_complianceStatus = PolicyComplianceStatusTypeMapper::GetPolicyComplianceStatusTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_complianceStatusHasBeenSet = true;
              }

              else if (initialKeyStr == "ViolatorCount") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_violatorCount = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_violatorCount = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_violatorCountHasBeenSet = true;
              }

              else if (initialKeyStr == "EvaluationLimitExceeded") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_evaluationLimitExceeded = val.value();
                }
                m_evaluationLimitExceededHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("EvaluationResult", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "ComplianceStatus") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_complianceStatus = PolicyComplianceStatusTypeMapper::GetPolicyComplianceStatusTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_complianceStatusHasBeenSet = true;
            }

            else if (initialKeyStr == "ViolatorCount") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_violatorCount = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_violatorCount = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_violatorCountHasBeenSet = true;
            }

            else if (initialKeyStr == "EvaluationLimitExceeded") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_evaluationLimitExceeded = val.value();
              }
              m_evaluationLimitExceededHasBeenSet = true;
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

void EvaluationResult::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_complianceStatusHasBeenSet) {
    mapSize++;
  }
  if (m_violatorCountHasBeenSet) {
    mapSize++;
  }
  if (m_evaluationLimitExceededHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_complianceStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ComplianceStatus"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        PolicyComplianceStatusTypeMapper::GetNameForPolicyComplianceStatusType(m_complianceStatus).c_str()));
  }

  if (m_violatorCountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ViolatorCount"));
    (m_violatorCount >= 0) ? encoder.WriteUInt(m_violatorCount) : encoder.WriteNegInt(m_violatorCount);
  }

  if (m_evaluationLimitExceededHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EvaluationLimitExceeded"));
    encoder.WriteBool(m_evaluationLimitExceeded);
  }
}

}  // namespace Model
}  // namespace FMS
}  // namespace Aws