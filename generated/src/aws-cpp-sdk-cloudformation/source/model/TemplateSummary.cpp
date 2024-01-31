/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/TemplateSummary.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

TemplateSummary::TemplateSummary() : 
    m_generatedTemplateIdHasBeenSet(false),
    m_generatedTemplateNameHasBeenSet(false),
    m_status(GeneratedTemplateStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_numberOfResources(0),
    m_numberOfResourcesHasBeenSet(false)
{
}

TemplateSummary::TemplateSummary(const XmlNode& xmlNode) : 
    m_generatedTemplateIdHasBeenSet(false),
    m_generatedTemplateNameHasBeenSet(false),
    m_status(GeneratedTemplateStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_numberOfResources(0),
    m_numberOfResourcesHasBeenSet(false)
{
  *this = xmlNode;
}

TemplateSummary& TemplateSummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode generatedTemplateIdNode = resultNode.FirstChild("GeneratedTemplateId");
    if(!generatedTemplateIdNode.IsNull())
    {
      m_generatedTemplateId = Aws::Utils::Xml::DecodeEscapedXmlText(generatedTemplateIdNode.GetText());
      m_generatedTemplateIdHasBeenSet = true;
    }
    XmlNode generatedTemplateNameNode = resultNode.FirstChild("GeneratedTemplateName");
    if(!generatedTemplateNameNode.IsNull())
    {
      m_generatedTemplateName = Aws::Utils::Xml::DecodeEscapedXmlText(generatedTemplateNameNode.GetText());
      m_generatedTemplateNameHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = GeneratedTemplateStatusMapper::GetGeneratedTemplateStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode statusReasonNode = resultNode.FirstChild("StatusReason");
    if(!statusReasonNode.IsNull())
    {
      m_statusReason = Aws::Utils::Xml::DecodeEscapedXmlText(statusReasonNode.GetText());
      m_statusReasonHasBeenSet = true;
    }
    XmlNode creationTimeNode = resultNode.FirstChild("CreationTime");
    if(!creationTimeNode.IsNull())
    {
      m_creationTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(creationTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_creationTimeHasBeenSet = true;
    }
    XmlNode lastUpdatedTimeNode = resultNode.FirstChild("LastUpdatedTime");
    if(!lastUpdatedTimeNode.IsNull())
    {
      m_lastUpdatedTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastUpdatedTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lastUpdatedTimeHasBeenSet = true;
    }
    XmlNode numberOfResourcesNode = resultNode.FirstChild("NumberOfResources");
    if(!numberOfResourcesNode.IsNull())
    {
      m_numberOfResources = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(numberOfResourcesNode.GetText()).c_str()).c_str());
      m_numberOfResourcesHasBeenSet = true;
    }
  }

  return *this;
}

void TemplateSummary::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_generatedTemplateIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".GeneratedTemplateId=" << StringUtils::URLEncode(m_generatedTemplateId.c_str()) << "&";
  }

  if(m_generatedTemplateNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".GeneratedTemplateName=" << StringUtils::URLEncode(m_generatedTemplateName.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << GeneratedTemplateStatusMapper::GetNameForGeneratedTemplateStatus(m_status) << "&";
  }

  if(m_statusReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".StatusReason=" << StringUtils::URLEncode(m_statusReason.c_str()) << "&";
  }

  if(m_creationTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastUpdatedTime=" << StringUtils::URLEncode(m_lastUpdatedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_numberOfResourcesHasBeenSet)
  {
      oStream << location << index << locationValue << ".NumberOfResources=" << m_numberOfResources << "&";
  }

}

void TemplateSummary::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_generatedTemplateIdHasBeenSet)
  {
      oStream << location << ".GeneratedTemplateId=" << StringUtils::URLEncode(m_generatedTemplateId.c_str()) << "&";
  }
  if(m_generatedTemplateNameHasBeenSet)
  {
      oStream << location << ".GeneratedTemplateName=" << StringUtils::URLEncode(m_generatedTemplateName.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << GeneratedTemplateStatusMapper::GetNameForGeneratedTemplateStatus(m_status) << "&";
  }
  if(m_statusReasonHasBeenSet)
  {
      oStream << location << ".StatusReason=" << StringUtils::URLEncode(m_statusReason.c_str()) << "&";
  }
  if(m_creationTimeHasBeenSet)
  {
      oStream << location << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_lastUpdatedTimeHasBeenSet)
  {
      oStream << location << ".LastUpdatedTime=" << StringUtils::URLEncode(m_lastUpdatedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_numberOfResourcesHasBeenSet)
  {
      oStream << location << ".NumberOfResources=" << m_numberOfResources << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
