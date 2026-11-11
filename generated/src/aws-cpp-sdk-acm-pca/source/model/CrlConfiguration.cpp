/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/CrlConfiguration.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ACMPCA {
namespace Model {

CrlConfiguration::CrlConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

CrlConfiguration& CrlConfiguration::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Enabled") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_enabled = val.value();
                }
                m_enabledHasBeenSet = true;
              }

              else if (initialKeyStr == "ExpirationInDays") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_expirationInDays = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_expirationInDays = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_expirationInDaysHasBeenSet = true;
              }

              else if (initialKeyStr == "CustomCname") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_customCname = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_customCname = ss.str();
                  }
                }
                m_customCnameHasBeenSet = true;
              }

              else if (initialKeyStr == "S3BucketName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_s3BucketName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_s3BucketName = ss.str();
                  }
                }
                m_s3BucketNameHasBeenSet = true;
              }

              else if (initialKeyStr == "S3ObjectAcl") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_s3ObjectAcl = S3ObjectAclMapper::GetS3ObjectAclForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_s3ObjectAclHasBeenSet = true;
              }

              else if (initialKeyStr == "CrlDistributionPointExtensionConfiguration") {
                m_crlDistributionPointExtensionConfiguration = CrlDistributionPointExtensionConfiguration(decoder);
                m_crlDistributionPointExtensionConfigurationHasBeenSet = true;
              }

              else if (initialKeyStr == "CrlType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_crlType =
                      CrlTypeMapper::GetCrlTypeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_crlTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "CustomPath") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_customPath = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_customPath = ss.str();
                  }
                }
                m_customPathHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("CrlConfiguration", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Enabled") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_enabled = val.value();
              }
              m_enabledHasBeenSet = true;
            }

            else if (initialKeyStr == "ExpirationInDays") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_expirationInDays = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_expirationInDays = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_expirationInDaysHasBeenSet = true;
            }

            else if (initialKeyStr == "CustomCname") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_customCname = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_customCname = ss.str();
                }
              }
              m_customCnameHasBeenSet = true;
            }

            else if (initialKeyStr == "S3BucketName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_s3BucketName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_s3BucketName = ss.str();
                }
              }
              m_s3BucketNameHasBeenSet = true;
            }

            else if (initialKeyStr == "S3ObjectAcl") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_s3ObjectAcl =
                    S3ObjectAclMapper::GetS3ObjectAclForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_s3ObjectAclHasBeenSet = true;
            }

            else if (initialKeyStr == "CrlDistributionPointExtensionConfiguration") {
              m_crlDistributionPointExtensionConfiguration = CrlDistributionPointExtensionConfiguration(decoder);
              m_crlDistributionPointExtensionConfigurationHasBeenSet = true;
            }

            else if (initialKeyStr == "CrlType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_crlType = CrlTypeMapper::GetCrlTypeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_crlTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "CustomPath") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_customPath = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_customPath = ss.str();
                }
              }
              m_customPathHasBeenSet = true;
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

void CrlConfiguration::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_enabledHasBeenSet) {
    mapSize++;
  }
  if (m_expirationInDaysHasBeenSet) {
    mapSize++;
  }
  if (m_customCnameHasBeenSet) {
    mapSize++;
  }
  if (m_s3BucketNameHasBeenSet) {
    mapSize++;
  }
  if (m_s3ObjectAclHasBeenSet) {
    mapSize++;
  }
  if (m_crlDistributionPointExtensionConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_crlTypeHasBeenSet) {
    mapSize++;
  }
  if (m_customPathHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_enabledHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Enabled"));
    encoder.WriteBool(m_enabled);
  }

  if (m_expirationInDaysHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ExpirationInDays"));
    (m_expirationInDays >= 0) ? encoder.WriteUInt(m_expirationInDays) : encoder.WriteNegInt(m_expirationInDays);
  }

  if (m_customCnameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CustomCname"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_customCname.c_str()));
  }

  if (m_s3BucketNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("S3BucketName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_s3BucketName.c_str()));
  }

  if (m_s3ObjectAclHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("S3ObjectAcl"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(S3ObjectAclMapper::GetNameForS3ObjectAcl(m_s3ObjectAcl).c_str()));
  }

  if (m_crlDistributionPointExtensionConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CrlDistributionPointExtensionConfiguration"));
    m_crlDistributionPointExtensionConfiguration.CborEncode(encoder);
  }

  if (m_crlTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CrlType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(CrlTypeMapper::GetNameForCrlType(m_crlType).c_str()));
  }

  if (m_customPathHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CustomPath"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_customPath.c_str()));
  }
}

}  // namespace Model
}  // namespace ACMPCA
}  // namespace Aws