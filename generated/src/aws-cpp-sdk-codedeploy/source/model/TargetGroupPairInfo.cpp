/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/TargetGroupPairInfo.h>
#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CodeDeploy {
namespace Model {

TargetGroupPairInfo::TargetGroupPairInfo(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

TargetGroupPairInfo& TargetGroupPairInfo::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "targetGroups") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_targetGroups.push_back(TargetGroupInfo(decoder));
                      }
                    }
                  } else  // IndefArrayStart
                  {
                    decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType_0 = decoder->PeekType();
                      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                        if (nextType_0.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      m_targetGroups.push_back(TargetGroupInfo(decoder));
                    }
                  }
                }
                m_targetGroupsHasBeenSet = true;
              }

              else if (initialKeyStr == "prodTrafficRoute") {
                m_prodTrafficRoute = TrafficRoute(decoder);
                m_prodTrafficRouteHasBeenSet = true;
              }

              else if (initialKeyStr == "testTrafficRoute") {
                m_testTrafficRoute = TrafficRoute(decoder);
                m_testTrafficRouteHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("TargetGroupPairInfo", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "targetGroups") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_targetGroups.push_back(TargetGroupInfo(decoder));
                    }
                  }
                } else  // IndefArrayStart
                {
                  decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType_0 = decoder->PeekType();
                    if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                      if (nextType_0.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    m_targetGroups.push_back(TargetGroupInfo(decoder));
                  }
                }
              }
              m_targetGroupsHasBeenSet = true;
            }

            else if (initialKeyStr == "prodTrafficRoute") {
              m_prodTrafficRoute = TrafficRoute(decoder);
              m_prodTrafficRouteHasBeenSet = true;
            }

            else if (initialKeyStr == "testTrafficRoute") {
              m_testTrafficRoute = TrafficRoute(decoder);
              m_testTrafficRouteHasBeenSet = true;
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

void TargetGroupPairInfo::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_targetGroupsHasBeenSet) {
    mapSize++;
  }
  if (m_prodTrafficRouteHasBeenSet) {
    mapSize++;
  }
  if (m_testTrafficRouteHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_targetGroupsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("targetGroups"));
    encoder.WriteArrayStart(m_targetGroups.size());
    for (const auto& item_0 : m_targetGroups) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_prodTrafficRouteHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("prodTrafficRoute"));
    m_prodTrafficRoute.CborEncode(encoder);
  }

  if (m_testTrafficRouteHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("testTrafficRoute"));
    m_testTrafficRoute.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace CodeDeploy
}  // namespace Aws