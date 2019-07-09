/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
      m_cNAME = cNAMENode.GetText();
      m_cNAMEHasBeenSet = true;
    }
    XmlNode iCPRecordalStatusNode = resultNode.FirstChild("ICPRecordalStatus");
    if(!iCPRecordalStatusNode.IsNull())
    {
      m_iCPRecordalStatus = ICPRecordalStatusMapper::GetICPRecordalStatusForName(StringUtils::Trim(iCPRecordalStatusNode.GetText().c_str()).c_str());
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
