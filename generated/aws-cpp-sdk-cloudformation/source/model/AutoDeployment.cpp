/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/AutoDeployment.h>
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

AutoDeployment::AutoDeployment() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_retainStacksOnAccountRemoval(false),
    m_retainStacksOnAccountRemovalHasBeenSet(false)
{
}

AutoDeployment::AutoDeployment(const XmlNode& xmlNode) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_retainStacksOnAccountRemoval(false),
    m_retainStacksOnAccountRemovalHasBeenSet(false)
{
  *this = xmlNode;
}

AutoDeployment& AutoDeployment::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode enabledNode = resultNode.FirstChild("Enabled");
    if(!enabledNode.IsNull())
    {
      m_enabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enabledNode.GetText()).c_str()).c_str());
      m_enabledHasBeenSet = true;
    }
    XmlNode retainStacksOnAccountRemovalNode = resultNode.FirstChild("RetainStacksOnAccountRemoval");
    if(!retainStacksOnAccountRemovalNode.IsNull())
    {
      m_retainStacksOnAccountRemoval = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(retainStacksOnAccountRemovalNode.GetText()).c_str()).c_str());
      m_retainStacksOnAccountRemovalHasBeenSet = true;
    }
  }

  return *this;
}

void AutoDeployment::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_enabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }

  if(m_retainStacksOnAccountRemovalHasBeenSet)
  {
      oStream << location << index << locationValue << ".RetainStacksOnAccountRemoval=" << std::boolalpha << m_retainStacksOnAccountRemoval << "&";
  }

}

void AutoDeployment::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_enabledHasBeenSet)
  {
      oStream << location << ".Enabled=" << std::boolalpha << m_enabled << "&";
  }
  if(m_retainStacksOnAccountRemovalHasBeenSet)
  {
      oStream << location << ".RetainStacksOnAccountRemoval=" << std::boolalpha << m_retainStacksOnAccountRemoval << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
