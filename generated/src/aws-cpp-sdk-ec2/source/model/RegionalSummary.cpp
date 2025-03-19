/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RegionalSummary.h>
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

RegionalSummary::RegionalSummary(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

RegionalSummary& RegionalSummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode regionNameNode = resultNode.FirstChild("regionName");
    if(!regionNameNode.IsNull())
    {
      m_regionName = Aws::Utils::Xml::DecodeEscapedXmlText(regionNameNode.GetText());
      m_regionNameHasBeenSet = true;
    }
    XmlNode numberOfMatchedAccountsNode = resultNode.FirstChild("numberOfMatchedAccounts");
    if(!numberOfMatchedAccountsNode.IsNull())
    {
      m_numberOfMatchedAccounts = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(numberOfMatchedAccountsNode.GetText()).c_str()).c_str());
      m_numberOfMatchedAccountsHasBeenSet = true;
    }
    XmlNode numberOfUnmatchedAccountsNode = resultNode.FirstChild("numberOfUnmatchedAccounts");
    if(!numberOfUnmatchedAccountsNode.IsNull())
    {
      m_numberOfUnmatchedAccounts = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(numberOfUnmatchedAccountsNode.GetText()).c_str()).c_str());
      m_numberOfUnmatchedAccountsHasBeenSet = true;
    }
  }

  return *this;
}

void RegionalSummary::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_regionNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".RegionName=" << StringUtils::URLEncode(m_regionName.c_str()) << "&";
  }

  if(m_numberOfMatchedAccountsHasBeenSet)
  {
      oStream << location << index << locationValue << ".NumberOfMatchedAccounts=" << m_numberOfMatchedAccounts << "&";
  }

  if(m_numberOfUnmatchedAccountsHasBeenSet)
  {
      oStream << location << index << locationValue << ".NumberOfUnmatchedAccounts=" << m_numberOfUnmatchedAccounts << "&";
  }

}

void RegionalSummary::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_regionNameHasBeenSet)
  {
      oStream << location << ".RegionName=" << StringUtils::URLEncode(m_regionName.c_str()) << "&";
  }
  if(m_numberOfMatchedAccountsHasBeenSet)
  {
      oStream << location << ".NumberOfMatchedAccounts=" << m_numberOfMatchedAccounts << "&";
  }
  if(m_numberOfUnmatchedAccountsHasBeenSet)
  {
      oStream << location << ".NumberOfUnmatchedAccounts=" << m_numberOfUnmatchedAccounts << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
