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
    AWS_ELASTICBEANSTALK_API ResourceQuotas() = default;
    AWS_ELASTICBEANSTALK_API ResourceQuotas(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API ResourceQuotas& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The quota for applications in the AWS account.</p>
     */
    inline const ResourceQuota& GetApplicationQuota() const { return m_applicationQuota; }
    inline bool ApplicationQuotaHasBeenSet() const { return m_applicationQuotaHasBeenSet; }
    template<typename ApplicationQuotaT = ResourceQuota>
    void SetApplicationQuota(ApplicationQuotaT&& value) { m_applicationQuotaHasBeenSet = true; m_applicationQuota = std::forward<ApplicationQuotaT>(value); }
    template<typename ApplicationQuotaT = ResourceQuota>
    ResourceQuotas& WithApplicationQuota(ApplicationQuotaT&& value) { SetApplicationQuota(std::forward<ApplicationQuotaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quota for application versions in the AWS account.</p>
     */
    inline const ResourceQuota& GetApplicationVersionQuota() const { return m_applicationVersionQuota; }
    inline bool ApplicationVersionQuotaHasBeenSet() const { return m_applicationVersionQuotaHasBeenSet; }
    template<typename ApplicationVersionQuotaT = ResourceQuota>
    void SetApplicationVersionQuota(ApplicationVersionQuotaT&& value) { m_applicationVersionQuotaHasBeenSet = true; m_applicationVersionQuota = std::forward<ApplicationVersionQuotaT>(value); }
    template<typename ApplicationVersionQuotaT = ResourceQuota>
    ResourceQuotas& WithApplicationVersionQuota(ApplicationVersionQuotaT&& value) { SetApplicationVersionQuota(std::forward<ApplicationVersionQuotaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quota for environments in the AWS account.</p>
     */
    inline const ResourceQuota& GetEnvironmentQuota() const { return m_environmentQuota; }
    inline bool EnvironmentQuotaHasBeenSet() const { return m_environmentQuotaHasBeenSet; }
    template<typename EnvironmentQuotaT = ResourceQuota>
    void SetEnvironmentQuota(EnvironmentQuotaT&& value) { m_environmentQuotaHasBeenSet = true; m_environmentQuota = std::forward<EnvironmentQuotaT>(value); }
    template<typename EnvironmentQuotaT = ResourceQuota>
    ResourceQuotas& WithEnvironmentQuota(EnvironmentQuotaT&& value) { SetEnvironmentQuota(std::forward<EnvironmentQuotaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quota for configuration templates in the AWS account.</p>
     */
    inline const ResourceQuota& GetConfigurationTemplateQuota() const { return m_configurationTemplateQuota; }
    inline bool ConfigurationTemplateQuotaHasBeenSet() const { return m_configurationTemplateQuotaHasBeenSet; }
    template<typename ConfigurationTemplateQuotaT = ResourceQuota>
    void SetConfigurationTemplateQuota(ConfigurationTemplateQuotaT&& value) { m_configurationTemplateQuotaHasBeenSet = true; m_configurationTemplateQuota = std::forward<ConfigurationTemplateQuotaT>(value); }
    template<typename ConfigurationTemplateQuotaT = ResourceQuota>
    ResourceQuotas& WithConfigurationTemplateQuota(ConfigurationTemplateQuotaT&& value) { SetConfigurationTemplateQuota(std::forward<ConfigurationTemplateQuotaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quota for custom platforms in the AWS account.</p>
     */
    inline const ResourceQuota& GetCustomPlatformQuota() const { return m_customPlatformQuota; }
    inline bool CustomPlatformQuotaHasBeenSet() const { return m_customPlatformQuotaHasBeenSet; }
    template<typename CustomPlatformQuotaT = ResourceQuota>
    void SetCustomPlatformQuota(CustomPlatformQuotaT&& value) { m_customPlatformQuotaHasBeenSet = true; m_customPlatformQuota = std::forward<CustomPlatformQuotaT>(value); }
    template<typename CustomPlatformQuotaT = ResourceQuota>
    ResourceQuotas& WithCustomPlatformQuota(CustomPlatformQuotaT&& value) { SetCustomPlatformQuota(std::forward<CustomPlatformQuotaT>(value)); return *this;}
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
