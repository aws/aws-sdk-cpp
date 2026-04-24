/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/LicenseRecommendationOption.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizer {
namespace Model {

LicenseRecommendationOption::LicenseRecommendationOption(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

LicenseRecommendationOption& LicenseRecommendationOption::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "rank") {
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

              else if (initialKeyStr == "operatingSystem") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_operatingSystem = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_operatingSystem = ss.str();
                  }
                }
                m_operatingSystemHasBeenSet = true;
              }

              else if (initialKeyStr == "licenseEdition") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_licenseEdition = LicenseEditionMapper::GetLicenseEditionForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_licenseEditionHasBeenSet = true;
              }

              else if (initialKeyStr == "licenseModel") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_licenseModel = LicenseModelMapper::GetLicenseModelForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_licenseModelHasBeenSet = true;
              }

              else if (initialKeyStr == "savingsOpportunity") {
                m_savingsOpportunity = SavingsOpportunity(decoder);
                m_savingsOpportunityHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("LicenseRecommendationOption", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "rank") {
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

            else if (initialKeyStr == "operatingSystem") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_operatingSystem = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_operatingSystem = ss.str();
                }
              }
              m_operatingSystemHasBeenSet = true;
            }

            else if (initialKeyStr == "licenseEdition") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_licenseEdition = LicenseEditionMapper::GetLicenseEditionForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_licenseEditionHasBeenSet = true;
            }

            else if (initialKeyStr == "licenseModel") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_licenseModel = LicenseModelMapper::GetLicenseModelForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_licenseModelHasBeenSet = true;
            }

            else if (initialKeyStr == "savingsOpportunity") {
              m_savingsOpportunity = SavingsOpportunity(decoder);
              m_savingsOpportunityHasBeenSet = true;
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

void LicenseRecommendationOption::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_rankHasBeenSet) {
    mapSize++;
  }
  if (m_operatingSystemHasBeenSet) {
    mapSize++;
  }
  if (m_licenseEditionHasBeenSet) {
    mapSize++;
  }
  if (m_licenseModelHasBeenSet) {
    mapSize++;
  }
  if (m_savingsOpportunityHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_rankHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("rank"));
    (m_rank >= 0) ? encoder.WriteUInt(m_rank) : encoder.WriteNegInt(m_rank);
  }

  if (m_operatingSystemHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("operatingSystem"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_operatingSystem.c_str()));
  }

  if (m_licenseEditionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("licenseEdition"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(LicenseEditionMapper::GetNameForLicenseEdition(m_licenseEdition).c_str()));
  }

  if (m_licenseModelHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("licenseModel"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(LicenseModelMapper::GetNameForLicenseModel(m_licenseModel).c_str()));
  }

  if (m_savingsOpportunityHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("savingsOpportunity"));
    m_savingsOpportunity.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace ComputeOptimizer
}  // namespace Aws