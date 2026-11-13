/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ProjectSource.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CodeBuild {
namespace Model {

ProjectSource::ProjectSource(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ProjectSource& ProjectSource::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "type") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_type =
                      SourceTypeMapper::GetSourceTypeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_typeHasBeenSet = true;
              }

              else if (initialKeyStr == "location") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_location = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_location = ss.str();
                  }
                }
                m_locationHasBeenSet = true;
              }

              else if (initialKeyStr == "gitCloneDepth") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_gitCloneDepth = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_gitCloneDepth = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_gitCloneDepthHasBeenSet = true;
              }

              else if (initialKeyStr == "gitSubmodulesConfig") {
                m_gitSubmodulesConfig = GitSubmodulesConfig(decoder);
                m_gitSubmodulesConfigHasBeenSet = true;
              }

              else if (initialKeyStr == "buildspec") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_buildspec = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_buildspec = ss.str();
                  }
                }
                m_buildspecHasBeenSet = true;
              }

              else if (initialKeyStr == "auth") {
                m_auth = SourceAuth(decoder);
                m_authHasBeenSet = true;
              }

              else if (initialKeyStr == "reportBuildStatus") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_reportBuildStatus = val.value();
                }
                m_reportBuildStatusHasBeenSet = true;
              }

              else if (initialKeyStr == "buildStatusConfig") {
                m_buildStatusConfig = BuildStatusConfig(decoder);
                m_buildStatusConfigHasBeenSet = true;
              }

              else if (initialKeyStr == "insecureSsl") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_insecureSsl = val.value();
                }
                m_insecureSslHasBeenSet = true;
              }

              else if (initialKeyStr == "sourceIdentifier") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_sourceIdentifier = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_sourceIdentifier = ss.str();
                  }
                }
                m_sourceIdentifierHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ProjectSource", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "type") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_type =
                    SourceTypeMapper::GetSourceTypeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_typeHasBeenSet = true;
            }

            else if (initialKeyStr == "location") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_location = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_location = ss.str();
                }
              }
              m_locationHasBeenSet = true;
            }

            else if (initialKeyStr == "gitCloneDepth") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_gitCloneDepth = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_gitCloneDepth = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_gitCloneDepthHasBeenSet = true;
            }

            else if (initialKeyStr == "gitSubmodulesConfig") {
              m_gitSubmodulesConfig = GitSubmodulesConfig(decoder);
              m_gitSubmodulesConfigHasBeenSet = true;
            }

            else if (initialKeyStr == "buildspec") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_buildspec = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_buildspec = ss.str();
                }
              }
              m_buildspecHasBeenSet = true;
            }

            else if (initialKeyStr == "auth") {
              m_auth = SourceAuth(decoder);
              m_authHasBeenSet = true;
            }

            else if (initialKeyStr == "reportBuildStatus") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_reportBuildStatus = val.value();
              }
              m_reportBuildStatusHasBeenSet = true;
            }

            else if (initialKeyStr == "buildStatusConfig") {
              m_buildStatusConfig = BuildStatusConfig(decoder);
              m_buildStatusConfigHasBeenSet = true;
            }

            else if (initialKeyStr == "insecureSsl") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_insecureSsl = val.value();
              }
              m_insecureSslHasBeenSet = true;
            }

            else if (initialKeyStr == "sourceIdentifier") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_sourceIdentifier = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_sourceIdentifier = ss.str();
                }
              }
              m_sourceIdentifierHasBeenSet = true;
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

void ProjectSource::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_typeHasBeenSet) {
    mapSize++;
  }
  if (m_locationHasBeenSet) {
    mapSize++;
  }
  if (m_gitCloneDepthHasBeenSet) {
    mapSize++;
  }
  if (m_gitSubmodulesConfigHasBeenSet) {
    mapSize++;
  }
  if (m_buildspecHasBeenSet) {
    mapSize++;
  }
  if (m_authHasBeenSet) {
    mapSize++;
  }
  if (m_reportBuildStatusHasBeenSet) {
    mapSize++;
  }
  if (m_buildStatusConfigHasBeenSet) {
    mapSize++;
  }
  if (m_insecureSslHasBeenSet) {
    mapSize++;
  }
  if (m_sourceIdentifierHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_typeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("type"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(SourceTypeMapper::GetNameForSourceType(m_type).c_str()));
  }

  if (m_locationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("location"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_location.c_str()));
  }

  if (m_gitCloneDepthHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("gitCloneDepth"));
    (m_gitCloneDepth >= 0) ? encoder.WriteUInt(m_gitCloneDepth) : encoder.WriteNegInt(m_gitCloneDepth);
  }

  if (m_gitSubmodulesConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("gitSubmodulesConfig"));
    m_gitSubmodulesConfig.CborEncode(encoder);
  }

  if (m_buildspecHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("buildspec"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_buildspec.c_str()));
  }

  if (m_authHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("auth"));
    m_auth.CborEncode(encoder);
  }

  if (m_reportBuildStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("reportBuildStatus"));
    encoder.WriteBool(m_reportBuildStatus);
  }

  if (m_buildStatusConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("buildStatusConfig"));
    m_buildStatusConfig.CborEncode(encoder);
  }

  if (m_insecureSslHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("insecureSsl"));
    encoder.WriteBool(m_insecureSsl);
  }

  if (m_sourceIdentifierHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("sourceIdentifier"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_sourceIdentifier.c_str()));
  }
}

}  // namespace Model
}  // namespace CodeBuild
}  // namespace Aws