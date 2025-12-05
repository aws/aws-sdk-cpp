/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/iam/model/DelegationRequest.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace IAM {
namespace Model {

DelegationRequest::DelegationRequest(const XmlNode& xmlNode) { *this = xmlNode; }

DelegationRequest& DelegationRequest::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode delegationRequestIdNode = resultNode.FirstChild("DelegationRequestId");
    if (!delegationRequestIdNode.IsNull()) {
      m_delegationRequestId = Aws::Utils::Xml::DecodeEscapedXmlText(delegationRequestIdNode.GetText());
      m_delegationRequestIdHasBeenSet = true;
    }
    XmlNode ownerAccountIdNode = resultNode.FirstChild("OwnerAccountId");
    if (!ownerAccountIdNode.IsNull()) {
      m_ownerAccountId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerAccountIdNode.GetText());
      m_ownerAccountIdHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if (!descriptionNode.IsNull()) {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode requestMessageNode = resultNode.FirstChild("RequestMessage");
    if (!requestMessageNode.IsNull()) {
      m_requestMessage = Aws::Utils::Xml::DecodeEscapedXmlText(requestMessageNode.GetText());
      m_requestMessageHasBeenSet = true;
    }
    XmlNode permissionsNode = resultNode.FirstChild("Permissions");
    if (!permissionsNode.IsNull()) {
      m_permissions = permissionsNode;
      m_permissionsHasBeenSet = true;
    }
    XmlNode permissionPolicyNode = resultNode.FirstChild("PermissionPolicy");
    if (!permissionPolicyNode.IsNull()) {
      m_permissionPolicy = Aws::Utils::Xml::DecodeEscapedXmlText(permissionPolicyNode.GetText());
      m_permissionPolicyHasBeenSet = true;
    }
    XmlNode rolePermissionRestrictionArnsNode = resultNode.FirstChild("RolePermissionRestrictionArns");
    if (!rolePermissionRestrictionArnsNode.IsNull()) {
      XmlNode rolePermissionRestrictionArnsMember = rolePermissionRestrictionArnsNode.FirstChild("member");
      m_rolePermissionRestrictionArnsHasBeenSet = !rolePermissionRestrictionArnsMember.IsNull();
      while (!rolePermissionRestrictionArnsMember.IsNull()) {
        m_rolePermissionRestrictionArns.push_back(rolePermissionRestrictionArnsMember.GetText());
        rolePermissionRestrictionArnsMember = rolePermissionRestrictionArnsMember.NextNode("member");
      }

      m_rolePermissionRestrictionArnsHasBeenSet = true;
    }
    XmlNode ownerIdNode = resultNode.FirstChild("OwnerId");
    if (!ownerIdNode.IsNull()) {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode approverIdNode = resultNode.FirstChild("ApproverId");
    if (!approverIdNode.IsNull()) {
      m_approverId = Aws::Utils::Xml::DecodeEscapedXmlText(approverIdNode.GetText());
      m_approverIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("State");
    if (!stateNode.IsNull()) {
      m_state = StateTypeMapper::GetStateTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
    XmlNode expirationTimeNode = resultNode.FirstChild("ExpirationTime");
    if (!expirationTimeNode.IsNull()) {
      m_expirationTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(expirationTimeNode.GetText()).c_str()).c_str(),
                                  Aws::Utils::DateFormat::ISO_8601);
      m_expirationTimeHasBeenSet = true;
    }
    XmlNode requestorIdNode = resultNode.FirstChild("RequestorId");
    if (!requestorIdNode.IsNull()) {
      m_requestorId = Aws::Utils::Xml::DecodeEscapedXmlText(requestorIdNode.GetText());
      m_requestorIdHasBeenSet = true;
    }
    XmlNode requestorNameNode = resultNode.FirstChild("RequestorName");
    if (!requestorNameNode.IsNull()) {
      m_requestorName = Aws::Utils::Xml::DecodeEscapedXmlText(requestorNameNode.GetText());
      m_requestorNameHasBeenSet = true;
    }
    XmlNode createDateNode = resultNode.FirstChild("CreateDate");
    if (!createDateNode.IsNull()) {
      m_createDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createDateNode.GetText()).c_str()).c_str(),
                              Aws::Utils::DateFormat::ISO_8601);
      m_createDateHasBeenSet = true;
    }
    XmlNode sessionDurationNode = resultNode.FirstChild("SessionDuration");
    if (!sessionDurationNode.IsNull()) {
      m_sessionDuration = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sessionDurationNode.GetText()).c_str()).c_str());
      m_sessionDurationHasBeenSet = true;
    }
    XmlNode redirectUrlNode = resultNode.FirstChild("RedirectUrl");
    if (!redirectUrlNode.IsNull()) {
      m_redirectUrl = Aws::Utils::Xml::DecodeEscapedXmlText(redirectUrlNode.GetText());
      m_redirectUrlHasBeenSet = true;
    }
    XmlNode notesNode = resultNode.FirstChild("Notes");
    if (!notesNode.IsNull()) {
      m_notes = Aws::Utils::Xml::DecodeEscapedXmlText(notesNode.GetText());
      m_notesHasBeenSet = true;
    }
    XmlNode rejectionReasonNode = resultNode.FirstChild("RejectionReason");
    if (!rejectionReasonNode.IsNull()) {
      m_rejectionReason = Aws::Utils::Xml::DecodeEscapedXmlText(rejectionReasonNode.GetText());
      m_rejectionReasonHasBeenSet = true;
    }
    XmlNode onlySendByOwnerNode = resultNode.FirstChild("OnlySendByOwner");
    if (!onlySendByOwnerNode.IsNull()) {
      m_onlySendByOwner = StringUtils::ConvertToBool(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(onlySendByOwnerNode.GetText()).c_str()).c_str());
      m_onlySendByOwnerHasBeenSet = true;
    }
    XmlNode updatedTimeNode = resultNode.FirstChild("UpdatedTime");
    if (!updatedTimeNode.IsNull()) {
      m_updatedTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(updatedTimeNode.GetText()).c_str()).c_str(),
                               Aws::Utils::DateFormat::ISO_8601);
      m_updatedTimeHasBeenSet = true;
    }
  }

  return *this;
}

void DelegationRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_delegationRequestIdHasBeenSet) {
    oStream << location << index << locationValue << ".DelegationRequestId=" << StringUtils::URLEncode(m_delegationRequestId.c_str())
            << "&";
  }

  if (m_ownerAccountIdHasBeenSet) {
    oStream << location << index << locationValue << ".OwnerAccountId=" << StringUtils::URLEncode(m_ownerAccountId.c_str()) << "&";
  }

  if (m_descriptionHasBeenSet) {
    oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if (m_requestMessageHasBeenSet) {
    oStream << location << index << locationValue << ".RequestMessage=" << StringUtils::URLEncode(m_requestMessage.c_str()) << "&";
  }

  if (m_permissionsHasBeenSet) {
    Aws::StringStream permissionsLocationAndMemberSs;
    permissionsLocationAndMemberSs << location << index << locationValue << ".Permissions";
    m_permissions.OutputToStream(oStream, permissionsLocationAndMemberSs.str().c_str());
  }

  if (m_permissionPolicyHasBeenSet) {
    oStream << location << index << locationValue << ".PermissionPolicy=" << StringUtils::URLEncode(m_permissionPolicy.c_str()) << "&";
  }

  if (m_rolePermissionRestrictionArnsHasBeenSet) {
    unsigned rolePermissionRestrictionArnsIdx = 1;
    for (auto& item : m_rolePermissionRestrictionArns) {
      oStream << location << index << locationValue << ".RolePermissionRestrictionArns.member." << rolePermissionRestrictionArnsIdx++ << "="
              << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }

  if (m_ownerIdHasBeenSet) {
    oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if (m_approverIdHasBeenSet) {
    oStream << location << index << locationValue << ".ApproverId=" << StringUtils::URLEncode(m_approverId.c_str()) << "&";
  }

  if (m_stateHasBeenSet) {
    oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(StateTypeMapper::GetNameForStateType(m_state))
            << "&";
  }

  if (m_expirationTimeHasBeenSet) {
    oStream << location << index << locationValue
            << ".ExpirationTime=" << StringUtils::URLEncode(m_expirationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_requestorIdHasBeenSet) {
    oStream << location << index << locationValue << ".RequestorId=" << StringUtils::URLEncode(m_requestorId.c_str()) << "&";
  }

  if (m_requestorNameHasBeenSet) {
    oStream << location << index << locationValue << ".RequestorName=" << StringUtils::URLEncode(m_requestorName.c_str()) << "&";
  }

  if (m_createDateHasBeenSet) {
    oStream << location << index << locationValue
            << ".CreateDate=" << StringUtils::URLEncode(m_createDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_sessionDurationHasBeenSet) {
    oStream << location << index << locationValue << ".SessionDuration=" << m_sessionDuration << "&";
  }

  if (m_redirectUrlHasBeenSet) {
    oStream << location << index << locationValue << ".RedirectUrl=" << StringUtils::URLEncode(m_redirectUrl.c_str()) << "&";
  }

  if (m_notesHasBeenSet) {
    oStream << location << index << locationValue << ".Notes=" << StringUtils::URLEncode(m_notes.c_str()) << "&";
  }

  if (m_rejectionReasonHasBeenSet) {
    oStream << location << index << locationValue << ".RejectionReason=" << StringUtils::URLEncode(m_rejectionReason.c_str()) << "&";
  }

  if (m_onlySendByOwnerHasBeenSet) {
    oStream << location << index << locationValue << ".OnlySendByOwner=" << std::boolalpha << m_onlySendByOwner << "&";
  }

  if (m_updatedTimeHasBeenSet) {
    oStream << location << index << locationValue
            << ".UpdatedTime=" << StringUtils::URLEncode(m_updatedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

void DelegationRequest::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_delegationRequestIdHasBeenSet) {
    oStream << location << ".DelegationRequestId=" << StringUtils::URLEncode(m_delegationRequestId.c_str()) << "&";
  }
  if (m_ownerAccountIdHasBeenSet) {
    oStream << location << ".OwnerAccountId=" << StringUtils::URLEncode(m_ownerAccountId.c_str()) << "&";
  }
  if (m_descriptionHasBeenSet) {
    oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if (m_requestMessageHasBeenSet) {
    oStream << location << ".RequestMessage=" << StringUtils::URLEncode(m_requestMessage.c_str()) << "&";
  }
  if (m_permissionsHasBeenSet) {
    Aws::String permissionsLocationAndMember(location);
    permissionsLocationAndMember += ".Permissions";
    m_permissions.OutputToStream(oStream, permissionsLocationAndMember.c_str());
  }
  if (m_permissionPolicyHasBeenSet) {
    oStream << location << ".PermissionPolicy=" << StringUtils::URLEncode(m_permissionPolicy.c_str()) << "&";
  }
  if (m_rolePermissionRestrictionArnsHasBeenSet) {
    unsigned rolePermissionRestrictionArnsIdx = 1;
    for (auto& item : m_rolePermissionRestrictionArns) {
      oStream << location << ".RolePermissionRestrictionArns.member." << rolePermissionRestrictionArnsIdx++ << "="
              << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
  if (m_ownerIdHasBeenSet) {
    oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if (m_approverIdHasBeenSet) {
    oStream << location << ".ApproverId=" << StringUtils::URLEncode(m_approverId.c_str()) << "&";
  }
  if (m_stateHasBeenSet) {
    oStream << location << ".State=" << StringUtils::URLEncode(StateTypeMapper::GetNameForStateType(m_state)) << "&";
  }
  if (m_expirationTimeHasBeenSet) {
    oStream << location
            << ".ExpirationTime=" << StringUtils::URLEncode(m_expirationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if (m_requestorIdHasBeenSet) {
    oStream << location << ".RequestorId=" << StringUtils::URLEncode(m_requestorId.c_str()) << "&";
  }
  if (m_requestorNameHasBeenSet) {
    oStream << location << ".RequestorName=" << StringUtils::URLEncode(m_requestorName.c_str()) << "&";
  }
  if (m_createDateHasBeenSet) {
    oStream << location << ".CreateDate=" << StringUtils::URLEncode(m_createDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
  if (m_sessionDurationHasBeenSet) {
    oStream << location << ".SessionDuration=" << m_sessionDuration << "&";
  }
  if (m_redirectUrlHasBeenSet) {
    oStream << location << ".RedirectUrl=" << StringUtils::URLEncode(m_redirectUrl.c_str()) << "&";
  }
  if (m_notesHasBeenSet) {
    oStream << location << ".Notes=" << StringUtils::URLEncode(m_notes.c_str()) << "&";
  }
  if (m_rejectionReasonHasBeenSet) {
    oStream << location << ".RejectionReason=" << StringUtils::URLEncode(m_rejectionReason.c_str()) << "&";
  }
  if (m_onlySendByOwnerHasBeenSet) {
    oStream << location << ".OnlySendByOwner=" << std::boolalpha << m_onlySendByOwner << "&";
  }
  if (m_updatedTimeHasBeenSet) {
    oStream << location << ".UpdatedTime=" << StringUtils::URLEncode(m_updatedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
}

}  // namespace Model
}  // namespace IAM
}  // namespace Aws
