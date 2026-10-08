/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/fms/model/StatefulEngineOptions.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace FMS {
namespace Model {

StatefulEngineOptions::StatefulEngineOptions(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

StatefulEngineOptions& StatefulEngineOptions::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "RuleOrder") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_ruleOrder =
                      RuleOrderMapper::GetRuleOrderForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_ruleOrderHasBeenSet = true;
              }

              else if (initialKeyStr == "StreamExceptionPolicy") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_streamExceptionPolicy = StreamExceptionPolicyMapper::GetStreamExceptionPolicyForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_streamExceptionPolicyHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("StatefulEngineOptions", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "RuleOrder") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_ruleOrder =
                    RuleOrderMapper::GetRuleOrderForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_ruleOrderHasBeenSet = true;
            }

            else if (initialKeyStr == "StreamExceptionPolicy") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_streamExceptionPolicy = StreamExceptionPolicyMapper::GetStreamExceptionPolicyForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_streamExceptionPolicyHasBeenSet = true;
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

void StatefulEngineOptions::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_ruleOrderHasBeenSet) {
    mapSize++;
  }
  if (m_streamExceptionPolicyHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_ruleOrderHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RuleOrder"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(RuleOrderMapper::GetNameForRuleOrder(m_ruleOrder).c_str()));
  }

  if (m_streamExceptionPolicyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StreamExceptionPolicy"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(StreamExceptionPolicyMapper::GetNameForStreamExceptionPolicy(m_streamExceptionPolicy).c_str()));
  }
}

}  // namespace Model
}  // namespace FMS
}  // namespace Aws