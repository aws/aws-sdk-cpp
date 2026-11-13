/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/TestReportSummary.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CodeBuild {
namespace Model {

TestReportSummary::TestReportSummary(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

TestReportSummary& TestReportSummary::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "total") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_total = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_total = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_totalHasBeenSet = true;
              }

              else if (initialKeyStr == "statusCounts") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart)) {
                  if (peekType_0.value() == CborType::MapStart) {
                    auto mapSize_0 = decoder->PopNextMapStart();
                    if (mapSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                        auto key_1 = decoder->PopNextTextVal();
                        if (key_1.has_value()) {
                          Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
                          auto peekType_1 = decoder->PeekType();
                          if (peekType_1) {
                            if (peekType_1.value() == Aws::Crt::Cbor::CborType::UInt) {
                              auto val = decoder->PopNextUnsignedIntVal();
                              if (val.has_value()) {
                                m_statusCounts[keyStr_1] = static_cast<int64_t>(val.value());
                              }
                            } else {
                              auto val = decoder->PopNextNegativeIntVal();
                              if (val.has_value()) {
                                m_statusCounts[keyStr_1] = static_cast<int64_t>(1 - val.value());
                              }
                            }
                          }
                        }
                      }
                    }
                  } else  // IndefMapStart
                  {
                    decoder->ConsumeNextSingleElement();  // consume the IndefMapStart
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType_0 = decoder->PeekType();
                      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                        if (nextType_0.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto key_1 = decoder->PopNextTextVal();
                      if (key_1.has_value()) {
                        Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
                        auto peekType_1 = decoder->PeekType();
                        if (peekType_1) {
                          if (peekType_1.value() == Aws::Crt::Cbor::CborType::UInt) {
                            auto val = decoder->PopNextUnsignedIntVal();
                            if (val.has_value()) {
                              m_statusCounts[keyStr_1] = static_cast<int64_t>(val.value());
                            }
                          } else {
                            auto val = decoder->PopNextNegativeIntVal();
                            if (val.has_value()) {
                              m_statusCounts[keyStr_1] = static_cast<int64_t>(1 - val.value());
                            }
                          }
                        }
                      }
                    }
                  }
                }
                m_statusCountsHasBeenSet = true;
              }

              else if (initialKeyStr == "durationInNanoSeconds") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_durationInNanoSeconds = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_durationInNanoSeconds = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_durationInNanoSecondsHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("TestReportSummary", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "total") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_total = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_total = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_totalHasBeenSet = true;
            }

            else if (initialKeyStr == "statusCounts") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart)) {
                if (peekType_0.value() == CborType::MapStart) {
                  auto mapSize_0 = decoder->PopNextMapStart();
                  if (mapSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                      auto key_1 = decoder->PopNextTextVal();
                      if (key_1.has_value()) {
                        Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
                        auto peekType_1 = decoder->PeekType();
                        if (peekType_1) {
                          if (peekType_1.value() == Aws::Crt::Cbor::CborType::UInt) {
                            auto val = decoder->PopNextUnsignedIntVal();
                            if (val.has_value()) {
                              m_statusCounts[keyStr_1] = static_cast<int64_t>(val.value());
                            }
                          } else {
                            auto val = decoder->PopNextNegativeIntVal();
                            if (val.has_value()) {
                              m_statusCounts[keyStr_1] = static_cast<int64_t>(1 - val.value());
                            }
                          }
                        }
                      }
                    }
                  }
                } else  // IndefMapStart
                {
                  decoder->ConsumeNextSingleElement();  // consume the IndefMapStart
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType_0 = decoder->PeekType();
                    if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                      if (nextType_0.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto key_1 = decoder->PopNextTextVal();
                    if (key_1.has_value()) {
                      Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
                      auto peekType_1 = decoder->PeekType();
                      if (peekType_1) {
                        if (peekType_1.value() == Aws::Crt::Cbor::CborType::UInt) {
                          auto val = decoder->PopNextUnsignedIntVal();
                          if (val.has_value()) {
                            m_statusCounts[keyStr_1] = static_cast<int64_t>(val.value());
                          }
                        } else {
                          auto val = decoder->PopNextNegativeIntVal();
                          if (val.has_value()) {
                            m_statusCounts[keyStr_1] = static_cast<int64_t>(1 - val.value());
                          }
                        }
                      }
                    }
                  }
                }
              }
              m_statusCountsHasBeenSet = true;
            }

            else if (initialKeyStr == "durationInNanoSeconds") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_durationInNanoSeconds = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_durationInNanoSeconds = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_durationInNanoSecondsHasBeenSet = true;
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

void TestReportSummary::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_totalHasBeenSet) {
    mapSize++;
  }
  if (m_statusCountsHasBeenSet) {
    mapSize++;
  }
  if (m_durationInNanoSecondsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_totalHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("total"));
    (m_total >= 0) ? encoder.WriteUInt(m_total) : encoder.WriteNegInt(m_total);
  }

  if (m_statusCountsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("statusCounts"));
    encoder.WriteMapStart(m_statusCounts.size());
    for (const auto& item_0 : m_statusCounts) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.first.c_str()));
      (item_0.second >= 0) ? encoder.WriteUInt(item_0.second) : encoder.WriteNegInt(item_0.second);
    }
  }

  if (m_durationInNanoSecondsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("durationInNanoSeconds"));
    (m_durationInNanoSeconds >= 0) ? encoder.WriteUInt(m_durationInNanoSeconds) : encoder.WriteNegInt(m_durationInNanoSeconds);
  }
}

}  // namespace Model
}  // namespace CodeBuild
}  // namespace Aws