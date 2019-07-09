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

#include <aws/rds/model/UpgradeTarget.h>
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

UpgradeTarget::UpgradeTarget() : 
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_autoUpgrade(false),
    m_autoUpgradeHasBeenSet(false),
    m_isMajorVersionUpgrade(false),
    m_isMajorVersionUpgradeHasBeenSet(false)
{
}

UpgradeTarget::UpgradeTarget(const XmlNode& xmlNode) : 
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_autoUpgrade(false),
    m_autoUpgradeHasBeenSet(false),
    m_isMajorVersionUpgrade(false),
    m_isMajorVersionUpgradeHasBeenSet(false)
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
      m_engine = engineNode.GetText();
      m_engineHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(!engineVersionNode.IsNull())
    {
      m_engineVersion = engineVersionNode.GetText();
      m_engineVersionHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = descriptionNode.GetText();
      m_descriptionHasBeenSet = true;
    }
    XmlNode autoUpgradeNode = resultNode.FirstChild("AutoUpgrade");
    if(!autoUpgradeNode.IsNull())
    {
      m_autoUpgrade = StringUtils::ConvertToBool(StringUtils::Trim(autoUpgradeNode.GetText().c_str()).c_str());
      m_autoUpgradeHasBeenSet = true;
    }
    XmlNode isMajorVersionUpgradeNode = resultNode.FirstChild("IsMajorVersionUpgrade");
    if(!isMajorVersionUpgradeNode.IsNull())
    {
      m_isMajorVersionUpgrade = StringUtils::ConvertToBool(StringUtils::Trim(isMajorVersionUpgradeNode.GetText().c_str()).c_str());
      m_isMajorVersionUpgradeHasBeenSet = true;
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
}

} // namespace Model
} // namespace RDS
} // namespace Aws
