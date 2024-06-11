/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ResourceQuotas
  {
  public:
    AWS_ELASTICBEANSTALK_API ResourceQuotas();
    AWS_ELASTICBEANSTALK_API ResourceQuotas(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API ResourceQuotas& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The quota for applications in the AWS account.</p>
     */
    inline const ResourceQuota& GetApplicationQuota() const{ return m_applicationQuota; }
    inline bool ApplicationQuotaHasBeenSet() const { return m_applicationQuotaHasBeenSet; }
    inline void SetApplicationQuota(const ResourceQuota& value) { m_applicationQuotaHasBeenSet = true; m_applicationQuota = value; }
    inline void SetApplicationQuota(ResourceQuota&& value) { m_applicationQuotaHasBeenSet = true; m_applicationQuota = std::move(value); }
    inline ResourceQuotas& WithApplicationQuota(const ResourceQuota& value) { SetApplicationQuota(value); return *this;}
    inline ResourceQuotas& WithApplicationQuota(ResourceQuota&& value) { SetApplicationQuota(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quota for application versions in the AWS account.</p>
     */
    inline const ResourceQuota& GetApplicationVersionQuota() const{ return m_applicationVersionQuota; }
    inline bool ApplicationVersionQuotaHasBeenSet() const { return m_applicationVersionQuotaHasBeenSet; }
    inline void SetApplicationVersionQuota(const ResourceQuota& value) { m_applicationVersionQuotaHasBeenSet = true; m_applicationVersionQuota = value; }
    inline void SetApplicationVersionQuota(ResourceQuota&& value) { m_applicationVersionQuotaHasBeenSet = true; m_applicationVersionQuota = std::move(value); }
    inline ResourceQuotas& WithApplicationVersionQuota(const ResourceQuota& value) { SetApplicationVersionQuota(value); return *this;}
    inline ResourceQuotas& WithApplicationVersionQuota(ResourceQuota&& value) { SetApplicationVersionQuota(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quota for environments in the AWS account.</p>
     */
    inline const ResourceQuota& GetEnvironmentQuota() const{ return m_environmentQuota; }
    inline bool EnvironmentQuotaHasBeenSet() const { return m_environmentQuotaHasBeenSet; }
    inline void SetEnvironmentQuota(const ResourceQuota& value) { m_environmentQuotaHasBeenSet = true; m_environmentQuota = value; }
    inline void SetEnvironmentQuota(ResourceQuota&& value) { m_environmentQuotaHasBeenSet = true; m_environmentQuota = std::move(value); }
    inline ResourceQuotas& WithEnvironmentQuota(const ResourceQuota& value) { SetEnvironmentQuota(value); return *this;}
    inline ResourceQuotas& WithEnvironmentQuota(ResourceQuota&& value) { SetEnvironmentQuota(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quota for configuration templates in the AWS account.</p>
     */
    inline const ResourceQuota& GetConfigurationTemplateQuota() const{ return m_configurationTemplateQuota; }
    inline bool ConfigurationTemplateQuotaHasBeenSet() const { return m_configurationTemplateQuotaHasBeenSet; }
    inline void SetConfigurationTemplateQuota(const ResourceQuota& value) { m_configurationTemplateQuotaHasBeenSet = true; m_configurationTemplateQuota = value; }
    inline void SetConfigurationTemplateQuota(ResourceQuota&& value) { m_configurationTemplateQuotaHasBeenSet = true; m_configurationTemplateQuota = std::move(value); }
    inline ResourceQuotas& WithConfigurationTemplateQuota(const ResourceQuota& value) { SetConfigurationTemplateQuota(value); return *this;}
    inline ResourceQuotas& WithConfigurationTemplateQuota(ResourceQuota&& value) { SetConfigurationTemplateQuota(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quota for custom platforms in the AWS account.</p>
     */
    inline const ResourceQuota& GetCustomPlatformQuota() const{ return m_customPlatformQuota; }
    inline bool CustomPlatformQuotaHasBeenSet() const { return m_customPlatformQuotaHasBeenSet; }
    inline void SetCustomPlatformQuota(const ResourceQuota& value) { m_customPlatformQuotaHasBeenSet = true; m_customPlatformQuota = value; }
    inline void SetCustomPlatformQuota(ResourceQuota&& value) { m_customPlatformQuotaHasBeenSet = true; m_customPlatformQuota = std::move(value); }
    inline ResourceQuotas& WithCustomPlatformQuota(const ResourceQuota& value) { SetCustomPlatformQuota(value); return *this;}
    inline ResourceQuotas& WithCustomPlatformQuota(ResourceQuota&& value) { SetCustomPlatformQuota(std::move(value)); return *this;}
    ///@}
  private:

    ResourceQuota m_applicationQuota;
    bool m_applicationQuotaHasBeenSet = false;

    ResourceQuota m_applicationVersionQuota;
    bool m_applicationVersionQuotaHasBeenSet = false;

    ResourceQuota m_environmentQuota;
    bool m_environmentQuotaHasBeenSet = false;

    ResourceQuota m_configurationTemplateQuota;
    bool m_configurationTemplateQuotaHasBeenSet = false;

    ResourceQuota m_customPlatformQuota;
    bool m_customPlatformQuotaHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
