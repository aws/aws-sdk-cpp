﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PerformanceFactorReferenceRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

PerformanceFactorReferenceRequest::PerformanceFactorReferenceRequest() : 
    m_instanceFamilyHasBeenSet(false)
{
}

PerformanceFactorReferenceRequest::PerformanceFactorReferenceRequest(const XmlNode& xmlNode)
  : PerformanceFactorReferenceRequest()
{
  *this = xmlNode;
}

PerformanceFactorReferenceRequest& PerformanceFactorReferenceRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceFamilyNode = resultNode.FirstChild("InstanceFamily");
    if(!instanceFamilyNode.IsNull())
    {
      m_instanceFamily = Aws::Utils::Xml::DecodeEscapedXmlText(instanceFamilyNode.GetText());
      m_instanceFamilyHasBeenSet = true;
    }
  }

  return *this;
}

void PerformanceFactorReferenceRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceFamilyHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceFamily=" << StringUtils::URLEncode(m_instanceFamily.c_str()) << "&";
  }

}

void PerformanceFactorReferenceRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceFamilyHasBeenSet)
  {
      oStream << location << ".InstanceFamily=" << StringUtils::URLEncode(m_instanceFamily.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
