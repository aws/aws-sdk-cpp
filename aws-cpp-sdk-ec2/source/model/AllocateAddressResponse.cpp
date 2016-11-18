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
#include <aws/ec2/model/AllocateAddressResponse.h>
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

AllocateAddressResponse::AllocateAddressResponse() : 
    m_domain(DomainType::NOT_SET)
{
}

AllocateAddressResponse::AllocateAddressResponse(const AmazonWebServiceResult<XmlDocument>& result) : 
    m_domain(DomainType::NOT_SET)
{
  *this = result;
}

AllocateAddressResponse& AllocateAddressResponse::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (rootNode.GetName() != "AllocateAddressResponse")
  {
    resultNode = rootNode.FirstChild("AllocateAddressResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode publicIpNode = resultNode.FirstChild("publicIp");
    if(!publicIpNode.IsNull())
    {
      m_publicIp = StringUtils::Trim(publicIpNode.GetText().c_str());
    }
    XmlNode domainNode = resultNode.FirstChild("domain");
    if(!domainNode.IsNull())
    {
      m_domain = DomainTypeMapper::GetDomainTypeForName(StringUtils::Trim(domainNode.GetText().c_str()).c_str());
    }
    XmlNode allocationIdNode = resultNode.FirstChild("allocationId");
    if(!allocationIdNode.IsNull())
    {
      m_allocationId = StringUtils::Trim(allocationIdNode.GetText().c_str());
    }
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;
  AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::AllocateAddressResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );

  return *this;
}
