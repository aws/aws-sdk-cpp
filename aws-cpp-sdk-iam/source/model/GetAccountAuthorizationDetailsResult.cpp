/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/iam/model/GetAccountAuthorizationDetailsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetAccountAuthorizationDetailsResult::GetAccountAuthorizationDetailsResult() : 
    m_isTruncated(false)
{
}

GetAccountAuthorizationDetailsResult::GetAccountAuthorizationDetailsResult(const AmazonWebServiceResult<XmlDocument>& result) : 
    m_isTruncated(false)
{
  *this = result;
}

GetAccountAuthorizationDetailsResult& GetAccountAuthorizationDetailsResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode.FirstChild("GetAccountAuthorizationDetailsResult");

  if(!resultNode.IsNull())
  {
    XmlNode userDetailListNodeParent = resultNode.FirstChild("UserDetailList");
    XmlNode userDetailListNode = userDetailListNodeParent.FirstChild("member");
    while(!userDetailListNode.IsNull())
    {
      m_userDetailList.push_back(userDetailListNode);
      userDetailListNode = userDetailListNode.NextNode("member");
    }

    XmlNode groupDetailListNodeParent = resultNode.FirstChild("GroupDetailList");
    XmlNode groupDetailListNode = groupDetailListNodeParent.FirstChild("member");
    while(!groupDetailListNode.IsNull())
    {
      m_groupDetailList.push_back(groupDetailListNode);
      groupDetailListNode = groupDetailListNode.NextNode("member");
    }

    XmlNode roleDetailListNodeParent = resultNode.FirstChild("RoleDetailList");
    XmlNode roleDetailListNode = roleDetailListNodeParent.FirstChild("member");
    while(!roleDetailListNode.IsNull())
    {
      m_roleDetailList.push_back(roleDetailListNode);
      roleDetailListNode = roleDetailListNode.NextNode("member");
    }

    XmlNode policiesNodeParent = resultNode.FirstChild("Policies");
    XmlNode policiesNode = policiesNodeParent.FirstChild("member");
    while(!policiesNode.IsNull())
    {
      m_policies.push_back(policiesNode);
      policiesNode = policiesNode.NextNode("member");
    }

    XmlNode isTruncatedNode = resultNode.FirstChild("IsTruncated");
    m_isTruncated = StringUtils::ConvertToBool(StringUtils::Trim(isTruncatedNode.GetText().c_str()).c_str());
    XmlNode markerNode = resultNode.FirstChild("Marker");
    m_marker = StringUtils::Trim(markerNode.GetText().c_str());
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;

  return *this;
}
