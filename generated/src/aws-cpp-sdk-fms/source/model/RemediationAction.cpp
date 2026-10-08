/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/fms/model/RemediationAction.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace FMS {
namespace Model {

RemediationAction::RemediationAction(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

RemediationAction& RemediationAction::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Description") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_description = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_description = ss.str();
                  }
                }
                m_descriptionHasBeenSet = true;
              }

              else if (initialKeyStr == "EC2CreateRouteAction") {
                m_eC2CreateRouteAction = EC2CreateRouteAction(decoder);
                m_eC2CreateRouteActionHasBeenSet = true;
              }

              else if (initialKeyStr == "EC2ReplaceRouteAction") {
                m_eC2ReplaceRouteAction = EC2ReplaceRouteAction(decoder);
                m_eC2ReplaceRouteActionHasBeenSet = true;
              }

              else if (initialKeyStr == "EC2DeleteRouteAction") {
                m_eC2DeleteRouteAction = EC2DeleteRouteAction(decoder);
                m_eC2DeleteRouteActionHasBeenSet = true;
              }

              else if (initialKeyStr == "EC2CopyRouteTableAction") {
                m_eC2CopyRouteTableAction = EC2CopyRouteTableAction(decoder);
                m_eC2CopyRouteTableActionHasBeenSet = true;
              }

              else if (initialKeyStr == "EC2ReplaceRouteTableAssociationAction") {
                m_eC2ReplaceRouteTableAssociationAction = EC2ReplaceRouteTableAssociationAction(decoder);
                m_eC2ReplaceRouteTableAssociationActionHasBeenSet = true;
              }

              else if (initialKeyStr == "EC2AssociateRouteTableAction") {
                m_eC2AssociateRouteTableAction = EC2AssociateRouteTableAction(decoder);
                m_eC2AssociateRouteTableActionHasBeenSet = true;
              }

              else if (initialKeyStr == "EC2CreateRouteTableAction") {
                m_eC2CreateRouteTableAction = EC2CreateRouteTableAction(decoder);
                m_eC2CreateRouteTableActionHasBeenSet = true;
              }

              else if (initialKeyStr == "FMSPolicyUpdateFirewallCreationConfigAction") {
                m_fMSPolicyUpdateFirewallCreationConfigAction = FMSPolicyUpdateFirewallCreationConfigAction(decoder);
                m_fMSPolicyUpdateFirewallCreationConfigActionHasBeenSet = true;
              }

              else if (initialKeyStr == "CreateNetworkAclAction") {
                m_createNetworkAclAction = CreateNetworkAclAction(decoder);
                m_createNetworkAclActionHasBeenSet = true;
              }

              else if (initialKeyStr == "ReplaceNetworkAclAssociationAction") {
                m_replaceNetworkAclAssociationAction = ReplaceNetworkAclAssociationAction(decoder);
                m_replaceNetworkAclAssociationActionHasBeenSet = true;
              }

              else if (initialKeyStr == "CreateNetworkAclEntriesAction") {
                m_createNetworkAclEntriesAction = CreateNetworkAclEntriesAction(decoder);
                m_createNetworkAclEntriesActionHasBeenSet = true;
              }

              else if (initialKeyStr == "DeleteNetworkAclEntriesAction") {
                m_deleteNetworkAclEntriesAction = DeleteNetworkAclEntriesAction(decoder);
                m_deleteNetworkAclEntriesActionHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("RemediationAction", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Description") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_description = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_description = ss.str();
                }
              }
              m_descriptionHasBeenSet = true;
            }

            else if (initialKeyStr == "EC2CreateRouteAction") {
              m_eC2CreateRouteAction = EC2CreateRouteAction(decoder);
              m_eC2CreateRouteActionHasBeenSet = true;
            }

            else if (initialKeyStr == "EC2ReplaceRouteAction") {
              m_eC2ReplaceRouteAction = EC2ReplaceRouteAction(decoder);
              m_eC2ReplaceRouteActionHasBeenSet = true;
            }

            else if (initialKeyStr == "EC2DeleteRouteAction") {
              m_eC2DeleteRouteAction = EC2DeleteRouteAction(decoder);
              m_eC2DeleteRouteActionHasBeenSet = true;
            }

            else if (initialKeyStr == "EC2CopyRouteTableAction") {
              m_eC2CopyRouteTableAction = EC2CopyRouteTableAction(decoder);
              m_eC2CopyRouteTableActionHasBeenSet = true;
            }

            else if (initialKeyStr == "EC2ReplaceRouteTableAssociationAction") {
              m_eC2ReplaceRouteTableAssociationAction = EC2ReplaceRouteTableAssociationAction(decoder);
              m_eC2ReplaceRouteTableAssociationActionHasBeenSet = true;
            }

            else if (initialKeyStr == "EC2AssociateRouteTableAction") {
              m_eC2AssociateRouteTableAction = EC2AssociateRouteTableAction(decoder);
              m_eC2AssociateRouteTableActionHasBeenSet = true;
            }

            else if (initialKeyStr == "EC2CreateRouteTableAction") {
              m_eC2CreateRouteTableAction = EC2CreateRouteTableAction(decoder);
              m_eC2CreateRouteTableActionHasBeenSet = true;
            }

            else if (initialKeyStr == "FMSPolicyUpdateFirewallCreationConfigAction") {
              m_fMSPolicyUpdateFirewallCreationConfigAction = FMSPolicyUpdateFirewallCreationConfigAction(decoder);
              m_fMSPolicyUpdateFirewallCreationConfigActionHasBeenSet = true;
            }

            else if (initialKeyStr == "CreateNetworkAclAction") {
              m_createNetworkAclAction = CreateNetworkAclAction(decoder);
              m_createNetworkAclActionHasBeenSet = true;
            }

            else if (initialKeyStr == "ReplaceNetworkAclAssociationAction") {
              m_replaceNetworkAclAssociationAction = ReplaceNetworkAclAssociationAction(decoder);
              m_replaceNetworkAclAssociationActionHasBeenSet = true;
            }

            else if (initialKeyStr == "CreateNetworkAclEntriesAction") {
              m_createNetworkAclEntriesAction = CreateNetworkAclEntriesAction(decoder);
              m_createNetworkAclEntriesActionHasBeenSet = true;
            }

            else if (initialKeyStr == "DeleteNetworkAclEntriesAction") {
              m_deleteNetworkAclEntriesAction = DeleteNetworkAclEntriesAction(decoder);
              m_deleteNetworkAclEntriesActionHasBeenSet = true;
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

void RemediationAction::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_eC2CreateRouteActionHasBeenSet) {
    mapSize++;
  }
  if (m_eC2ReplaceRouteActionHasBeenSet) {
    mapSize++;
  }
  if (m_eC2DeleteRouteActionHasBeenSet) {
    mapSize++;
  }
  if (m_eC2CopyRouteTableActionHasBeenSet) {
    mapSize++;
  }
  if (m_eC2ReplaceRouteTableAssociationActionHasBeenSet) {
    mapSize++;
  }
  if (m_eC2AssociateRouteTableActionHasBeenSet) {
    mapSize++;
  }
  if (m_eC2CreateRouteTableActionHasBeenSet) {
    mapSize++;
  }
  if (m_fMSPolicyUpdateFirewallCreationConfigActionHasBeenSet) {
    mapSize++;
  }
  if (m_createNetworkAclActionHasBeenSet) {
    mapSize++;
  }
  if (m_replaceNetworkAclAssociationActionHasBeenSet) {
    mapSize++;
  }
  if (m_createNetworkAclEntriesActionHasBeenSet) {
    mapSize++;
  }
  if (m_deleteNetworkAclEntriesActionHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_eC2CreateRouteActionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EC2CreateRouteAction"));
    m_eC2CreateRouteAction.CborEncode(encoder);
  }

  if (m_eC2ReplaceRouteActionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EC2ReplaceRouteAction"));
    m_eC2ReplaceRouteAction.CborEncode(encoder);
  }

  if (m_eC2DeleteRouteActionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EC2DeleteRouteAction"));
    m_eC2DeleteRouteAction.CborEncode(encoder);
  }

  if (m_eC2CopyRouteTableActionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EC2CopyRouteTableAction"));
    m_eC2CopyRouteTableAction.CborEncode(encoder);
  }

  if (m_eC2ReplaceRouteTableAssociationActionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EC2ReplaceRouteTableAssociationAction"));
    m_eC2ReplaceRouteTableAssociationAction.CborEncode(encoder);
  }

  if (m_eC2AssociateRouteTableActionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EC2AssociateRouteTableAction"));
    m_eC2AssociateRouteTableAction.CborEncode(encoder);
  }

  if (m_eC2CreateRouteTableActionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EC2CreateRouteTableAction"));
    m_eC2CreateRouteTableAction.CborEncode(encoder);
  }

  if (m_fMSPolicyUpdateFirewallCreationConfigActionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FMSPolicyUpdateFirewallCreationConfigAction"));
    m_fMSPolicyUpdateFirewallCreationConfigAction.CborEncode(encoder);
  }

  if (m_createNetworkAclActionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CreateNetworkAclAction"));
    m_createNetworkAclAction.CborEncode(encoder);
  }

  if (m_replaceNetworkAclAssociationActionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ReplaceNetworkAclAssociationAction"));
    m_replaceNetworkAclAssociationAction.CborEncode(encoder);
  }

  if (m_createNetworkAclEntriesActionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CreateNetworkAclEntriesAction"));
    m_createNetworkAclEntriesAction.CborEncode(encoder);
  }

  if (m_deleteNetworkAclEntriesActionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DeleteNetworkAclEntriesAction"));
    m_deleteNetworkAclEntriesAction.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace FMS
}  // namespace Aws