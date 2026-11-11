/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ProjectArtifacts.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CodeBuild {
namespace Model {

ProjectArtifacts::ProjectArtifacts(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ProjectArtifacts& ProjectArtifacts::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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
                  m_type = ArtifactsTypeMapper::GetArtifactsTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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

              else if (initialKeyStr == "path") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_path = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_path = ss.str();
                  }
                }
                m_pathHasBeenSet = true;
              }

              else if (initialKeyStr == "namespaceType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_namespaceType = ArtifactNamespaceMapper::GetArtifactNamespaceForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_namespaceTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "name") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_name = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_name = ss.str();
                  }
                }
                m_nameHasBeenSet = true;
              }

              else if (initialKeyStr == "packaging") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_packaging = ArtifactPackagingMapper::GetArtifactPackagingForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_packagingHasBeenSet = true;
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
                AWS_LOG_ERROR("ProjectArtifacts", "Invalid data received for %s", initialKeyStr.c_str());
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
                m_type = ArtifactsTypeMapper::GetArtifactsTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
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

            else if (initialKeyStr == "path") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_path = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_path = ss.str();
                }
              }
              m_pathHasBeenSet = true;
            }

            else if (initialKeyStr == "namespaceType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_namespaceType = ArtifactNamespaceMapper::GetArtifactNamespaceForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_namespaceTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "name") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_name = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_name = ss.str();
                }
              }
              m_nameHasBeenSet = true;
            }

            else if (initialKeyStr == "packaging") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_packaging = ArtifactPackagingMapper::GetArtifactPackagingForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_packagingHasBeenSet = true;
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

void ProjectArtifacts::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_typeHasBeenSet) {
    mapSize++;
  }
  if (m_locationHasBeenSet) {
    mapSize++;
  }
  if (m_pathHasBeenSet) {
    mapSize++;
  }
  if (m_namespaceTypeHasBeenSet) {
    mapSize++;
  }
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_packagingHasBeenSet) {
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

  if (m_typeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("type"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ArtifactsTypeMapper::GetNameForArtifactsType(m_type).c_str()));
  }

  if (m_locationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("location"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_location.c_str()));
  }

  if (m_pathHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("path"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_path.c_str()));
  }

  if (m_namespaceTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("namespaceType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ArtifactNamespaceMapper::GetNameForArtifactNamespace(m_namespaceType).c_str()));
  }

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_packagingHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("packaging"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ArtifactPackagingMapper::GetNameForArtifactPackaging(m_packaging).c_str()));
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