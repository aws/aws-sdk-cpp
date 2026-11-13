/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/CertificateAuthority.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ACMPCA {
namespace Model {

CertificateAuthority::CertificateAuthority(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

CertificateAuthority& CertificateAuthority::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Arn") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_arn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_arn = ss.str();
                  }
                }
                m_arnHasBeenSet = true;
              }

              else if (initialKeyStr == "OwnerAccount") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_ownerAccount = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_ownerAccount = ss.str();
                  }
                }
                m_ownerAccountHasBeenSet = true;
              }

              else if (initialKeyStr == "CreatedAt") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_createdAt = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_createdAt = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_createdAtHasBeenSet = true;
              }

              else if (initialKeyStr == "LastStateChangeAt") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_lastStateChangeAt = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_lastStateChangeAt = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_lastStateChangeAtHasBeenSet = true;
              }

              else if (initialKeyStr == "Type") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_type = CertificateAuthorityTypeMapper::GetCertificateAuthorityTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_typeHasBeenSet = true;
              }

              else if (initialKeyStr == "Serial") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_serial = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_serial = ss.str();
                  }
                }
                m_serialHasBeenSet = true;
              }

              else if (initialKeyStr == "Status") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_status = CertificateAuthorityStatusMapper::GetCertificateAuthorityStatusForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_statusHasBeenSet = true;
              }

              else if (initialKeyStr == "NotBefore") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_notBefore = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_notBefore = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_notBeforeHasBeenSet = true;
              }

              else if (initialKeyStr == "NotAfter") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_notAfter = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_notAfter = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_notAfterHasBeenSet = true;
              }

              else if (initialKeyStr == "FailureReason") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_failureReason = FailureReasonMapper::GetFailureReasonForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_failureReasonHasBeenSet = true;
              }

              else if (initialKeyStr == "CertificateAuthorityConfiguration") {
                m_certificateAuthorityConfiguration = CertificateAuthorityConfiguration(decoder);
                m_certificateAuthorityConfigurationHasBeenSet = true;
              }

              else if (initialKeyStr == "RevocationConfiguration") {
                m_revocationConfiguration = RevocationConfiguration(decoder);
                m_revocationConfigurationHasBeenSet = true;
              }

              else if (initialKeyStr == "RestorableUntil") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_restorableUntil = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_restorableUntil = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_restorableUntilHasBeenSet = true;
              }

              else if (initialKeyStr == "KeyStorageSecurityStandard") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_keyStorageSecurityStandard = KeyStorageSecurityStandardMapper::GetKeyStorageSecurityStandardForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_keyStorageSecurityStandardHasBeenSet = true;
              }

              else if (initialKeyStr == "UsageMode") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_usageMode = CertificateAuthorityUsageModeMapper::GetCertificateAuthorityUsageModeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_usageModeHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("CertificateAuthority", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Arn") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_arn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_arn = ss.str();
                }
              }
              m_arnHasBeenSet = true;
            }

            else if (initialKeyStr == "OwnerAccount") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_ownerAccount = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_ownerAccount = ss.str();
                }
              }
              m_ownerAccountHasBeenSet = true;
            }

            else if (initialKeyStr == "CreatedAt") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_createdAt = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_createdAt = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_createdAtHasBeenSet = true;
            }

            else if (initialKeyStr == "LastStateChangeAt") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_lastStateChangeAt = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_lastStateChangeAt = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_lastStateChangeAtHasBeenSet = true;
            }

            else if (initialKeyStr == "Type") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_type = CertificateAuthorityTypeMapper::GetCertificateAuthorityTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_typeHasBeenSet = true;
            }

            else if (initialKeyStr == "Serial") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_serial = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_serial = ss.str();
                }
              }
              m_serialHasBeenSet = true;
            }

            else if (initialKeyStr == "Status") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_status = CertificateAuthorityStatusMapper::GetCertificateAuthorityStatusForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_statusHasBeenSet = true;
            }

            else if (initialKeyStr == "NotBefore") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_notBefore = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_notBefore = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_notBeforeHasBeenSet = true;
            }

            else if (initialKeyStr == "NotAfter") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_notAfter = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_notAfter = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_notAfterHasBeenSet = true;
            }

            else if (initialKeyStr == "FailureReason") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_failureReason = FailureReasonMapper::GetFailureReasonForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_failureReasonHasBeenSet = true;
            }

            else if (initialKeyStr == "CertificateAuthorityConfiguration") {
              m_certificateAuthorityConfiguration = CertificateAuthorityConfiguration(decoder);
              m_certificateAuthorityConfigurationHasBeenSet = true;
            }

            else if (initialKeyStr == "RevocationConfiguration") {
              m_revocationConfiguration = RevocationConfiguration(decoder);
              m_revocationConfigurationHasBeenSet = true;
            }

            else if (initialKeyStr == "RestorableUntil") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_restorableUntil = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_restorableUntil = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_restorableUntilHasBeenSet = true;
            }

            else if (initialKeyStr == "KeyStorageSecurityStandard") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_keyStorageSecurityStandard = KeyStorageSecurityStandardMapper::GetKeyStorageSecurityStandardForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_keyStorageSecurityStandardHasBeenSet = true;
            }

            else if (initialKeyStr == "UsageMode") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_usageMode = CertificateAuthorityUsageModeMapper::GetCertificateAuthorityUsageModeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_usageModeHasBeenSet = true;
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

void CertificateAuthority::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_arnHasBeenSet) {
    mapSize++;
  }
  if (m_ownerAccountHasBeenSet) {
    mapSize++;
  }
  if (m_createdAtHasBeenSet) {
    mapSize++;
  }
  if (m_lastStateChangeAtHasBeenSet) {
    mapSize++;
  }
  if (m_typeHasBeenSet) {
    mapSize++;
  }
  if (m_serialHasBeenSet) {
    mapSize++;
  }
  if (m_statusHasBeenSet) {
    mapSize++;
  }
  if (m_notBeforeHasBeenSet) {
    mapSize++;
  }
  if (m_notAfterHasBeenSet) {
    mapSize++;
  }
  if (m_failureReasonHasBeenSet) {
    mapSize++;
  }
  if (m_certificateAuthorityConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_revocationConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_restorableUntilHasBeenSet) {
    mapSize++;
  }
  if (m_keyStorageSecurityStandardHasBeenSet) {
    mapSize++;
  }
  if (m_usageModeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_arnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Arn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_arn.c_str()));
  }

  if (m_ownerAccountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OwnerAccount"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_ownerAccount.c_str()));
  }

  if (m_createdAtHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CreatedAt"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_createdAt.Seconds());
  }

  if (m_lastStateChangeAtHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LastStateChangeAt"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_lastStateChangeAt.Seconds());
  }

  if (m_typeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Type"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(CertificateAuthorityTypeMapper::GetNameForCertificateAuthorityType(m_type).c_str()));
  }

  if (m_serialHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Serial"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_serial.c_str()));
  }

  if (m_statusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Status"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(CertificateAuthorityStatusMapper::GetNameForCertificateAuthorityStatus(m_status).c_str()));
  }

  if (m_notBeforeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NotBefore"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_notBefore.Seconds());
  }

  if (m_notAfterHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NotAfter"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_notAfter.Seconds());
  }

  if (m_failureReasonHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FailureReason"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(FailureReasonMapper::GetNameForFailureReason(m_failureReason).c_str()));
  }

  if (m_certificateAuthorityConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CertificateAuthorityConfiguration"));
    m_certificateAuthorityConfiguration.CborEncode(encoder);
  }

  if (m_revocationConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RevocationConfiguration"));
    m_revocationConfiguration.CborEncode(encoder);
  }

  if (m_restorableUntilHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RestorableUntil"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_restorableUntil.Seconds());
  }

  if (m_keyStorageSecurityStandardHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("KeyStorageSecurityStandard"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        KeyStorageSecurityStandardMapper::GetNameForKeyStorageSecurityStandard(m_keyStorageSecurityStandard).c_str()));
  }

  if (m_usageModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UsageMode"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(CertificateAuthorityUsageModeMapper::GetNameForCertificateAuthorityUsageMode(m_usageMode).c_str()));
  }
}

}  // namespace Model
}  // namespace ACMPCA
}  // namespace Aws