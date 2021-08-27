/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/ResourceQuotas.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

ResourceQuotas::ResourceQuotas() : 
    m_applicationQuotaHasBeenSet(false),
    m_applicationVersionQuotaHasBeenSet(false),
    m_environmentQuotaHasBeenSet(false),
    m_configurationTemplateQuotaHasBeenSet(false),
    m_customPlatformQuotaHasBeenSet(false)
{
}

ResourceQuotas::ResourceQuotas(const XmlNode& xmlNode) : 
    m_applicationQuotaHasBeenSet(false),
    m_applicationVersionQuotaHasBeenSet(false),
    m_environmentQuotaHasBeenSet(false),
    m_configurationTemplateQuotaHasBeenSet(false),
    m_customPlatformQuotaHasBeenSet(false)
{
  *this = xmlNode;
}

ResourceQuotas& ResourceQuotas::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode applicationQuotaNode = resultNode.FirstChild("ApplicationQuota");
    if(!applicationQuotaNode.IsNull())
    {
      m_applicationQuota = applicationQuotaNode;
      m_applicationQuotaHasBeenSet = true;
    }
    XmlNode applicationVersionQuotaNode = resultNode.FirstChild("ApplicationVersionQuota");
    if(!applicationVersionQuotaNode.IsNull())
    {
      m_applicationVersionQuota = applicationVersionQuotaNode;
      m_applicationVersionQuotaHasBeenSet = true;
    }
    XmlNode environmentQuotaNode = resultNode.FirstChild("EnvironmentQuota");
    if(!environmentQuotaNode.IsNull())
    {
      m_environmentQuota = environmentQuotaNode;
      m_environmentQuotaHasBeenSet = true;
    }
    XmlNode configurationTemplateQuotaNode = resultNode.FirstChild("ConfigurationTemplateQuota");
    if(!configurationTemplateQuotaNode.IsNull())
    {
      m_configurationTemplateQuota = configurationTemplateQuotaNode;
      m_configurationTemplateQuotaHasBeenSet = true;
    }
    XmlNode customPlatformQuotaNode = resultNode.FirstChild("CustomPlatformQuota");
    if(!customPlatformQuotaNode.IsNull())
    {
      m_customPlatformQuota = customPlatformQuotaNode;
      m_customPlatformQuotaHasBeenSet = true;
    }
  }

  return *this;
}

void ResourceQuotas::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_applicationQuotaHasBeenSet)
  {
      Aws::StringStream applicationQuotaLocationAndMemberSs;
      applicationQuotaLocationAndMemberSs << location << index << locationValue << ".ApplicationQuota";
      m_applicationQuota.OutputToStream(oStream, applicationQuotaLocationAndMemberSs.str().c_str());
  }

  if(m_applicationVersionQuotaHasBeenSet)
  {
      Aws::StringStream applicationVersionQuotaLocationAndMemberSs;
      applicationVersionQuotaLocationAndMemberSs << location << index << locationValue << ".ApplicationVersionQuota";
      m_applicationVersionQuota.OutputToStream(oStream, applicationVersionQuotaLocationAndMemberSs.str().c_str());
  }

  if(m_environmentQuotaHasBeenSet)
  {
      Aws::StringStream environmentQuotaLocationAndMemberSs;
      environmentQuotaLocationAndMemberSs << location << index << locationValue << ".EnvironmentQuota";
      m_environmentQuota.OutputToStream(oStream, environmentQuotaLocationAndMemberSs.str().c_str());
  }

  if(m_configurationTemplateQuotaHasBeenSet)
  {
      Aws::StringStream configurationTemplateQuotaLocationAndMemberSs;
      configurationTemplateQuotaLocationAndMemberSs << location << index << locationValue << ".ConfigurationTemplateQuota";
      m_configurationTemplateQuota.OutputToStream(oStream, configurationTemplateQuotaLocationAndMemberSs.str().c_str());
  }

  if(m_customPlatformQuotaHasBeenSet)
  {
      Aws::StringStream customPlatformQuotaLocationAndMemberSs;
      customPlatformQuotaLocationAndMemberSs << location << index << locationValue << ".CustomPlatformQuota";
      m_customPlatformQuota.OutputToStream(oStream, customPlatformQuotaLocationAndMemberSs.str().c_str());
  }

}

void ResourceQuotas::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_applicationQuotaHasBeenSet)
  {
      Aws::String applicationQuotaLocationAndMember(location);
      applicationQuotaLocationAndMember += ".ApplicationQuota";
      m_applicationQuota.OutputToStream(oStream, applicationQuotaLocationAndMember.c_str());
  }
  if(m_applicationVersionQuotaHasBeenSet)
  {
      Aws::String applicationVersionQuotaLocationAndMember(location);
      applicationVersionQuotaLocationAndMember += ".ApplicationVersionQuota";
      m_applicationVersionQuota.OutputToStream(oStream, applicationVersionQuotaLocationAndMember.c_str());
  }
  if(m_environmentQuotaHasBeenSet)
  {
      Aws::String environmentQuotaLocationAndMember(location);
      environmentQuotaLocationAndMember += ".EnvironmentQuota";
      m_environmentQuota.OutputToStream(oStream, environmentQuotaLocationAndMember.c_str());
  }
  if(m_configurationTemplateQuotaHasBeenSet)
  {
      Aws::String configurationTemplateQuotaLocationAndMember(location);
      configurationTemplateQuotaLocationAndMember += ".ConfigurationTemplateQuota";
      m_configurationTemplateQuota.OutputToStream(oStream, configurationTemplateQuotaLocationAndMember.c_str());
  }
  if(m_customPlatformQuotaHasBeenSet)
  {
      Aws::String customPlatformQuotaLocationAndMember(location);
      customPlatformQuotaLocationAndMember += ".CustomPlatformQuota";
      m_customPlatformQuota.OutputToStream(oStream, customPlatformQuotaLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
