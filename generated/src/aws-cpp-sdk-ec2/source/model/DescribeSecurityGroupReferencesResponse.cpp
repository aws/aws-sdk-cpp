﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeSecurityGroupReferencesResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeSecurityGroupReferencesResponse::DescribeSecurityGroupReferencesResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeSecurityGroupReferencesResponse& DescribeSecurityGroupReferencesResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeSecurityGroupReferencesResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeSecurityGroupReferencesResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode securityGroupReferenceSetNode = resultNode.FirstChild("securityGroupReferenceSet");
    if(!securityGroupReferenceSetNode.IsNull())
    {
      XmlNode securityGroupReferenceSetMember = securityGroupReferenceSetNode.FirstChild("item");
      m_securityGroupReferenceSetHasBeenSet = !securityGroupReferenceSetMember.IsNull();
      while(!securityGroupReferenceSetMember.IsNull())
      {
        m_securityGroupReferenceSet.push_back(securityGroupReferenceSetMember);
        securityGroupReferenceSetMember = securityGroupReferenceSetMember.NextNode("item");
      }

      m_securityGroupReferenceSetHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeSecurityGroupReferencesResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
