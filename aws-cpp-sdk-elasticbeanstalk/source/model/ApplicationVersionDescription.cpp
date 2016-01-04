/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticbeanstalk/model/ApplicationVersionDescription.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

ApplicationVersionDescription::ApplicationVersionDescription() : 
    m_applicationNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_versionLabelHasBeenSet(false),
    m_sourceBundleHasBeenSet(false),
    m_dateCreated(0.0),
    m_dateCreatedHasBeenSet(false),
    m_dateUpdated(0.0),
    m_dateUpdatedHasBeenSet(false)
{
}

ApplicationVersionDescription::ApplicationVersionDescription(const XmlNode& xmlNode) : 
    m_applicationNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_versionLabelHasBeenSet(false),
    m_sourceBundleHasBeenSet(false),
    m_dateCreated(0.0),
    m_dateCreatedHasBeenSet(false),
    m_dateUpdated(0.0),
    m_dateUpdatedHasBeenSet(false)
{
  *this = xmlNode;
}

ApplicationVersionDescription& ApplicationVersionDescription::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode applicationNameNode = resultNode.FirstChild("ApplicationName");
    if(!applicationNameNode.IsNull())
    {
      m_applicationName = StringUtils::Trim(applicationNameNode.GetText().c_str());
      m_applicationNameHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = StringUtils::Trim(descriptionNode.GetText().c_str());
      m_descriptionHasBeenSet = true;
    }
    XmlNode versionLabelNode = resultNode.FirstChild("VersionLabel");
    if(!versionLabelNode.IsNull())
    {
      m_versionLabel = StringUtils::Trim(versionLabelNode.GetText().c_str());
      m_versionLabelHasBeenSet = true;
    }
    XmlNode sourceBundleNode = resultNode.FirstChild("SourceBundle");
    if(!sourceBundleNode.IsNull())
    {
      m_sourceBundle = sourceBundleNode;
      m_sourceBundleHasBeenSet = true;
    }
    XmlNode dateCreatedNode = resultNode.FirstChild("DateCreated");
    if(!dateCreatedNode.IsNull())
    {
      m_dateCreated = StringUtils::ConvertToDouble(StringUtils::Trim(dateCreatedNode.GetText().c_str()).c_str());
      m_dateCreatedHasBeenSet = true;
    }
    XmlNode dateUpdatedNode = resultNode.FirstChild("DateUpdated");
    if(!dateUpdatedNode.IsNull())
    {
      m_dateUpdated = StringUtils::ConvertToDouble(StringUtils::Trim(dateUpdatedNode.GetText().c_str()).c_str());
      m_dateUpdatedHasBeenSet = true;
    }
  }

  return *this;
}

void ApplicationVersionDescription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_applicationNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ApplicationName=" << StringUtils::URLEncode(m_applicationName.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_versionLabelHasBeenSet)
  {
      oStream << location << index << locationValue << ".VersionLabel=" << StringUtils::URLEncode(m_versionLabel.c_str()) << "&";
  }
  if(m_sourceBundleHasBeenSet)
  {
      Aws::StringStream sourceBundleLocationAndMemberSs;
      sourceBundleLocationAndMemberSs << location << index << locationValue << ".SourceBundle";
      m_sourceBundle.OutputToStream(oStream, sourceBundleLocationAndMemberSs.str().c_str());
  }
  if(m_dateCreatedHasBeenSet)
  {
      oStream << location << index << locationValue << ".DateCreated=" << m_dateCreated << "&";
  }
  if(m_dateUpdatedHasBeenSet)
  {
      oStream << location << index << locationValue << ".DateUpdated=" << m_dateUpdated << "&";
  }
}

void ApplicationVersionDescription::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_applicationNameHasBeenSet)
  {
      oStream << location << ".ApplicationName=" << StringUtils::URLEncode(m_applicationName.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_versionLabelHasBeenSet)
  {
      oStream << location << ".VersionLabel=" << StringUtils::URLEncode(m_versionLabel.c_str()) << "&";
  }
  if(m_sourceBundleHasBeenSet)
  {
      Aws::String sourceBundleLocationAndMember(location);
      sourceBundleLocationAndMember += ".SourceBundle";
      m_sourceBundle.OutputToStream(oStream, sourceBundleLocationAndMember.c_str());
  }
  if(m_dateCreatedHasBeenSet)
  {
      oStream << location << ".DateCreated=" << m_dateCreated << "&";
  }
  if(m_dateUpdatedHasBeenSet)
  {
      oStream << location << ".DateUpdated=" << m_dateUpdated << "&";
  }
}
