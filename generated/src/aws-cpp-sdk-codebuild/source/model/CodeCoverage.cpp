/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/CodeCoverage.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CodeBuild {
namespace Model {

CodeCoverage::CodeCoverage(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

CodeCoverage& CodeCoverage::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "id") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_id = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_id = ss.str();
                  }
                }
                m_idHasBeenSet = true;
              }

              else if (initialKeyStr == "reportARN") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_reportARN = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_reportARN = ss.str();
                  }
                }
                m_reportARNHasBeenSet = true;
              }

              else if (initialKeyStr == "filePath") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_filePath = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_filePath = ss.str();
                  }
                }
                m_filePathHasBeenSet = true;
              }

              else if (initialKeyStr == "lineCoveragePercentage") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_lineCoveragePercentage = val.value();
                }
                m_lineCoveragePercentageHasBeenSet = true;
              }

              else if (initialKeyStr == "linesCovered") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_linesCovered = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_linesCovered = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_linesCoveredHasBeenSet = true;
              }

              else if (initialKeyStr == "linesMissed") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_linesMissed = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_linesMissed = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_linesMissedHasBeenSet = true;
              }

              else if (initialKeyStr == "branchCoveragePercentage") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_branchCoveragePercentage = val.value();
                }
                m_branchCoveragePercentageHasBeenSet = true;
              }

              else if (initialKeyStr == "branchesCovered") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_branchesCovered = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_branchesCovered = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_branchesCoveredHasBeenSet = true;
              }

              else if (initialKeyStr == "branchesMissed") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_branchesMissed = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_branchesMissed = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_branchesMissedHasBeenSet = true;
              }

              else if (initialKeyStr == "expired") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_expired = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_expired = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_expiredHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("CodeCoverage", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "id") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_id = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_id = ss.str();
                }
              }
              m_idHasBeenSet = true;
            }

            else if (initialKeyStr == "reportARN") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_reportARN = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_reportARN = ss.str();
                }
              }
              m_reportARNHasBeenSet = true;
            }

            else if (initialKeyStr == "filePath") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_filePath = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_filePath = ss.str();
                }
              }
              m_filePathHasBeenSet = true;
            }

            else if (initialKeyStr == "lineCoveragePercentage") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_lineCoveragePercentage = val.value();
              }
              m_lineCoveragePercentageHasBeenSet = true;
            }

            else if (initialKeyStr == "linesCovered") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_linesCovered = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_linesCovered = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_linesCoveredHasBeenSet = true;
            }

            else if (initialKeyStr == "linesMissed") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_linesMissed = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_linesMissed = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_linesMissedHasBeenSet = true;
            }

            else if (initialKeyStr == "branchCoveragePercentage") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_branchCoveragePercentage = val.value();
              }
              m_branchCoveragePercentageHasBeenSet = true;
            }

            else if (initialKeyStr == "branchesCovered") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_branchesCovered = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_branchesCovered = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_branchesCoveredHasBeenSet = true;
            }

            else if (initialKeyStr == "branchesMissed") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_branchesMissed = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_branchesMissed = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_branchesMissedHasBeenSet = true;
            }

            else if (initialKeyStr == "expired") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_expired = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_expired = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_expiredHasBeenSet = true;
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

void CodeCoverage::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_idHasBeenSet) {
    mapSize++;
  }
  if (m_reportARNHasBeenSet) {
    mapSize++;
  }
  if (m_filePathHasBeenSet) {
    mapSize++;
  }
  if (m_lineCoveragePercentageHasBeenSet) {
    mapSize++;
  }
  if (m_linesCoveredHasBeenSet) {
    mapSize++;
  }
  if (m_linesMissedHasBeenSet) {
    mapSize++;
  }
  if (m_branchCoveragePercentageHasBeenSet) {
    mapSize++;
  }
  if (m_branchesCoveredHasBeenSet) {
    mapSize++;
  }
  if (m_branchesMissedHasBeenSet) {
    mapSize++;
  }
  if (m_expiredHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_idHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("id"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_id.c_str()));
  }

  if (m_reportARNHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("reportARN"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_reportARN.c_str()));
  }

  if (m_filePathHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("filePath"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_filePath.c_str()));
  }

  if (m_lineCoveragePercentageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("lineCoveragePercentage"));
    encoder.WriteFloat(m_lineCoveragePercentage);
  }

  if (m_linesCoveredHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("linesCovered"));
    (m_linesCovered >= 0) ? encoder.WriteUInt(m_linesCovered) : encoder.WriteNegInt(m_linesCovered);
  }

  if (m_linesMissedHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("linesMissed"));
    (m_linesMissed >= 0) ? encoder.WriteUInt(m_linesMissed) : encoder.WriteNegInt(m_linesMissed);
  }

  if (m_branchCoveragePercentageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("branchCoveragePercentage"));
    encoder.WriteFloat(m_branchCoveragePercentage);
  }

  if (m_branchesCoveredHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("branchesCovered"));
    (m_branchesCovered >= 0) ? encoder.WriteUInt(m_branchesCovered) : encoder.WriteNegInt(m_branchesCovered);
  }

  if (m_branchesMissedHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("branchesMissed"));
    (m_branchesMissed >= 0) ? encoder.WriteUInt(m_branchesMissed) : encoder.WriteNegInt(m_branchesMissed);
  }

  if (m_expiredHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("expired"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_expired.Seconds());
  }
}

}  // namespace Model
}  // namespace CodeBuild
}  // namespace Aws