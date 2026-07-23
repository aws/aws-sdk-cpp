/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/AgentAccessSetting.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace AppStream {
namespace Model {

AgentAccessSetting::AgentAccessSetting(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

AgentAccessSetting& AgentAccessSetting::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "AgentAction") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_agentAction = AgentActionMapper::GetAgentActionForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_agentActionHasBeenSet = true;
              }

              else if (initialKeyStr == "Permission") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_permission =
                      PermissionMapper::GetPermissionForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_permissionHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("AgentAccessSetting", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "AgentAction") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_agentAction =
                    AgentActionMapper::GetAgentActionForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_agentActionHasBeenSet = true;
            }

            else if (initialKeyStr == "Permission") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_permission =
                    PermissionMapper::GetPermissionForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_permissionHasBeenSet = true;
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

void AgentAccessSetting::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_agentActionHasBeenSet) {
    mapSize++;
  }
  if (m_permissionHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_agentActionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AgentAction"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(AgentActionMapper::GetNameForAgentAction(m_agentAction).c_str()));
  }

  if (m_permissionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Permission"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(PermissionMapper::GetNameForPermission(m_permission).c_str()));
  }
}

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws