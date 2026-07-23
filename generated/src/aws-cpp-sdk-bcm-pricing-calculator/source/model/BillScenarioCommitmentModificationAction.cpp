/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/BillScenarioCommitmentModificationAction.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace BCMPricingCalculator {
namespace Model {

BillScenarioCommitmentModificationAction::BillScenarioCommitmentModificationAction(
    const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  *this = decoder;
}

BillScenarioCommitmentModificationAction& BillScenarioCommitmentModificationAction::operator=(
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

              if (initialKeyStr == "addReservedInstanceAction") {
                m_addReservedInstanceAction = AddReservedInstanceAction(decoder);
                m_addReservedInstanceActionHasBeenSet = true;
              }

              else if (initialKeyStr == "addSavingsPlanAction") {
                m_addSavingsPlanAction = AddSavingsPlanAction(decoder);
                m_addSavingsPlanActionHasBeenSet = true;
              }

              else if (initialKeyStr == "negateReservedInstanceAction") {
                m_negateReservedInstanceAction = NegateReservedInstanceAction(decoder);
                m_negateReservedInstanceActionHasBeenSet = true;
              }

              else if (initialKeyStr == "negateSavingsPlanAction") {
                m_negateSavingsPlanAction = NegateSavingsPlanAction(decoder);
                m_negateSavingsPlanActionHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("BillScenarioCommitmentModificationAction", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "addReservedInstanceAction") {
              m_addReservedInstanceAction = AddReservedInstanceAction(decoder);
              m_addReservedInstanceActionHasBeenSet = true;
            }

            else if (initialKeyStr == "addSavingsPlanAction") {
              m_addSavingsPlanAction = AddSavingsPlanAction(decoder);
              m_addSavingsPlanActionHasBeenSet = true;
            }

            else if (initialKeyStr == "negateReservedInstanceAction") {
              m_negateReservedInstanceAction = NegateReservedInstanceAction(decoder);
              m_negateReservedInstanceActionHasBeenSet = true;
            }

            else if (initialKeyStr == "negateSavingsPlanAction") {
              m_negateSavingsPlanAction = NegateSavingsPlanAction(decoder);
              m_negateSavingsPlanActionHasBeenSet = true;
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

void BillScenarioCommitmentModificationAction::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_addReservedInstanceActionHasBeenSet) {
    mapSize++;
  }
  if (m_addSavingsPlanActionHasBeenSet) {
    mapSize++;
  }
  if (m_negateReservedInstanceActionHasBeenSet) {
    mapSize++;
  }
  if (m_negateSavingsPlanActionHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_addReservedInstanceActionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("addReservedInstanceAction"));
    m_addReservedInstanceAction.CborEncode(encoder);
  }

  if (m_addSavingsPlanActionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("addSavingsPlanAction"));
    m_addSavingsPlanAction.CborEncode(encoder);
  }

  if (m_negateReservedInstanceActionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("negateReservedInstanceAction"));
    m_negateReservedInstanceAction.CborEncode(encoder);
  }

  if (m_negateSavingsPlanActionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("negateSavingsPlanAction"));
    m_negateSavingsPlanAction.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace BCMPricingCalculator
}  // namespace Aws