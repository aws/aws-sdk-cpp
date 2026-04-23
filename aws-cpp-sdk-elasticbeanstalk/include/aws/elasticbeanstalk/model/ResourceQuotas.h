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

  /**
   * <p>A set of per-resource AWS Elastic Beanstalk quotas associated with an AWS
   * account. They reflect Elastic Beanstalk resource limits for this
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ResourceQuotas">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API ResourceQuotas
  {
  public:
    ResourceQuotas();
    ResourceQuotas(const Aws::Utils::Xml::XmlNode& xmlNode);
    ResourceQuotas& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The quota for applications in the AWS account.</p>
     */
    inline const ResourceQuota& GetApplicationQuota() const{ return m_applicationQuota; }

    /**
     * <p>The quota for applications in the AWS account.</p>
     */
    inline bool ApplicationQuotaHasBeenSet() const { return m_applicationQuotaHasBeenSet; }

    /**
     * <p>The quota for applications in the AWS account.</p>
     */
    inline void SetApplicationQuota(const ResourceQuota& value) { m_applicationQuotaHasBeenSet = true; m_applicationQuota = value; }

    /**
     * <p>The quota for applications in the AWS account.</p>
     */
    inline void SetApplicationQuota(ResourceQuota&& value) { m_applicationQuotaHasBeenSet = true; m_applicationQuota = std::move(value); }

    /**
     * <p>The quota for applications in the AWS account.</p>
     */
    inline ResourceQuotas& WithApplicationQuota(const ResourceQuota& value) { SetApplicationQuota(value); return *this;}

    /**
     * <p>The quota for applications in the AWS account.</p>
     */
    inline ResourceQuotas& WithApplicationQuota(ResourceQuota&& value) { SetApplicationQuota(std::move(value)); return *this;}


    /**
     * <p>The quota for application versions in the AWS account.</p>
     */
    inline const ResourceQuota& GetApplicationVersionQuota() const{ return m_applicationVersionQuota; }

    /**
     * <p>The quota for application versions in the AWS account.</p>
     */
    inline bool ApplicationVersionQuotaHasBeenSet() const { return m_applicationVersionQuotaHasBeenSet; }

    /**
     * <p>The quota for application versions in the AWS account.</p>
     */
    inline void SetApplicationVersionQuota(const ResourceQuota& value) { m_applicationVersionQuotaHasBeenSet = true; m_applicationVersionQuota = value; }

    /**
     * <p>The quota for application versions in the AWS account.</p>
     */
    inline void SetApplicationVersionQuota(ResourceQuota&& value) { m_applicationVersionQuotaHasBeenSet = true; m_applicationVersionQuota = std::move(value); }

    /**
     * <p>The quota for application versions in the AWS account.</p>
     */
    inline ResourceQuotas& WithApplicationVersionQuota(const ResourceQuota& value) { SetApplicationVersionQuota(value); return *this;}

    /**
     * <p>The quota for application versions in the AWS account.</p>
     */
    inline ResourceQuotas& WithApplicationVersionQuota(ResourceQuota&& value) { SetApplicationVersionQuota(std::move(value)); return *this;}


    /**
     * <p>The quota for environments in the AWS account.</p>
     */
    inline const ResourceQuota& GetEnvironmentQuota() const{ return m_environmentQuota; }

    /**
     * <p>The quota for environments in the AWS account.</p>
     */
    inline bool EnvironmentQuotaHasBeenSet() const { return m_environmentQuotaHasBeenSet; }

    /**
     * <p>The quota for environments in the AWS account.</p>
     */
    inline void SetEnvironmentQuota(const ResourceQuota& value) { m_environmentQuotaHasBeenSet = true; m_environmentQuota = value; }

    /**
     * <p>The quota for environments in the AWS account.</p>
     */
    inline void SetEnvironmentQuota(ResourceQuota&& value) { m_environmentQuotaHasBeenSet = true; m_environmentQuota = std::move(value); }

    /**
     * <p>The quota for environments in the AWS account.</p>
     */
    inline ResourceQuotas& WithEnvironmentQuota(const ResourceQuota& value) { SetEnvironmentQuota(value); return *this;}

    /**
     * <p>The quota for environments in the AWS account.</p>
     */
    inline ResourceQuotas& WithEnvironmentQuota(ResourceQuota&& value) { SetEnvironmentQuota(std::move(value)); return *this;}


    /**
     * <p>The quota for configuration templates in the AWS account.</p>
     */
    inline const ResourceQuota& GetConfigurationTemplateQuota() const{ return m_configurationTemplateQuota; }

    /**
     * <p>The quota for configuration templates in the AWS account.</p>
     */
    inline bool ConfigurationTemplateQuotaHasBeenSet() const { return m_configurationTemplateQuotaHasBeenSet; }

    /**
     * <p>The quota for configuration templates in the AWS account.</p>
     */
    inline void SetConfigurationTemplateQuota(const ResourceQuota& value) { m_configurationTemplateQuotaHasBeenSet = true; m_configurationTemplateQuota = value; }

    /**
     * <p>The quota for configuration templates in the AWS account.</p>
     */
    inline void SetConfigurationTemplateQuota(ResourceQuota&& value) { m_configurationTemplateQuotaHasBeenSet = true; m_configurationTemplateQuota = std::move(value); }

    /**
     * <p>The quota for configuration templates in the AWS account.</p>
     */
    inline ResourceQuotas& WithConfigurationTemplateQuota(const ResourceQuota& value) { SetConfigurationTemplateQuota(value); return *this;}

    /**
     * <p>The quota for configuration templates in the AWS account.</p>
     */
    inline ResourceQuotas& WithConfigurationTemplateQuota(ResourceQuota&& value) { SetConfigurationTemplateQuota(std::move(value)); return *this;}


    /**
     * <p>The quota for custom platforms in the AWS account.</p>
     */
    inline const ResourceQuota& GetCustomPlatformQuota() const{ return m_customPlatformQuota; }

    /**
     * <p>The quota for custom platforms in the AWS account.</p>
     */
    inline bool CustomPlatformQuotaHasBeenSet() const { return m_customPlatformQuotaHasBeenSet; }

    /**
     * <p>The quota for custom platforms in the AWS account.</p>
     */
    inline void SetCustomPlatformQuota(const ResourceQuota& value) { m_customPlatformQuotaHasBeenSet = true; m_customPlatformQuota = value; }

    /**
     * <p>The quota for custom platforms in the AWS account.</p>
     */
    inline void SetCustomPlatformQuota(ResourceQuota&& value) { m_customPlatformQuotaHasBeenSet = true; m_customPlatformQuota = std::move(value); }

    /**
     * <p>The quota for custom platforms in the AWS account.</p>
     */
    inline ResourceQuotas& WithCustomPlatformQuota(const ResourceQuota& value) { SetCustomPlatformQuota(value); return *this;}

    /**
     * <p>The quota for custom platforms in the AWS account.</p>
     */
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
