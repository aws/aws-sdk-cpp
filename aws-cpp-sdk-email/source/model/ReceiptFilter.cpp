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

#include <aws/email/model/ReceiptFilter.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SES
{
namespace Model
{

ReceiptFilter::ReceiptFilter() : 
    m_nameHasBeenSet(false),
    m_ipFilterHasBeenSet(false)
{
}

ReceiptFilter::ReceiptFilter(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_ipFilterHasBeenSet(false)
{
  *this = xmlNode;
}

ReceiptFilter& ReceiptFilter::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = nameNode.GetText();
      m_nameHasBeenSet = true;
    }
    XmlNode ipFilterNode = resultNode.FirstChild("IpFilter");
    if(!ipFilterNode.IsNull())
    {
      m_ipFilter = ipFilterNode;
      m_ipFilterHasBeenSet = true;
    }
  }

  return *this;
}

void ReceiptFilter::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_ipFilterHasBeenSet)
  {
      Aws::StringStream ipFilterLocationAndMemberSs;
      ipFilterLocationAndMemberSs << location << index << locationValue << ".IpFilter";
      m_ipFilter.OutputToStream(oStream, ipFilterLocationAndMemberSs.str().c_str());
  }

}

void ReceiptFilter::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_ipFilterHasBeenSet)
  {
      Aws::String ipFilterLocationAndMember(location);
      ipFilterLocationAndMember += ".IpFilter";
      m_ipFilter.OutputToStream(oStream, ipFilterLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
