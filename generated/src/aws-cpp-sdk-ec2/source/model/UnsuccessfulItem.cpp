﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/UnsuccessfulItem.h>
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

UnsuccessfulItem::UnsuccessfulItem() : 
    m_errorHasBeenSet(false),
    m_resourceIdHasBeenSet(false)
{
}

UnsuccessfulItem::UnsuccessfulItem(const XmlNode& xmlNode) : 
    m_errorHasBeenSet(false),
    m_resourceIdHasBeenSet(false)
{
  *this = xmlNode;
}

UnsuccessfulItem& UnsuccessfulItem::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode errorNode = resultNode.FirstChild("error");
    if(!errorNode.IsNull())
    {
      m_error = errorNode;
      m_errorHasBeenSet = true;
    }
    XmlNode resourceIdNode = resultNode.FirstChild("resourceId");
    if(!resourceIdNode.IsNull())
    {
      m_resourceId = Aws::Utils::Xml::DecodeEscapedXmlText(resourceIdNode.GetText());
      m_resourceIdHasBeenSet = true;
    }
  }

  return *this;
}

void UnsuccessfulItem::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_errorHasBeenSet)
  {
      Aws::StringStream errorLocationAndMemberSs;
      errorLocationAndMemberSs << location << index << locationValue << ".Error";
      m_error.OutputToStream(oStream, errorLocationAndMemberSs.str().c_str());
  }

  if(m_resourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }

}

void UnsuccessfulItem::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_errorHasBeenSet)
  {
      Aws::String errorLocationAndMember(location);
      errorLocationAndMember += ".Error";
      m_error.OutputToStream(oStream, errorLocationAndMember.c_str());
  }
  if(m_resourceIdHasBeenSet)
  {
      oStream << location << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
