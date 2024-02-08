/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/TemplateProgress.h>
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

TemplateProgress::TemplateProgress() : 
    m_resourcesSucceeded(0),
    m_resourcesSucceededHasBeenSet(false),
    m_resourcesFailed(0),
    m_resourcesFailedHasBeenSet(false),
    m_resourcesProcessing(0),
    m_resourcesProcessingHasBeenSet(false),
    m_resourcesPending(0),
    m_resourcesPendingHasBeenSet(false)
{
}

TemplateProgress::TemplateProgress(const XmlNode& xmlNode) : 
    m_resourcesSucceeded(0),
    m_resourcesSucceededHasBeenSet(false),
    m_resourcesFailed(0),
    m_resourcesFailedHasBeenSet(false),
    m_resourcesProcessing(0),
    m_resourcesProcessingHasBeenSet(false),
    m_resourcesPending(0),
    m_resourcesPendingHasBeenSet(false)
{
  *this = xmlNode;
}

TemplateProgress& TemplateProgress::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode resourcesSucceededNode = resultNode.FirstChild("ResourcesSucceeded");
    if(!resourcesSucceededNode.IsNull())
    {
      m_resourcesSucceeded = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(resourcesSucceededNode.GetText()).c_str()).c_str());
      m_resourcesSucceededHasBeenSet = true;
    }
    XmlNode resourcesFailedNode = resultNode.FirstChild("ResourcesFailed");
    if(!resourcesFailedNode.IsNull())
    {
      m_resourcesFailed = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(resourcesFailedNode.GetText()).c_str()).c_str());
      m_resourcesFailedHasBeenSet = true;
    }
    XmlNode resourcesProcessingNode = resultNode.FirstChild("ResourcesProcessing");
    if(!resourcesProcessingNode.IsNull())
    {
      m_resourcesProcessing = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(resourcesProcessingNode.GetText()).c_str()).c_str());
      m_resourcesProcessingHasBeenSet = true;
    }
    XmlNode resourcesPendingNode = resultNode.FirstChild("ResourcesPending");
    if(!resourcesPendingNode.IsNull())
    {
      m_resourcesPending = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(resourcesPendingNode.GetText()).c_str()).c_str());
      m_resourcesPendingHasBeenSet = true;
    }
  }

  return *this;
}

void TemplateProgress::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_resourcesSucceededHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourcesSucceeded=" << m_resourcesSucceeded << "&";
  }

  if(m_resourcesFailedHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourcesFailed=" << m_resourcesFailed << "&";
  }

  if(m_resourcesProcessingHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourcesProcessing=" << m_resourcesProcessing << "&";
  }

  if(m_resourcesPendingHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourcesPending=" << m_resourcesPending << "&";
  }

}

void TemplateProgress::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_resourcesSucceededHasBeenSet)
  {
      oStream << location << ".ResourcesSucceeded=" << m_resourcesSucceeded << "&";
  }
  if(m_resourcesFailedHasBeenSet)
  {
      oStream << location << ".ResourcesFailed=" << m_resourcesFailed << "&";
  }
  if(m_resourcesProcessingHasBeenSet)
  {
      oStream << location << ".ResourcesProcessing=" << m_resourcesProcessing << "&";
  }
  if(m_resourcesPendingHasBeenSet)
  {
      oStream << location << ".ResourcesPending=" << m_resourcesPending << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
