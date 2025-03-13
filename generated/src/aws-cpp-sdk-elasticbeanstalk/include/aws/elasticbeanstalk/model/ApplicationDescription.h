/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticbeanstalk/model/ApplicationResourceLifecycleConfig.h>
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
   * <p>Describes the properties of an application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ApplicationDescription">AWS
   * API Reference</a></p>
   */
  class ApplicationDescription
  {
  public:
    AWS_ELASTICBEANSTALK_API ApplicationDescription() = default;
    AWS_ELASTICBEANSTALK_API ApplicationDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API ApplicationDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the application.</p>
     */
    inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }
    template<typename ApplicationArnT = Aws::String>
    void SetApplicationArn(ApplicationArnT&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::forward<ApplicationArnT>(value); }
    template<typename ApplicationArnT = Aws::String>
    ApplicationDescription& WithApplicationArn(ApplicationArnT&& value) { SetApplicationArn(std::forward<ApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    ApplicationDescription& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>User-defined description of the application.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ApplicationDescription& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the application was created.</p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const { return m_dateCreated; }
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }
    template<typename DateCreatedT = Aws::Utils::DateTime>
    void SetDateCreated(DateCreatedT&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::forward<DateCreatedT>(value); }
    template<typename DateCreatedT = Aws::Utils::DateTime>
    ApplicationDescription& WithDateCreated(DateCreatedT&& value) { SetDateCreated(std::forward<DateCreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the application was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetDateUpdated() const { return m_dateUpdated; }
    inline bool DateUpdatedHasBeenSet() const { return m_dateUpdatedHasBeenSet; }
    template<typename DateUpdatedT = Aws::Utils::DateTime>
    void SetDateUpdated(DateUpdatedT&& value) { m_dateUpdatedHasBeenSet = true; m_dateUpdated = std::forward<DateUpdatedT>(value); }
    template<typename DateUpdatedT = Aws::Utils::DateTime>
    ApplicationDescription& WithDateUpdated(DateUpdatedT&& value) { SetDateUpdated(std::forward<DateUpdatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of the versions for this application.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVersions() const { return m_versions; }
    inline bool VersionsHasBeenSet() const { return m_versionsHasBeenSet; }
    template<typename VersionsT = Aws::Vector<Aws::String>>
    void SetVersions(VersionsT&& value) { m_versionsHasBeenSet = true; m_versions = std::forward<VersionsT>(value); }
    template<typename VersionsT = Aws::Vector<Aws::String>>
    ApplicationDescription& WithVersions(VersionsT&& value) { SetVersions(std::forward<VersionsT>(value)); return *this;}
    template<typename VersionsT = Aws::String>
    ApplicationDescription& AddVersions(VersionsT&& value) { m_versionsHasBeenSet = true; m_versions.emplace_back(std::forward<VersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The names of the configuration templates associated with this
     * application.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfigurationTemplates() const { return m_configurationTemplates; }
    inline bool ConfigurationTemplatesHasBeenSet() const { return m_configurationTemplatesHasBeenSet; }
    template<typename ConfigurationTemplatesT = Aws::Vector<Aws::String>>
    void SetConfigurationTemplates(ConfigurationTemplatesT&& value) { m_configurationTemplatesHasBeenSet = true; m_configurationTemplates = std::forward<ConfigurationTemplatesT>(value); }
    template<typename ConfigurationTemplatesT = Aws::Vector<Aws::String>>
    ApplicationDescription& WithConfigurationTemplates(ConfigurationTemplatesT&& value) { SetConfigurationTemplates(std::forward<ConfigurationTemplatesT>(value)); return *this;}
    template<typename ConfigurationTemplatesT = Aws::String>
    ApplicationDescription& AddConfigurationTemplates(ConfigurationTemplatesT&& value) { m_configurationTemplatesHasBeenSet = true; m_configurationTemplates.emplace_back(std::forward<ConfigurationTemplatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The lifecycle settings for the application.</p>
     */
    inline const ApplicationResourceLifecycleConfig& GetResourceLifecycleConfig() const { return m_resourceLifecycleConfig; }
    inline bool ResourceLifecycleConfigHasBeenSet() const { return m_resourceLifecycleConfigHasBeenSet; }
    template<typename ResourceLifecycleConfigT = ApplicationResourceLifecycleConfig>
    void SetResourceLifecycleConfig(ResourceLifecycleConfigT&& value) { m_resourceLifecycleConfigHasBeenSet = true; m_resourceLifecycleConfig = std::forward<ResourceLifecycleConfigT>(value); }
    template<typename ResourceLifecycleConfigT = ApplicationResourceLifecycleConfig>
    ApplicationDescription& WithResourceLifecycleConfig(ResourceLifecycleConfigT&& value) { SetResourceLifecycleConfig(std::forward<ResourceLifecycleConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_dateCreated{};
    bool m_dateCreatedHasBeenSet = false;

    Aws::Utils::DateTime m_dateUpdated{};
    bool m_dateUpdatedHasBeenSet = false;

    Aws::Vector<Aws::String> m_versions;
    bool m_versionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_configurationTemplates;
    bool m_configurationTemplatesHasBeenSet = false;

    ApplicationResourceLifecycleConfig m_resourceLifecycleConfig;
    bool m_resourceLifecycleConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
