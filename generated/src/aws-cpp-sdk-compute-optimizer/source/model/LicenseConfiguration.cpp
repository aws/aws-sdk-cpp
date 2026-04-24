/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/LicenseConfiguration.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizer {
namespace Model {

LicenseConfiguration::LicenseConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

LicenseConfiguration& LicenseConfiguration::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "numberOfCores") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_numberOfCores = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_numberOfCores = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_numberOfCoresHasBeenSet = true;
              }

              else if (initialKeyStr == "instanceType") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_instanceType = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_instanceType = ss.str();
                  }
                }
                m_instanceTypeHasBeenSet = true;
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

              else if (initialKeyStr == "licenseName") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_licenseName = LicenseNameMapper::GetLicenseNameForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_licenseNameHasBeenSet = true;
              }

              else if (initialKeyStr == "licenseModel") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_licenseModel = LicenseModelMapper::GetLicenseModelForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_licenseModelHasBeenSet = true;
              }

              else if (initialKeyStr == "licenseVersion") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_licenseVersion = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_licenseVersion = ss.str();
                  }
                }
                m_licenseVersionHasBeenSet = true;
              }

              else if (initialKeyStr == "metricsSource") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_metricsSource.push_back(MetricSource(decoder));
                      }
                    }
                  } else  // IndefArrayStart
                  {
                    decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType_0 = decoder->PeekType();
                      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                        if (nextType_0.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      m_metricsSource.push_back(MetricSource(decoder));
                    }
                  }
                }
                m_metricsSourceHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("LicenseConfiguration", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "numberOfCores") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_numberOfCores = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_numberOfCores = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_numberOfCoresHasBeenSet = true;
            }

            else if (initialKeyStr == "instanceType") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_instanceType = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_instanceType = ss.str();
                }
              }
              m_instanceTypeHasBeenSet = true;
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

            else if (initialKeyStr == "licenseName") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_licenseName =
                    LicenseNameMapper::GetLicenseNameForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_licenseNameHasBeenSet = true;
            }

            else if (initialKeyStr == "licenseModel") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_licenseModel = LicenseModelMapper::GetLicenseModelForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_licenseModelHasBeenSet = true;
            }

            else if (initialKeyStr == "licenseVersion") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_licenseVersion = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_licenseVersion = ss.str();
                }
              }
              m_licenseVersionHasBeenSet = true;
            }

            else if (initialKeyStr == "metricsSource") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_metricsSource.push_back(MetricSource(decoder));
                    }
                  }
                } else  // IndefArrayStart
                {
                  decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType_0 = decoder->PeekType();
                    if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                      if (nextType_0.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    m_metricsSource.push_back(MetricSource(decoder));
                  }
                }
              }
              m_metricsSourceHasBeenSet = true;
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

void LicenseConfiguration::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_numberOfCoresHasBeenSet) {
    mapSize++;
  }
  if (m_instanceTypeHasBeenSet) {
    mapSize++;
  }
  if (m_operatingSystemHasBeenSet) {
    mapSize++;
  }
  if (m_licenseEditionHasBeenSet) {
    mapSize++;
  }
  if (m_licenseNameHasBeenSet) {
    mapSize++;
  }
  if (m_licenseModelHasBeenSet) {
    mapSize++;
  }
  if (m_licenseVersionHasBeenSet) {
    mapSize++;
  }
  if (m_metricsSourceHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_numberOfCoresHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("numberOfCores"));
    (m_numberOfCores >= 0) ? encoder.WriteUInt(m_numberOfCores) : encoder.WriteNegInt(m_numberOfCores);
  }

  if (m_instanceTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("instanceType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_instanceType.c_str()));
  }

  if (m_operatingSystemHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("operatingSystem"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_operatingSystem.c_str()));
  }

  if (m_licenseEditionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("licenseEdition"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(LicenseEditionMapper::GetNameForLicenseEdition(m_licenseEdition).c_str()));
  }

  if (m_licenseNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("licenseName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(LicenseNameMapper::GetNameForLicenseName(m_licenseName).c_str()));
  }

  if (m_licenseModelHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("licenseModel"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(LicenseModelMapper::GetNameForLicenseModel(m_licenseModel).c_str()));
  }

  if (m_licenseVersionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("licenseVersion"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_licenseVersion.c_str()));
  }

  if (m_metricsSourceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("metricsSource"));
    encoder.WriteArrayStart(m_metricsSource.size());
    for (const auto& item_0 : m_metricsSource) {
      item_0.CborEncode(encoder);
    }
  }
}

}  // namespace Model
}  // namespace ComputeOptimizer
}  // namespace Aws