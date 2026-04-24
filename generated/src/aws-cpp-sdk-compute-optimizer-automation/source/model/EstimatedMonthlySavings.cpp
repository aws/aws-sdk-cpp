/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/EstimatedMonthlySavings.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {

EstimatedMonthlySavings::EstimatedMonthlySavings(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

EstimatedMonthlySavings& EstimatedMonthlySavings::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "currency") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_currency = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_currency = ss.str();
                  }
                }
                m_currencyHasBeenSet = true;
              }

              else if (initialKeyStr == "beforeDiscountSavings") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_beforeDiscountSavings = val.value();
                }
                m_beforeDiscountSavingsHasBeenSet = true;
              }

              else if (initialKeyStr == "afterDiscountSavings") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_afterDiscountSavings = val.value();
                }
                m_afterDiscountSavingsHasBeenSet = true;
              }

              else if (initialKeyStr == "savingsEstimationMode") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_savingsEstimationMode = SavingsEstimationModeMapper::GetSavingsEstimationModeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_savingsEstimationModeHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("EstimatedMonthlySavings", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "currency") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_currency = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_currency = ss.str();
                }
              }
              m_currencyHasBeenSet = true;
            }

            else if (initialKeyStr == "beforeDiscountSavings") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_beforeDiscountSavings = val.value();
              }
              m_beforeDiscountSavingsHasBeenSet = true;
            }

            else if (initialKeyStr == "afterDiscountSavings") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_afterDiscountSavings = val.value();
              }
              m_afterDiscountSavingsHasBeenSet = true;
            }

            else if (initialKeyStr == "savingsEstimationMode") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_savingsEstimationMode = SavingsEstimationModeMapper::GetSavingsEstimationModeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_savingsEstimationModeHasBeenSet = true;
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

void EstimatedMonthlySavings::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_currencyHasBeenSet) {
    mapSize++;
  }
  if (m_beforeDiscountSavingsHasBeenSet) {
    mapSize++;
  }
  if (m_afterDiscountSavingsHasBeenSet) {
    mapSize++;
  }
  if (m_savingsEstimationModeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_currencyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("currency"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_currency.c_str()));
  }

  if (m_beforeDiscountSavingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("beforeDiscountSavings"));
    encoder.WriteFloat(m_beforeDiscountSavings);
  }

  if (m_afterDiscountSavingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("afterDiscountSavings"));
    encoder.WriteFloat(m_afterDiscountSavings);
  }

  if (m_savingsEstimationModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("savingsEstimationMode"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(SavingsEstimationModeMapper::GetNameForSavingsEstimationMode(m_savingsEstimationMode).c_str()));
  }
}

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws