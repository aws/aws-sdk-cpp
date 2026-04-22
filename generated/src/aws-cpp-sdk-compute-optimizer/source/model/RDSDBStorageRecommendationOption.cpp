/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/RDSDBStorageRecommendationOption.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizer {
namespace Model {

RDSDBStorageRecommendationOption::RDSDBStorageRecommendationOption(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  *this = decoder;
}

RDSDBStorageRecommendationOption& RDSDBStorageRecommendationOption::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "storageConfiguration") {
                m_storageConfiguration = DBStorageConfiguration(decoder);
                m_storageConfigurationHasBeenSet = true;
              }

              else if (initialKeyStr == "rank") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_rank = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_rank = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_rankHasBeenSet = true;
              }

              else if (initialKeyStr == "savingsOpportunity") {
                m_savingsOpportunity = SavingsOpportunity(decoder);
                m_savingsOpportunityHasBeenSet = true;
              }

              else if (initialKeyStr == "savingsOpportunityAfterDiscounts") {
                m_savingsOpportunityAfterDiscounts = RDSStorageSavingsOpportunityAfterDiscounts(decoder);
                m_savingsOpportunityAfterDiscountsHasBeenSet = true;
              }

              else if (initialKeyStr == "estimatedMonthlyVolumeIOPsCostVariation") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_estimatedMonthlyVolumeIOPsCostVariation =
                      RDSEstimatedMonthlyVolumeIOPsCostVariationMapper::GetRDSEstimatedMonthlyVolumeIOPsCostVariationForName(
                          Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_estimatedMonthlyVolumeIOPsCostVariationHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("RDSDBStorageRecommendationOption", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "storageConfiguration") {
              m_storageConfiguration = DBStorageConfiguration(decoder);
              m_storageConfigurationHasBeenSet = true;
            }

            else if (initialKeyStr == "rank") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_rank = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_rank = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_rankHasBeenSet = true;
            }

            else if (initialKeyStr == "savingsOpportunity") {
              m_savingsOpportunity = SavingsOpportunity(decoder);
              m_savingsOpportunityHasBeenSet = true;
            }

            else if (initialKeyStr == "savingsOpportunityAfterDiscounts") {
              m_savingsOpportunityAfterDiscounts = RDSStorageSavingsOpportunityAfterDiscounts(decoder);
              m_savingsOpportunityAfterDiscountsHasBeenSet = true;
            }

            else if (initialKeyStr == "estimatedMonthlyVolumeIOPsCostVariation") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_estimatedMonthlyVolumeIOPsCostVariation =
                    RDSEstimatedMonthlyVolumeIOPsCostVariationMapper::GetRDSEstimatedMonthlyVolumeIOPsCostVariationForName(
                        Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_estimatedMonthlyVolumeIOPsCostVariationHasBeenSet = true;
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

void RDSDBStorageRecommendationOption::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_storageConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_rankHasBeenSet) {
    mapSize++;
  }
  if (m_savingsOpportunityHasBeenSet) {
    mapSize++;
  }
  if (m_savingsOpportunityAfterDiscountsHasBeenSet) {
    mapSize++;
  }
  if (m_estimatedMonthlyVolumeIOPsCostVariationHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_storageConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("storageConfiguration"));
    m_storageConfiguration.CborEncode(encoder);
  }

  if (m_rankHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("rank"));
    (m_rank >= 0) ? encoder.WriteUInt(m_rank) : encoder.WriteNegInt(m_rank);
  }

  if (m_savingsOpportunityHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("savingsOpportunity"));
    m_savingsOpportunity.CborEncode(encoder);
  }

  if (m_savingsOpportunityAfterDiscountsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("savingsOpportunityAfterDiscounts"));
    m_savingsOpportunityAfterDiscounts.CborEncode(encoder);
  }

  if (m_estimatedMonthlyVolumeIOPsCostVariationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("estimatedMonthlyVolumeIOPsCostVariation"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        RDSEstimatedMonthlyVolumeIOPsCostVariationMapper::GetNameForRDSEstimatedMonthlyVolumeIOPsCostVariation(
            m_estimatedMonthlyVolumeIOPsCostVariation)
            .c_str()));
  }
}

}  // namespace Model
}  // namespace ComputeOptimizer
}  // namespace Aws