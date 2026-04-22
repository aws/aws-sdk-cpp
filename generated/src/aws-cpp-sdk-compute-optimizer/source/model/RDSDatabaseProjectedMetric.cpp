/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/RDSDatabaseProjectedMetric.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizer {
namespace Model {

RDSDatabaseProjectedMetric::RDSDatabaseProjectedMetric(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

RDSDatabaseProjectedMetric& RDSDatabaseProjectedMetric::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "name") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_name = RDSDBMetricNameMapper::GetRDSDBMetricNameForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_nameHasBeenSet = true;
              }

              else if (initialKeyStr == "timestamps") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        auto tag = decoder->PopNextTagVal();
                        if (tag.has_value() &&
                            tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                        {
                          auto dateType = decoder->PeekType();
                          if (dateType.has_value()) {
                            if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                              auto val = decoder->PopNextFloatVal();
                              if (val.has_value()) {
                                m_timestamps.push_back(Aws::Utils::DateTime(val.value()));
                              }
                            } else {
                              auto val = decoder->PopNextUnsignedIntVal();
                              if (val.has_value()) {
                                m_timestamps.push_back(Aws::Utils::DateTime(val.value()));
                              }
                            }
                          }
                        }
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
                      auto tag = decoder->PopNextTagVal();
                      if (tag.has_value() &&
                          tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                      {
                        auto dateType = decoder->PeekType();
                        if (dateType.has_value()) {
                          if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                            auto val = decoder->PopNextFloatVal();
                            if (val.has_value()) {
                              m_timestamps.push_back(Aws::Utils::DateTime(val.value()));
                            }
                          } else {
                            auto val = decoder->PopNextUnsignedIntVal();
                            if (val.has_value()) {
                              m_timestamps.push_back(Aws::Utils::DateTime(val.value()));
                            }
                          }
                        }
                      }
                    }
                  }
                }
                m_timestampsHasBeenSet = true;
              }

              else if (initialKeyStr == "values") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        auto val = decoder->PopNextFloatVal();
                        if (val.has_value()) {
                          m_values.push_back(val.value());
                        }
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
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_values.push_back(val.value());
                      }
                    }
                  }
                }
                m_valuesHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("RDSDatabaseProjectedMetric", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "name") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_name = RDSDBMetricNameMapper::GetRDSDBMetricNameForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_nameHasBeenSet = true;
            }

            else if (initialKeyStr == "timestamps") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      auto tag = decoder->PopNextTagVal();
                      if (tag.has_value() &&
                          tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                      {
                        auto dateType = decoder->PeekType();
                        if (dateType.has_value()) {
                          if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                            auto val = decoder->PopNextFloatVal();
                            if (val.has_value()) {
                              m_timestamps.push_back(Aws::Utils::DateTime(val.value()));
                            }
                          } else {
                            auto val = decoder->PopNextUnsignedIntVal();
                            if (val.has_value()) {
                              m_timestamps.push_back(Aws::Utils::DateTime(val.value()));
                            }
                          }
                        }
                      }
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
                    auto tag = decoder->PopNextTagVal();
                    if (tag.has_value() &&
                        tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                    {
                      auto dateType = decoder->PeekType();
                      if (dateType.has_value()) {
                        if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                          auto val = decoder->PopNextFloatVal();
                          if (val.has_value()) {
                            m_timestamps.push_back(Aws::Utils::DateTime(val.value()));
                          }
                        } else {
                          auto val = decoder->PopNextUnsignedIntVal();
                          if (val.has_value()) {
                            m_timestamps.push_back(Aws::Utils::DateTime(val.value()));
                          }
                        }
                      }
                    }
                  }
                }
              }
              m_timestampsHasBeenSet = true;
            }

            else if (initialKeyStr == "values") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_values.push_back(val.value());
                      }
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
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_values.push_back(val.value());
                    }
                  }
                }
              }
              m_valuesHasBeenSet = true;
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

void RDSDatabaseProjectedMetric::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_timestampsHasBeenSet) {
    mapSize++;
  }
  if (m_valuesHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(RDSDBMetricNameMapper::GetNameForRDSDBMetricName(m_name).c_str()));
  }

  if (m_timestampsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("timestamps"));
    encoder.WriteArrayStart(m_timestamps.size());
    for (const auto& item_0 : m_timestamps) {
      encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
      encoder.WriteUInt(item_0.Seconds());
    }
  }

  if (m_valuesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("values"));
    encoder.WriteArrayStart(m_values.size());
    for (const auto& item_0 : m_values) {
      encoder.WriteFloat(item_0);
    }
  }
}

}  // namespace Model
}  // namespace ComputeOptimizer
}  // namespace Aws