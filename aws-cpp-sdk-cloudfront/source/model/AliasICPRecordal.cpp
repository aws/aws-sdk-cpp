/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/AliasICPRecordal.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFront
{
namespace Model
{

AliasICPRecordal::AliasICPRecordal() : 
    m_cNAMEHasBeenSet(false),
    m_iCPRecordalStatus(ICPRecordalStatus::NOT_SET),
    m_iCPRecordalStatusHasBeenSet(false)
{
}

AliasICPRecordal::AliasICPRecordal(const XmlNode& xmlNode) : 
    m_cNAMEHasBeenSet(false),
    m_iCPRecordalStatus(ICPRecordalStatus::NOT_SET),
    m_iCPRecordalStatusHasBeenSet(false)
{
  *this = xmlNode;
}

AliasICPRecordal& AliasICPRecordal::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode cNAMENode = resultNode.FirstChild("CNAME");
    if(!cNAMENode.IsNull())
    {
      m_cNAME = Aws::Utils::Xml::DecodeEscapedXmlText(cNAMENode.GetText());
      m_cNAMEHasBeenSet = true;
    }
    XmlNode iCPRecordalStatusNode = resultNode.FirstChild("ICPRecordalStatus");
    if(!iCPRecordalStatusNode.IsNull())
    {
      m_iCPRecordalStatus = ICPRecordalStatusMapper::GetICPRecordalStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(iCPRecordalStatusNode.GetText()).c_str()).c_str());
      m_iCPRecordalStatusHasBeenSet = true;
    }
  }

  return *this;
}

void AliasICPRecordal::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_cNAMEHasBeenSet)
  {
   XmlNode cNAMENode = parentNode.CreateChildElement("CNAME");
   cNAMENode.SetText(m_cNAME);
  }

  if(m_iCPRecordalStatusHasBeenSet)
  {
   XmlNode iCPRecordalStatusNode = parentNode.CreateChildElement("ICPRecordalStatus");
   iCPRecordalStatusNode.SetText(ICPRecordalStatusMapper::GetNameForICPRecordalStatus(m_iCPRecordalStatus));
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
