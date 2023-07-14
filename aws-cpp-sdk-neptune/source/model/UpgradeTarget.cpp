/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/UpgradeTarget.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Neptune
{
namespace Model
{

UpgradeTarget::UpgradeTarget() : 
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_autoUpgrade(false),
    m_autoUpgradeHasBeenSet(false),
    m_isMajorVersionUpgrade(false),
    m_isMajorVersionUpgradeHasBeenSet(false),
    m_supportsGlobalDatabases(false),
    m_supportsGlobalDatabasesHasBeenSet(false)
{
}

UpgradeTarget::UpgradeTarget(const XmlNode& xmlNode) : 
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_autoUpgrade(false),
    m_autoUpgradeHasBeenSet(false),
    m_isMajorVersionUpgrade(false),
    m_isMajorVersionUpgradeHasBeenSet(false),
    m_supportsGlobalDatabases(false),
    m_supportsGlobalDatabasesHasBeenSet(false)
{
  *this = xmlNode;
}

UpgradeTarget& UpgradeTarget::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if(!engineNode.IsNull())
    {
      m_engine = Aws::Utils::Xml::DecodeEscapedXmlText(engineNode.GetText());
      m_engineHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(!engineVersionNode.IsNull())
    {
      m_engineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(engineVersionNode.GetText());
      m_engineVersionHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode autoUpgradeNode = resultNode.FirstChild("AutoUpgrade");
    if(!autoUpgradeNode.IsNull())
    {
      m_autoUpgrade = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(autoUpgradeNode.GetText()).c_str()).c_str());
      m_autoUpgradeHasBeenSet = true;
    }
    XmlNode isMajorVersionUpgradeNode = resultNode.FirstChild("IsMajorVersionUpgrade");
    if(!isMajorVersionUpgradeNode.IsNull())
    {
      m_isMajorVersionUpgrade = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isMajorVersionUpgradeNode.GetText()).c_str()).c_str());
      m_isMajorVersionUpgradeHasBeenSet = true;
    }
    XmlNode supportsGlobalDatabasesNode = resultNode.FirstChild("SupportsGlobalDatabases");
    if(!supportsGlobalDatabasesNode.IsNull())
    {
      m_supportsGlobalDatabases = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsGlobalDatabasesNode.GetText()).c_str()).c_str());
      m_supportsGlobalDatabasesHasBeenSet = true;
    }
  }

  return *this;
}

void UpgradeTarget::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_engineHasBeenSet)
  {
      oStream << location << index << locationValue << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_autoUpgradeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoUpgrade=" << std::boolalpha << m_autoUpgrade << "&";
  }

  if(m_isMajorVersionUpgradeHasBeenSet)
  {
      oStream << location << index << locationValue << ".IsMajorVersionUpgrade=" << std::boolalpha << m_isMajorVersionUpgrade << "&";
  }

  if(m_supportsGlobalDatabasesHasBeenSet)
  {
      oStream << location << index << locationValue << ".SupportsGlobalDatabases=" << std::boolalpha << m_supportsGlobalDatabases << "&";
  }

}

void UpgradeTarget::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_engineHasBeenSet)
  {
      oStream << location << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }
  if(m_engineVersionHasBeenSet)
  {
      oStream << location << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_autoUpgradeHasBeenSet)
  {
      oStream << location << ".AutoUpgrade=" << std::boolalpha << m_autoUpgrade << "&";
  }
  if(m_isMajorVersionUpgradeHasBeenSet)
  {
      oStream << location << ".IsMajorVersionUpgrade=" << std::boolalpha << m_isMajorVersionUpgrade << "&";
  }
  if(m_supportsGlobalDatabasesHasBeenSet)
  {
      oStream << location << ".SupportsGlobalDatabases=" << std::boolalpha << m_supportsGlobalDatabases << "&";
  }
}

} // namespace Model
} // namespace Neptune
} // namespace Aws
