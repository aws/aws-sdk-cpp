/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/MessageDsn.h>
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

MessageDsn::MessageDsn() : 
    m_reportingMtaHasBeenSet(false),
    m_arrivalDateHasBeenSet(false),
    m_extensionFieldsHasBeenSet(false)
{
}

MessageDsn::MessageDsn(const XmlNode& xmlNode) : 
    m_reportingMtaHasBeenSet(false),
    m_arrivalDateHasBeenSet(false),
    m_extensionFieldsHasBeenSet(false)
{
  *this = xmlNode;
}

MessageDsn& MessageDsn::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode reportingMtaNode = resultNode.FirstChild("ReportingMta");
    if(!reportingMtaNode.IsNull())
    {
      m_reportingMta = Aws::Utils::Xml::DecodeEscapedXmlText(reportingMtaNode.GetText());
      m_reportingMtaHasBeenSet = true;
    }
    XmlNode arrivalDateNode = resultNode.FirstChild("ArrivalDate");
    if(!arrivalDateNode.IsNull())
    {
      m_arrivalDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(arrivalDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_arrivalDateHasBeenSet = true;
    }
    XmlNode extensionFieldsNode = resultNode.FirstChild("ExtensionFields");
    if(!extensionFieldsNode.IsNull())
    {
      XmlNode extensionFieldsMember = extensionFieldsNode.FirstChild("member");
      while(!extensionFieldsMember.IsNull())
      {
        m_extensionFields.push_back(extensionFieldsMember);
        extensionFieldsMember = extensionFieldsMember.NextNode("member");
      }

      m_extensionFieldsHasBeenSet = true;
    }
  }

  return *this;
}

void MessageDsn::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_reportingMtaHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReportingMta=" << StringUtils::URLEncode(m_reportingMta.c_str()) << "&";
  }

  if(m_arrivalDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".ArrivalDate=" << StringUtils::URLEncode(m_arrivalDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_extensionFieldsHasBeenSet)
  {
      unsigned extensionFieldsIdx = 1;
      for(auto& item : m_extensionFields)
      {
        Aws::StringStream extensionFieldsSs;
        extensionFieldsSs << location << index << locationValue << ".ExtensionFields.member." << extensionFieldsIdx++;
        item.OutputToStream(oStream, extensionFieldsSs.str().c_str());
      }
  }

}

void MessageDsn::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_reportingMtaHasBeenSet)
  {
      oStream << location << ".ReportingMta=" << StringUtils::URLEncode(m_reportingMta.c_str()) << "&";
  }
  if(m_arrivalDateHasBeenSet)
  {
      oStream << location << ".ArrivalDate=" << StringUtils::URLEncode(m_arrivalDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_extensionFieldsHasBeenSet)
  {
      unsigned extensionFieldsIdx = 1;
      for(auto& item : m_extensionFields)
      {
        Aws::StringStream extensionFieldsSs;
        extensionFieldsSs << location <<  ".ExtensionFields.member." << extensionFieldsIdx++;
        item.OutputToStream(oStream, extensionFieldsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
