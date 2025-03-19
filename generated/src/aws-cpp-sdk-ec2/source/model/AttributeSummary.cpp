/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AttributeSummary.h>
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

AttributeSummary::AttributeSummary(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

AttributeSummary& AttributeSummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode attributeNameNode = resultNode.FirstChild("attributeName");
    if(!attributeNameNode.IsNull())
    {
      m_attributeName = Aws::Utils::Xml::DecodeEscapedXmlText(attributeNameNode.GetText());
      m_attributeNameHasBeenSet = true;
    }
    XmlNode mostFrequentValueNode = resultNode.FirstChild("mostFrequentValue");
    if(!mostFrequentValueNode.IsNull())
    {
      m_mostFrequentValue = Aws::Utils::Xml::DecodeEscapedXmlText(mostFrequentValueNode.GetText());
      m_mostFrequentValueHasBeenSet = true;
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
    XmlNode regionalSummariesNode = resultNode.FirstChild("regionalSummarySet");
    if(!regionalSummariesNode.IsNull())
    {
      XmlNode regionalSummariesMember = regionalSummariesNode.FirstChild("item");
      m_regionalSummariesHasBeenSet = !regionalSummariesMember.IsNull();
      while(!regionalSummariesMember.IsNull())
      {
        m_regionalSummaries.push_back(regionalSummariesMember);
        regionalSummariesMember = regionalSummariesMember.NextNode("item");
      }

      m_regionalSummariesHasBeenSet = true;
    }
  }

  return *this;
}

void AttributeSummary::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_attributeNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".AttributeName=" << StringUtils::URLEncode(m_attributeName.c_str()) << "&";
  }

  if(m_mostFrequentValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".MostFrequentValue=" << StringUtils::URLEncode(m_mostFrequentValue.c_str()) << "&";
  }

  if(m_numberOfMatchedAccountsHasBeenSet)
  {
      oStream << location << index << locationValue << ".NumberOfMatchedAccounts=" << m_numberOfMatchedAccounts << "&";
  }

  if(m_numberOfUnmatchedAccountsHasBeenSet)
  {
      oStream << location << index << locationValue << ".NumberOfUnmatchedAccounts=" << m_numberOfUnmatchedAccounts << "&";
  }

  if(m_regionalSummariesHasBeenSet)
  {
      unsigned regionalSummariesIdx = 1;
      for(auto& item : m_regionalSummaries)
      {
        Aws::StringStream regionalSummariesSs;
        regionalSummariesSs << location << index << locationValue << ".RegionalSummarySet." << regionalSummariesIdx++;
        item.OutputToStream(oStream, regionalSummariesSs.str().c_str());
      }
  }

}

void AttributeSummary::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_attributeNameHasBeenSet)
  {
      oStream << location << ".AttributeName=" << StringUtils::URLEncode(m_attributeName.c_str()) << "&";
  }
  if(m_mostFrequentValueHasBeenSet)
  {
      oStream << location << ".MostFrequentValue=" << StringUtils::URLEncode(m_mostFrequentValue.c_str()) << "&";
  }
  if(m_numberOfMatchedAccountsHasBeenSet)
  {
      oStream << location << ".NumberOfMatchedAccounts=" << m_numberOfMatchedAccounts << "&";
  }
  if(m_numberOfUnmatchedAccountsHasBeenSet)
  {
      oStream << location << ".NumberOfUnmatchedAccounts=" << m_numberOfUnmatchedAccounts << "&";
  }
  if(m_regionalSummariesHasBeenSet)
  {
      unsigned regionalSummariesIdx = 1;
      for(auto& item : m_regionalSummaries)
      {
        Aws::StringStream regionalSummariesSs;
        regionalSummariesSs << location << ".RegionalSummarySet." << regionalSummariesIdx++;
        item.OutputToStream(oStream, regionalSummariesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
