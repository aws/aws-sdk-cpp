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

#include <aws/email/model/ReceiptIpFilter.h>
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

ReceiptIpFilter::ReceiptIpFilter() : 
    m_policy(ReceiptFilterPolicy::NOT_SET),
    m_policyHasBeenSet(false),
    m_cidrHasBeenSet(false)
{
}

ReceiptIpFilter::ReceiptIpFilter(const XmlNode& xmlNode) : 
    m_policy(ReceiptFilterPolicy::NOT_SET),
    m_policyHasBeenSet(false),
    m_cidrHasBeenSet(false)
{
  *this = xmlNode;
}

ReceiptIpFilter& ReceiptIpFilter::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode policyNode = resultNode.FirstChild("Policy");
    if(!policyNode.IsNull())
    {
      m_policy = ReceiptFilterPolicyMapper::GetReceiptFilterPolicyForName(StringUtils::Trim(policyNode.GetText().c_str()).c_str());
      m_policyHasBeenSet = true;
    }
    XmlNode cidrNode = resultNode.FirstChild("Cidr");
    if(!cidrNode.IsNull())
    {
      m_cidr = cidrNode.GetText();
      m_cidrHasBeenSet = true;
    }
  }

  return *this;
}

void ReceiptIpFilter::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_policyHasBeenSet)
  {
      oStream << location << index << locationValue << ".Policy=" << ReceiptFilterPolicyMapper::GetNameForReceiptFilterPolicy(m_policy) << "&";
  }

  if(m_cidrHasBeenSet)
  {
      oStream << location << index << locationValue << ".Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }

}

void ReceiptIpFilter::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_policyHasBeenSet)
  {
      oStream << location << ".Policy=" << ReceiptFilterPolicyMapper::GetNameForReceiptFilterPolicy(m_policy) << "&";
  }
  if(m_cidrHasBeenSet)
  {
      oStream << location << ".Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
