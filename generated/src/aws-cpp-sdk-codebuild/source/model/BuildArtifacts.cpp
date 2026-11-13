/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/BuildArtifacts.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CodeBuild {
namespace Model {

BuildArtifacts::BuildArtifacts(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

BuildArtifacts& BuildArtifacts::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "location") {
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

              else if (initialKeyStr == "sha256sum") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_sha256sum = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_sha256sum = ss.str();
                  }
                }
                m_sha256sumHasBeenSet = true;
              }

              else if (initialKeyStr == "md5sum") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_md5sum = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_md5sum = ss.str();
                  }
                }
                m_md5sumHasBeenSet = true;
              }

              else if (initialKeyStr == "overrideArtifactName") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_overrideArtifactName = val.value();
                }
                m_overrideArtifactNameHasBeenSet = true;
              }

              else if (initialKeyStr == "encryptionDisabled") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_encryptionDisabled = val.value();
                }
                m_encryptionDisabledHasBeenSet = true;
              }

              else if (initialKeyStr == "artifactIdentifier") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_artifactIdentifier = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_artifactIdentifier = ss.str();
                  }
                }
                m_artifactIdentifierHasBeenSet = true;
              }

              else if (initialKeyStr == "bucketOwnerAccess") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_bucketOwnerAccess = BucketOwnerAccessMapper::GetBucketOwnerAccessForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_bucketOwnerAccessHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("BuildArtifacts", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "location") {
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

            else if (initialKeyStr == "sha256sum") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_sha256sum = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_sha256sum = ss.str();
                }
              }
              m_sha256sumHasBeenSet = true;
            }

            else if (initialKeyStr == "md5sum") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_md5sum = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_md5sum = ss.str();
                }
              }
              m_md5sumHasBeenSet = true;
            }

            else if (initialKeyStr == "overrideArtifactName") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_overrideArtifactName = val.value();
              }
              m_overrideArtifactNameHasBeenSet = true;
            }

            else if (initialKeyStr == "encryptionDisabled") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_encryptionDisabled = val.value();
              }
              m_encryptionDisabledHasBeenSet = true;
            }

            else if (initialKeyStr == "artifactIdentifier") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_artifactIdentifier = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_artifactIdentifier = ss.str();
                }
              }
              m_artifactIdentifierHasBeenSet = true;
            }

            else if (initialKeyStr == "bucketOwnerAccess") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_bucketOwnerAccess = BucketOwnerAccessMapper::GetBucketOwnerAccessForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_bucketOwnerAccessHasBeenSet = true;
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

void BuildArtifacts::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_locationHasBeenSet) {
    mapSize++;
  }
  if (m_sha256sumHasBeenSet) {
    mapSize++;
  }
  if (m_md5sumHasBeenSet) {
    mapSize++;
  }
  if (m_overrideArtifactNameHasBeenSet) {
    mapSize++;
  }
  if (m_encryptionDisabledHasBeenSet) {
    mapSize++;
  }
  if (m_artifactIdentifierHasBeenSet) {
    mapSize++;
  }
  if (m_bucketOwnerAccessHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_locationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("location"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_location.c_str()));
  }

  if (m_sha256sumHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("sha256sum"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_sha256sum.c_str()));
  }

  if (m_md5sumHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("md5sum"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_md5sum.c_str()));
  }

  if (m_overrideArtifactNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("overrideArtifactName"));
    encoder.WriteBool(m_overrideArtifactName);
  }

  if (m_encryptionDisabledHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("encryptionDisabled"));
    encoder.WriteBool(m_encryptionDisabled);
  }

  if (m_artifactIdentifierHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("artifactIdentifier"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_artifactIdentifier.c_str()));
  }

  if (m_bucketOwnerAccessHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("bucketOwnerAccess"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(BucketOwnerAccessMapper::GetNameForBucketOwnerAccess(m_bucketOwnerAccess).c_str()));
  }
}

}  // namespace Model
}  // namespace CodeBuild
}  // namespace Aws