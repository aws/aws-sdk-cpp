/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteFleetErrorItem.h>
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

DeleteFleetErrorItem::DeleteFleetErrorItem() : 
    m_errorHasBeenSet(false),
    m_fleetIdHasBeenSet(false)
{
}

DeleteFleetErrorItem::DeleteFleetErrorItem(const XmlNode& xmlNode) : 
    m_errorHasBeenSet(false),
    m_fleetIdHasBeenSet(false)
{
  *this = xmlNode;
}

DeleteFleetErrorItem& DeleteFleetErrorItem::operator =(const XmlNode& xmlNode)
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
    XmlNode fleetIdNode = resultNode.FirstChild("fleetId");
    if(!fleetIdNode.IsNull())
    {
      m_fleetId = Aws::Utils::Xml::DecodeEscapedXmlText(fleetIdNode.GetText());
      m_fleetIdHasBeenSet = true;
    }
  }

  return *this;
}

void DeleteFleetErrorItem::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_errorHasBeenSet)
  {
      Aws::StringStream errorLocationAndMemberSs;
      errorLocationAndMemberSs << location << index << locationValue << ".Error";
      m_error.OutputToStream(oStream, errorLocationAndMemberSs.str().c_str());
  }

  if(m_fleetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".FleetId=" << StringUtils::URLEncode(m_fleetId.c_str()) << "&";
  }

}

void DeleteFleetErrorItem::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_errorHasBeenSet)
  {
      Aws::String errorLocationAndMember(location);
      errorLocationAndMember += ".Error";
      m_error.OutputToStream(oStream, errorLocationAndMember.c_str());
  }
  if(m_fleetIdHasBeenSet)
  {
      oStream << location << ".FleetId=" << StringUtils::URLEncode(m_fleetId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
