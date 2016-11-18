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
#include <aws/route53/model/GetHostedZoneResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetHostedZoneResult::GetHostedZoneResult()
{
}

GetHostedZoneResult::GetHostedZoneResult(const AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetHostedZoneResult& GetHostedZoneResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode hostedZoneNode = resultNode.FirstChild("HostedZone");
    if(!hostedZoneNode.IsNull())
    {
      m_hostedZone = hostedZoneNode;
    }
    XmlNode delegationSetNode = resultNode.FirstChild("DelegationSet");
    if(!delegationSetNode.IsNull())
    {
      m_delegationSet = delegationSetNode;
    }
    XmlNode vPCsNode = resultNode.FirstChild("VPCs");
    if(!vPCsNode.IsNull())
    {
      XmlNode vPCsMember = vPCsNode.FirstChild("VPC");
      while(!vPCsMember.IsNull())
      {
        m_vPCs.push_back(vPCsMember);
        vPCsMember = vPCsMember.NextNode("VPC");
      }

    }
  }

  return *this;
}
