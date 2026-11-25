/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/elb-proxy/model/ProxyUpdateSummary.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace ELBProxy {
namespace Model {

ProxyUpdateSummary::ProxyUpdateSummary(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ProxyUpdateSummary& ProxyUpdateSummary::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "updateId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_updateId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_updateId = ss.str();
                  }
                }
                m_updateIdHasBeenSet = true;
              }

              else if (initialKeyStr == "type") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_type = ProxyUpdateTypeMapper::GetProxyUpdateTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_typeHasBeenSet = true;
              }

              else if (initialKeyStr == "validationStatus") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_validationStatus = ProxyUpdateValidationStatusMapper::GetProxyUpdateValidationStatusForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_validationStatusHasBeenSet = true;
              }

              else if (initialKeyStr == "propagationStatus") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_propagationStatus = ProxyUpdatePropagationStatusMapper::GetProxyUpdatePropagationStatusForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_propagationStatusHasBeenSet = true;
              }

              else if (initialKeyStr == "submittedAt") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_submittedAt = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_submittedAt = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_submittedAtHasBeenSet = true;
              }

              else if (initialKeyStr == "validatedAt") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_validatedAt = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_validatedAt = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_validatedAtHasBeenSet = true;
              }

              else if (initialKeyStr == "completedAt") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_completedAt = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_completedAt = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_completedAtHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ProxyUpdateSummary", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "updateId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_updateId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_updateId = ss.str();
                }
              }
              m_updateIdHasBeenSet = true;
            }

            else if (initialKeyStr == "type") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_type = ProxyUpdateTypeMapper::GetProxyUpdateTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_typeHasBeenSet = true;
            }

            else if (initialKeyStr == "validationStatus") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_validationStatus = ProxyUpdateValidationStatusMapper::GetProxyUpdateValidationStatusForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_validationStatusHasBeenSet = true;
            }

            else if (initialKeyStr == "propagationStatus") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_propagationStatus = ProxyUpdatePropagationStatusMapper::GetProxyUpdatePropagationStatusForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_propagationStatusHasBeenSet = true;
            }

            else if (initialKeyStr == "submittedAt") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_submittedAt = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_submittedAt = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_submittedAtHasBeenSet = true;
            }

            else if (initialKeyStr == "validatedAt") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_validatedAt = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_validatedAt = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_validatedAtHasBeenSet = true;
            }

            else if (initialKeyStr == "completedAt") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_completedAt = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_completedAt = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_completedAtHasBeenSet = true;
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

void ProxyUpdateSummary::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_updateIdHasBeenSet) {
    mapSize++;
  }
  if (m_typeHasBeenSet) {
    mapSize++;
  }
  if (m_validationStatusHasBeenSet) {
    mapSize++;
  }
  if (m_propagationStatusHasBeenSet) {
    mapSize++;
  }
  if (m_submittedAtHasBeenSet) {
    mapSize++;
  }
  if (m_validatedAtHasBeenSet) {
    mapSize++;
  }
  if (m_completedAtHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_updateIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("updateId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_updateId.c_str()));
  }

  if (m_typeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("type"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ProxyUpdateTypeMapper::GetNameForProxyUpdateType(m_type).c_str()));
  }

  if (m_validationStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("validationStatus"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        ProxyUpdateValidationStatusMapper::GetNameForProxyUpdateValidationStatus(m_validationStatus).c_str()));
  }

  if (m_propagationStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("propagationStatus"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        ProxyUpdatePropagationStatusMapper::GetNameForProxyUpdatePropagationStatus(m_propagationStatus).c_str()));
  }

  if (m_submittedAtHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("submittedAt"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_submittedAt.Seconds());
  }

  if (m_validatedAtHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("validatedAt"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_validatedAt.Seconds());
  }

  if (m_completedAtHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("completedAt"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_completedAt.Seconds());
  }
}

}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws