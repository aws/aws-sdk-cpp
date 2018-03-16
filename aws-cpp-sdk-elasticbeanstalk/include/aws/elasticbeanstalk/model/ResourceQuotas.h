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

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/elasticbeanstalk/model/ResourceQuota.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticBeanstalk
{
namespace Model
{

  class AWS_ELASTICBEANSTALK_API ResourceQuotas
  {
  public:
    ResourceQuotas();
    ResourceQuotas(const Aws::Utils::Xml::XmlNode& xmlNode);
    ResourceQuotas& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    
    inline const ResourceQuota& GetApplicationQuota() const{ return m_applicationQuota; }

    
    inline void SetApplicationQuota(const ResourceQuota& value) { m_applicationQuotaHasBeenSet = true; m_applicationQuota = value; }

    
    inline void SetApplicationQuota(ResourceQuota&& value) { m_applicationQuotaHasBeenSet = true; m_applicationQuota = std::move(value); }

    
    inline ResourceQuotas& WithApplicationQuota(const ResourceQuota& value) { SetApplicationQuota(value); return *this;}

    
    inline ResourceQuotas& WithApplicationQuota(ResourceQuota&& value) { SetApplicationQuota(std::move(value)); return *this;}


    
    inline const ResourceQuota& GetApplicationVersionQuota() const{ return m_applicationVersionQuota; }

    
    inline void SetApplicationVersionQuota(const ResourceQuota& value) { m_applicationVersionQuotaHasBeenSet = true; m_applicationVersionQuota = value; }

    
    inline void SetApplicationVersionQuota(ResourceQuota&& value) { m_applicationVersionQuotaHasBeenSet = true; m_applicationVersionQuota = std::move(value); }

    
    inline ResourceQuotas& WithApplicationVersionQuota(const ResourceQuota& value) { SetApplicationVersionQuota(value); return *this;}

    
    inline ResourceQuotas& WithApplicationVersionQuota(ResourceQuota&& value) { SetApplicationVersionQuota(std::move(value)); return *this;}


    
    inline const ResourceQuota& GetEnvironmentQuota() const{ return m_environmentQuota; }

    
    inline void SetEnvironmentQuota(const ResourceQuota& value) { m_environmentQuotaHasBeenSet = true; m_environmentQuota = value; }

    
    inline void SetEnvironmentQuota(ResourceQuota&& value) { m_environmentQuotaHasBeenSet = true; m_environmentQuota = std::move(value); }

    
    inline ResourceQuotas& WithEnvironmentQuota(const ResourceQuota& value) { SetEnvironmentQuota(value); return *this;}

    
    inline ResourceQuotas& WithEnvironmentQuota(ResourceQuota&& value) { SetEnvironmentQuota(std::move(value)); return *this;}


    
    inline const ResourceQuota& GetConfigurationTemplateQuota() const{ return m_configurationTemplateQuota; }

    
    inline void SetConfigurationTemplateQuota(const ResourceQuota& value) { m_configurationTemplateQuotaHasBeenSet = true; m_configurationTemplateQuota = value; }

    
    inline void SetConfigurationTemplateQuota(ResourceQuota&& value) { m_configurationTemplateQuotaHasBeenSet = true; m_configurationTemplateQuota = std::move(value); }

    
    inline ResourceQuotas& WithConfigurationTemplateQuota(const ResourceQuota& value) { SetConfigurationTemplateQuota(value); return *this;}

    
    inline ResourceQuotas& WithConfigurationTemplateQuota(ResourceQuota&& value) { SetConfigurationTemplateQuota(std::move(value)); return *this;}


    
    inline const ResourceQuota& GetCustomPlatformQuota() const{ return m_customPlatformQuota; }

    
    inline void SetCustomPlatformQuota(const ResourceQuota& value) { m_customPlatformQuotaHasBeenSet = true; m_customPlatformQuota = value; }

    
    inline void SetCustomPlatformQuota(ResourceQuota&& value) { m_customPlatformQuotaHasBeenSet = true; m_customPlatformQuota = std::move(value); }

    
    inline ResourceQuotas& WithCustomPlatformQuota(const ResourceQuota& value) { SetCustomPlatformQuota(value); return *this;}

    
    inline ResourceQuotas& WithCustomPlatformQuota(ResourceQuota&& value) { SetCustomPlatformQuota(std::move(value)); return *this;}

  private:

    ResourceQuota m_applicationQuota;
    bool m_applicationQuotaHasBeenSet;

    ResourceQuota m_applicationVersionQuota;
    bool m_applicationVersionQuotaHasBeenSet;

    ResourceQuota m_environmentQuota;
    bool m_environmentQuotaHasBeenSet;

    ResourceQuota m_configurationTemplateQuota;
    bool m_configurationTemplateQuotaHasBeenSet;

    ResourceQuota m_customPlatformQuota;
    bool m_customPlatformQuotaHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
