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

#include <aws/rds/model/AccountQuota.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

AccountQuota::AccountQuota() : 
    m_accountQuotaNameHasBeenSet(false),
    m_used(0),
    m_usedHasBeenSet(false),
    m_max(0),
    m_maxHasBeenSet(false)
{
}

AccountQuota::AccountQuota(const XmlNode& xmlNode) : 
    m_accountQuotaNameHasBeenSet(false),
    m_used(0),
    m_usedHasBeenSet(false),
    m_max(0),
    m_maxHasBeenSet(false)
{
  *this = xmlNode;
}

AccountQuota& AccountQuota::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode accountQuotaNameNode = resultNode.FirstChild("AccountQuotaName");
    if(!accountQuotaNameNode.IsNull())
    {
      m_accountQuotaName = accountQuotaNameNode.GetText();
      m_accountQuotaNameHasBeenSet = true;
    }
    XmlNode usedNode = resultNode.FirstChild("Used");
    if(!usedNode.IsNull())
    {
      m_used = StringUtils::ConvertToInt64(StringUtils::Trim(usedNode.GetText().c_str()).c_str());
      m_usedHasBeenSet = true;
    }
    XmlNode maxNode = resultNode.FirstChild("Max");
    if(!maxNode.IsNull())
    {
      m_max = StringUtils::ConvertToInt64(StringUtils::Trim(maxNode.GetText().c_str()).c_str());
      m_maxHasBeenSet = true;
    }
  }

  return *this;
}

void AccountQuota::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_accountQuotaNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".AccountQuotaName=" << StringUtils::URLEncode(m_accountQuotaName.c_str()) << "&";
  }

  if(m_usedHasBeenSet)
  {
      oStream << location << index << locationValue << ".Used=" << m_used << "&";
  }

  if(m_maxHasBeenSet)
  {
      oStream << location << index << locationValue << ".Max=" << m_max << "&";
  }

}

void AccountQuota::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_accountQuotaNameHasBeenSet)
  {
      oStream << location << ".AccountQuotaName=" << StringUtils::URLEncode(m_accountQuotaName.c_str()) << "&";
  }
  if(m_usedHasBeenSet)
  {
      oStream << location << ".Used=" << m_used << "&";
  }
  if(m_maxHasBeenSet)
  {
      oStream << location << ".Max=" << m_max << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
