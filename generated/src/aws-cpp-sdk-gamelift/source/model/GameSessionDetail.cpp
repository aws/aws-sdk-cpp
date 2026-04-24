/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/model/GameSessionDetail.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace GameLift {
namespace Model {

GameSessionDetail::GameSessionDetail(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

GameSessionDetail& GameSessionDetail::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "GameSession") {
                m_gameSession = GameSession(decoder);
                m_gameSessionHasBeenSet = true;
              }

              else if (initialKeyStr == "ProtectionPolicy") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_protectionPolicy = ProtectionPolicyMapper::GetProtectionPolicyForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_protectionPolicyHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("GameSessionDetail", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "GameSession") {
              m_gameSession = GameSession(decoder);
              m_gameSessionHasBeenSet = true;
            }

            else if (initialKeyStr == "ProtectionPolicy") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_protectionPolicy = ProtectionPolicyMapper::GetProtectionPolicyForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_protectionPolicyHasBeenSet = true;
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

void GameSessionDetail::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_gameSessionHasBeenSet) {
    mapSize++;
  }
  if (m_protectionPolicyHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_gameSessionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GameSession"));
    m_gameSession.CborEncode(encoder);
  }

  if (m_protectionPolicyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProtectionPolicy"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ProtectionPolicyMapper::GetNameForProtectionPolicy(m_protectionPolicy).c_str()));
  }
}

}  // namespace Model
}  // namespace GameLift
}  // namespace Aws