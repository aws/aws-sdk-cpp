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
#include <aws/iam/model/ListAttachedRolePoliciesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::IAM::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListAttachedRolePoliciesResult::ListAttachedRolePoliciesResult() : 
    m_isTruncated(false)
{
}

ListAttachedRolePoliciesResult::ListAttachedRolePoliciesResult(const AmazonWebServiceResult<XmlDocument>& result) : 
    m_isTruncated(false)
{
  *this = result;
}

ListAttachedRolePoliciesResult& ListAttachedRolePoliciesResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode.FirstChild("ListAttachedRolePoliciesResult");

  if(!resultNode.IsNull())
  {
    XmlNode attachedPoliciesNode = resultNode.FirstChild("AttachedPolicies");
    while(!attachedPoliciesNode.IsNull())
    {
      m_attachedPolicies.push_back(attachedPoliciesNode);
      attachedPoliciesNode = attachedPoliciesNode.NextNode("AttachedPolicies");
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
