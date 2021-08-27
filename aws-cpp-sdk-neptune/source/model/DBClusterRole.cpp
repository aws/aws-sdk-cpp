/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/DBClusterRole.h>
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

DBClusterRole::DBClusterRole() : 
    m_roleArnHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_featureNameHasBeenSet(false)
{
}

DBClusterRole::DBClusterRole(const XmlNode& xmlNode) : 
    m_roleArnHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_featureNameHasBeenSet(false)
{
  *this = xmlNode;
}

DBClusterRole& DBClusterRole::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode roleArnNode = resultNode.FirstChild("RoleArn");
    if(!roleArnNode.IsNull())
    {
      m_roleArn = Aws::Utils::Xml::DecodeEscapedXmlText(roleArnNode.GetText());
      m_roleArnHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode featureNameNode = resultNode.FirstChild("FeatureName");
    if(!featureNameNode.IsNull())
    {
      m_featureName = Aws::Utils::Xml::DecodeEscapedXmlText(featureNameNode.GetText());
      m_featureNameHasBeenSet = true;
    }
  }

  return *this;
}

void DBClusterRole::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_roleArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".RoleArn=" << StringUtils::URLEncode(m_roleArn.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_featureNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".FeatureName=" << StringUtils::URLEncode(m_featureName.c_str()) << "&";
  }

}

void DBClusterRole::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_roleArnHasBeenSet)
  {
      oStream << location << ".RoleArn=" << StringUtils::URLEncode(m_roleArn.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_featureNameHasBeenSet)
  {
      oStream << location << ".FeatureName=" << StringUtils::URLEncode(m_featureName.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Neptune
} // namespace Aws
