﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iam/model/ListSSHPublicKeysResult.h>
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

ListSSHPublicKeysResult::ListSSHPublicKeysResult() : 
    m_isTruncated(false)
{
}

ListSSHPublicKeysResult::ListSSHPublicKeysResult(const AmazonWebServiceResult<XmlDocument>& result) : 
    m_isTruncated(false)
{
  *this = result;
}

ListSSHPublicKeysResult& ListSSHPublicKeysResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (rootNode.GetName() != "ListSSHPublicKeysResult")
  {
    resultNode = rootNode.FirstChild("ListSSHPublicKeysResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode sSHPublicKeysNode = resultNode.FirstChild("SSHPublicKeys");
    if(!sSHPublicKeysNode.IsNull())
    {
      XmlNode sSHPublicKeysMember = sSHPublicKeysNode.FirstChild("member");
      while(!sSHPublicKeysMember.IsNull())
      {
        m_sSHPublicKeys.push_back(sSHPublicKeysMember);
        sSHPublicKeysMember = sSHPublicKeysMember.NextNode("member");
      }

    }
    XmlNode isTruncatedNode = resultNode.FirstChild("IsTruncated");
    if(!isTruncatedNode.IsNull())
    {
      m_isTruncated = StringUtils::ConvertToBool(StringUtils::Trim(isTruncatedNode.GetText().c_str()).c_str());
    }
    XmlNode markerNode = resultNode.FirstChild("Marker");
    if(!markerNode.IsNull())
    {
      m_marker = StringUtils::Trim(markerNode.GetText().c_str());
    }
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;
  AWS_LOGSTREAM_DEBUG("Aws::IAM::Model::ListSSHPublicKeysResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );

  return *this;
}
