/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CancelSpotFleetRequestsErrorItem.h>
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

CancelSpotFleetRequestsErrorItem::CancelSpotFleetRequestsErrorItem() : 
    m_errorHasBeenSet(false),
    m_spotFleetRequestIdHasBeenSet(false)
{
}

CancelSpotFleetRequestsErrorItem::CancelSpotFleetRequestsErrorItem(const XmlNode& xmlNode) : 
    m_errorHasBeenSet(false),
    m_spotFleetRequestIdHasBeenSet(false)
{
  *this = xmlNode;
}

CancelSpotFleetRequestsErrorItem& CancelSpotFleetRequestsErrorItem::operator =(const XmlNode& xmlNode)
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
    XmlNode spotFleetRequestIdNode = resultNode.FirstChild("spotFleetRequestId");
    if(!spotFleetRequestIdNode.IsNull())
    {
      m_spotFleetRequestId = Aws::Utils::Xml::DecodeEscapedXmlText(spotFleetRequestIdNode.GetText());
      m_spotFleetRequestIdHasBeenSet = true;
    }
  }

  return *this;
}

void CancelSpotFleetRequestsErrorItem::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_errorHasBeenSet)
  {
      Aws::StringStream errorLocationAndMemberSs;
      errorLocationAndMemberSs << location << index << locationValue << ".Error";
      m_error.OutputToStream(oStream, errorLocationAndMemberSs.str().c_str());
  }

  if(m_spotFleetRequestIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SpotFleetRequestId=" << StringUtils::URLEncode(m_spotFleetRequestId.c_str()) << "&";
  }

}

void CancelSpotFleetRequestsErrorItem::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_errorHasBeenSet)
  {
      Aws::String errorLocationAndMember(location);
      errorLocationAndMember += ".Error";
      m_error.OutputToStream(oStream, errorLocationAndMember.c_str());
  }
  if(m_spotFleetRequestIdHasBeenSet)
  {
      oStream << location << ".SpotFleetRequestId=" << StringUtils::URLEncode(m_spotFleetRequestId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
