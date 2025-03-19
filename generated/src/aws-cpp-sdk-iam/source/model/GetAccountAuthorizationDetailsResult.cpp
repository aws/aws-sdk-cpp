/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iam/model/GetAccountAuthorizationDetailsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetAccountAuthorizationDetailsResult::GetAccountAuthorizationDetailsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetAccountAuthorizationDetailsResult& GetAccountAuthorizationDetailsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetAccountAuthorizationDetailsResult"))
  {
    resultNode = rootNode.FirstChild("GetAccountAuthorizationDetailsResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode userDetailListNode = resultNode.FirstChild("UserDetailList");
    if(!userDetailListNode.IsNull())
    {
      XmlNode userDetailListMember = userDetailListNode.FirstChild("member");
      m_userDetailListHasBeenSet = !userDetailListMember.IsNull();
      while(!userDetailListMember.IsNull())
      {
        m_userDetailList.push_back(userDetailListMember);
        userDetailListMember = userDetailListMember.NextNode("member");
      }

      m_userDetailListHasBeenSet = true;
    }
    XmlNode groupDetailListNode = resultNode.FirstChild("GroupDetailList");
    if(!groupDetailListNode.IsNull())
    {
      XmlNode groupDetailListMember = groupDetailListNode.FirstChild("member");
      m_groupDetailListHasBeenSet = !groupDetailListMember.IsNull();
      while(!groupDetailListMember.IsNull())
      {
        m_groupDetailList.push_back(groupDetailListMember);
        groupDetailListMember = groupDetailListMember.NextNode("member");
      }

      m_groupDetailListHasBeenSet = true;
    }
    XmlNode roleDetailListNode = resultNode.FirstChild("RoleDetailList");
    if(!roleDetailListNode.IsNull())
    {
      XmlNode roleDetailListMember = roleDetailListNode.FirstChild("member");
      m_roleDetailListHasBeenSet = !roleDetailListMember.IsNull();
      while(!roleDetailListMember.IsNull())
      {
        m_roleDetailList.push_back(roleDetailListMember);
        roleDetailListMember = roleDetailListMember.NextNode("member");
      }

      m_roleDetailListHasBeenSet = true;
    }
    XmlNode policiesNode = resultNode.FirstChild("Policies");
    if(!policiesNode.IsNull())
    {
      XmlNode policiesMember = policiesNode.FirstChild("member");
      m_policiesHasBeenSet = !policiesMember.IsNull();
      while(!policiesMember.IsNull())
      {
        m_policies.push_back(policiesMember);
        policiesMember = policiesMember.NextNode("member");
      }

      m_policiesHasBeenSet = true;
    }
    XmlNode isTruncatedNode = resultNode.FirstChild("IsTruncated");
    if(!isTruncatedNode.IsNull())
    {
      m_isTruncated = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isTruncatedNode.GetText()).c_str()).c_str());
      m_isTruncatedHasBeenSet = true;
    }
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = Aws::Utils::Xml::DecodeEscapedXmlText(markerNode.GetText());
      m_markerHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::IAM::Model::GetAccountAuthorizationDetailsResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
